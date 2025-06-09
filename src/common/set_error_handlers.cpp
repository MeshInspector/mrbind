#include "set_error_handlers.h"

#include <cstdlib>
#include <exception>
#include <iostream>

namespace mrbind
{
    void SetErrorHandlers()
    {
        std::set_terminate([]{
            auto eptr = std::current_exception();
            bool first = true;

            if (eptr)
            {
                while (eptr)
                {
                    try
                    {
                        auto eptr_copy = std::move(eptr);
                        eptr = nullptr;

                        std::rethrow_exception(eptr_copy);
                    }
                    catch (std::exception &e)
                    {
                        if (first)
                        {
                            first = false;
                            std::cerr << "Program terminated with exception:\n";
                        }
                        std::cerr << e.what() << '\n';

                        try
                        {
                            std::rethrow_if_nested(e);
                        }
                        catch (...)
                        {
                            eptr = std::current_exception();
                        }
                    }
                    catch (...)
                    {
                        if (first)
                            std::cerr << "Program terminated with an unknown exception.\n";
                        else
                            std::cerr << "Unknown exception.\n";
                    }
                }
            }
            else
            {
                std::cerr << "Program terminated without an active exception.\n";
            }

            std::abort();
        });
    }
}
