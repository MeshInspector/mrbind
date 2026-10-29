public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::deque&lt;MR::StdContainers::NonAssignable&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Deque_MRStdContainersNonAssignable : MR.CS.Misc.Object<Const_Deque_MRStdContainersNonAssignable>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Deque_MRStdContainersNonAssignable() {Dispose(false);}

                internal unsafe Const_Deque_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Deque_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Deque_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Deque_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable other) : this(new _ByValue_Deque_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Deque_MRStdContainersNonAssignable(Deque_MRStdContainersNonAssignable other) : this((Const_Deque_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_size", ExactSpelling = true)]
                    extern static unsafe nuint __MR_C_std_deque_MR_StdContainers_NonAssignable_size(_Underlying *_this);
                    return __MR_C_std_deque_MR_StdContainers_NonAssignable_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_empty", ExactSpelling = true)]
                    extern static unsafe byte __MR_C_std_deque_MR_StdContainers_NonAssignable_empty(_Underlying *_this);
                    return __MR_C_std_deque_MR_StdContainers_NonAssignable_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_at", ExactSpelling = true)]
                        extern static unsafe MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_at(_Underlying *_this, nuint i);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_deque_MR_StdContainers_NonAssignable_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_front", ExactSpelling = true)]
                    extern static unsafe MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_MR_StdContainers_NonAssignable_front(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_back", ExactSpelling = true)]
                    extern static unsafe MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_MR_StdContainers_NonAssignable_back(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// Generated from C++ container `std::deque&lt;MR::StdContainers::NonAssignable&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Deque_MRStdContainersNonAssignable : Const_Deque_MRStdContainersNonAssignable
            {
                internal unsafe Deque_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Deque_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Deque_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Deque_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable other) : this(new _ByValue_Deque_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Deque_MRStdContainersNonAssignable(Deque_MRStdContainersNonAssignable other) : this((Const_Deque_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Deque_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_resize", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_resize(_Underlying *_this, nuint new_size);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_clear", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut", ExactSpelling = true)]
                        extern static unsafe MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(_Underlying *_this, nuint i);
                        MR.CS.StdContainers.NonAssignable __ret;
                        __ret = new(__MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut", ExactSpelling = true)]
                    extern static unsafe MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_push_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(_Underlying *_this);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the beginning.
                /// </summary>
                public unsafe void pushFront(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_push_front", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes one element from the beginning.
                /// </summary>
                public unsafe void popFront()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(_Underlying *_this);
                    __MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Deque_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Deque_MRStdContainersNonAssignable`/`Const_Deque_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Deque_MRStdContainersNonAssignable
            {
                #pragma warning disable CS0649
                internal readonly Const_Deque_MRStdContainersNonAssignable? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Deque_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_Deque_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Deque_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Deque_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Deque_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Deque_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Deque_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Deque_MRStdContainersNonAssignable`/`Const_Deque_MRStdContainersNonAssignable` directly.
            /// </summary>
            public class _InOptMut_Deque_MRStdContainersNonAssignable
            {
                public Deque_MRStdContainersNonAssignable? Opt;

                public _InOptMut_Deque_MRStdContainersNonAssignable() {}
                public _InOptMut_Deque_MRStdContainersNonAssignable(Deque_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_Deque_MRStdContainersNonAssignable(Deque_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Deque_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Deque_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Deque_MRStdContainersNonAssignable`/`Const_Deque_MRStdContainersNonAssignable` to pass it to the function.
            /// </summary>
            public class _InOptConst_Deque_MRStdContainersNonAssignable
            {
                public Const_Deque_MRStdContainersNonAssignable? Opt;

                public _InOptConst_Deque_MRStdContainersNonAssignable() {}
                public _InOptConst_Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_Deque_MRStdContainersNonAssignable(Const_Deque_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
