package mrbind_test;

/** Implemented by the wrappers of native objects. */
public interface Native
{
    /** The address of the native object. For opaque classes it's a zero-length segment, for exposed structs it covers the struct. */
    java.lang.foreign.MemorySegment rawPointer();
}
