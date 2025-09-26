#pragma once

#include <cstddef>
#include <cstdint>

namespace MR::TestSimpleTypes
{
    inline int GetInt() {return 42;}
    inline void SetInt(int) {}
    inline void SetIntDef(int = 42) {}

    inline int global_int;

    inline int *GetIntPtr() {return nullptr;}
    inline void SetIntPtr(int *) {}
    inline void SetIntPtrDef(int * = &global_int) {}
    inline void SetIntPtrDefNull(int * = nullptr) {}

    inline int &GetIntRef() {return global_int;}
    inline void SetIntRef(int &) {}
    inline void SetIntRefDef(int & = global_int) {}

    inline void *GetVoidPtr() {return nullptr;}
    inline void SetVoidPtr(void *) {}
    inline void SetVoidPtrDef(void * = &global_int) {}
    inline void SetVoidPtrDefNull(void * = nullptr) {}

    inline void *global_void_ptr;

    inline const void *GetConstVoidPtr() {return nullptr;}
    inline void SetConstVoidPtr(const void *) {}
    inline void SetConstVoidPtrDef(const void * = &global_int) {}
    inline void SetConstVoidPtrDefNull(const void * = nullptr) {}

    inline void **GetVoidPtrPtr() {return nullptr;}
    inline void SetVoidPtrPtr(void **) {}
    inline void SetVoidPtrPtrDef(void ** = &global_void_ptr) {}
    inline void SetVoidPtrPtrDefNull(void ** = nullptr) {}


    enum class E {e1};
    inline E global_enum;

    inline int GetEnum() {return 42;}
    inline void SetEnum(E) {}
    inline void SetEnumDef(E = E::e1) {}

    inline E *GetEnumPtr() {return nullptr;}
    inline void SetEnumPtr(E *) {}
    inline void SetEnumPtrDef(E * = &global_enum) {}
    inline void SetEnumPtrDefNull(E * = nullptr) {}

    inline E &GetEnumRef() {return global_enum;}
    inline void SetEnumRef(E &) {}
    inline void SetEnumRefDef(E & = global_enum) {}


    // This enum has a custom underlying type.
    enum class E2 : short {e1};
    inline E2 global_enum2;

    inline int GetEnum2() {return 42;}
    inline void SetEnum2(E2) {}
    inline void SetEnum2Def(E2 = E2::e1) {}

    inline E2 *GetEnum2Ptr() {return nullptr;}
    inline void SetEnum2Ptr(E2 *) {}
    inline void SetEnum2PtrDef(E2 * = &global_enum2) {}
    inline void SetEnum2PtrDefNull(E2 * = nullptr) {}

    inline E2 &GetEnum2Ref() {return global_enum2;}
    inline void SetEnum2Ref(E2 &) {}
    inline void SetEnum2RefDef(E2 & = global_enum2) {}


    // This enum has no constants.
    enum class E3 {};

    // This has multiple words in the underlying type. This has caused a bug at one point...
    enum class E4 : unsigned int {};

    // This will use a custom typedef for the underlying type, if that's enabled!
    enum class E5 : std::int64_t {};


    // Test all kinds of `char`.
    void CheckChar(char *);
    void CheckChar(unsigned char *);
    void CheckChar(signed char *);


    // Make sure `long long` works. The space in the type can be a bit weird.
    // This conflicts with `--canonicalize-to-fixed-size-typedefs` (or rather with `--reject-long-and-long-long`), so this is behind an ifdef.
    #if !DISABLE_LONG_LONG
    inline long long LongLong(long long x) {return x;}
    #endif

    inline std::size_t blah(std::size_t x) {return x;}
    inline std::ptrdiff_t blah(std::ptrdiff_t x) {return x;}


    // Here we test that `--canonicalize-to-fixed-size-typedefs` applies to the template arguments correctly.

    // Function templates.
    template <typename T> T FuncTemplate(T);
    extern template std::size_t FuncTemplate(std::size_t);
    // Another copy, to make sure the template arguments are not omitted.
    extern template int FuncTemplate(int);

    // Class templates.
    template <typename T> struct ClassTemplate
    {
        // Enums.
        enum class Enum {};

        // Static variables.
        template <typename U>
        inline static U var{};

        // Constructors.
        template <typename U>
        ClassTemplate(U);

        // Methods.
        template <typename U>
        void foo() {}

        // Skipping destructors, those don't have template parameters.
        // Skipping conversion operators, since we ignore their template parameters, and only use the final target types.

    };
    using ClassTemplate0 = ClassTemplate<std::size_t>;

    __attribute__((__annotate__("mrbind::ignore"))) inline void ClassTemplateHelper()
    {
        // Instantiate the stuff.
        (void)ClassTemplate0(std::size_t{}).var<std::size_t>;
        ClassTemplate0(std::size_t{}).foo<std::size_t>();
        // Another copy, to make sure the template arguments are not omitted.
        ClassTemplate0(int{}).foo<int>();
    }
}
