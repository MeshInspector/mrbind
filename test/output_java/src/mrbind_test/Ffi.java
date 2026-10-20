package mrbind_test;

/** The runtime support of the bindings. */
@java.lang.SuppressWarnings("restricted") // The restricted methods warn unless `--enable-native-access` is passed, this is where we use them.
public final class Ffi
{
    private Ffi() {}

    public static final java.lang.foreign.Linker LINKER = java.lang.foreign.Linker.nativeLinker();
    public static final java.lang.ref.Cleaner CLEANER = java.lang.ref.Cleaner.create();
    public static final boolean IS_WINDOWS = java.lang.System.getProperty("os.name", "").toLowerCase(java.util.Locale.ROOT).startsWith("windows");

    /** The layout of C `long`: 4 bytes on Windows, 8 bytes elsewhere. The name lets `downcall()` widen it to a Java `long`. */
    public static final java.lang.foreign.ValueLayout C_LONG = (IS_WINDOWS ? java.lang.foreign.ValueLayout.JAVA_INT : java.lang.foreign.ValueLayout.JAVA_LONG).withName("mrbind_c_long");

    /** How an object is passed to a C function. Matches the C enum `MR_C_PassBy`. */
    public static final int PASS_BY_DEFAULT_CONSTRUCT = 0;
    public static final int PASS_BY_COPY = 1;
    public static final int PASS_BY_MOVE = 2;
    public static final int PASS_BY_MOVE_AND_DESTROY = 3;
    public static final int PASS_BY_DEFAULT_ARGUMENT = 4;
    public static final int PASS_BY_NO_OBJECT = 5;

    // The library of each file group of the C bindings, see `--split-library` in the C generator.
    private static final java.util.Map<java.lang.String, java.lang.String> LIB_NAMES = java.util.Map.of("", "bleh");
    private static final java.util.Map<java.lang.String, java.lang.foreign.SymbolLookup> LOOKUPS = new java.util.HashMap<>();

    /**
     * The symbols of the library of a file group. The library is loaded on the first use from the libraries bundled in the jar
     * (see `bundledLibrary()`), else from `java.library.path`
     * (on Windows with `LOAD_WITH_ALTERED_SEARCH_PATH`, so its dependencies are found next to it before anything else: the directory of `java.exe`
     * comes first in the default search order, and it has DLLs like `freetype.dll` that can shadow the real ones).
     * If that fails, it's loaded with `System.loadLibrary()`, and then by its platform-specific file name through the system loader.
     */
    public static synchronized java.lang.foreign.SymbolLookup lookup(java.lang.String group)
    {
        java.lang.foreign.SymbolLookup ret = LOOKUPS.get(group);
        if (ret == null)
        {
            java.lang.String lib = LIB_NAMES.get(group);
            if (lib == null)
                throw new java.lang.IllegalArgumentException("Unknown library group: `" + group + "`.");
            java.nio.file.Path bundled = bundledLibrary(java.lang.System.mapLibraryName(lib));
            if (bundled != null)
            {
                try
                {
                    ret = IS_WINDOWS ? windowsLoad(bundled) : java.lang.foreign.SymbolLookup.libraryLookup(bundled, java.lang.foreign.Arena.global());
                }
                catch (java.lang.Throwable e)
                {
                    throw rethrow(e);
                }
                LOOKUPS.put(group, ret);
                return ret;
            }
            java.lang.Throwable windowsError = null;
            if (IS_WINDOWS)
            {
                try
                {
                    ret = windowsLookup(java.lang.System.mapLibraryName(lib));
                }
                catch (java.lang.Throwable e)
                {
                    windowsError = e;
                }
            }
            if (ret == null)
            {
                try
                {
                    java.lang.System.loadLibrary(lib);
                    ret = java.lang.foreign.SymbolLookup.loaderLookup();
                }
                catch (java.lang.UnsatisfiedLinkError e)
                {
                    if (windowsError != null)
                        e.addSuppressed(windowsError);
                    try
                    {
                        ret = java.lang.foreign.SymbolLookup.libraryLookup(java.lang.System.mapLibraryName(lib), java.lang.foreign.Arena.global());
                    }
                    catch (java.lang.IllegalArgumentException e2)
                    {
                        e.addSuppressed(e2);
                        throw e;
                    }
                }
            }
            LOOKUPS.put(group, ret);
        }
        return ret;
    }

