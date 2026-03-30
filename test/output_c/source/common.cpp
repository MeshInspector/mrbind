#define MR_C_BUILD_LIBRARY
#include "common.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <string>


void *MR_C_Alloc(size_t num_bytes)
{
    MRBINDC_TRY(
    return operator new(
        num_bytes
    );
    ) // MRBINDC_TRY
}

void MR_C_Free(void *ptr)
{
    operator delete(
        ptr
    );
}

void *MR_C_AllocArray(size_t num_bytes)
{
    MRBINDC_TRY(
    return operator new[](
        num_bytes
    );
    ) // MRBINDC_TRY
}

void MR_C_FreeArray(void *ptr)
{
    operator delete[](
        ptr
    );
}

static void _default_exception_handler(const char *const *messages, const char *const *type_names, void *userdata)
{
    (void)type_names;
    (void)userdata;

    std::fputs("Uncaught C++ exception:\n", stderr);

    while (*messages)
        std::fprintf(stderr, "%s\n", *messages++);

    std::abort();
}

#if MR_C_ENABLE_EXCEPTIONS
static void _simple_exception_handler(const char *const *messages, const char *const *type_names, void *userdata)
{
    (void)type_names;

    std::string combined_message = *messages++;

    while (*messages)
    {
        combined_message += '\n';
        combined_message += *messages++;
    }

    reinterpret_cast<MR_C_SimpleExceptionHandlerFuncPtr>(userdata)(combined_message.c_str());
}

static MR_C_ExceptionHandlerFuncPtr _current_exception_handler = _default_exception_handler;
static void *_current_exception_handler_userdata = nullptr;
#endif

bool MR_C_ExceptionSupportEnabled(void)
{
    return MR_C_ENABLE_EXCEPTIONS;
}

MR_C_ExceptionHandlerFuncPtr MR_C_GetDefaultExceptionHandler(void)
{
    return _default_exception_handler;
}

MR_C_ExceptionHandlerFuncPtr MR_C_GetCurrentExceptionHandler(void)
{
    #if MR_C_ENABLE_EXCEPTIONS
    return _current_exception_handler;
    #else
    return nullptr;
    #endif
}

void *MR_C_GetCurrentExceptionHandlerUserData(void)
{
    #if MR_C_ENABLE_EXCEPTIONS
    return _current_exception_handler_userdata;
    #else
    return nullptr;
    #endif
}

void MR_C_SetExceptionHandler(MR_C_ExceptionHandlerFuncPtr func, void *userdata)
{
    #if MR_C_ENABLE_EXCEPTIONS
    _current_exception_handler = func;
    _current_exception_handler_userdata = userdata;
    #else
    (void)func;
    (void)userdata;
    #endif
}

void MR_C_SetSimpleExceptionHandler(MR_C_SimpleExceptionHandlerFuncPtr func)
{
    #if MR_C_ENABLE_EXCEPTIONS
    if (func)
        MR_C_SetExceptionHandler(_simple_exception_handler, reinterpret_cast<void *>(func));
    else
        MR_C_SetExceptionHandler(nullptr, nullptr);
    #else
    (void)func;
    #endif
}

void MR_C_ThrowException(const char *message)
{
    #if MR_C_ENABLE_EXCEPTIONS
    throw std::runtime_error(
        message
    );
    #else
    std::fprintf(stderr, "Attempt to throw an exception, but the library was compiled with no exception support. The exception was:\n%s\n", message);
    std::abort();
    #endif
}

void MR_C_ThrowExceptionOnCallbackExit(const char *message)
{
    #if MR_C_ENABLE_EXCEPTIONS
    if (mrbindc_details::queued_exception_for_callbacks)
    {
        *mrbindc_details::queued_exception_for_callbacks = std::make_exception_ptr(std::runtime_error(message));
    }
    else
    {
        std::fprintf(stderr, "Attempt to throw an exception on a callback exit, but no callback is running. The exception was:\n%s\n", message);
        std::abort();
    }
    ;
    #else
    std::fprintf(stderr, "Attempt to throw an exception on a callback exit, but the library was compiled with no exception support. The exception was:\n%s\n", message);
    std::abort();
    #endif
}

