#include "module.h"

namespace mrbind::CBindings
{
    ModuleMap &GetRegisteredModules()
    {
        static ModuleMap ret;
        return ret;
    }
}
