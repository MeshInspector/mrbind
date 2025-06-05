#include "MR/test_simple_types.h"

#include <input/MR/test_simple_types.h>

#include <stdexcept>


int MR_TestSimpleTypes_GetInt(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return MR::TestSimpleTypes::GetInt();
}

void MR_TestSimpleTypes_SetInt(int _1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetInt(
        _1
    );
}

void MR_TestSimpleTypes_SetIntDef(const int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntDef(
        (_1 ? *_1 : static_cast<int>(42))
    );
}

int *MR_TestSimpleTypes_GetIntPtr(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return MR::TestSimpleTypes::GetIntPtr();
}

void MR_TestSimpleTypes_SetIntPtr(int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntPtr(
        _1
    );
}

void MR_TestSimpleTypes_SetIntPtrDef(int *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntPtrDef(
        (_1 ? *_1 : static_cast<int *>(&global_int))
    );
}

void MR_TestSimpleTypes_SetIntPtrDefNull(int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntPtrDefNull(
        _1
    );
}

int *MR_TestSimpleTypes_GetIntRef(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return &(MR::TestSimpleTypes::GetIntRef());
}

void MR_TestSimpleTypes_SetIntRef(int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntRef(
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_TestSimpleTypes_SetIntRefDef(int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetIntRefDef(
        (_1 ? *_1 : static_cast<int &>(global_int))
    );
}

int MR_TestSimpleTypes_GetEnum(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return MR::TestSimpleTypes::GetEnum();
}

void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnum(
        ((MR::TestSimpleTypes::E)_1)
    );
}

void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumDef(
        (_1 ? (MR::TestSimpleTypes::E)(*_1) : static_cast<MR::TestSimpleTypes::E>(E::e1))
    );
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return (MR_TestSimpleTypes_E *)(MR::TestSimpleTypes::GetEnumPtr());
}

void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumPtr(
        ((MR::TestSimpleTypes::E *)_1)
    );
}

void MR_TestSimpleTypes_SetEnumPtrDef(MR_TestSimpleTypes_E *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumPtrDef(
        (_1 ? (MR::TestSimpleTypes::E *)(*_1) : static_cast<MR::TestSimpleTypes::E *>(&global_enum))
    );
}

void MR_TestSimpleTypes_SetEnumPtrDefNull(MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumPtrDefNull(
        ((MR::TestSimpleTypes::E *)_1)
    );
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumRef(void)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    return (MR_TestSimpleTypes_E *)&(MR::TestSimpleTypes::GetEnumRef());
}

void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumRef(
        (_1 ? *(MR::TestSimpleTypes::E *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    MR::TestSimpleTypes::SetEnumRefDef(
        (_1 ? *(MR::TestSimpleTypes::E *)(_1) : static_cast<MR::TestSimpleTypes::E &>(global_enum))
    );
}

