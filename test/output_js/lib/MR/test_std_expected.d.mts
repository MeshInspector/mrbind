// The wrappers of the C bindings file `MR/test_std_expected`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdExpected::GetExp`.
 *
 * Calls `MR_StdExpected_GetExp()`. The C++ function returns `std::expected<int, std::string>`: the value is returned and an error is thrown as `UnexpectedResultException`.
 */
export declare function MR_StdExpected_GetExp(): number;

/**
 * Generated from function `MR::StdExpected::SetExp`.
 *
 * Calls `MR_StdExpected_SetExp()`.
 */
export declare function MR_StdExpected_SetExp(_1: L.MR_C_std_expected_int_std_string): void;

/**
 * Generated from function `MR::StdExpected::SetExpConstRef`.
 *
 * Calls `MR_StdExpected_SetExpConstRef()`.
 */
export declare function MR_StdExpected_SetExpConstRef(_1: L.MR_C_std_expected_int_std_string): void;

/**
 * Generated from function `MR::StdExpected::SetExpDefTrivial`.
 *
 * Calls `MR_StdExpected_SetExpDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdExpected_SetExpDefTrivial(_1?: L.MR_C_std_expected_int_std_string | null): void;

/**
 * Generated from function `MR::StdExpected::SetExpDef`.
 *
 * Calls `MR_StdExpected_SetExpDef()`. `_1` defaults to `42`.
 */
export declare function MR_StdExpected_SetExpDef(_1?: L.MR_C_std_expected_int_std_string | null): void;

/**
 * Generated from function `MR::StdExpected::GetExpVoid`.
 *
 * Calls `MR_StdExpected_GetExpVoid()`. The C++ function returns `std::expected<void, float>`: the value is returned and an error is thrown as `UnexpectedResultException`.
 */
export declare function MR_StdExpected_GetExpVoid(): void;

/**
 * Generated from function `MR::StdExpected::SetExpVoid`.
 *
 * Calls `MR_StdExpected_SetExpVoid()`.
 */
export declare function MR_StdExpected_SetExpVoid(_1: L.MR_C_std_expected_void_float): void;

/**
 * Generated from function `MR::StdExpected::SetExpVoidConstRef`.
 *
 * Calls `MR_StdExpected_SetExpVoidConstRef()`.
 */
export declare function MR_StdExpected_SetExpVoidConstRef(_1: L.MR_C_std_expected_void_float): void;

/**
 * Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
 *
 * Calls `MR_StdExpected_SetExpVoidDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdExpected_SetExpVoidDefTrivial(_1?: L.MR_C_std_expected_void_float | null): void;

/**
 * Generated from function `MR::StdExpected::SetExpVoidDef`.
 *
 * Calls `MR_StdExpected_SetExpVoidDef()`. `_1` defaults to `std::expected<void, float>{}`.
 */
export declare function MR_StdExpected_SetExpVoidDef(_1?: L.MR_C_std_expected_void_float | null): void;

/**
 * Generated from function `MR::StdExpected::GetExpVec`.
 *
 * Calls `MR_StdExpected_GetExpVec()`.
 */
export declare function MR_StdExpected_GetExpVec(): L.MR_C_std_vector_std_expected_int_std_string;

