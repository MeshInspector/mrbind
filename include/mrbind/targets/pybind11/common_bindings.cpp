#include MRBIND_HEADER

#include <type_traits>

MB_FILE

// `std::{true,false}_type`

MB_NAMESPACE(std, /*not inline*/, /*no comment*/)
MB_CLASS(struct, true_type, (std::true_type), /*no comment*/, /*no bases*/
    ,/*members:*/
    (field, static, (const bool), value, /*no comment*/)
)
MB_END_CLASS(true_type)
MB_CLASS(struct, false_type, (std::false_type), /*no comment*/, /*no bases*/
    ,/*members:*/
    (field, static, (const bool), value, /*no comment*/)
)
MB_END_CLASS(false_type)
MB_END_NAMESPACE(std)

MB_END_FILE
