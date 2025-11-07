public static partial class MR
{
    public static partial class Misc
    {
        /// This is the base class for all our classes.
        public class Object
        {
            private bool _IsOwningVal;
            /// Returns true if this is an owning instance. When disposed, it will either destroy the underlying C++ instance, or decrement its reference count.
            /// If false, we assume that the underlying C++ instance will live long enough.
            public bool _IsOwning() => _IsOwningVal;

            internal Object(bool NewIsOwning) {_IsOwningVal = NewIsOwning;}}

        /// This is used for optional in/out parameters, since `ref` can't be nullable.
        public class InOut<T> where T: unmanaged
        {
            public T Value;

            public InOut() {}
            public InOut(T NewValue) {Value = NewValue;}
        }

        /// This is used for optional in/out parameters with default arguments.
        /// Passing a null `InOutOpt` means "use default argument", and passing a one with a null `.Opt` means "I don't want to input/output via this parameter".
        public class InOutOpt<T> where T: unmanaged
        {
            public InOut<T>? Opt;

            // Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.
            public InOutOpt() {}
            // Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.
            public InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}
            // An implicit conversion for passing function parameters.
            public static implicit operator InOutOpt<T>(InOut<T>? NewOpt) {return new InOutOpt<T>(NewOpt);}
        }

        /// This is used for optional parameters with default arguments.
        /// Passing a null `InOpt` means "use default argument", and passing a one with a null `.Opt` means "pass nothing to the function".
        public class InOpt<T> where T: unmanaged
        {
            public T? Opt;

            public InOpt() {}
            public InOpt(T NewOpt) {Opt = NewOpt;}
            public static implicit operator InOpt<T>(T NewOpt) {return new InOpt<T>(NewOpt);}
        }

        /// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.
        /// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.
        public unsafe class Ref<T> where T: unmanaged
        {
            /// Should never be null.
            private T *Ptr;
            /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.
            internal Ref(T *NewPtr)
            {
                System.Diagnostics.Trace.Assert(NewPtr != null); Ptr = NewPtr;
            }

            public ref T Value => ref *Ptr;
        }
    }
}
