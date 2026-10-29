public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR_C_int64_t&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRCInt64T : MR.CS.Misc.Object<Const_Vector_MRCInt64T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_Destroy(_Underlying *_this);
                    __MR_C_std_vector_int64_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRCInt64T() {Dispose(false);}

                internal unsafe Const_Vector_MRCInt64T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRCInt64T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRCInt64T._Underlying *__MR_C_std_vector_int64_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_int64_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRCInt64T(MR.CS.Std._ByValue_Vector_MRCInt64T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRCInt64T._Underlying *__MR_C_std_vector_int64_t_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCInt64T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_int64_t_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCInt64T(Const_Vector_MRCInt64T other) : this(new _ByValue_Vector_MRCInt64T(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCInt64T(Vector_MRCInt64T other) : this((Const_Vector_MRCInt64T)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_size", ExactSpelling = true)]
                    extern static unsafe nuint __MR_C_std_vector_int64_t_size(_Underlying *_this);
                    return __MR_C_std_vector_int64_t_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_empty", ExactSpelling = true)]
                    extern static unsafe byte __MR_C_std_vector_int64_t_empty(_Underlying *_this);
                    return __MR_C_std_vector_int64_t_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe long this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_at", ExactSpelling = true)]
                        extern static unsafe long *__MR_C_std_vector_int64_t_at(_Underlying *_this, nuint i);
                        return *__MR_C_std_vector_int64_t_at(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe long? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_front", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int64_t_front(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe long? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_back", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int64_t_back(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.ConstPtrMRCInt64T data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_data", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_data(_Underlying *_this);
                    return new(__MR_C_std_vector_int64_t_data(_UnderlyingPtr));
                }
            }

            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR_C_int64_t&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRCInt64T : Const_Vector_MRCInt64T
            {
                internal unsafe Vector_MRCInt64T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRCInt64T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRCInt64T._Underlying *__MR_C_std_vector_int64_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_int64_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRCInt64T(MR.CS.Std._ByValue_Vector_MRCInt64T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Vector_MRCInt64T._Underlying *__MR_C_std_vector_int64_t_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCInt64T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_int64_t_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCInt64T(Const_Vector_MRCInt64T other) : this(new _ByValue_Vector_MRCInt64T(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCInt64T(Vector_MRCInt64T other) : this((Const_Vector_MRCInt64T)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRCInt64T other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCInt64T._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_int64_t_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_resize", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_resize(_Underlying *_this, nuint new_size);
                    __MR_C_std_vector_int64_t_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_clear", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_int64_t_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(nuint new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_reserve", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_reserve(_Underlying *_this, nuint new_capacity);
                    __MR_C_std_vector_int64_t_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref long this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_at_mut", ExactSpelling = true)]
                        extern static unsafe long *__MR_C_std_vector_int64_t_at_mut(_Underlying *_this, nuint i);
                        return ref *__MR_C_std_vector_int64_t_at_mut(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<long>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_front_mut", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int64_t_front_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<long>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<long>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_back_mut", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int64_t_back_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<long>(__c_ret) : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.PtrMRCInt64T data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_data_mut", ExactSpelling = true)]
                    extern static unsafe long *__MR_C_std_vector_int64_t_data_mut(_Underlying *_this);
                    return new(__MR_C_std_vector_int64_t_data_mut(_UnderlyingPtr));
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(long new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_push_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_push_back(_Underlying *_this, long new_elem);
                    __MR_C_std_vector_int64_t_push_back(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_pop_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_pop_back(_Underlying *_this);
                    __MR_C_std_vector_int64_t_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(nuint position, long new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_insert", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_insert(_Underlying *_this, nuint position, long new_elem);
                    __MR_C_std_vector_int64_t_insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(nuint position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int64_t_erase", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_vector_int64_t_erase(_Underlying *_this, nuint position);
                    __MR_C_std_vector_int64_t_erase(_UnderlyingPtr, position);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRCInt64T` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRCInt64T`/`Const_Vector_MRCInt64T` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRCInt64T
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_MRCInt64T? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRCInt64T() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRCInt64T(Const_Vector_MRCInt64T new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRCInt64T(Const_Vector_MRCInt64T arg) {return new(arg);}
                public _ByValue_Vector_MRCInt64T(MR.CS.Misc._Moved<Vector_MRCInt64T> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRCInt64T(MR.CS.Misc._Moved<Vector_MRCInt64T> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCInt64T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRCInt64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCInt64T`/`Const_Vector_MRCInt64T` directly.
            /// </summary>
            public class _InOptMut_Vector_MRCInt64T
            {
                public Vector_MRCInt64T? Opt;

                public _InOptMut_Vector_MRCInt64T() {}
                public _InOptMut_Vector_MRCInt64T(Vector_MRCInt64T value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRCInt64T(Vector_MRCInt64T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCInt64T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRCInt64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCInt64T`/`Const_Vector_MRCInt64T` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRCInt64T
            {
                public Const_Vector_MRCInt64T? Opt;

                public _InOptConst_Vector_MRCInt64T() {}
                public _InOptConst_Vector_MRCInt64T(Const_Vector_MRCInt64T value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRCInt64T(Const_Vector_MRCInt64T value) {return new(value);}
            }
        }
    }
}
