// The wrappers of the C bindings file `MR/test_std_filesystem`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from function `MR::StdFilesystem::GetPath`.
 *
 * Calls `MR_StdFilesystem_GetPath()`.
 */
export declare function MR_StdFilesystem_GetPath(): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::StdFilesystem::SetPath`.
 *
 * Calls `MR_StdFilesystem_SetPath()`.
 */
export declare function MR_StdFilesystem_SetPath(_1: string): void;

/**
 * Generated from function `MR::StdFilesystem::SetPathConstRef`.
 *
 * Calls `MR_StdFilesystem_SetPathConstRef()`.
 */
export declare function MR_StdFilesystem_SetPathConstRef(_1: string): void;

/**
 * Generated from function `MR::StdFilesystem::SetPathDefTrivial`.
 *
 * Calls `MR_StdFilesystem_SetPathDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdFilesystem_SetPathDefTrivial(_1?: string | null): void;

/**
 * Generated from function `MR::StdFilesystem::SetPathDef`.
 *
 * Calls `MR_StdFilesystem_SetPathDef()`. `_1` defaults to `"hmm"`.
 */
export declare function MR_StdFilesystem_SetPathDef(_1?: string | null): void;

