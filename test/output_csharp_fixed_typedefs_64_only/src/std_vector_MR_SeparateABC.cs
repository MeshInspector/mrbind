public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::SeparateABC&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRSeparateABC : MR.CS.Misc.Object<Const_Vector_MRSeparateABC>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_SeparateABC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRSeparateABC() {Dispose(false);}

                internal unsafe Const_Vector_MRSeparateABC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRSeparateABC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRSeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_SeparateABC_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRSeparateABC(MR.CS.Std._ByValue_Vector_MRSeparateABC other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRSeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRSeparateABC._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRSeparateABC(Const_Vector_MRSeparateABC other) : this(new _ByValue_Vector_MRSeparateABC(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRSeparateABC(Vector_MRSeparateABC other) : this((Const_Vector_MRSeparateABC)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_size", ExactSpelling = true)]
                    extern static unsafe nuint __MR_C_std_vector_MR_SeparateABC_size(_Underlying *_this);
                    return __MR_C_std_vector_MR_SeparateABC_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_empty", ExactSpelling = true)]
                    extern static unsafe byte __MR_C_std_vector_MR_SeparateABC_empty(_Underlying *_this);
                    return __MR_C_std_vector_MR_SeparateABC_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.Const_SeparateABC this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_at", ExactSpelling = true)]
                        extern static unsafe MR.CS.Const_SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_at(_Underlying *_this, nuint i);
                        MR.CS.Const_SeparateABC __ret;
                        __ret = new(__MR_C_std_vector_MR_SeparateABC_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.Const_SeparateABC? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_front", ExactSpelling = true)]
                    extern static unsafe MR.CS.Const_SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_SeparateABC_front(_UnderlyingPtr);
                    MR.CS.Const_SeparateABC? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Const_SeparateABC(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.Const_SeparateABC? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_back", ExactSpelling = true)]
                    extern static unsafe MR.CS.Const_SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_SeparateABC_back(_UnderlyingPtr);
                    MR.CS.Const_SeparateABC? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Const_SeparateABC(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::SeparateABC&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRSeparateABC : Const_Vector_MRSeparateABC
            {
                internal unsafe Vector_MRSeparateABC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRSeparateABC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRSeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_SeparateABC_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRSeparateABC(MR.CS.Std._ByValue_Vector_MRSeparateABC other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRSeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRSeparateABC._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRSeparateABC(Const_Vector_MRSeparateABC other) : this(new _ByValue_Vector_MRSeparateABC(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRSeparateABC(Vector_MRSeparateABC other) : this((Const_Vector_MRSeparateABC)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRSeparateABC other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRSeparateABC._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_SeparateABC_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_resize", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_resize(_Underlying *_this, nuint new_size);
                    __MR_C_std_vector_MR_SeparateABC_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_clear", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_SeparateABC_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(nuint new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_reserve", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_reserve(_Underlying *_this, nuint new_capacity);
                    __MR_C_std_vector_MR_SeparateABC_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.SeparateABC this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_at_mut", ExactSpelling = true)]
                        extern static unsafe MR.CS.SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_at_mut(_Underlying *_this, nuint i);
                        MR.CS.SeparateABC __ret;
                        __ret = new(__MR_C_std_vector_MR_SeparateABC_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.SeparateABC? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_front_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_SeparateABC_front_mut(_UnderlyingPtr);
                    MR.CS.SeparateABC? __ret;
                    __ret = __c_ret is not null ? new MR.CS.SeparateABC(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.SeparateABC? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_back_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.SeparateABC._Underlying *__MR_C_std_vector_MR_SeparateABC_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_SeparateABC_back_mut(_UnderlyingPtr);
                    MR.CS.SeparateABC? __ret;
                    __ret = __c_ret is not null ? new MR.CS.SeparateABC(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.Const_SeparateABC new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_push_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_push_back(_Underlying *_this, MR.CS.SeparateABC._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_SeparateABC_push_back(_UnderlyingPtr, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_pop_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_pop_back(_Underlying *_this);
                    __MR_C_std_vector_MR_SeparateABC_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(nuint position, MR.CS.Const_SeparateABC new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_insert", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_insert(_Underlying *_this, nuint position, MR.CS.SeparateABC._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_SeparateABC_insert(_UnderlyingPtr, position, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(nuint position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_SeparateABC_erase", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_SeparateABC_erase(_Underlying *_this, nuint position);
                    __MR_C_std_vector_MR_SeparateABC_erase(_UnderlyingPtr, position);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRSeparateABC` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRSeparateABC`/`Const_Vector_MRSeparateABC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRSeparateABC
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_MRSeparateABC? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRSeparateABC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRSeparateABC(Const_Vector_MRSeparateABC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRSeparateABC(Const_Vector_MRSeparateABC arg) {return new(arg);}
                public _ByValue_Vector_MRSeparateABC(MR.CS.Misc._Moved<Vector_MRSeparateABC> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRSeparateABC(MR.CS.Misc._Moved<Vector_MRSeparateABC> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRSeparateABC` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRSeparateABC`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRSeparateABC`/`Const_Vector_MRSeparateABC` directly.
            /// </summary>
            public class _InOptMut_Vector_MRSeparateABC
            {
                public Vector_MRSeparateABC? Opt;

                public _InOptMut_Vector_MRSeparateABC() {}
                public _InOptMut_Vector_MRSeparateABC(Vector_MRSeparateABC value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRSeparateABC(Vector_MRSeparateABC value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRSeparateABC` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRSeparateABC`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRSeparateABC`/`Const_Vector_MRSeparateABC` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRSeparateABC
            {
                public Const_Vector_MRSeparateABC? Opt;

                public _InOptConst_Vector_MRSeparateABC() {}
                public _InOptConst_Vector_MRSeparateABC(Const_Vector_MRSeparateABC value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRSeparateABC(Const_Vector_MRSeparateABC value) {return new(value);}
            }
        }
    }
}
