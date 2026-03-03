#include "module.h"

namespace mrbind::C
{
    ModuleMap &GetRegisteredModules()
    {
        static ModuleMap ret;
        return ret;
    }
}
