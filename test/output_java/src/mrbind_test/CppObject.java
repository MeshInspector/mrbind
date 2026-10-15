package mrbind_test;

/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when the wrapper is garbage-collected or closed),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 */
public abstract class CppObject implements Native, AutoCloseable
{
    // Runs the destructor from the cleaner. Must not reference the wrapper, or it would never be collected.
    private static final class State implements Runnable
    {
        final java.lang.foreign.MemorySegment ptr;
        final java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy;
        volatile boolean owned = true;

        State(java.lang.foreign.MemorySegment ptr, java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy)
        {
            this.ptr = ptr;
            this.destroy = destroy;
        }

        @Override public void run()
        {
            if (owned)
            {
                owned = false;
                destroy.accept(ptr);
            }
        }
    }

    private final java.lang.foreign.MemorySegment ptr;
    private final State state; // Null if not owned.
    private final java.lang.ref.Cleaner.Cleanable cleanable;
    @SuppressWarnings("unused") private final Object owner; // Only here to keep the owner of a reference alive.
    private boolean closed;

    /**
     * Wraps a pointer from the C bindings. If `destroy` is not null, the object is owned and `destroy` is called on it when the wrapper dies.
     * `owner` is kept alive as long as this wrapper is.
     */
    @SuppressWarnings("this-escape")
    protected CppObject(java.lang.foreign.MemorySegment ptr, java.util.function.Consumer<java.lang.foreign.MemorySegment> destroy, Object owner)
    {
        if (ptr.address() == 0)
            throw new NullPointerException("The C bindings returned a null pointer.");
        this.ptr = ptr;
        this.owner = owner;
        if (destroy != null)
        {
            state = new State(ptr, destroy);
            cleanable = Ffi.CLEANER.register(this, state);
        }
        else
        {
            state = null;
            cleanable = null;
        }
    }

    @Override public final java.lang.foreign.MemorySegment rawPointer()
    {
        if (closed)
            throw new IllegalStateException("This object was closed or moved from.");
        return ptr;
    }

    /** Does this wrapper own its C++ object? */
    public final boolean isOwned() {return state != null && state.owned;}

    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    @Override public final void close()
    {
        closed = true;
        if (cleanable != null)
            cleanable.clean();
    }

    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    public final java.lang.foreign.MemorySegment release()
    {
        if (!isOwned())
            throw new IllegalStateException("This object is not owned by the wrapper, it can't be moved from.");
        state.owned = false;
        closed = true;
        return ptr;
    }
}
