// Definitions of the static data members that the test headers only declare.
// Without them `libbleh.so` can't be loaded: unlike functions, data symbols are resolved when the library is loaded.
#include <input/MR/test_matching_layout.h>
#include <input/MR/test_member_vars.h>

int MR::MemberVars::A::z = 0;
const int MR::MemberVars::A::w = 0;
int MR::MatchingLayout::A::x = 0;
