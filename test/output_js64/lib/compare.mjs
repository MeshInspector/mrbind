// The wrappers of the C bindings file `compare`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

export const MR_C_std_partial_ordering = Object.freeze({
    less: -1,
    [-1]: "less",
    equivalent: 0,
    [0]: "equivalent",
    greater: 1,
    [1]: "greater",
    unordered: 2,
    [2]: "unordered",
});

