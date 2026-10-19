package mrbind_test;

/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over a memory segment holding the struct. Instances created in Java own their memory (freed by the garbage collector),
 * those returned by reference from the bindings point into memory owned by something else, which they keep alive.
 */
public abstract class CppStruct implements Native
{
    protected final java.lang.foreign.MemorySegment segment;
    @java.lang.SuppressWarnings("unused") private final java.lang.Object owner; // Only here to keep the owner of a reference alive.

    /** Wraps a segment of the exact struct size. `owner` is kept alive as long as this wrapper is. */
    protected CppStruct(java.lang.foreign.MemorySegment segment, java.lang.Object owner)
    {
        this.segment = segment;
        this.owner = owner;
    }

    @java.lang.Override public final java.lang.foreign.MemorySegment rawPointer() {return segment;}
}
