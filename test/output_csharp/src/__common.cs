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
            public bool _IsOwning => _IsOwningVal;

            /// Which objects need to be kept alive while this object exists? This is public just in case.
            public List<object>? _KeepAliveList;
            public void _KeepAlive(object obj)
            {
                if (_KeepAliveList == null)
                    _KeepAliveList = new();
                _KeepAliveList.Add(obj);
            }

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
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `T` to pass it to the function.
        /// Passing a null `InOpt` means "use default argument", and passing a one with a null `.Opt` means "pass nothing to the function".
        public class InOpt<T> where T: unmanaged
        {
            public T? Opt;

            public InOpt() {}
            public InOpt(T NewOpt) {Opt = NewOpt;}
            public static implicit operator InOpt<T>(T NewOpt) {return new InOpt<T>(NewOpt);}
        }

        /// This is used for optional parameters of class types with default arguments.
        /// This needs to be separate from `InOpt`, since the lack of `unmanaged` constraint seems to somehow interfere with the behavior of unmanaged types.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `T` to pass it to the function.
        public class InOptClass<T>
        {
            public T? Opt;

            public InOptClass() {}
            public InOptClass(T NewOpt) {Opt = NewOpt;}
            public static implicit operator InOptClass<T>(T NewOpt) {return new InOptClass<T>(NewOpt);}
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

        /// This is used as a function parameter when the underlying function receives a non-trivial C++ class by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `T` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn't a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
        public readonly struct ByValue<T, ConstT> where T: ConstT
        {
            internal readonly ConstT? Value;
            internal readonly _PassBy PassByMode;
            public ByValue() {PassByMode = _PassBy.default_construct;}
            public ByValue(ConstT NewValue) {Value = NewValue; PassByMode = _PassBy.copy;}
            public ByValue(_Moved<T> Moved) {Value = Moved.Value; PassByMode = _PassBy.move;}
            public static implicit operator ByValue<T, ConstT>(ConstT Arg) {return new ByValue<T, ConstT>(Arg);}
            public static implicit operator ByValue<T, ConstT>(_Moved<T> Arg) {return new ByValue<T, ConstT>(Arg);}
        }

        /// This can be used with `ByValue<...>` function parameters, to indicate that the argument should be moved.
        /// See that struct for a longer explanation.
        public static _Moved<T> Move<T>(T NewValue) {return new(NewValue);}

        /// Don't use directly, this is the return type of `Move()`. See that for explanation.
        public readonly struct _Moved<T>
        {
            internal readonly T Value;
            internal _Moved(T NewValue) {Value = NewValue;}
        }

        internal enum _PassBy : int
        {
            default_construct,
            copy,
            move,
            default_arg,
            no_object,
        }
    }
}
