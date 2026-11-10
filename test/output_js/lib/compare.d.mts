// The wrappers of the C bindings file `compare`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * The result of a three-way comparison between values that are not necessarily ordered with respect to each other.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_C_std_partial_ordering
{
    /**
     * A < B
     */
    less = -1,
    /**
     * A == B
     */
    equivalent = 0,
    /**
     * A > B
     */
    greater = 1,
    /**
     * A is not comparable to B
     */
    unordered = 2,
}