    /**
     * `<os>-<arch>` of the libraries bundled for this platform, e.g. `windows-x86_64`, `linux-aarch64`, `macos-aarch64`
     * (the names of Rust's `target_os` and `target_arch`).
     */
    public static java.lang.String nativePlatform()
    {
        java.lang.String os = java.lang.System.getProperty("os.name", "").toLowerCase(java.util.Locale.ROOT);
        java.lang.String arch = java.lang.System.getProperty("os.arch", "").toLowerCase(java.util.Locale.ROOT);
        os = IS_WINDOWS ? "windows" : os.startsWith("mac") ? "macos" : os.startsWith("linux") ? "linux" : os.replace(' ', '_');
        arch = switch (arch) {case "amd64", "x86_64" -> "x86_64"; case "aarch64", "arm64" -> "aarch64"; default -> arch;};
        return os + "-" + arch;
    }

    private static java.nio.file.Path bundledDir;
    private static boolean bundledDirSearched;

    /**
     * The path of a library bundled in the jar for this platform, or null if there's none. The bundled libraries are listed in the resource
     * `native/<nativePlatform()>/files.txt` next to this class, one `<sha256> <file name>` line each. On the first use they all are extracted to
     * `<package>-native-<hash of files.txt>` in the directory from the system property `<package>.native.cache`, by default `java.io.tmpdir`,
     * and reused by later runs. The libraries find their dependencies next to themselves (rpath `$ORIGIN`, `@loader_path`, or Windows' altered search path).
     */
    private static java.nio.file.Path bundledLibrary(java.lang.String fileName)
    {
        if (!bundledDirSearched)
        {
            bundledDirSearched = true;
            try
            {
                bundledDir = extractBundledLibraries();
            }
            catch (java.io.IOException e)
            {
                throw new java.io.UncheckedIOException("Can't extract the native libraries bundled in the jar.", e);
            }
            if (bundledDir == null)
            {
                try
                {
                    bundledDir = downloadNativeLibraries();
                }
                catch (java.io.IOException e)
                {
                    throw new java.io.UncheckedIOException("Can't get the native libraries listed in `native/native.txt`: " + e.getMessage(), e);
                }
            }
        }
        if (bundledDir == null)
            return null;
        java.nio.file.Path path = bundledDir.resolve(fileName);
        return java.nio.file.Files.isRegularFile(path) ? path : null;
    }

    private static java.nio.file.Path extractBundledLibraries() throws java.io.IOException
    {
        java.lang.String resourceDir = "native/" + nativePlatform() + "/";
        byte[] list;
        try (java.io.InputStream in = Ffi.class.getResourceAsStream(resourceDir + "files.txt"))
        {
            if (in == null)
                return null;
            list = in.readAllBytes();
        }
        java.lang.String hash;
        try
        {
            hash = java.util.HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(list), 0, 8);
        }
        catch (java.security.NoSuchAlgorithmException e)
        {
            throw new java.lang.IllegalStateException(e);
        }
        java.lang.String pkg = Ffi.class.getPackageName();
        java.nio.file.Path parent = java.nio.file.Path.of(java.lang.System.getProperty(pkg + ".native.cache", java.lang.System.getProperty("java.io.tmpdir"))).toAbsolutePath();
        java.nio.file.Path dir = parent.resolve(pkg + "-native-" + hash);
        if (java.nio.file.Files.exists(dir.resolve(".complete")))
            return dir;
        // Extracted to a temporary directory renamed at the end, so another process never sees an incomplete set.
        java.nio.file.Files.createDirectories(parent);
        java.nio.file.Path temp = java.nio.file.Files.createTempDirectory(parent, pkg + "-native-");
        for (java.lang.String line : new java.lang.String(list, java.nio.charset.StandardCharsets.UTF_8).split("\n"))
        {
            java.lang.String name = line.strip();
            int space = name.indexOf(' ');
            if (space >= 0)
                name = name.substring(space + 1).strip();
            if (name.startsWith("*")) // `sha256sum` in binary mode.
                name = name.substring(1);
            if (name.isEmpty())
                continue;
            try (java.io.InputStream in = Ffi.class.getResourceAsStream(resourceDir + name))
            {
                if (in == null)
                    throw new java.io.FileNotFoundException("The resource `" + resourceDir + name + "` listed in `files.txt` is missing.");
                java.nio.file.Files.copy(in, temp.resolve(name));
            }
        }
        java.nio.file.Files.createFile(temp.resolve(".complete"));
        try
        {
            java.nio.file.Files.move(temp, dir, java.nio.file.StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.io.IOException e)
        {
            // Another process was faster.
            if (!java.nio.file.Files.exists(dir.resolve(".complete")))
                throw e;
            try (java.util.stream.Stream<java.nio.file.Path> files = java.nio.file.Files.list(temp))
            {
                for (java.nio.file.Path file : (java.lang.Iterable<java.nio.file.Path>)files::iterator)
                    java.nio.file.Files.deleteIfExists(file);
            }
            java.nio.file.Files.deleteIfExists(temp);
        }
        return dir;
    }

