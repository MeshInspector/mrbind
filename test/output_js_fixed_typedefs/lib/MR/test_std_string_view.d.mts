// The wrappers of the C bindings file `MR/test_std_string_view`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdStringView::Set`.
 *
 * Calls `MR_StdStringView_Set()`.
 */
export declare function MR_StdStringView_Set(s: string): void;

/**
 * Generated from function `MR::StdStringView::SetWithDefault`.
 *
 * Calls `MR_StdStringView_SetWithDefault()`. `s` defaults to `"42"`.
 */
export declare function MR_StdStringView_SetWithDefault(s?: string | null): void;

/**
 * Generated from function `MR::StdStringView::Get`.
 *
 * Calls `MR_StdStringView_Get()`.
 */
export declare function MR_StdStringView_Get(): L.MR_C_std_string_view;

/**
 * Generated from function `MR::StdStringView::WriteToRef`.
 *
 * Calls `MR_StdStringView_WriteToRef()`.
 */
export declare function MR_StdStringView_WriteToRef(ref: L.MR_C_std_string_view): void;

/**
 * Generated from function `MR::StdStringView::WriteToPtr`.
 *
 * Calls `MR_StdStringView_WriteToPtr()`.
 */
export declare function MR_StdStringView_WriteToPtr(ptr?: L.MR_C_std_string_view | null): void;

/**
 * Generated from function `MR::StdStringView::ConstRef`.
 *
 * Calls `MR_StdStringView_ConstRef()`.
 */
export declare function MR_StdStringView_ConstRef(s: string): void;

/**
 * Generated from function `MR::StdStringView::RvalueRef`.
 *
 * Calls `MR_StdStringView_RvalueRef()`.
 */
export declare function MR_StdStringView_RvalueRef(s: string): void;

/**
 * Generated from function `MR::StdStringView::ConstRvalueRef`.
 *
 * Calls `MR_StdStringView_ConstRvalueRef()`.
 */
export declare function MR_StdStringView_ConstRvalueRef(s: string): void;

