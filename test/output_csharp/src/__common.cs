public static partial class MR
{
    public static partial class CS
    {
        public static partial class Misc
        {
            /// This is the base class for all our classes.
            public abstract class Object
            {
                protected bool _IsOwningVal;
                /// Returns true if this is an owning instance, and when disposed, will destroy the underlying C++ instance.
                /// If false, we assume that the underlying C++ instance will live long enough.
                public virtual bool _IsOwning => _IsOwningVal;

                /// Which objects need to be kept alive while this object exists? This is public just in case.
                public List<object>? _KeepAliveList;
                public void _KeepAlive(object obj)
                {
                    if (_KeepAliveList is null)
                        _KeepAliveList = new();
                    _KeepAliveList.Add(obj);
                }

                internal Object(bool is_owning) {_IsOwningVal = is_owning;}
            }

            /// This is the base class for those of our classes that are backed by `std::shared_ptr`.
            public abstract class SharedObject : Object
            {
                /// This checks if the `shared_ptr` itself is owning or not, rather than whether we own our `shared_ptr`, which isn't a given.
                /// The derived classes have to implement this, since it depends on the specific `shared_ptr` type.
                public abstract override bool _IsOwning {get;}
                /// This checks if we own the underlying `shared_ptr` instance, regardless of whether it owns the underlying object, which is orthogonal.
                /// We repurpose `_IsOwningVal` for this.
                public bool _IsOwningSharedPtr => _IsOwningVal;

                internal SharedObject(bool is_owning) : base(is_owning) {}
            }

            /// This is used for optional in/out parameters, since `ref` can't be nullable.
            public class InOut<T> where T: unmanaged
            {
                public T Value;

                public InOut() {}
                public InOut(T NewValue) {Value = NewValue;}
            }

            /// This is used for optional in/out parameters with default arguments.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `InOut<T>` to pass it to the function.
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

            /// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.
            /// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.
            public unsafe class Ref<T> where T: unmanaged
            {
                /// Should never be null.
                private T *Ptr;
                /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.
                internal Ref(T *NewPtr)
                {
                    System.Diagnostics.Trace.Assert(NewPtr is not null);
                    Ptr = NewPtr;
                }

                public ref T Value => ref *Ptr;
            }

            /// This can be used with `ByValue...` function parameters, to indicate that the argument should be moved.
            /// See those structs for a longer explanation.
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

            /// This is used for optional `ReadOnlySpan<char>` function parameters. This is a specialized version that provides string interop.
            /// Pass `null` or `new()` to use the default argument.
            ///   Note that for the original `ReadOnlySpan`, those result in an empty span instead.
            public ref struct ReadOnlyCharSpanOpt
            {
                public readonly bool HasValue;

                ReadOnlySpan<char> Span;
                public ReadOnlySpan<char> Value
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Span;
                    }
                }

                public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr is not null; Span = arr;}
                public ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {HasValue = true; Span = span;}
                public ReadOnlyCharSpanOpt(string? str) {HasValue = str is not null; Span = str;}

                // This is disabled because it makes conversion from `null` ambiguous.
                // public static implicit operator ReadOnlyCharSpanOpt(char[]? arr) {return new(arr);}
                public static implicit operator ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {return new(span);}
                public static implicit operator ReadOnlyCharSpanOpt(string? str) {return new(str);}
            }

        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayBool4_5
        {
            MR.CS.ArrayBool5 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayBool5
        {
            byte elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ArrayInt2
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3_4
        {
            MR.CS.ArrayInt4 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayInt4
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ConstArrayInt2
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ConstArrayInt3_4
        {
            MR.CS.ConstArrayInt4 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ConstArrayInt4
        {
            int elem;
        }

        public static partial class Std
        {
            public unsafe struct ArrayString2
            {
                MR.CS.Std.String._Underlying *Ptr;

                internal ArrayString2(MR.CS.Std.String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.String this[int i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct ConstArrayString2
            {
                MR.CS.Std.ConstString._Underlying *Ptr;

                internal ConstArrayString2(MR.CS.Std.ConstString._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.ConstString this[int i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.ConstString._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }
        }
    }
}