    // Marks a fully extracted temporary directory complete and renames it to `dir`, unless another process was faster.
    private static java.nio.file.Path finishExtraction(java.nio.file.Path temp, java.nio.file.Path dir) throws java.io.IOException
    {
        java.nio.file.Files.createFile(temp.resolve(".complete"));
        try
        {
            java.nio.file.Files.move(temp, dir, java.nio.file.StandardCopyOption.ATOMIC_MOVE);
        }
        catch (java.io.IOException e)
        {
            if (!java.nio.file.Files.exists(dir.resolve(".complete")))
                throw e;
            try (java.util.stream.Stream<java.nio.file.Path> files = java.nio.file.Files.walk(temp))
            {
                for (java.nio.file.Path file : (java.lang.Iterable<java.nio.file.Path>)files.sorted(java.util.Comparator.reverseOrder())::iterator)
                    java.nio.file.Files.deleteIfExists(file);
            }
        }
        return dir;
    }

    // A system property, else an environment variable, or null if neither is set.
    private static java.lang.String setting(java.lang.String property, java.lang.String variable)
    {
        java.lang.String value = java.lang.System.getProperty(property);
        if (value == null || value.isEmpty())
            value = java.lang.System.getenv(variable);
        return value == null || value.isEmpty() ? null : value;
    }

