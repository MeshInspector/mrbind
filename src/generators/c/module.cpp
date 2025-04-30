#include "module.h"

namespace mrbind::CBindings
{
    namespace detail
    {
        ModuleMap &GetRegisteredModules()
        {
            static ModuleMap ret;
            return ret;
        }
    }
}