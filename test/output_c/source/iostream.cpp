#define MR_C_BUILD_LIBRARY
#include "iostream.h"

#include <iostream>


MR_C_std_ostream *MR_C_GetStdCout(void)
{
    return (MR_C_std_ostream *)&(std::cout);
}

MR_C_std_ostream *MR_C_GetStdCerr(void)
{
    return (MR_C_std_ostream *)&(std::cerr);
}

MR_C_std_ostream *MR_C_GetStdClog(void)
{
    return (MR_C_std_ostream *)&(std::clog);
}

MR_C_std_istream *MR_C_GetStdCin(void)
{
    return (MR_C_std_istream *)&(std::cin);
}

