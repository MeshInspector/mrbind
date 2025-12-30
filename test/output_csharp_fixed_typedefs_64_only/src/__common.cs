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
            public class _InOutOpt<T> where T: unmanaged
            {
                public InOut<T>? Opt;

                // Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.
                public _InOutOpt() {}
                // Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.
                public _InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}
                // An implicit conversion for passing function parameters.
                public static implicit operator _InOutOpt<T>(InOut<T>? NewOpt) {return new _InOutOpt<T>(NewOpt);}
            }

            /// This is used for optional parameters with default arguments.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `T` to pass it to the function.
            /// Passing a null `_InOpt` means "use default argument", and passing a one with a null `.Opt` means "pass nothing to the function".
            public class _InOpt<T> where T: unmanaged
            {
                public T? Opt;

                public _InOpt() {}
                public _InOpt(T NewOpt) {Opt = NewOpt;}
                public static implicit operator _InOpt<T>(T NewOpt) {return new _InOpt<T>(NewOpt);}
            }

            /// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.
            /// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.
            public unsafe class Ref<T> where T: unmanaged
            {
                /// Should never be null.
                private T *Ptr;
                /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.
                internal Ref(T *new_ptr)
                {
                    System.Diagnostics.Trace.Assert(new_ptr is not null);
                    Ptr = new_ptr;
                }

                public ref T Value => ref *Ptr;

                public static implicit operator T(Ref<T> wrapper) {return wrapper.Value;}
            }

            /// Wraps the object in a wrapper that indicates that it should be treated as a temporary object.
            /// This can be used with `_ByValue_...` function parameters, to indicate that the argument should be moved.
            /// See those structs for a longer explanation.
            public static _Moved<T> Move<T>(T new_value) {return new(new_value);}

            /// A wrapper for `T` that indicates that it's a temporary object, or should be treated as such.
            /// If you're calling a function that returns this, you can safely convert this to `T`.
            /// If you're calling a function that takes this as a parameter, use the `Move()` function to create this wrapper.
            public readonly struct _Moved<T>
            {
                public readonly T Value;
                internal _Moved(T new_value) {Value = new_value;}
                public static implicit operator T(_Moved<T> moved) {return moved.Value;}
            }

            internal enum _PassBy : int
            {
                default_construct,
                copy,
                move,
                default_arg,
                no_object,
            }

            /// This is a tag value. Pass it to functions having a `_MoveRef` parameter.
            /// This indicates that the reference parameter immediately following it is an rvalue reference.
            public static _MoveRef MoveRef = default;
            /// This is a tag type for passing rvalue references. Don't construct directly, prefer the `MoveRef` constant.
            public struct _MoveRef {}

            /// The type of `NullOpt`, see that for more details.
            public struct NullOptType {}
            /// This can be passed into `_ByValueOptOpt_...` parameters to indicate that you want to pass no object,
            ///   as opposed to using the default argument provided by the function.
            public static NullOptType NullOpt;

            /// This is used for optional `ReadOnlySpan<char>` function parameters. This is a specialized version that provides string interop.
            /// Pass `null` or `new()` to use the default argument.
            ///   Note that for the original `ReadOnlySpan<char>`, those result in an empty span instead.
            public ref struct ReadOnlyCharSpanOpt
            {
                public readonly bool HasValue;

                ReadOnlySpan<char> _Span;
                public ReadOnlySpan<char> Value
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return _Span;
                    }
                }

                public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr is not null; _Span = arr;}
                public ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {HasValue = true; _Span = span;}
                public ReadOnlyCharSpanOpt(string? str) {HasValue = str is not null; _Span = str;}

                // This is disabled because it makes conversion from `null` ambiguous.
                // public static implicit operator ReadOnlyCharSpanOpt(char[]? arr) {return new(arr);}
                public static implicit operator ReadOnlyCharSpanOpt(ReadOnlySpan<char> span) {return new(span);}
                public static implicit operator ReadOnlyCharSpanOpt(string? str) {return new(str);}
            }

            /// Stores a single heap-allocated value with a stable address, or a user-provided non-owning pointer.
            /// This is used for class fields of pointer types to const non-classes.
            /// Usage:
            /// * To read a property of type `Const_Box<T>?`, first check `is not null`. If it's not null, use `.Value` to read the value.
            /// * To modify the property, either assign a value of type `T`, or assign `null`.
            ///   Assigning a value will allocate its copy and make the underlying pointer point to it.
            public class Const_Box<T> : System.IDisposable where T: unmanaged
            {
                internal unsafe T *_UnderlyingPtr;
                bool _IsOwning;

                public unsafe ref readonly T Value => ref *_UnderlyingPtr;
                public bool IsOwning => _IsOwning;

                /// Allocate a new value.
                unsafe public Const_Box(T value)
                {
                    _IsOwning = true;
                    _UnderlyingPtr = (T *)MR.CS.Misc._Alloc((nuint)sizeof(T));
                    *_UnderlyingPtr = value;
                }

                // Implicitly convert from a value, allocating a copy of it.
                // Only `Const_Box<T>` has this, `Box<T>` intentionally doesn't.
                public static implicit operator Const_Box<T>(T value) {return new(value);}

                /// Store a non-owning pointer.
                unsafe public Const_Box(T *ptr)
                {
                    _IsOwning = false;
                    _UnderlyingPtr = ptr;
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwning)
                        return;
                    // Dealloc.
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Box() {Dispose(false);}
            }

            /// Stores a single heap-allocated value with a stable address, or a user-provided non-owning pointer.
            /// This is used for class fields of pointer types to mutable non-classes.
            /// Usage:
            /// * To read a property of type `Box<T>?`, first check `is not null`. If it's not null, use `.Value` to read the value.
            /// * To modify the property, either assign `new(value)` (to allocate a copy of the value and point to it), or assign `null`.
            ///   Since `.Value` returns a mutable ref, you can also assign to that to modify the pointee, assuming the property isn't null.
            public class Box<T> : Const_Box<T> where T: unmanaged
            {
                public new unsafe ref T Value => ref *_UnderlyingPtr;

                /// Allocate a new value.
                unsafe public Box(T value) : base(value) {}

                /// Store a non-owning pointer.
                unsafe public Box(T *ptr) : base(ptr) {}
            }

            /// An internal function for allocating memory through C++.
            internal static unsafe void *_Alloc(nuint size)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                extern static void *__MR_C_Alloc(nuint size);
                return __MR_C_Alloc(size);
            }

            /// An internal function for deallocating memory through C++.
            internal static unsafe void _Free(void *ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Free", ExactSpelling = true)]
                extern static void __MR_C_Free(void *ptr);
                __MR_C_Free(ptr);
            }

        }

        public static partial class Std
        {
            /// This is an empty tag type.
            public struct Greater_Int {}

            /// This is an empty tag type.
            public struct Greater_Void {}

            /// This is an empty tag type.
            public struct Less_Int {}

            /// This is an empty tag type.
            public struct Less_Void {}

            /// This is an empty tag type.
            public struct Monostate {}

            /// This is an empty tag type.
            public struct VariantIndex_0 {}

            /// This is an empty tag type.
            public struct VariantIndex_1 {}

            /// This is an empty tag type.
            public struct VariantIndex_2 {}

            /// This is an empty tag type.
            public struct VariantIndex_3 {}

        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayBool4_5
        {
            public MR.CS.ArrayBool5 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayBool5
        {
            public byte _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(10)]
        public struct ArrayInt10_20
        {
            public MR.CS.ArrayInt20 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ArrayInt2
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(20)]
        public struct ArrayInt20
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3_4
        {
            public MR.CS.ArrayInt4 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayInt4
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(42)]
        public struct ArrayInt42
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(43)]
        public struct ArrayInt43
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayInt4_5
        {
            public MR.CS.ArrayInt5 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayInt5
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayInt5_3_4
        {
            public MR.CS.ArrayInt3_4 _elem;
        }

        public static partial class CSharp
        {
            [System.Runtime.CompilerServices.InlineArray(10)]
            public struct ArrayE1_10_20
            {
                public MR.CS.CSharp.ArrayE1_20 _elem;
            }

            [System.Runtime.CompilerServices.InlineArray(20)]
            public struct ArrayE1_20
            {
                public MR.CS.CSharp.E1 _elem;
            }

            [System.Runtime.CompilerServices.InlineArray(42)]
            public struct ArrayE1_42
            {
                public MR.CS.CSharp.E1 _elem;
            }

            [System.Runtime.CompilerServices.InlineArray(10)]
            public struct ConstArrayE1_10_20
            {
                public MR.CS.CSharp.ConstArrayE1_20 _elem;
            }

            [System.Runtime.CompilerServices.InlineArray(20)]
            public struct ConstArrayE1_20
            {
                public MR.CS.CSharp.E1 _elem;
            }

            [System.Runtime.CompilerServices.InlineArray(42)]
            public struct ConstArrayE1_42
            {
                public MR.CS.CSharp.E1 _elem;
            }
        }

        [System.Runtime.CompilerServices.InlineArray(10)]
        public struct ConstArrayInt10_20
        {
            public MR.CS.ConstArrayInt20 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ConstArrayInt2
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(20)]
        public struct ConstArrayInt20
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ConstArrayInt3_4
        {
            public MR.CS.ConstArrayInt4 _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ConstArrayInt4
        {
            public int _elem;
        }

        [System.Runtime.CompilerServices.InlineArray(42)]
        public struct ConstArrayInt42
        {
            public int _elem;
        }

        public static partial class IncompleteArrayElemType
        {
            [System.Runtime.CompilerServices.InlineArray(4)]
            public struct ArrayE4
            {
                public MR.CS.IncompleteArrayElemType.E _elem;
            }
        }

        public static partial class CSharp
        {
            public unsafe struct ConstPtrExposedLayout
            {
                internal MR.CS.CSharp.ExposedLayout *Ptr;

                internal ConstPtrExposedLayout(MR.CS.CSharp.ExposedLayout *new_ptr) {Ptr = new_ptr;}

                public ref readonly MR.CS.CSharp.ExposedLayout this[nint i]
                {
                    get
                    {
                        return ref *(Ptr + i * 56);
                    }
                }
            }

            public unsafe struct PtrExposedLayout
            {
                internal MR.CS.CSharp.ExposedLayout *Ptr;

                internal PtrExposedLayout(MR.CS.CSharp.ExposedLayout *new_ptr) {Ptr = new_ptr;}

                public ref MR.CS.CSharp.ExposedLayout this[nint i]
                {
                    get
                    {
                        return ref *(Ptr + i * 56);
                    }
                }
            }
        }

        public static partial class Std
        {
            public unsafe struct ArrayString2
            {
                internal MR.CS.Std.String._Underlying *Ptr;

                internal ArrayString2(MR.CS.Std.String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.String this[nint i]
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(i >= 0 && i < 2);
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct ConstArrayString2
            {
                internal MR.CS.Std.Const_String._Underlying *Ptr;

                internal ConstArrayString2(MR.CS.Std.Const_String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.Const_String this[nint i]
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(i >= 0 && i < 2);
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.Const_String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }
        }

        public static partial class StdContainers
        {
            public unsafe struct ConstPtrA
            {
                internal MR.CS.StdContainers.Const_A._Underlying *Ptr;

                internal ConstPtrA(MR.CS.StdContainers.Const_A._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.StdContainers.Const_A this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.Const_A._Underlying *ptr, nint i);
                        return new(__MR_StdContainers_A_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct ConstPtrNonAssignable
            {
                internal MR.CS.StdContainers.Const_NonAssignable._Underlying *Ptr;

                internal ConstPtrNonAssignable(MR.CS.StdContainers.Const_NonAssignable._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.StdContainers.Const_NonAssignable this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.Const_NonAssignable._Underlying *ptr, nint i);
                        return new(__MR_StdContainers_NonAssignable_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct PtrA
            {
                internal MR.CS.StdContainers.A._Underlying *Ptr;

                internal PtrA(MR.CS.StdContainers.A._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.StdContainers.A this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.A._Underlying *ptr, nint i);
                        return new(__MR_StdContainers_A_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct PtrNonAssignable
            {
                internal MR.CS.StdContainers.NonAssignable._Underlying *Ptr;

                internal PtrNonAssignable(MR.CS.StdContainers.NonAssignable._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.StdContainers.NonAssignable this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.NonAssignable._Underlying *ptr, nint i);
                        return new(__MR_StdContainers_NonAssignable_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }
        }
    }
}
