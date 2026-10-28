// The classes of the mutable scalar parameters, see `ffi.ScalarOutput`.
import * as ffi from "../ffi.mjs";

/** An array of `bool`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class bool_output extends ffi.ScalarOutput<boolean> {}

/** An array of `char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class char_output extends ffi.ScalarOutput<number> {}

/** An array of `float`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class float_output extends ffi.ScalarOutput<number> {}

/** An array of `int`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class int_output extends ffi.ScalarOutput<number> {}

/** An array of `signed_char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class signed_char_output extends ffi.ScalarOutput<number> {}

/** An array of `unsigned_char`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class unsigned_char_output extends ffi.ScalarOutput<number> {}

/** An array of `unsigned_short`, for the mutable parameters of this type. See `ffi.ScalarOutput`. */
export declare class unsigned_short_output extends ffi.ScalarOutput<number> {}