    /**
     * The libraries of this platform downloaded on the first use, or null if the resource `native/native.txt` next to this class doesn't exist.
     * It's the line `url <base URL>`, then `<sha256> <archive name>` per platform, the archive names ending with `_<nativePlatform()>.zip`.
     * The system property `<package>.native.url` or the environment variable `<PACKAGE>_NATIVE_URL` replaces the URL: another http(s) location,
     * or a local directory with the archives. An archive is unpacked once per user into `<cache>/<package>/<archive name without .zip>`, `<cache>` being
     * the system property `<package>.native.cache`, the environment variable `<PACKAGE>_CACHE_DIR`, or else the user's cache directory.
     */
    private static java.nio.file.Path downloadNativeLibraries() throws java.io.IOException
    {
        java.lang.String text;
        try (java.io.InputStream in = Ffi.class.getResourceAsStream("native/native.txt"))
        {
            if (in == null)
                return null;
            text = new java.lang.String(in.readAllBytes(), java.nio.charset.StandardCharsets.UTF_8);
        }
        java.lang.String url = null;
        java.lang.String sha256 = null;
        java.lang.String name = null;
        java.lang.String suffix = "_" + nativePlatform() + ".zip";
        for (java.lang.String line : text.split("\n"))
        {
            line = line.strip();
            int space = line.indexOf(' ');
            if (line.startsWith("url "))
                url = line.substring(4).strip();
            else if (space > 0 && line.endsWith(suffix))
            {
                sha256 = line.substring(0, space);
                name = line.substring(space + 1).strip();
            }
        }
        if (name == null)
            throw new java.io.FileNotFoundException("no native libraries for " + nativePlatform() + ".");

        java.lang.String pkg = Ffi.class.getPackageName();
        java.lang.String envPrefix = pkg.toUpperCase(java.util.Locale.ROOT).replace('.', '_');
        java.nio.file.Path dir = nativeCacheDir(pkg, envPrefix).resolve(pkg).resolve(name.substring(0, name.length() - 4));
        if (java.nio.file.Files.exists(dir.resolve(".complete")))
            return dir;

        java.lang.String override = setting(pkg + ".native.url", envPrefix + "_NATIVE_URL");
        if (override != null)
            url = override;
        if (url == null)
            throw new java.io.FileNotFoundException("no `url` line.");
        byte[] archive;
        if (url.startsWith("http://") || url.startsWith("https://"))
        {
            java.lang.String fullUrl = url.replaceAll("/+$", "") + "/" + name;
            java.lang.System.err.println("Downloading the native libraries from " + fullUrl);
            java.net.http.HttpClient client = java.net.http.HttpClient.newBuilder().followRedirects(java.net.http.HttpClient.Redirect.NORMAL).build();
            java.net.http.HttpResponse<byte[]> response;
            try
            {
                response = client.send(java.net.http.HttpRequest.newBuilder(java.net.URI.create(fullUrl)).build(), java.net.http.HttpResponse.BodyHandlers.ofByteArray());
            }
            catch (java.lang.InterruptedException e)
            {
                java.lang.Thread.currentThread().interrupt();
                throw new java.io.InterruptedIOException("Interrupted while downloading " + fullUrl + ".");
            }
            catch (java.io.IOException e)
            {
                throw new java.io.IOException("failed to download " + fullUrl + " (" + e + "). Offline, set the system property `" + pkg + ".native.url` or the environment variable `" + envPrefix + "_NATIVE_URL` to a directory with " + name + ".", e);
            }
            if (response.statusCode() != 200)
                throw new java.io.IOException("failed to download " + fullUrl + ": HTTP status " + response.statusCode() + ".");
            archive = response.body();
        }
        else
        {
            archive = java.nio.file.Files.readAllBytes(java.nio.file.Path.of(url).resolve(name));
        }

        java.lang.String actual;
        try
        {
            actual = java.util.HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(archive));
        }
        catch (java.security.NoSuchAlgorithmException e)
        {
            throw new java.lang.IllegalStateException(e);
        }
        if (!actual.equalsIgnoreCase(sha256))
            throw new java.io.IOException(name + " has SHA-256 " + actual + ", expected " + sha256 + ".");

