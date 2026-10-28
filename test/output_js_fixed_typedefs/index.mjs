// The root module of the bindings.

import createModule from "./bleh.mjs";
import * as ffi from "./ffi.mjs";
import * as L from "./lib/_all.mjs";

export * as ffi from "./ffi.mjs";
export { CppObject, CppStruct, ScalarOutput, CppException, UnexpectedResultException } from "./ffi.mjs";

/** Instantiates the wasm module with `createModule(options)` (the Emscripten factory) and binds the wrappers to it. Returns the module. Does nothing if already initialized. */
export async function init(options)
{
    if (ffi.M !== null)
        return ffi.M;
    const module = await createModule(options);
    if (ffi.M === null)
        ffi.init(module);
    return ffi.M;
}

/** Binds the wrappers to an already instantiated Emscripten module. */
export function initWithModule(module)
{
    ffi.init(module);
}

export * as MR from "./ns/MR.mjs";
export * as phmap from "./ns/phmap.mjs";
export { bool_output } from "./lib/_all.mjs";
export { char_output } from "./lib/_all.mjs";
export { float_output } from "./lib/_all.mjs";
export { int32_t_output } from "./lib/_all.mjs";
export { int8_t_output } from "./lib/_all.mjs";
export { uint16_t_output } from "./lib/_all.mjs";
export { uint8_t_output } from "./lib/_all.mjs";

