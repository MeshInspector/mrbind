#include MRBIND_HEADER

static const char MRBIND_UNIQUE_VAR = []
{
    #define MR_ALIAS(alias, target) MRBind::pb11::RegisterCustomAlias(#alias, #target)

    MR_ALIAS( a                  ,    A.bar             );
    MR_ALIAS( A.a                ,    foo               );
    MR_ALIAS( MySet              ,    Set               );

    return char{};
}();
