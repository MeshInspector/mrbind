#include "MR/1.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>


const MR_C_std_string *MR_A_GetConst_x(const MR_A *_this)
{
    return (const MR_C_std_string *)&((*((const MR::A *)_this)).x);
}

MR_C_std_string *MR_A_GetMutable_x(MR_A *_this)
{
    return (MR_C_std_string *)&((*((MR::A *)_this)).x);
}

void MR_A_Destroy(MR_A *_this)
{
    using namespace MR;
    delete &(*((MR::A *)_this));
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
        MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, MR::A) MRBINDC_CLASSARG_MOVE(_other, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR::A) MRBINDC_CLASSARG_END(_other, MR::A) 
    ));
}

MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other)
{
    using namespace MR;
    return (MR_A *)&((*((MR::A *)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, MR::A) MRBINDC_CLASSARG_MOVE(_other, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR::A) MRBINDC_CLASSARG_END(_other, MR::A) 
    ));
}

MR_C_std_vector_MR_A *MR_foo(void)
{
    using namespace MR;
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(MR::foo());
}

void MR_bar(MR_C_PassBy _0_pass_by, MR_C_std_vector_MR_A *_0)
{
    using namespace MR;
    MR::bar(
        MRBINDC_CLASSARG_DEF_CTOR(_0, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(_0, std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(_0, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_0, std::vector<MR::A>) MRBINDC_CLASSARG_END(_0, std::vector<MR::A>) 
    );
}

