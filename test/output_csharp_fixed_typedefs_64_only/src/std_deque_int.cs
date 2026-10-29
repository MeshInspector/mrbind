public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::deque&lt;int&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Deque_Int : MR.CS.Misc.Object<Const_Deque_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_Destroy(_Underlying *_this);
                    __MR_C_std_deque_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Deque_Int() {Dispose(false);}

                internal unsafe Const_Deque_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Deque_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_Int._Underlying *__MR_C_std_deque_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_deque_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Deque_Int(MR.CS.Std._ByValue_Deque_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_Int._Underlying *__MR_C_std_deque_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_deque_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Deque_Int(Const_Deque_Int other) : this(new _ByValue_Deque_Int(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Deque_Int(Deque_Int other) : this((Const_Deque_Int)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_size", ExactSpelling = true)]
                    extern static unsafe nuint __MR_C_std_deque_int_size(_Underlying *_this);
                    return __MR_C_std_deque_int_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_empty", ExactSpelling = true)]
                    extern static unsafe byte __MR_C_std_deque_int_empty(_Underlying *_this);
                    return __MR_C_std_deque_int_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe int this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_at", ExactSpelling = true)]
                        extern static unsafe int *__MR_C_std_deque_int_at(_Underlying *_this, nuint i);
                        return *__MR_C_std_deque_int_at(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe int? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_front", ExactSpelling = true)]
                    extern static unsafe int *__MR_C_std_deque_int_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_int_front(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe int? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_back", ExactSpelling = true)]
                    extern static unsafe int *__MR_C_std_deque_int_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_int_back(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }
            }

            /// <summary>
            /// Generated from C++ container `std::deque&lt;int&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Deque_Int : Const_Deque_Int
            {
                internal unsafe Deque_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Deque_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_DefaultConstruct", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_Int._Underlying *__MR_C_std_deque_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_deque_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Deque_Int(MR.CS.Std._ByValue_Deque_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.Std.Deque_Int._Underlying *__MR_C_std_deque_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_deque_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Deque_Int(Const_Deque_Int other) : this(new _ByValue_Deque_Int(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Deque_Int(Deque_Int other) : this((Const_Deque_Int)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Deque_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Deque_Int._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_deque_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_resize", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_resize(_Underlying *_this, nuint new_size);
                    __MR_C_std_deque_int_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_clear", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_deque_int_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref int this[nuint i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_at_mut", ExactSpelling = true)]
                        extern static unsafe int *__MR_C_std_deque_int_at_mut(_Underlying *_this, nuint i);
                        return ref *__MR_C_std_deque_int_at_mut(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_front_mut", ExactSpelling = true)]
                    extern static unsafe int *__MR_C_std_deque_int_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_int_front_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_back_mut", ExactSpelling = true)]
                    extern static unsafe int *__MR_C_std_deque_int_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_deque_int_back_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_push_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_push_back(_Underlying *_this, int new_elem);
                    __MR_C_std_deque_int_push_back(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_pop_back", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_pop_back(_Underlying *_this);
                    __MR_C_std_deque_int_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the beginning.
                /// </summary>
                public unsafe void pushFront(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_push_front", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_push_front(_Underlying *_this, int new_elem);
                    __MR_C_std_deque_int_push_front(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the beginning.
                /// </summary>
                public unsafe void popFront()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_pop_front", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_pop_front(_Underlying *_this);
                    __MR_C_std_deque_int_pop_front(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(nuint position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_insert", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_insert(_Underlying *_this, nuint position, int new_elem);
                    __MR_C_std_deque_int_insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(nuint position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_deque_int_erase", ExactSpelling = true)]
                    extern static unsafe void __MR_C_std_deque_int_erase(_Underlying *_this, nuint position);
                    __MR_C_std_deque_int_erase(_UnderlyingPtr, position);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Deque_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Deque_Int`/`Const_Deque_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Deque_Int
            {
                #pragma warning disable CS0649
                internal readonly Const_Deque_Int? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Deque_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Deque_Int(Const_Deque_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Deque_Int(Const_Deque_Int arg) {return new(arg);}
                public _ByValue_Deque_Int(MR.CS.Misc._Moved<Deque_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Deque_Int(MR.CS.Misc._Moved<Deque_Int> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Deque_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Deque_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Deque_Int`/`Const_Deque_Int` directly.
            /// </summary>
            public class _InOptMut_Deque_Int
            {
                public Deque_Int? Opt;

                public _InOptMut_Deque_Int() {}
                public _InOptMut_Deque_Int(Deque_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Deque_Int(Deque_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Deque_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Deque_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Deque_Int`/`Const_Deque_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_Deque_Int
            {
                public Const_Deque_Int? Opt;

                public _InOptConst_Deque_Int() {}
                public _InOptConst_Deque_Int(Const_Deque_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Deque_Int(Const_Deque_Int value) {return new(value);}
            }
        }
    }
}