        java.nio.file.Files.createDirectories(dir.getParent());
        java.nio.file.Path temp = java.nio.file.Files.createTempDirectory(dir.getParent(), dir.getFileName() + ".tmp");
        try (java.util.zip.ZipInputStream zip = new java.util.zip.ZipInputStream(new java.io.ByteArrayInputStream(archive)))
        {
            for (java.util.zip.ZipEntry entry; (entry = zip.getNextEntry()) != null;)
            {
                if (entry.isDirectory())
                    continue;
                java.nio.file.Path target = temp.resolve(entry.getName()).normalize();
                if (!target.startsWith(temp))
                    throw new java.io.IOException(name + " has the entry " + entry.getName() + " outside of its directory.");
                java.nio.file.Files.createDirectories(target.getParent());
                java.nio.file.Files.copy(zip, target);
            }
        }
        return finishExtraction(temp, dir);
    }

    // Where `downloadNativeLibraries()` keeps the libraries, see there.
    private static java.nio.file.Path nativeCacheDir(java.lang.String pkg, java.lang.String envPrefix)
    {
        java.lang.String dir = setting(pkg + ".native.cache", envPrefix + "_CACHE_DIR");
        if (dir != null)
            return java.nio.file.Path.of(dir).toAbsolutePath();
        java.lang.String home = java.lang.System.getProperty("user.home", "");
        if (IS_WINDOWS)
            dir = java.lang.System.getenv("LOCALAPPDATA");
        else if (java.lang.System.getProperty("os.name", "").toLowerCase(java.util.Locale.ROOT).startsWith("mac"))
            dir = home.isEmpty() ? null : home + "/Library/Caches";
        else
        {
            dir = java.lang.System.getenv("XDG_CACHE_HOME");
            if ((dir == null || dir.isEmpty()) && !home.isEmpty())
                dir = home + "/.cache";
        }
        return java.nio.file.Path.of(dir == null || dir.isEmpty() ? java.lang.System.getProperty("java.io.tmpdir") : dir).toAbsolutePath();
    }

    // Loads a DLL found in `java.library.path` with `LoadLibraryExW()`, see `lookup()`. Returns null if it's not there, throws if it can't be loaded.
    private static java.lang.foreign.SymbolLookup windowsLookup(java.lang.String fileName) throws java.lang.Throwable
    {
        java.nio.file.Path path = null;
        for (java.lang.String dir : java.lang.System.getProperty("java.library.path", "").split(java.io.File.pathSeparator))
        {
            if (dir.isEmpty())
                continue;
            java.nio.file.Path candidate = java.nio.file.Path.of(dir, fileName);
            if (java.nio.file.Files.isRegularFile(candidate))
            {
                path = candidate.toAbsolutePath();
                break;
            }
        }
        return path == null ? null : windowsLoad(path);
    }

    // Loads a DLL by its absolute path with `LoadLibraryExW(LOAD_WITH_ALTERED_SEARCH_PATH)`, see `lookup()`.
    private static java.lang.foreign.SymbolLookup windowsLoad(java.nio.file.Path path) throws java.lang.Throwable
    {
        java.lang.foreign.SymbolLookup kernel32 = java.lang.foreign.SymbolLookup.libraryLookup("kernel32.dll", java.lang.foreign.Arena.global());
        java.lang.foreign.Linker.Option errorState = java.lang.foreign.Linker.Option.captureCallState("GetLastError");
        java.lang.foreign.StructLayout errorLayout = java.lang.foreign.Linker.Option.captureStateLayout();
        java.lang.invoke.MethodHandle loadLibraryEx = LINKER.downcallHandle(kernel32.find("LoadLibraryExW").orElseThrow(), java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT), errorState);
        java.lang.invoke.MethodHandle getProcAddress = LINKER.downcallHandle(kernel32.find("GetProcAddress").orElseThrow(), java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        java.lang.foreign.MemorySegment module;
        int error;
        try (java.lang.foreign.Arena arena = java.lang.foreign.Arena.ofConfined())
        {
            final int LOAD_WITH_ALTERED_SEARCH_PATH = 0x8;
            java.lang.foreign.MemorySegment state = arena.allocate(errorLayout);
            module = (java.lang.foreign.MemorySegment)loadLibraryEx.invokeExact(state, arena.allocateFrom(path.toString(), java.nio.charset.StandardCharsets.UTF_16LE), java.lang.foreign.MemorySegment.NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
            error = state.get(java.lang.foreign.ValueLayout.JAVA_INT, errorLayout.byteOffset(java.lang.foreign.MemoryLayout.PathElement.groupElement("GetLastError")));
        }
        if (module.address() == 0)
            throw new java.lang.UnsatisfiedLinkError("LoadLibraryExW failed for `" + path + "` with the Windows error " + error + (error == 127 ? ": a procedure is missing from one of its dependencies. A DLL of the same name that's already loaded (such as the C++ runtime bundled with the JDK, which java.exe loads first) can be older than the one the library needs" : "") + ".");
        return name ->
        {
            try (java.lang.foreign.Arena arena = java.lang.foreign.Arena.ofConfined())
            {
                java.lang.foreign.MemorySegment address = (java.lang.foreign.MemorySegment)getProcAddress.invokeExact(module, arena.allocateFrom(name));
                return address.address() == 0 ? java.util.Optional.empty() : java.util.Optional.of(address);
            }
            catch (java.lang.Throwable e)
            {
                throw rethrow(e);
            }
        };
    }

    /**
     * Creates the downcall handle of a C function. C `long` parameters and return values are widened to Java `long`.
     * If the library lacks the function, the handle throws `UnsatisfiedLinkError` when called, so the other functions of its class stay usable.
     */
    public static java.lang.invoke.MethodHandle downcall(java.lang.String group, java.lang.String name, java.lang.foreign.FunctionDescriptor desc)
    {
        java.util.Optional<java.lang.foreign.MemorySegment> symbol = lookup(group).find(name);
        java.lang.invoke.MethodHandle handle;
        if (symbol.isPresent())
        {
            handle = LINKER.downcallHandle(symbol.get(), desc);
        }
        else
        {
            java.lang.invoke.MethodType type = desc.toMethodType();
            if (desc.returnLayout().isPresent() && desc.returnLayout().get() instanceof java.lang.foreign.GroupLayout)
                type = type.insertParameterTypes(0, java.lang.foreign.SegmentAllocator.class); // Struct returns take an allocator first.
            java.lang.UnsatisfiedLinkError error = new java.lang.UnsatisfiedLinkError("The function `" + name + "` is missing from the library `" + LIB_NAMES.get(group) + "`.");
            handle = java.lang.invoke.MethodHandles.throwException(type.returnType(), java.lang.UnsatisfiedLinkError.class).bindTo(error);
            handle = java.lang.invoke.MethodHandles.dropArguments(handle, 0, type.parameterList());
        }
        java.lang.invoke.MethodType type = handle.type();
        boolean changed = false;
        if (desc.returnLayout().isPresent() && isCLong(desc.returnLayout().get()) && type.returnType() == int.class)
        {
            type = type.changeReturnType(long.class);
            changed = true;
        }
        java.util.List<java.lang.foreign.MemoryLayout> args = desc.argumentLayouts();
        int offset = type.parameterCount() - args.size(); // 1 if a `SegmentAllocator` was prepended for a struct return.
        for (int i = 0; i < args.size(); i++)
        {
            if (isCLong(args.get(i)) && type.parameterType(i + offset) == int.class)
            {
                type = type.changeParameterType(i + offset, long.class);
                changed = true;
            }
        }
        if (changed)
            handle = java.lang.invoke.MethodHandles.explicitCastArguments(handle, type);
        return handle;
    }

    private static boolean isCLong(java.lang.foreign.MemoryLayout layout)
    {
        return layout.name().isPresent() && layout.name().get().equals("mrbind_c_long");
    }

    public static long getCLong(java.lang.foreign.MemorySegment segment, long offset)
    {
        return IS_WINDOWS ? segment.get(java.lang.foreign.ValueLayout.JAVA_INT, offset) : segment.get(java.lang.foreign.ValueLayout.JAVA_LONG, offset);
    }

    public static void setCLong(java.lang.foreign.MemorySegment segment, long offset, long value)
    {
        if (IS_WINDOWS)
            segment.set(java.lang.foreign.ValueLayout.JAVA_INT, offset, (int)value);
        else
            segment.set(java.lang.foreign.ValueLayout.JAVA_LONG, offset, value);
    }

    /** The pointer of a wrapper, or `NULL` for a null wrapper. */
    public static java.lang.foreign.MemorySegment ptr(Native object)
    {
        return object == null ? java.lang.foreign.MemorySegment.NULL : object.rawPointer();
    }

    /** The pointer of a wrapper. Throws if the wrapper is null. */
    public static java.lang.foreign.MemorySegment ptrNonNull(Native object, java.lang.String name)
    {
        if (object == null)
            throw new java.lang.NullPointerException("The parameter `" + name + "` must not be null.");
        return object.rawPointer();
    }

    // Allocates a single value, for the parameters passed by pointer.
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfBoolean layout, boolean value) {return allocator.allocate(layout).fill((byte)(value ? 1 : 0));}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfByte layout, byte value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfShort layout, short value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfInt layout, int value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfLong layout, long value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfFloat layout, float value) {return allocator.allocateFrom(layout, value);}
    public static java.lang.foreign.MemorySegment alloc(java.lang.foreign.SegmentAllocator allocator, java.lang.foreign.ValueLayout.OfDouble layout, double value) {return allocator.allocateFrom(layout, value);}

    /** Allocates the UTF-8 bytes of a string, without a null terminator. Returns `NULL` for null. */
    public static java.lang.foreign.MemorySegment utf8(java.lang.foreign.SegmentAllocator allocator, java.lang.String str)
    {
        if (str == null)
            return java.lang.foreign.MemorySegment.NULL;
        byte[] bytes = str.getBytes(java.nio.charset.StandardCharsets.UTF_8);
        return allocator.allocateFrom(java.lang.foreign.ValueLayout.JAVA_BYTE, bytes);
    }

    /** The end pointer of a segment allocated by `utf8()`. `NULL` for `NULL`. */
    public static java.lang.foreign.MemorySegment end(java.lang.foreign.MemorySegment segment)
    {
        return segment.address() == 0 ? java.lang.foreign.MemorySegment.NULL : segment.asSlice(segment.byteSize());
    }

    /** Decodes a UTF-8 string from `size` bytes at `data`. */
    public static java.lang.String string(java.lang.foreign.MemorySegment data, long size)
    {
        if (size == 0)
            return "";
        return new java.lang.String(data.reinterpret(size).toArray(java.lang.foreign.ValueLayout.JAVA_BYTE), java.nio.charset.StandardCharsets.UTF_8);
    }

    /** Builds a struct layout with the C alignment rules: each field is aligned naturally, and the struct is padded to its alignment. */
    public static java.lang.foreign.StructLayout structLayout(java.lang.String[] names, java.lang.foreign.MemoryLayout[] fields)
    {
        java.util.List<java.lang.foreign.MemoryLayout> elems = new java.util.ArrayList<>();
        long offset = 0, align = 1;
        for (int i = 0; i < fields.length; i++)
        {
            long a = fields[i].byteAlignment();
            long pad = (a - offset % a) % a;
            if (pad > 0)
                elems.add(java.lang.foreign.MemoryLayout.paddingLayout(pad));
            elems.add(fields[i].withName(names[i]));
            offset += pad + fields[i].byteSize();
            align = java.lang.Math.max(align, a);
        }
        long pad = (align - offset % align) % align;
        if (pad > 0)
            elems.add(java.lang.foreign.MemoryLayout.paddingLayout(pad));
        if (elems.isEmpty())
            elems.add(java.lang.foreign.MemoryLayout.paddingLayout(1)); // Empty C++ structs have the size 1.
        return java.lang.foreign.MemoryLayout.structLayout(elems.toArray(new java.lang.foreign.MemoryLayout[0]));
    }

    /** Checks a struct layout against the size and alignment the C bindings were generated with. */
    public static void checkLayout(java.lang.foreign.StructLayout layout, long size, long alignment, java.lang.String name)
    {
        if (layout.byteSize() != size || layout.byteAlignment() != alignment)
            throw new java.lang.IllegalStateException("The Java layout of `" + name + "` (" + layout.byteSize() + " bytes, aligned to " + layout.byteAlignment() + ") doesn't match C++ (" + size + " bytes, aligned to " + alignment + ").");
    }

    /** Allocates zeroed memory for a struct. It's freed when the segment becomes unreachable. */
    public static java.lang.foreign.MemorySegment allocStruct(java.lang.foreign.MemoryLayout layout)
    {
        return java.lang.foreign.Arena.ofAuto().allocate(layout);
    }

    /** Converts a `Throwable` from `invokeExact()` to something that can be thrown from a method without a `throws` clause. */
    public static java.lang.RuntimeException rethrow(java.lang.Throwable e)
    {
        if (e instanceof java.lang.RuntimeException r)
            return r;
        if (e instanceof java.lang.Error err)
            throw err;
        return new java.lang.RuntimeException(e);
    }

    // What the wrapper must throw once the C call returns: a C++ exception message reported by the C bindings (a String),
    // or an exception thrown by a Java callback (a Throwable). Per thread, since the C bindings report per thread.
    private static final java.lang.ThreadLocal<java.lang.Object> PENDING = new java.lang.ThreadLocal<>();

    /** Throws if the last call into the C bindings threw a C++ exception, or a Java callback threw. */
    public static void checkException()
    {
        java.lang.Object pending = PENDING.get();
        if (pending == null)
            return;
        PENDING.remove();
        if (pending instanceof java.lang.Throwable error)
            throw rethrow(error);
        throw new CppException((java.lang.String)pending);
    }

    /** Called by the callback trampolines when the Java callable throws. The exception is rethrown by the wrapper that made the C call. */
    public static void callbackFailed(java.lang.Throwable error)
    {
        if (PENDING.get() == null)
            PENDING.set(error);
    }

    /** Creates an upcall stub for a static method of `cls`. The lookup must be able to see the method. */
    public static java.lang.foreign.MemorySegment upcall(java.lang.invoke.MethodHandles.Lookup lookup, java.lang.Class<?> cls, java.lang.String name, java.lang.foreign.FunctionDescriptor desc)
    {
        try
        {
            return LINKER.upcallStub(lookup.findStatic(cls, name, desc.toMethodType()), desc, java.lang.foreign.Arena.global());
        }
        catch (ReflectiveOperationException e)
        {
            throw new java.lang.IllegalStateException(e);
        }
    }

    // The Java callables held by the `std::function` instances, keyed by the ids that are passed to C as the user data pointers.
    // Each entry is the callable and its reference count: the copies of a `std::function` share the user data.
    private static final java.util.concurrent.ConcurrentHashMap<java.lang.Long, java.lang.Object[]> CALLBACKS = new java.util.concurrent.ConcurrentHashMap<>();
    private static final java.util.concurrent.atomic.AtomicLong NEXT_CALLBACK_ID = new java.util.concurrent.atomic.AtomicLong(1);

    /** Registers a callable and returns its user data pointer, with one reference. */
    public static java.lang.foreign.MemorySegment newCallbackState(java.lang.Object callable)
    {
        long id = NEXT_CALLBACK_ID.getAndIncrement();
        CALLBACKS.put(id, new java.lang.Object[]{callable, new java.util.concurrent.atomic.AtomicInteger(1)});
        return java.lang.foreign.MemorySegment.ofAddress(id);
    }

    /** The callable registered under a user data pointer. */
    public static java.lang.Object callbackState(java.lang.foreign.MemorySegment userdata)
    {
        java.lang.Object[] entry = CALLBACKS.get(userdata.address());
        if (entry == null)
            throw new java.lang.IllegalStateException("Unknown callback state: " + userdata.address() + ".");
        return entry[0];
    }

    // The `userdata_callback` of the C bindings: releases the user data of `this` object, then copies the other one into it, if any.
    private static void callbackStateChanged(java.lang.foreign.MemorySegment thisUserdata, java.lang.foreign.MemorySegment otherUserdata)
    {
        java.lang.foreign.MemorySegment slot = thisUserdata.reinterpret(java.lang.foreign.ValueLayout.ADDRESS.byteSize());
        long current = slot.get(java.lang.foreign.ValueLayout.ADDRESS, 0).address();
        if (current != 0)
        {
            java.lang.Object[] entry = CALLBACKS.get(current);
            if (entry != null && ((java.util.concurrent.atomic.AtomicInteger)entry[1]).decrementAndGet() == 0)
                CALLBACKS.remove(current);
            slot.set(java.lang.foreign.ValueLayout.ADDRESS, 0, java.lang.foreign.MemorySegment.NULL);
        }
        if (otherUserdata.address() != 0)
        {
            java.lang.Object[] entry = CALLBACKS.get(otherUserdata.address());
            if (entry != null)
                ((java.util.concurrent.atomic.AtomicInteger)entry[1]).incrementAndGet();
            slot.set(java.lang.foreign.ValueLayout.ADDRESS, 0, otherUserdata);
        }
    }

    public static final java.lang.foreign.MemorySegment CALLBACK_STATE_STUB = upcall(java.lang.invoke.MethodHandles.lookup(), Ffi.class, "callbackStateChanged", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));

    // C++ exceptions are reported by the C bindings through this callback, which stores the message until the wrapper checks it.
    private static void exceptionHandler(java.lang.foreign.MemorySegment messages, java.lang.foreign.MemorySegment typeNames, java.lang.foreign.MemorySegment userdata)
    {
        java.lang.StringBuilder text = new java.lang.StringBuilder();
        java.lang.foreign.MemorySegment array = messages.reinterpret(java.lang.Long.MAX_VALUE);
        for (long i = 0;; i++)
        {
            java.lang.foreign.MemorySegment message = array.getAtIndex(java.lang.foreign.ValueLayout.ADDRESS, i);
            if (message.address() == 0)
                break;
            if (i > 0)
                text.append('\n');
            text.append(message.reinterpret(java.lang.Long.MAX_VALUE).getString(0));
        }
        PENDING.set(text.toString());
    }

    static
    {
        try
        {
            java.lang.foreign.MemorySegment stub = upcall(java.lang.invoke.MethodHandles.lookup(), Ffi.class, "exceptionHandler", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
            downcall("", "MR_C_SetExceptionHandler", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS)).invokeExact(stub, java.lang.foreign.MemorySegment.NULL);
        }
        catch (java.lang.Throwable e)
        {
            // The message survives the `NoClassDefFoundError` that the later uses of this class get.
            throw new java.lang.IllegalStateException("Failed to register the C++ exception handler: " + e, e);
        }
    }
}
