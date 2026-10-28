#define MR_C_BUILD_LIBRARY
#include "iostream.h"

#include <__mrbind_c_details.h>

#include <iostream>
#include <memory>


MR_C_std_ostream *MR_C_GetStdCout(void)
{
    MRBINDC_TRY(
    return (MR_C_std_ostream *)std::addressof(std::cout);
    ) // MRBINDC_TRY
}

MR_C_std_ostream *MR_C_GetStdCerr(void)
{
    MRBINDC_TRY(
    return (MR_C_std_ostream *)std::addressof(std::cerr);
    ) // MRBINDC_TRY
}

MR_C_std_ostream *MR_C_GetStdClog(void)
{
    MRBINDC_TRY(
    return (MR_C_std_ostream *)std::addressof(std::clog);
    ) // MRBINDC_TRY
}

MR_C_std_istream *MR_C_GetStdCin(void)
{
    MRBINDC_TRY(
    return (MR_C_std_istream *)std::addressof(std::cin);
    ) // MRBINDC_TRY
}

