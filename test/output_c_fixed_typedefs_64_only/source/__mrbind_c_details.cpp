#define MR_C_BUILD_LIBRARY
#include "__mrbind_c_details.h"

#include <cstdio>
#include <cstdlib>

#if !MR_C_ENABLE_EXCEPTIONS
void mrbindc_details::ThrowWithExceptionsDisabled(const char *message)
{
    std::fputs(message, stderr);
    std::abort();
}
#endif

