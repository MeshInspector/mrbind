#include "set_error_handlers.h"

#include <cstdlib>
#include <exception>
#include <iostream>

namespace mrbind
{
    void SetErrorHandlers()
    {
        std::set_terminate([]{
            auto e = std::current_exception();

            if (e)
            {
                try
                {
                    std::rethrow_exception(e);
                }
                catch (std::exception &e)
                {
                    std::cerr << "Program terminated with exception:\n" << e.what() << '\n';
                }
                catch (...)
                {
                    std::cerr << "Program terminated with an unknown exception.\n";
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
