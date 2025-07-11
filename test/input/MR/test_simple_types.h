#pragma once

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
}
