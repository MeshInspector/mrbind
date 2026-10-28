#define MR_C_BUILD_LIBRARY
#include "__mrbind_c_details.h"

#include <cstdio>
#include <cstdlib>
#include <exception>
#include <string>
#include <vector>

#if !MR_C_ENABLE_EXCEPTIONS
void mrbindc_details::ThrowWithExceptionsDisabled(const char *message)
{
    std::fputs(message, stderr);
    std::abort();
}
#endif

#if MR_C_ENABLE_EXCEPTIONS
void mrbindc_details::CatchExceptionsLow(void (*func)(void *data), void *data)
{
    try
    {
        func(data);
    }
    catch (std::exception &e)
    {
        std::vector<std::string> messages; // Just in case, make this own the messages.
        std::vector<const char *> type_names;

        messages.push_back(e.what());
        type_names.push_back(typeid(e).name());

        auto lambda = [&](auto &self, std::exception &e) -> void
        {
            try
            {
                std::rethrow_if_nested(e);
            }
            catch (std::exception &sub_e)
            {
                messages.push_back(sub_e.what());
                type_names.push_back(typeid(sub_e).name());
                self(self, sub_e);
            }
            catch (...)
            {
                messages.push_back("Unknown exception.\n");
            }
        };
        lambda(lambda, e);

        std::vector<const char *> message_ptrs;
        message_ptrs.reserve(messages.size());
        for (const std::string &message : messages)
            message_ptrs.push_back(message.c_str());
        message_ptrs.push_back(nullptr);

        type_names.push_back(nullptr);

        MR_C_GetCurrentExceptionHandler()(message_ptrs.data(), type_names.data(), MR_C_GetCurrentExceptionHandlerUserData());
    }
    catch (...)
    {
        const char *const messages[2] = {"Unknown exception.\n", nullptr};
        const char *const type_names[1] = {nullptr};
        MR_C_GetCurrentExceptionHandler()(messages, type_names, MR_C_GetCurrentExceptionHandlerUserData());
    }
}

std::exception_ptr *mrbindc_details::queued_exception_for_callbacks = nullptr;
#endif

