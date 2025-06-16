#include "MR/1.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <stdexcept>


const MR_C_std_string *MR_A_GetConst_x(const MR_A *_this)
{
    return (const MR_C_std_string *)&((_this ? *(const MR::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

MR_C_std_string *MR_A_GetMutable_x(MR_A *_this)
{
    return (MR_C_std_string *)&((_this ? *(MR::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

void MR_A_Destroy(MR_A *_this)
{
    using namespace MR;
    delete &(_this ? *(MR::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_A *MR_A_Construct(void)
{
    using namespace MR;
    return (MR_A *)new MR::A(MR::A());
}

MR_A *MR_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_A *_other)
{
    using namespace MR;
    return (MR_A *)new MR::A(MR::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(_other, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(_other, MR::A))
    ));
}

MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other)
{
    using namespace MR;
    return (MR_A *)&((_this ? *(MR::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(_other, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(_other, MR::A))
    ));
}

MR_C_std_vector_MR_A *MR_foo(void)
{
    using namespace MR;
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(MR::foo());
}

void MR_bar(MR_C_PassBy _1_pass_by, MR_C_std_vector_MR_A *_1)
{
    using namespace MR;
    MR::bar(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(_1, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(_1, std::vector<MR::A>))
    );
}

