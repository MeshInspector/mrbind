# Running the parser

MRBind includes a common parser that is used for all output languages, ensuring that the exact same API gets exposed to all of them.

Regardless of the output language, the first step is running the parser.

## Input headers

It's recommended to prepare one big header file that includes all C++ headers you want to bind, as the parser accepts one header at a time. In theory you can parse your headers individually, but that's much slower.

MRBind filters the code by namespaces, so it's not an issue if your headers include third-party libraries. You can simply filter out their namespaces.

All code that you want to bind (that's not filtered out in this manner) must be under your control, as you might be required to add some annotations to the headers (such as to exclude certain problematic things from the bindings, though there are workarounds that don't require annotations).

## Parser command line usage

The parser is built at `build/mrbind`. The usage is as follows:
```sh
mrbind <mrbind_flags> -- <clang_flags>
```
(This usage pattern is enforced by Clang's libtooling, and you'll find it in many other Clang-based tools, such as Clang-Tidy.)

`<mrbind_flags>` are our own flags (see `--help` for the full list), and `<clang_flags>` are the normal Clang/GCC-style compiler flags (for include directories, defines, etc).

**`<mrbind_flags>`** should be at least following: `YourHeader.h -o parse_result.json --format=json --ignore :: --allow YourNamespace`. Some additional flags might be needed here depending on the target language, more on that in language-specific docs.

Notice `--ignore :: --allow YourNamespace`, which limits the parser output to your namespace (replace `YourNamespace` with your library's namespace name).

It's intentional that we filter out `namespace std`, parsing the standard library contents is not supported. You can of course include standard headers, and use standard types in your interface. The point is that standard types have custom handwritten bindings instead of parsed ones.

You can additionally `--ignore` more namespaces here, such as `--ignore YourLibrary::detail`. If your library adds entities to the global namespace, you'll have to individually bless every function/class/etc with `--allow` ( )note that it accepts regexes: `--allow '/MyLib_.*/'`; replace `'...'` with appropriate escapement for your shell, it's not a part of the syntax).

**`<clang_flags>`** is where you put `-I`, `-D`, `-std=c++??`, etc. Other useful flags that can be added here are:

* `-xc++-header` — if your input header has the `.h` extension, add this flag to treat it as a C++ header rather than a C one.
* `-resource-dir=...` — on most platforms this is necessary for Clang to find its own internal headers. Skipping this can lead to cryptic errors. Get the `...` by running `clang -print-resource-dir` (or `clang-$CLANG_VER -print-resource-dir` on Ubuntu, use the same version as you [built MRBind with](./building_mrbind.md)).
* `-fparse-all-comments` — preserve all comments in the bindings, not only Doxygen-style ones.
* `--target=x86_64-pc-windows-msvc -rtlib=platform -D_DLL -D_MT` — if you're on Windows, using Clang from MSYS2, but the rest of the project uses MSVC, use this to switch Clang to a MSVC-compatible mode (which will make it use MSVC's standard library, among other things).

Notice that omitting `--` (and the subsequent flags) altogether will make Clang extract the flags from `compile_commands.json` if available. So `--` with nothing after it isn't the same thing as omitting it entirely. I recommend not omitting `--` and spelling out the flags manually.

**So a complete command line could look like this:**<br/>
`mrbind YourHeader.h -o parse_result.json --format=json --ignore :: --allow YourNamespace -- -xc++-header -resource-dir="$(clang -print-resource-dir)" -fparse-all-comments`

Note that `clang` that you call `-print-resource-dir` on must match the libclang you used when compiling MRBind. So e.g. on Ubuntu this would be `clang-21 -print-resource-dir` (or whatever version you used).

On Windows, if using Clang from MSYS2, add the extra flags mentioned above.

On success, `parse_result.json` will be generated. Take a quick look at it to make sure it's not empty, and has reasonable contents (lists your functions/classes).

If this works, you're ready to [generate the bindings for a specific language](/README.md#usage).

## Troubleshooting

If the parser chokes on your code, consult this section.

### Includes not being found

Pass include directories to `-I...` after `--`, as mentioned above.

### Newer language features not working

Pass `-std=c++??` after `--`, as mentioned above. (Where `??` is a specific version number.)

### Errors in templates

MRBind aggressively instantiates all templates it sees.

  While something like `using A = Foo<Bar>;` doesn't instantiate `Foo<Bar>` in standard C++, it does in MRBind.

  When a class template is instantiated for any reason, all its non-template member functions are instantiated as well, and so are member classes, etc.

  If your templates rely on this behavior (rely on you not calling certain functions on "wrong" instantions), MRBind will choke on them. The fix is to properly annotate them with `requires` to make them SFINAE-friendly. (If you must additionally target pre-C++20, put `requires` in a macro to make it optional.)

  For example:

  ```cpp
  template <typename T>
  struct Vec3
  {
      T x, y, z;

      Vec3 operator-() {return {-x, -y, -z};}
  };
  ```

  In standard C++, using `Vec3<std::string>` is legal as long as you never call `operator-` on it, but not in MRBind. MRBind requires you to do something like this:

  ```cpp
  template <typename T>
  struct Vec3
  {
      T x, y, z;

      Vec3 operator-() requires requires{-x;} {return {-x, -y, -z};}
  };
  ```
  This disables `operator-` if `-x` doesn't compile.

  Of course, this is only needed if `Vec3<std::string>` is mentioned somewhere in the input headers. We don't randomly try to substitute arbitrary template arguments into templates.

### My templates are getting instantiated for no reason

Sometimes you can run into cases like this one:
```cpp
template <typename T>
struct Matrix3
{
    static_assert(std::is_floating_point_v<T>);
};

template <typename T>
struct Vec3
{
    T x, y, z;

    Vec3 operator*(Matrix3<T>) requires std::is_floating_point_v<T> {return {};}
};

inline Vec3<std::string> v;
```

Here `operator*` is seemingly using the correct `requires`, yet MRBind still tries to instantiate `Matrix3<std::string>` and proceeds to choke on it.

This is technically our bug, since this `operator*` is entirely SFINAE-friendly in standard C++. But it's not trivial to fix, so until we fix it, you'll need to use one of the several workarounds.

You could `--ignore` the offending specialization (`Matrix3<std::string>` in this example).

You could use the following helper:
```cpp
template <typename T>
struct Matrix3OrPlaceholderImpl {using type = std::nullptr_t;};
template <typename T> requires std::is_floating_point_v<T>
struct Matrix3OrPlaceholderImpl<T> {using type = Matrix3<T>;};

template <typename T>
using Matrix3OrPlaceholder = Matrix3OrPlaceholderImpl<T>::type;
```
And then use `Matrix3OrPlaceholder<T>` as the parameter type of the offending function (`operator*` in this example). It expands to `Matrix3<T>` if `T` matches the condition, or a placeholder type (`std::nullptr_t` in this example) otherwise. Note that a simple `std::conditional_t` doesn't work for this purpose, as it doesn't prevent the false branch from being instantiated.

Another way to fix this that you might be more familiar with is:
```cpp
template <typename TT = T>
Vec3 operator*(Matrix3<TT>) requires std::is_floating_point_v<T /*or TT*/> {return {};}
```
But this is worse, because now this function won't appear in the bindings unless you go out of your way to instantiate it. More about this [here](TODO_link).
