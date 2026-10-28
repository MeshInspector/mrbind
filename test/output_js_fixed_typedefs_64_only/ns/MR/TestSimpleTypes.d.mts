// The C++ namespace `MR::TestSimpleTypes`.

import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

export { MR_TestSimpleTypes_ClassTemplate_uint64_t_Enum as ClassTemplate_uint64_t_Enum } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_E as E } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_E2 as E2 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_E3 as E3 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_E4 as E4 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_E5 as E5 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_ClassTemplate_uint64_t as ClassTemplate_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetInt as GetInt } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetInt as SetInt } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntDef as SetIntDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetIntPtr as GetIntPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntPtr as SetIntPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntPtrDef as SetIntPtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntPtrDefNull as SetIntPtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetIntRef as GetIntRef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntRef as SetIntRef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetIntRefDef as SetIntRefDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetVoidPtr as GetVoidPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtr as SetVoidPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtrDef as SetVoidPtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtrDefNull as SetVoidPtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetConstVoidPtr as GetConstVoidPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetConstVoidPtr as SetConstVoidPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetConstVoidPtrDef as SetConstVoidPtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetConstVoidPtrDefNull as SetConstVoidPtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetVoidPtrPtr as GetVoidPtrPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtrPtr as SetVoidPtrPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtrPtrDef as SetVoidPtrPtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetVoidPtrPtrDefNull as SetVoidPtrPtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnum as GetEnum } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum as SetEnum } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumDef as SetEnumDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnumPtr as GetEnumPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumPtr as SetEnumPtr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumPtrDef as SetEnumPtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumPtrDefNull as SetEnumPtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnumRef as GetEnumRef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumRef as SetEnumRef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnumRefDef as SetEnumRefDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnum2 as GetEnum2 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2 as SetEnum2 } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2Def as SetEnum2Def } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnum2Ptr as GetEnum2Ptr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2Ptr as SetEnum2Ptr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2PtrDef as SetEnum2PtrDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2PtrDefNull as SetEnum2PtrDefNull } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_GetEnum2Ref as GetEnum2Ref } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2Ref as SetEnum2Ref } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_SetEnum2RefDef as SetEnum2RefDef } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_CheckCharMaybeUnsigned as CheckCharMaybeUnsigned } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_CheckChar_unsigned_char_ptr as CheckChar } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_CheckChar_signed_char_ptr as checkChar_signed_char_ptr } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_blah_uint64_t as blah } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_blah_int64_t as blah_int64_t } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_FuncTemplate_uint64_t as funcTemplate_uint64_t } from "../../lib/_all.mjs";
export { MR_TestSimpleTypes_FuncTemplate_int as funcTemplate_int } from "../../lib/_all.mjs";

/**
 * Function templates.
 * Generated from function `MR::TestSimpleTypes::FuncTemplate<MR_C_uint64_t>`.
 *
 * Calls `MR_TestSimpleTypes_FuncTemplate_uint64_t()`.
 */
export declare function FuncTemplate(_1: number | bigint): bigint;
/**
 * Function templates.
 * Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
 *
 * Calls `MR_TestSimpleTypes_FuncTemplate_int()`.
 */
export declare function FuncTemplate(_1: number): number;
/** The overloads of `FuncTemplate` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
