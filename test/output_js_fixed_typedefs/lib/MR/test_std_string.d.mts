// The wrappers of the C bindings file `MR/test_std_string`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdString::Set`.
 *
 * Calls `MR_StdString_Set()`.
 */
export declare function MR_StdString_Set(s: string): void;

/**
 * Generated from function `MR::StdString::SetWithDefault`.
 *
 * Calls `MR_StdString_SetWithDefault()`. `s` defaults to `"42"`.
 */
export declare function MR_StdString_SetWithDefault(s?: string | null): void;

/**
 * Generated from function `MR::StdString::Get`.
 *
 * Calls `MR_StdString_Get()`.
 */
export declare function MR_StdString_Get(): string;

/**
 * Generated from function `MR::StdString::WriteToRef`.
 *
 * Calls `MR_StdString_WriteToRef()`.
 */
export declare function MR_StdString_WriteToRef(ref: L.MR_C_std_string): void;

/**
 * Generated from function `MR::StdString::WriteToPtr`.
 *
 * Calls `MR_StdString_WriteToPtr()`.
 */
export declare function MR_StdString_WriteToPtr(ptr?: L.MR_C_std_string | null): void;

/**
 * Generated from function `MR::StdString::ConstRef`.
 *
 * Calls `MR_StdString_ConstRef()`.
 */
export declare function MR_StdString_ConstRef(s: string): void;

/**
 * Generated from function `MR::StdString::RvalueRef`.
 *
 * Calls `MR_StdString_RvalueRef()`.
 */
export declare function MR_StdString_RvalueRef(s: string): void;

/**
 * Generated from function `MR::StdString::ConstRvalueRef`.
 *
 * Calls `MR_StdString_ConstRvalueRef()`.
 */
export declare function MR_StdString_ConstRvalueRef(s: string): void;

