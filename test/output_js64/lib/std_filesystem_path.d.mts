// The wrappers of the C bindings file `std_filesystem_path`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores a filesystem path.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_filesystem_path extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_filesystem_path_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_filesystem_path_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_filesystem_path);
    /**
     * Constructs a new instance.
     *
     * Calls `MR_C_std_filesystem_path_ConstructFrom()`.
     */
    constructor(other: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_std_filesystem_path_AssignFromAnother()`.
     */
    assignFromAnother(other: L.MR_C_std_filesystem_path): void;
    /**
     * Assigns the contents.
     *
     * Calls `MR_C_std_filesystem_path_AssignFrom()`.
     */
    assignFrom(other: string): void;
    /**
     * Get the contents as a UTF8-encoded string.
     *
     * Calls `MR_C_std_filesystem_path_string()`.
     */
    string(): string;
}

