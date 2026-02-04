public static partial class MR
{
    public static partial class CS
    {
        public static partial class Misc
        {
            /// This is the base class for all our classes.
            public abstract class Object<T> : MR.CS.Misc.KeepAliveHolder<T>
            {
                protected bool _IsOwningVal;
                /// Returns true if this is an owning instance, and when disposed, will destroy the underlying C++ instance.
                /// If false, we assume that the underlying C++ instance will live long enough.
                public virtual bool _IsOwning => _IsOwningVal;

                internal Object(bool is_owning) {_IsOwningVal = is_owning;}
            }

            /// This is the base class for those of our classes that are backed by `std::shared_ptr`.
            public abstract class SharedObject<T> : Object<T>
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

                /// Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.
                public _InOutOpt() {}
                /// Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.
                public _InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}
                /// An implicit conversion for passing function parameters.
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

            /// A reference to a C object. This is sometimes used to return optional references, since `ref` can't be nullable. Or to return references from operators, since those can't return `ref`s.
            /// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.
            public unsafe class Ref<T> where T: unmanaged
            {
                // Should never be null.
                private T *Ptr;
                // Should never be given a null pointer.
                internal Ref(T *new_ptr)
                {
                    System.Diagnostics.Trace.Assert(new_ptr is not null);
                    Ptr = new_ptr;
                }
                // 
                internal unsafe Ref(ref T new_ref)
                {
                    fixed (T *new_ptr = &new_ref)
                    {
                        // Smuggling fixed pointers like this seems sketchy at first, but we deal with `ref`s created from pointers all the time, and assume they don't break.
                        Ptr = new_ptr;
                    }
                }

                public ref T Value => ref *Ptr;

                public static implicit operator T(Ref<T> wrapper) {return wrapper.Value;}
            }

            /// A reference to a C object. This is sometimes used to return optional references, since `ref` can't be nullable. Or to return references from operators, since those can't return `ref`s.
            /// This object itself isn't nullable, we return `ConstRef<T>?` when nullability is needed.
            public unsafe class ConstRef<T> where T: unmanaged
            {
                // Should never be null.
                private T *Ptr;
                // Should never be given a null pointer.
                internal ConstRef(T *new_ptr)
                {
                    System.Diagnostics.Trace.Assert(new_ptr is not null);
                    Ptr = new_ptr;
                }
                // 
                internal unsafe ConstRef(ref readonly T new_ref)
                {
                    fixed (T *new_ptr = &new_ref)
                    {
                        // Smuggling fixed pointers like this seems sketchy at first, but we deal with `ref`s created from pointers all the time, and assume they don't break.
                        Ptr = new_ptr;
                    }
                }

                public ref readonly T Value => ref *Ptr;

                public static implicit operator T(ConstRef<T> wrapper) {return wrapper.Value;}
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

            /// Stores a single heap-allocated value with a stable address, or a user-provided non-owning pointer.
            /// This is used for class fields of pointer types to const non-classes.
            /// Usage:
            /// * To read a property of type `Const_Box<T>?`, first check `is not null`. If it's not null, use `.Value` to read the value.
            /// * To modify the property, either assign a value of type `T`, or assign `null`.
            ///   Assigning a value will allocate its copy and make the underlying pointer point to it.
            public class Const_Box<T> : MR.CS.Misc.KeepAliveHolder<Const_Box<T>>, System.IDisposable where T: unmanaged
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

                /// Implicitly convert from a value, allocating a copy of it.
                /// Only `Const_Box<T>` has this, `Box<T>` intentionally doesn't.
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

            /// This is the base classes that keep other classes alive.
            /// This is generic to keep static fields separate.
            public abstract class KeepAliveHolder<T>
            {
                /// Which objects need to be kept alive while this object exists?
                Dictionary<string, HashSet<object>>? _KeepAliveData;
                static Dictionary<string, HashSet<object>>? _StaticKeepAliveData;

                /// A special holder for the enclosing object when returning a reference to its subobject.
                public object? _KeepAliveEnclosingObject = null;

                /// Keeps `obj` alive as long as this object exists.
                /// If `key` is specified, it's an optional tag for this object.
                public void _KeepAlive(object obj, string key = "")
                {
                    if (_KeepAliveData is null)
                        _KeepAliveData = new();
                    if (!_KeepAliveData.ContainsKey(key))
                        _KeepAliveData[key] = new();
                    _KeepAliveData[key].Add(obj);
                }
                public static void _StaticKeepAlive(object obj, string key = "")
                {
                    if (_StaticKeepAliveData is null)
                        _StaticKeepAliveData = new();
                    if (!_StaticKeepAliveData.ContainsKey(key))
                        _StaticKeepAliveData[key] = new();
                    _StaticKeepAliveData[key].Add(obj);
                }

                /// Discards the objects kept alive by this object.
                /// If `key` is not empty, only discards the objects with the same key. Otherwise discards all of them.
                /// This intentionally doesn't discard `_KeepAliveEnclosingObject`.
                public void _DiscardKeepAlive(string key = "")
                {
                    if (_KeepAliveData is null)
                        return;
                    if (key == "")
                    {
                        _KeepAliveData.Clear(); // I could also make it null, but I don't think it's worth it.
                        return;
                    }
                    _KeepAliveData[key].Clear(); // Or we could `.Remove(key)`, but keeping a slot in the map looks better to me.
                }
                public static void _StaticDiscardKeepAlive(string key = "")
                {
                    if (_StaticKeepAliveData is null)
                        return;
                    if (key == "")
                    {
                        _StaticKeepAliveData.Clear(); // I could also make it null, but I don't think it's worth it.
                        return;
                    }
                    _StaticKeepAliveData[key].Clear(); // Or we could `.Remove(key)`, but keeping a slot in the map looks better to me.
                }
            }

            /// This is thrown when the underlying C++ function returns an error via `expected<>`.
            public class UnexpectedResultException : System.Exception
            {
                public UnexpectedResultException() {}
                public UnexpectedResultException(string message) : base(message) {}
                public UnexpectedResultException(string message, Exception inner) : base(message, inner) {}
            }

            /// This is thrown when dereferencing an invalid enumerator (a C++ iterator).
            public class InvalidEnumeratorExpression : System.InvalidOperationException
            {
                public InvalidEnumeratorExpression() {}
                public InvalidEnumeratorExpression(string message) : base(message) {}
                public InvalidEnumeratorExpression(string message, Exception inner) : base(message, inner) {}
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

        public struct ArrayBool4_5
        {
            public MR.CS.ArrayBool5 _0;
            public MR.CS.ArrayBool5 _1;
            public MR.CS.ArrayBool5 _2;
            public MR.CS.ArrayBool5 _3;

            public unsafe ref MR.CS.ArrayBool5 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ArrayBool5 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ArrayBool5
        {
            public unsafe fixed byte _elem[5];
            public unsafe ref byte this[nint i] => ref _elem[i];
        }

        public struct ArrayInt10_20
        {
            public MR.CS.ArrayInt20 _0;
            public MR.CS.ArrayInt20 _1;
            public MR.CS.ArrayInt20 _2;
            public MR.CS.ArrayInt20 _3;
            public MR.CS.ArrayInt20 _4;
            public MR.CS.ArrayInt20 _5;
            public MR.CS.ArrayInt20 _6;
            public MR.CS.ArrayInt20 _7;
            public MR.CS.ArrayInt20 _8;
            public MR.CS.ArrayInt20 _9;

            public unsafe ref MR.CS.ArrayInt20 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ArrayInt20 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ArrayInt2
        {
            public unsafe fixed int _elem[2];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt20
        {
            public unsafe fixed int _elem[20];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt3
        {
            public unsafe fixed int _elem[3];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt3_4
        {
            public MR.CS.ArrayInt4 _0;
            public MR.CS.ArrayInt4 _1;
            public MR.CS.ArrayInt4 _2;

            public unsafe ref MR.CS.ArrayInt4 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ArrayInt4 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ArrayInt4
        {
            public unsafe fixed int _elem[4];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt42
        {
            public unsafe fixed int _elem[42];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt43
        {
            public unsafe fixed int _elem[43];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt4_5
        {
            public MR.CS.ArrayInt5 _0;
            public MR.CS.ArrayInt5 _1;
            public MR.CS.ArrayInt5 _2;
            public MR.CS.ArrayInt5 _3;

            public unsafe ref MR.CS.ArrayInt5 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ArrayInt5 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ArrayInt5
        {
            public unsafe fixed int _elem[5];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ArrayInt5_3_4
        {
            public MR.CS.ArrayInt3_4 _0;
            public MR.CS.ArrayInt3_4 _1;
            public MR.CS.ArrayInt3_4 _2;
            public MR.CS.ArrayInt3_4 _3;
            public MR.CS.ArrayInt3_4 _4;

            public unsafe ref MR.CS.ArrayInt3_4 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ArrayInt3_4 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public static partial class CSharp
        {
            public struct ArrayE1_10_20
            {
                public MR.CS.CSharp.ArrayE1_20 _0;
                public MR.CS.CSharp.ArrayE1_20 _1;
                public MR.CS.CSharp.ArrayE1_20 _2;
                public MR.CS.CSharp.ArrayE1_20 _3;
                public MR.CS.CSharp.ArrayE1_20 _4;
                public MR.CS.CSharp.ArrayE1_20 _5;
                public MR.CS.CSharp.ArrayE1_20 _6;
                public MR.CS.CSharp.ArrayE1_20 _7;
                public MR.CS.CSharp.ArrayE1_20 _8;
                public MR.CS.CSharp.ArrayE1_20 _9;

                public unsafe ref MR.CS.CSharp.ArrayE1_20 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.ArrayE1_20 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ArrayE1_20
            {
                public MR.CS.CSharp.E1 _0;
                public MR.CS.CSharp.E1 _1;
                public MR.CS.CSharp.E1 _2;
                public MR.CS.CSharp.E1 _3;
                public MR.CS.CSharp.E1 _4;
                public MR.CS.CSharp.E1 _5;
                public MR.CS.CSharp.E1 _6;
                public MR.CS.CSharp.E1 _7;
                public MR.CS.CSharp.E1 _8;
                public MR.CS.CSharp.E1 _9;
                public MR.CS.CSharp.E1 _10;
                public MR.CS.CSharp.E1 _11;
                public MR.CS.CSharp.E1 _12;
                public MR.CS.CSharp.E1 _13;
                public MR.CS.CSharp.E1 _14;
                public MR.CS.CSharp.E1 _15;
                public MR.CS.CSharp.E1 _16;
                public MR.CS.CSharp.E1 _17;
                public MR.CS.CSharp.E1 _18;
                public MR.CS.CSharp.E1 _19;

                public unsafe ref MR.CS.CSharp.E1 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.E1 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ArrayE1_42
            {
                public MR.CS.CSharp.E1 _0;
                public MR.CS.CSharp.E1 _1;
                public MR.CS.CSharp.E1 _2;
                public MR.CS.CSharp.E1 _3;
                public MR.CS.CSharp.E1 _4;
                public MR.CS.CSharp.E1 _5;
                public MR.CS.CSharp.E1 _6;
                public MR.CS.CSharp.E1 _7;
                public MR.CS.CSharp.E1 _8;
                public MR.CS.CSharp.E1 _9;
                public MR.CS.CSharp.E1 _10;
                public MR.CS.CSharp.E1 _11;
                public MR.CS.CSharp.E1 _12;
                public MR.CS.CSharp.E1 _13;
                public MR.CS.CSharp.E1 _14;
                public MR.CS.CSharp.E1 _15;
                public MR.CS.CSharp.E1 _16;
                public MR.CS.CSharp.E1 _17;
                public MR.CS.CSharp.E1 _18;
                public MR.CS.CSharp.E1 _19;
                public MR.CS.CSharp.E1 _20;
                public MR.CS.CSharp.E1 _21;
                public MR.CS.CSharp.E1 _22;
                public MR.CS.CSharp.E1 _23;
                public MR.CS.CSharp.E1 _24;
                public MR.CS.CSharp.E1 _25;
                public MR.CS.CSharp.E1 _26;
                public MR.CS.CSharp.E1 _27;
                public MR.CS.CSharp.E1 _28;
                public MR.CS.CSharp.E1 _29;
                public MR.CS.CSharp.E1 _30;
                public MR.CS.CSharp.E1 _31;
                public MR.CS.CSharp.E1 _32;
                public MR.CS.CSharp.E1 _33;
                public MR.CS.CSharp.E1 _34;
                public MR.CS.CSharp.E1 _35;
                public MR.CS.CSharp.E1 _36;
                public MR.CS.CSharp.E1 _37;
                public MR.CS.CSharp.E1 _38;
                public MR.CS.CSharp.E1 _39;
                public MR.CS.CSharp.E1 _40;
                public MR.CS.CSharp.E1 _41;

                public unsafe ref MR.CS.CSharp.E1 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.E1 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ArrayExposedLayout3
            {
                public MR.CS.CSharp.ExposedLayout _0;
                public MR.CS.CSharp.ExposedLayout _1;
                public MR.CS.CSharp.ExposedLayout _2;

                public unsafe ref MR.CS.CSharp.ExposedLayout this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.ExposedLayout *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ConstArrayE1_10_20
            {
                public MR.CS.CSharp.ConstArrayE1_20 _0;
                public MR.CS.CSharp.ConstArrayE1_20 _1;
                public MR.CS.CSharp.ConstArrayE1_20 _2;
                public MR.CS.CSharp.ConstArrayE1_20 _3;
                public MR.CS.CSharp.ConstArrayE1_20 _4;
                public MR.CS.CSharp.ConstArrayE1_20 _5;
                public MR.CS.CSharp.ConstArrayE1_20 _6;
                public MR.CS.CSharp.ConstArrayE1_20 _7;
                public MR.CS.CSharp.ConstArrayE1_20 _8;
                public MR.CS.CSharp.ConstArrayE1_20 _9;

                public unsafe ref MR.CS.CSharp.ConstArrayE1_20 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.ConstArrayE1_20 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ConstArrayE1_20
            {
                public MR.CS.CSharp.E1 _0;
                public MR.CS.CSharp.E1 _1;
                public MR.CS.CSharp.E1 _2;
                public MR.CS.CSharp.E1 _3;
                public MR.CS.CSharp.E1 _4;
                public MR.CS.CSharp.E1 _5;
                public MR.CS.CSharp.E1 _6;
                public MR.CS.CSharp.E1 _7;
                public MR.CS.CSharp.E1 _8;
                public MR.CS.CSharp.E1 _9;
                public MR.CS.CSharp.E1 _10;
                public MR.CS.CSharp.E1 _11;
                public MR.CS.CSharp.E1 _12;
                public MR.CS.CSharp.E1 _13;
                public MR.CS.CSharp.E1 _14;
                public MR.CS.CSharp.E1 _15;
                public MR.CS.CSharp.E1 _16;
                public MR.CS.CSharp.E1 _17;
                public MR.CS.CSharp.E1 _18;
                public MR.CS.CSharp.E1 _19;

                public unsafe ref MR.CS.CSharp.E1 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.E1 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }

            public struct ConstArrayE1_42
            {
                public MR.CS.CSharp.E1 _0;
                public MR.CS.CSharp.E1 _1;
                public MR.CS.CSharp.E1 _2;
                public MR.CS.CSharp.E1 _3;
                public MR.CS.CSharp.E1 _4;
                public MR.CS.CSharp.E1 _5;
                public MR.CS.CSharp.E1 _6;
                public MR.CS.CSharp.E1 _7;
                public MR.CS.CSharp.E1 _8;
                public MR.CS.CSharp.E1 _9;
                public MR.CS.CSharp.E1 _10;
                public MR.CS.CSharp.E1 _11;
                public MR.CS.CSharp.E1 _12;
                public MR.CS.CSharp.E1 _13;
                public MR.CS.CSharp.E1 _14;
                public MR.CS.CSharp.E1 _15;
                public MR.CS.CSharp.E1 _16;
                public MR.CS.CSharp.E1 _17;
                public MR.CS.CSharp.E1 _18;
                public MR.CS.CSharp.E1 _19;
                public MR.CS.CSharp.E1 _20;
                public MR.CS.CSharp.E1 _21;
                public MR.CS.CSharp.E1 _22;
                public MR.CS.CSharp.E1 _23;
                public MR.CS.CSharp.E1 _24;
                public MR.CS.CSharp.E1 _25;
                public MR.CS.CSharp.E1 _26;
                public MR.CS.CSharp.E1 _27;
                public MR.CS.CSharp.E1 _28;
                public MR.CS.CSharp.E1 _29;
                public MR.CS.CSharp.E1 _30;
                public MR.CS.CSharp.E1 _31;
                public MR.CS.CSharp.E1 _32;
                public MR.CS.CSharp.E1 _33;
                public MR.CS.CSharp.E1 _34;
                public MR.CS.CSharp.E1 _35;
                public MR.CS.CSharp.E1 _36;
                public MR.CS.CSharp.E1 _37;
                public MR.CS.CSharp.E1 _38;
                public MR.CS.CSharp.E1 _39;
                public MR.CS.CSharp.E1 _40;
                public MR.CS.CSharp.E1 _41;

                public unsafe ref MR.CS.CSharp.E1 this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.CSharp.E1 *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }
        }

        public struct ConstArrayInt10_20
        {
            public MR.CS.ConstArrayInt20 _0;
            public MR.CS.ConstArrayInt20 _1;
            public MR.CS.ConstArrayInt20 _2;
            public MR.CS.ConstArrayInt20 _3;
            public MR.CS.ConstArrayInt20 _4;
            public MR.CS.ConstArrayInt20 _5;
            public MR.CS.ConstArrayInt20 _6;
            public MR.CS.ConstArrayInt20 _7;
            public MR.CS.ConstArrayInt20 _8;
            public MR.CS.ConstArrayInt20 _9;

            public unsafe ref MR.CS.ConstArrayInt20 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ConstArrayInt20 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ConstArrayInt2
        {
            public unsafe fixed int _elem[2];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ConstArrayInt20
        {
            public unsafe fixed int _elem[20];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ConstArrayInt3_4
        {
            public MR.CS.ConstArrayInt4 _0;
            public MR.CS.ConstArrayInt4 _1;
            public MR.CS.ConstArrayInt4 _2;

            public unsafe ref MR.CS.ConstArrayInt4 this[nint i]
            {
                get
                {
                    fixed (MR.CS.ConstArrayInt4 *ptr = &_0)
                    {
                        return ref *(ptr + i);
                    }
                }
            }
        }

        public struct ConstArrayInt4
        {
            public unsafe fixed int _elem[4];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public struct ConstArrayInt42
        {
            public unsafe fixed int _elem[42];
            public unsafe ref int this[nint i] => ref _elem[i];
        }

        public static partial class IncompleteArrayElemType
        {
            public struct ArrayE4
            {
                public MR.CS.IncompleteArrayElemType.E _0;
                public MR.CS.IncompleteArrayElemType.E _1;
                public MR.CS.IncompleteArrayElemType.E _2;
                public MR.CS.IncompleteArrayElemType.E _3;

                public unsafe ref MR.CS.IncompleteArrayElemType.E this[nint i]
                {
                    get
                    {
                        fixed (MR.CS.IncompleteArrayElemType.E *ptr = &_0)
                        {
                            return ref *(ptr + i);
                        }
                    }
                }
            }
        }

        public static partial class CSharp
        {
            public unsafe struct ConstPtrExposedLayout : IEquatable<ConstPtrExposedLayout>
            {
                public readonly ref readonly MR.CS.CSharp.ExposedLayout Deref()
                {
                    return ref *(Ptr);
                }
                public unsafe void Incr()
                {
                    Ptr = Ptr + 56;
                }
                public unsafe void Decr()
                {
                    Ptr = Ptr + -56;
                }

                internal MR.CS.CSharp.ExposedLayout *Ptr;

                internal ConstPtrExposedLayout(MR.CS.CSharp.ExposedLayout *new_ptr) {Ptr = new_ptr;}

                public ref readonly MR.CS.CSharp.ExposedLayout this[nint i]
                {
                    get
                    {
                        return ref *(Ptr + i * 56);
                    }
                }

                public unsafe MR.CS.CSharp.ExposedLayout *GetPointer() => Ptr;

                public static unsafe bool operator==(ConstPtrExposedLayout a, ConstPtrExposedLayout b) {return a.Equals(b);}
                public static bool operator!=(ConstPtrExposedLayout a, ConstPtrExposedLayout b) {return !a.Equals(b);}
                public readonly bool Equals(ConstPtrExposedLayout other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct ConstPtrLifetimesA : IEquatable<ConstPtrLifetimesA>
            {
                public readonly MR.CS.CSharp.Const_LifetimesA Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.Const_LifetimesA._Underlying *ptr, nint i);
                    Ptr = __MR_CSharp_LifetimesA_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.Const_LifetimesA._Underlying *ptr, nint i);
                    Ptr = __MR_CSharp_LifetimesA_OffsetPtr(Ptr, -1);
                }

                internal MR.CS.CSharp.Const_LifetimesA._Underlying *Ptr;

                internal ConstPtrLifetimesA(MR.CS.CSharp.Const_LifetimesA._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.CSharp.Const_LifetimesA this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Const_LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.Const_LifetimesA._Underlying *ptr, nint i);
                        return new(__MR_CSharp_LifetimesA_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }

                public static unsafe bool operator==(ConstPtrLifetimesA a, ConstPtrLifetimesA b) {return a.Equals(b);}
                public static bool operator!=(ConstPtrLifetimesA a, ConstPtrLifetimesA b) {return !a.Equals(b);}
                public readonly bool Equals(ConstPtrLifetimesA other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct PtrExposedLayout : IEquatable<PtrExposedLayout>
            {
                public readonly ref MR.CS.CSharp.ExposedLayout Deref()
                {
                    return ref *(Ptr);
                }
                public unsafe void Incr()
                {
                    Ptr = Ptr + 56;
                }
                public unsafe void Decr()
                {
                    Ptr = Ptr + -56;
                }

                internal MR.CS.CSharp.ExposedLayout *Ptr;

                internal PtrExposedLayout(MR.CS.CSharp.ExposedLayout *new_ptr) {Ptr = new_ptr;}

                public ref MR.CS.CSharp.ExposedLayout this[nint i]
                {
                    get
                    {
                        return ref *(Ptr + i * 56);
                    }
                }

                public unsafe MR.CS.CSharp.ExposedLayout *GetPointer() => Ptr;

                public static unsafe bool operator==(PtrExposedLayout a, PtrExposedLayout b) {return a.Equals(b);}
                public static bool operator!=(PtrExposedLayout a, PtrExposedLayout b) {return !a.Equals(b);}
                public readonly bool Equals(PtrExposedLayout other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct PtrLifetimesA : IEquatable<PtrLifetimesA>
            {
                public readonly MR.CS.CSharp.LifetimesA Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.CSharp.LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.LifetimesA._Underlying *ptr, nint i);
                    Ptr = __MR_CSharp_LifetimesA_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.CSharp.LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.LifetimesA._Underlying *ptr, nint i);
                    Ptr = __MR_CSharp_LifetimesA_OffsetPtr(Ptr, -1);
                }

                internal MR.CS.CSharp.LifetimesA._Underlying *Ptr;

                internal PtrLifetimesA(MR.CS.CSharp.LifetimesA._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.CSharp.LifetimesA this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_LifetimesA_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.CSharp.LifetimesA._Underlying *__MR_CSharp_LifetimesA_OffsetPtr(MR.CS.CSharp.LifetimesA._Underlying *ptr, nint i);
                        return new(__MR_CSharp_LifetimesA_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }

                public static unsafe bool operator==(PtrLifetimesA a, PtrLifetimesA b) {return a.Equals(b);}
                public static bool operator!=(PtrLifetimesA a, PtrLifetimesA b) {return !a.Equals(b);}
                public readonly bool Equals(PtrLifetimesA other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }
        }

        public unsafe struct ConstPtrChar : IEquatable<ConstPtrChar>
        {
            public readonly ref readonly byte Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 1;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -1;
            }

            internal byte *Ptr;

            internal ConstPtrChar(byte *new_ptr) {Ptr = new_ptr;}

            public ref readonly byte this[nint i]
            {
                get
                {
                    return ref *(Ptr + i);
                }
            }

            public unsafe byte *GetPointer() => Ptr;

            public static unsafe bool operator==(ConstPtrChar a, ConstPtrChar b) {return a.Equals(b);}
            public static bool operator!=(ConstPtrChar a, ConstPtrChar b) {return !a.Equals(b);}
            public readonly bool Equals(ConstPtrChar other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct ConstPtrInt : IEquatable<ConstPtrInt>
        {
            public readonly ref readonly int Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 4;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -4;
            }

            internal int *Ptr;

            internal ConstPtrInt(int *new_ptr) {Ptr = new_ptr;}

            public ref readonly int this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 4);
                }
            }

            public unsafe int *GetPointer() => Ptr;

            public static unsafe bool operator==(ConstPtrInt a, ConstPtrInt b) {return a.Equals(b);}
            public static bool operator!=(ConstPtrInt a, ConstPtrInt b) {return !a.Equals(b);}
            public readonly bool Equals(ConstPtrInt other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct ConstPtrLong : IEquatable<ConstPtrLong>
        {
            public readonly ref readonly long Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 8;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -8;
            }

            internal long *Ptr;

            internal ConstPtrLong(long *new_ptr) {Ptr = new_ptr;}

            public ref readonly long this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 8);
                }
            }

            public unsafe long *GetPointer() => Ptr;

            public static unsafe bool operator==(ConstPtrLong a, ConstPtrLong b) {return a.Equals(b);}
            public static bool operator!=(ConstPtrLong a, ConstPtrLong b) {return !a.Equals(b);}
            public readonly bool Equals(ConstPtrLong other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct ConstPtrUnsignedLong : IEquatable<ConstPtrUnsignedLong>
        {
            public readonly ref readonly ulong Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 8;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -8;
            }

            internal ulong *Ptr;

            internal ConstPtrUnsignedLong(ulong *new_ptr) {Ptr = new_ptr;}

            public ref readonly ulong this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 8);
                }
            }

            public unsafe ulong *GetPointer() => Ptr;

            public static unsafe bool operator==(ConstPtrUnsignedLong a, ConstPtrUnsignedLong b) {return a.Equals(b);}
            public static bool operator!=(ConstPtrUnsignedLong a, ConstPtrUnsignedLong b) {return !a.Equals(b);}
            public readonly bool Equals(ConstPtrUnsignedLong other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct PtrChar : IEquatable<PtrChar>
        {
            public readonly ref byte Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 1;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -1;
            }

            internal byte *Ptr;

            internal PtrChar(byte *new_ptr) {Ptr = new_ptr;}

            public ref byte this[nint i]
            {
                get
                {
                    return ref *(Ptr + i);
                }
            }

            public unsafe byte *GetPointer() => Ptr;

            public static unsafe bool operator==(PtrChar a, PtrChar b) {return a.Equals(b);}
            public static bool operator!=(PtrChar a, PtrChar b) {return !a.Equals(b);}
            public readonly bool Equals(PtrChar other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct PtrInt : IEquatable<PtrInt>
        {
            public readonly ref int Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 4;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -4;
            }

            internal int *Ptr;

            internal PtrInt(int *new_ptr) {Ptr = new_ptr;}

            public ref int this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 4);
                }
            }

            public unsafe int *GetPointer() => Ptr;

            public static unsafe bool operator==(PtrInt a, PtrInt b) {return a.Equals(b);}
            public static bool operator!=(PtrInt a, PtrInt b) {return !a.Equals(b);}
            public readonly bool Equals(PtrInt other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct PtrLong : IEquatable<PtrLong>
        {
            public readonly ref long Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 8;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -8;
            }

            internal long *Ptr;

            internal PtrLong(long *new_ptr) {Ptr = new_ptr;}

            public ref long this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 8);
                }
            }

            public unsafe long *GetPointer() => Ptr;

            public static unsafe bool operator==(PtrLong a, PtrLong b) {return a.Equals(b);}
            public static bool operator!=(PtrLong a, PtrLong b) {return !a.Equals(b);}
            public readonly bool Equals(PtrLong other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
        }

        public unsafe struct PtrUnsignedLong : IEquatable<PtrUnsignedLong>
        {
            public readonly ref ulong Deref()
            {
                return ref *(Ptr);
            }
            public unsafe void Incr()
            {
                Ptr = Ptr + 8;
            }
            public unsafe void Decr()
            {
                Ptr = Ptr + -8;
            }

            internal ulong *Ptr;

            internal PtrUnsignedLong(ulong *new_ptr) {Ptr = new_ptr;}

            public ref ulong this[nint i]
            {
                get
                {
                    return ref *(Ptr + i * 8);
                }
            }

            public unsafe ulong *GetPointer() => Ptr;

            public static unsafe bool operator==(PtrUnsignedLong a, PtrUnsignedLong b) {return a.Equals(b);}
            public static bool operator!=(PtrUnsignedLong a, PtrUnsignedLong b) {return !a.Equals(b);}
            public readonly bool Equals(PtrUnsignedLong other) {return base.Equals(other);}
            public override bool Equals(object? other) {return base.Equals(other);}
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

            public unsafe struct ArrayString3
            {
                internal MR.CS.Std.String._Underlying *Ptr;

                internal ArrayString3(MR.CS.Std.String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.String this[nint i]
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(i >= 0 && i < 3);
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

            public unsafe struct ConstPtrString : IEquatable<ConstPtrString>
            {
                public readonly MR.CS.Std.Const_String Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.Const_String._Underlying *ptr, nint i);
                    Ptr = __MR_C_std_string_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.Const_String._Underlying *ptr, nint i);
                    Ptr = __MR_C_std_string_OffsetPtr(Ptr, -1);
                }

                internal MR.CS.Std.Const_String._Underlying *Ptr;

                internal ConstPtrString(MR.CS.Std.Const_String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.Const_String this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.Const_String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }

                public static unsafe bool operator==(ConstPtrString a, ConstPtrString b) {return a.Equals(b);}
                public static bool operator!=(ConstPtrString a, ConstPtrString b) {return !a.Equals(b);}
                public readonly bool Equals(ConstPtrString other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct PtrString : IEquatable<PtrString>
            {
                public readonly MR.CS.Std.String Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                    Ptr = __MR_C_std_string_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                    Ptr = __MR_C_std_string_OffsetPtr(Ptr, -1);
                }

                internal MR.CS.Std.String._Underlying *Ptr;

                internal PtrString(MR.CS.Std.String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.String this[nint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }

                public static unsafe bool operator==(PtrString a, PtrString b) {return a.Equals(b);}
                public static bool operator!=(PtrString a, PtrString b) {return !a.Equals(b);}
                public readonly bool Equals(PtrString other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }
        }

        public static partial class StdContainers
        {
            public unsafe struct ConstPtrA : IEquatable<ConstPtrA>
            {
                public readonly MR.CS.StdContainers.Const_A Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.Const_A._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_A_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.Const_A._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_A_OffsetPtr(Ptr, -1);
                }

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

                public static unsafe bool operator==(ConstPtrA a, ConstPtrA b) {return a.Equals(b);}
                public static bool operator!=(ConstPtrA a, ConstPtrA b) {return !a.Equals(b);}
                public readonly bool Equals(ConstPtrA other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct ConstPtrNonAssignable : IEquatable<ConstPtrNonAssignable>
            {
                public readonly MR.CS.StdContainers.Const_NonAssignable Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.Const_NonAssignable._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_NonAssignable_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.Const_NonAssignable._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_NonAssignable_OffsetPtr(Ptr, -1);
                }

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

                public static unsafe bool operator==(ConstPtrNonAssignable a, ConstPtrNonAssignable b) {return a.Equals(b);}
                public static bool operator!=(ConstPtrNonAssignable a, ConstPtrNonAssignable b) {return !a.Equals(b);}
                public readonly bool Equals(ConstPtrNonAssignable other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct PtrA : IEquatable<PtrA>
            {
                public readonly MR.CS.StdContainers.A Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.A._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_A_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_OffsetPtr(MR.CS.StdContainers.A._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_A_OffsetPtr(Ptr, -1);
                }

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

                public static unsafe bool operator==(PtrA a, PtrA b) {return a.Equals(b);}
                public static bool operator!=(PtrA a, PtrA b) {return !a.Equals(b);}
                public readonly bool Equals(PtrA other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }

            public unsafe struct PtrNonAssignable : IEquatable<PtrNonAssignable>
            {
                public readonly MR.CS.StdContainers.NonAssignable Deref()
                {
                    return new(Ptr, is_owning: false);
                }
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.NonAssignable._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_NonAssignable_OffsetPtr(Ptr, 1);
                }
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_OffsetPtr", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_OffsetPtr(MR.CS.StdContainers.NonAssignable._Underlying *ptr, nint i);
                    Ptr = __MR_StdContainers_NonAssignable_OffsetPtr(Ptr, -1);
                }

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

                public static unsafe bool operator==(PtrNonAssignable a, PtrNonAssignable b) {return a.Equals(b);}
                public static bool operator!=(PtrNonAssignable a, PtrNonAssignable b) {return !a.Equals(b);}
                public readonly bool Equals(PtrNonAssignable other) {return base.Equals(other);}
                public override bool Equals(object? other) {return base.Equals(other);}
            }
        }
    }
}
