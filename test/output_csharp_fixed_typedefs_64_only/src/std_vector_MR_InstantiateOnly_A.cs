public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::InstantiateOnly::A&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRInstantiateOnlyA : MR.CS.Misc.Object<Const_Vector_MRInstantiateOnlyA>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_InstantiateOnly_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRInstantiateOnlyA() {Dispose(false);}

                internal unsafe Const_Vector_MRInstantiateOnlyA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRInstantiateOnlyA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRInstantiateOnlyA(MR.CS.Std._ByValue_Vector_MRInstantiateOnlyA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA other) : this(new _ByValue_Vector_MRInstantiateOnlyA(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRInstantiateOnlyA(Vector_MRInstantiateOnlyA other) : this((Const_Vector_MRInstantiateOnlyA)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_size", ExactSpelling = true)]
                    extern static unsafe nuint __MR_C_std_vector_MR_InstantiateOnly_A_size(_Underlying *_this);
                    return __MR_C_std_vector_MR_InstantiateOnly_A_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_empty", ExactSpelling = true)]
                    extern static unsafe byte __MR_C_std_vector_MR_InstantiateOnly_A_empty(_Underlying *_this);
                    return __MR_C_std_vector_MR_InstantiateOnly_A_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.InstantiateOnly.Const_A this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_at", ExactSpelling = true)]
                        extern static unsafe MR.CS.InstantiateOnly.Const_A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_at(_Underlying *_this, nuint i);
                        MR.CS.InstantiateOnly.Const_A __ret;
                        __ret = new(__MR_C_std_vector_MR_InstantiateOnly_A_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.InstantiateOnly.Const_A? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_front", ExactSpelling = true)]
                    extern static unsafe MR.CS.InstantiateOnly.Const_A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_InstantiateOnly_A_front(_UnderlyingPtr);
                    MR.CS.InstantiateOnly.Const_A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.InstantiateOnly.Const_A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.InstantiateOnly.Const_A? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_back", ExactSpelling = true)]
                    extern static unsafe MR.CS.InstantiateOnly.Const_A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_InstantiateOnly_A_back(_UnderlyingPtr);
                    MR.CS.InstantiateOnly.Const_A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.InstantiateOnly.Const_A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::InstantiateOnly::A&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRInstantiateOnlyA : Const_Vector_MRInstantiateOnlyA
            {
                internal unsafe Vector_MRInstantiateOnlyA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRInstantiateOnlyA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRInstantiateOnlyA(MR.CS.Std._ByValue_Vector_MRInstantiateOnlyA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA other) : this(new _ByValue_Vector_MRInstantiateOnlyA(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRInstantiateOnlyA(Vector_MRInstantiateOnlyA other) : this((Const_Vector_MRInstantiateOnlyA)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRInstantiateOnlyA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRInstantiateOnlyA._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_resize", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_resize(_Underlying *_this, nuint new_size);
                    __MR_C_std_vector_MR_InstantiateOnly_A_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_clear", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_InstantiateOnly_A_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(nuint new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_reserve", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_reserve(_Underlying *_this, nuint new_capacity);
                    __MR_C_std_vector_MR_InstantiateOnly_A_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.InstantiateOnly.A this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_at_mut", ExactSpelling = true)]
                        extern static unsafe MR.CS.InstantiateOnly.A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_at_mut(_Underlying *_this, nuint i);
                        MR.CS.InstantiateOnly.A __ret;
                        __ret = new(__MR_C_std_vector_MR_InstantiateOnly_A_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.InstantiateOnly.A? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_front_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.InstantiateOnly.A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_InstantiateOnly_A_front_mut(_UnderlyingPtr);
                    MR.CS.InstantiateOnly.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.InstantiateOnly.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.InstantiateOnly.A? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_back_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.InstantiateOnly.A._Underlying *__MR_C_std_vector_MR_InstantiateOnly_A_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_InstantiateOnly_A_back_mut(_UnderlyingPtr);
                    MR.CS.InstantiateOnly.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.InstantiateOnly.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.InstantiateOnly.Const_A new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_push_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_push_back(_Underlying *_this, MR.CS.InstantiateOnly.A._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_InstantiateOnly_A_push_back(_UnderlyingPtr, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_pop_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_pop_back(_Underlying *_this);
                    __MR_C_std_vector_MR_InstantiateOnly_A_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(nuint position, MR.CS.InstantiateOnly.Const_A new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_insert", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_insert(_Underlying *_this, nuint position, MR.CS.InstantiateOnly.A._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_InstantiateOnly_A_insert(_UnderlyingPtr, position, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(nuint position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_InstantiateOnly_A_erase", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_MR_InstantiateOnly_A_erase(_Underlying *_this, nuint position);
                    __MR_C_std_vector_MR_InstantiateOnly_A_erase(_UnderlyingPtr, position);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRInstantiateOnlyA` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRInstantiateOnlyA`/`Const_Vector_MRInstantiateOnlyA` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRInstantiateOnlyA
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_MRInstantiateOnlyA? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRInstantiateOnlyA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA arg) {return new(arg);}
                public _ByValue_Vector_MRInstantiateOnlyA(MR.CS.Misc._Moved<Vector_MRInstantiateOnlyA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRInstantiateOnlyA(MR.CS.Misc._Moved<Vector_MRInstantiateOnlyA> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRInstantiateOnlyA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRInstantiateOnlyA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRInstantiateOnlyA`/`Const_Vector_MRInstantiateOnlyA` directly.
            /// </summary>
            public class _InOptMut_Vector_MRInstantiateOnlyA
            {
                public Vector_MRInstantiateOnlyA? Opt;

                public _InOptMut_Vector_MRInstantiateOnlyA() {}
                public _InOptMut_Vector_MRInstantiateOnlyA(Vector_MRInstantiateOnlyA value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRInstantiateOnlyA(Vector_MRInstantiateOnlyA value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRInstantiateOnlyA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRInstantiateOnlyA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRInstantiateOnlyA`/`Const_Vector_MRInstantiateOnlyA` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRInstantiateOnlyA
            {
                public Const_Vector_MRInstantiateOnlyA? Opt;

                public _InOptConst_Vector_MRInstantiateOnlyA() {}
                public _InOptConst_Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRInstantiateOnlyA(Const_Vector_MRInstantiateOnlyA value) {return new(value);}
            }
        }
    }
}
