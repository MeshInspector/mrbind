# Generating C# / .NET bindings

We generate C# code that calls the C bindings using `[DllImport]` (aka P/invoke), so you're required to [generate our C bindings first](/docs/generating_c.md).

The resulting C# `.dll` is cross-platform, but since it will load the C shared library at runtime, you must compile the C bindings for all platforms you want to support.

(Note that C# reuses the `.dll` extension for its "assemblies" (compiled libraries) on all platforms; those are not the normal Windows shared libraries.)

We're not using C++/CLI at least because it [seems to get new C++ features late](https://developercommunity.azure.com/t/Allow-C23-or-higher-under-CCLI/10768186), and because there seem to be reports of the resulting assemblies not being compatible with Unity.

## C# and .NET versions

There are options to tune the generated C# code for different versions of C# and .NET (independently), but this is best-effort.

We verified that you can go as low as .NET Standard 2.0 and C# 12, which is enough to be compatible with Unity.

At the time of writing, you'll get the prettiest bindings by using at least .NET 8 and C# 14, but the difference it makes is minimal.

## Generating the C bindings

As mentioned above, C# bindings are based on C bindings, so [you must produce those first](/docs/generating_c.md).

Pass `--output-desc-json c_desc.json` to the C generator to make it dump C bindings description, which will then be used by the C# generator.

It's strongly recommended that you also pass [`--copy-inherited-members`](/docs/generating_c.md#inherit-class-members) to the C generator, otherwise in C# the derived classes will not inherit the base members (we imitate inheritance by copying members and providing conversions between the classes, to support multiple inheritance among other things, see [README](/README.md) for more details).

## Running the C# generator

The C# bindings are produced by a separate executable, `build/mrbind_gen_csharp`.

The C# generator needs the C bindings description JSON to exist (as produced by the C generator's `--output-desc-json c_desc.json`, see above). You don't need anything else to generate and compile the C# code. You will need the compiled C shared libraries at runtime though.

Invoking the C# generator is straightforward:
```sh
build/mrbind_gen_csharp \
    --input-json c_desc.json \
    --output-dir output \
    --imported-lib-name MyLib \
    --helpers-namespace MyLib::Misc \
    --force-namespace MyLib
```
Where:

* `c_desc.json` is the file produced by the C generator in response to `--output-desc-json __.json`.

* `--output-dir output` is the directory where the C# code will be generated.

  The default behavior is to error if this directory is not empty, pass `--clean-output-dir` to delete the contents instead.

* `--imported-lib-name MyLib` is the C shared library name that we'll load at runtime. It must be produced by compiling the code produced by our C bindings generator.

  Don't add any extensions, and don't add the `lib` prefix. For example, `--imported-lib-name MyLib` will load `MyLib.dll` on Windows, `libMyLib.so` on Linux, and `libMyLib.dylib` on Mac.

* `--helpers-namespace MyLib::Misc` is the C# namespace where we will emit the additional helper functions. It doesn't need to exist in C++.

  It can be anything, but can't be empty or `::`. It's expected that the first component matches your C++ namespace, but this is optional. It's recommended to add the second component `Misc` or something similar, but this is again optiona, you could do `--helpers-namespace MyLib` directly if you wanted.

  Note that in C# we use partial static classes instead of actual C# namespaces, since C# namespaces can't contain functions (outside of classes), among other things. So the actual C# syntax to access this namespace will end up being `MyLib.Misc.__`, despite the flag using the C++-style `::` notation.

* `--force-namespace` is not strictly necessary. It ensures that no generated C# entities leak outside of the specified namespace. This should normally match the first component of `--helpers-namespace`, but a more detailed explanation is provided below.

## Compiling the C# code

You'll need a `MyLib.csproj` file to compile the resulting C# code. Here is the recommended project file:
```xml
<Project Sdk="Microsoft.NET.Sdk">

  <PropertyGroup>
    <TargetFramework>net8.0</TargetFramework>
    <ImplicitUsings>enable</ImplicitUsings>
    <Nullable>enable</Nullable>
    <AllowUnsafeBlocks>true</AllowUnsafeBlocks>

    <!-- Suppressed warnings:
        CS0661 - Missing `GetHashCode()` override when a custom `==` is provided.
        CS0659 - Missing `GetHashCode()` override when a custom `Equals(object)` is provided. (We add this automatically along with `==`, since skipping it causes a warning too.)
    -->
    <NoWarn>CS0659;CS0661</NoWarn>
  </PropertyGroup>

</Project>
```
Notice that we recommend disabling certain C# warnings for the generated code.

C# appears to automatically find `.cs` source files in subdirectories next to the project file, so you don't have to list the source files in the project file.

This project can be compiled from the command line using `dotnet`, and it doesn't matter what platform it's compiled on. Use:
```cpp
dotnet build path/to/project/dir
```
Where `path/to/project/dir` is the directory containing your `MyLib.csproj` file.

## Tuning C# and .NET versions

Use `--csharp-version=... --dotnet-version=...` C# generator flags to tune the generated C# code for specific C# and .NET versions.

For example, `--csharp-version=12 --dotnet-version=std2.0` tunes for C# 12 and .NET Standard 2.0, which is enough for Unity compatibility, and currently are the lowest supported versions.

The argument of `--csharp-version` is always a single number, the C# version.

The argument of `--dotnet-version` can be:

* A single number, e.g. `8` means .NET 8.
* Two numbers `X.Y` for the older .NET Core, e.g. `2.1` means .NET Core 2.1.
* `stdX.Y` for .NET Standard, e.g. `std2.0` means .NET Standard 2.0.

You should specify the matching C# and .NET versions in your project file, e.g. for `--csharp-version=12 --dotnet-version=std2.0` use the following project file:
```xml
<Project Sdk="Microsoft.NET.Sdk">

  <PropertyGroup>
    <TargetFramework>netstandard2.0</TargetFramework>
    <LangVersion>12</LangVersion>
    <ImplicitUsings>enable</ImplicitUsings>
    <Nullable>enable</Nullable>
    <AllowUnsafeBlocks>true</AllowUnsafeBlocks>

    <!-- Suppressed warnings:
        CS0661 - Missing `GetHashCode()` override when a custom `==` is provided.
        CS0659 - Missing `GetHashCode()` override when a custom `Equals(object)` is provided. (We add this automatically along with `==`, since skipping it causes a warning too.)
    -->
    <NoWarn>CS0659;CS0661</NoWarn>
  </PropertyGroup>

</Project>
```

Notice that the default C# version for .NET Standard 2.0 appears to be lower than 12, but increasing it to 12 seems to work, and hasn't caused any compatibility issues for us so far.

## Tuning C# names

### Namespaces

By default, C++ namespaces map directly to C# namespaces (or rather, to C# partial static classes, since C# namespaces can't contain functions outside of classes, amont other things).

Use `--replace-namespace A::B C::D` if you want to rename the namespaces. This example replaces `A::B` with `C::D`. This flag can be specified multiple times.

The two arguments don't need to have the same amount of parts. The second argument can be `::` to remove a namespace entirely, but the first one can't be `::` (use `--forced-namespace` instead, see below).

The namespaces only match at the top level, e.g. `NS::A::B` wouldn't get renamed to `NS::C::D`.

There is another flag: `--forced-namespace E::F`. This adds a namespace to things that would otherwise end up in the global namespace (after applying all `--replace-namespace` flags).

It also applies to things that would end up in namespaces that have their first part different from the first part of `--forced-namespace`. E.g. `E::NS::foo()` would be left as is (`E` matches the first part of `E::F), but `Blah::foo()` would become `E::F::foo()`.

### Naming style

The C# generator renames all C++ entities to more or less match the C# naming convention.

We provide a minimal set of knobs to configure this behavior:

* `--begin-func-names-with-lowercase` - name functions `fooBar()` instead of `FooBar()`.
* (nothing else at the moment)

Note that we intentionally name C# properties (that correspond to C++ class data members) `fooBar` instead of `FooBar`. While this violates the C# convention for properties, not doing this often leads to name conflicts, e.g. if you have `struct Params {...}; Params params;` in a class, if we strictly followed the convention, both would have to be called `Params`. We have code to handle this, one of them would get renamed to `Params_`, but this is ugly, and we decided that using a different naming convention for properties is better than this.

## Other tunables parameters

### `--fat-objects`

By default, all C++ data members become C# properties, and each read/write to them involves a C function call, and possibly a C# heap allocation if you're reading a C# class instance.

Adding this flags makes each C# class store its fields as C# fields. This should make accessing them faster, at the cost of slower construction (as the fields now need to be initialized), and increased memory usage.

### `--no-csharp-spans`

We try to use `ReadOnlySpan<char>` for strings (similar to C++ `std::string_view`) if the selected .NET version has it (must be .NET Core 2.1 or newer or .NET Standard 2.1 or newer). This flags lets you disable spans even if the .NET version is new enough to have them; then strings are represented using C# `string`.

### `--no-deref-expected`

This disables the custom behavior for `std::expected`/`tl::expected`, where we automatically dereference it when it's returned from functions, throwing a C# exception if it contains an error.

If this flag is specified, we instead return the `{std,tl}::expected` class instance as is.

### `--wrap-doc-comments-in-summary-tag`

C# tooling (including Microsoft's IDEs) apparently expects documentation comments to be XML-formatted. Plain-text `///` comments, or those with Doxygen annotations, don't show up in IDE hints.

Eventually we might add translation from the Doxygen comment annotations to those expected in C#, but for now we provide this flag as simple fix. It just wraps every documentation comment in `<summary>...</summary>`, unless it already contains that tag.

This should be enough to at least display those comments in IDEs, but any `@...` doxygen tags will be left as is, instead of being translated into their proper XML form.

## Distributing the C# bindings as a Nuget package

This is not a full explanation, but a rought outline of what you need to do.

The C# `.dll` need to be packaged at `./lib/??/`, where `??` is the minimal version of .NET you're targeting, e.g. `netstandard2.0`. This .NET version ID is called TFM ("target framework moniker"), see [this](https://learn.microsoft.com/en-us/dotnet/standard/frameworks) for a full list.

Also in `./lib/??/` you should have a documentation XML, which is what stores function/class comments for the IDEs. It can be generated by adding `<GenerateDocumentationFile>True</GenerateDocumentationFile>` to the `.csproj` file.

The compiled C bindings (shared libraries) and all their dependencies (which include your own libraries the C bindings call) need to be packaged at `./runtimes/??/native/`, where `??` is the platform name, called RID ("runtime identifier") in C#. See [this](https://learn.microsoft.com/en-us/dotnet/core/rid-catalog) for a full list of platform names. The popular platform names are `{win,osx,linux}-{x64,arm64}`. You should have multiple `??` directories, one per supported platform.

For packaging dependencies of the native libraries, we've had good results by reusing the Python tooling that's normally used to package dependencies for Python wheels (wheels meaning packaged Python libraries), namely `delvewheel` on Windows, `auditwheel` on Linux, and `delocate` on Mac.
