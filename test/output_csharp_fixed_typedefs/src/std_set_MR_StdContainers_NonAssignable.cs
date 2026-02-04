public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::set<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Set_MRStdContainersNonAssignable : MR.CS.Misc.Object<Const_Set_MRStdContainersNonAssignable>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_set_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Set_MRStdContainersNonAssignable() {Dispose(false);}

                internal unsafe Const_Set_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Set_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Set_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Set_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable other) : this(new _ByValue_Set_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Set_MRStdContainersNonAssignable(Set_MRStdContainersNonAssignable other) : this((Const_Set_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_set_MR_StdContainers_NonAssignable_Size(_Underlying *_this);
                    return __MR_C_std_set_MR_StdContainers_NonAssignable_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_MR_StdContainers_NonAssignable_IsEmpty(_Underlying *_this);
                    return __MR_C_std_set_MR_StdContainers_NonAssignable_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Checks if the contain contains this key.
                /// </summary>
                public unsafe bool contains(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_MR_StdContainers_NonAssignable_Contains(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_set_MR_StdContainers_NonAssignable_Contains(_UnderlyingPtr, key._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                /// </summary>
                public unsafe MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Find", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_Find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_MR_StdContainers_NonAssignable_Find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_Begin(_Underlying *_this);
                    MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_MR_StdContainers_NonAssignable_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_MR_StdContainers_NonAssignable_IsBegin(_Underlying *_this, MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_set_MR_StdContainers_NonAssignable_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_End(_Underlying *_this);
                    MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_MR_StdContainers_NonAssignable_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_MR_StdContainers_NonAssignable_IsEnd(_Underlying *_this, MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_set_MR_StdContainers_NonAssignable_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_set_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonAssignable deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_set_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                /// </summary>
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Set_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Set_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_set_MR_StdContainers_NonAssignable_const_iterator_Decr(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// This is used for optional parameters of class `ConstIterator` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_ConstIterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `ConstIterator`/`Const_ConstIterator` directly.
                /// </summary>
                public class _InOptMut_ConstIterator
                {
                    public ConstIterator? Opt;

                    public _InOptMut_ConstIterator() {}
                    public _InOptMut_ConstIterator(ConstIterator value) {Opt = value;}
                    public static implicit operator _InOptMut_ConstIterator(ConstIterator value) {return new(value);}
                }

                /// <summary>
                /// This is used for optional parameters of class `ConstIterator` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_ConstIterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `ConstIterator`/`Const_ConstIterator` to pass it to the function.
                /// </summary>
                public class _InOptConst_ConstIterator
                {
                    public Const_ConstIterator? Opt;

                    public _InOptConst_ConstIterator() {}
                    public _InOptConst_ConstIterator(Const_ConstIterator value) {Opt = value;}
                    public static implicit operator _InOptConst_ConstIterator(Const_ConstIterator value) {return new(value);}
                }
            }

            /// <summary>
            /// Generated from C++ container `std::set<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Set_MRStdContainersNonAssignable : Const_Set_MRStdContainersNonAssignable
            {
                internal unsafe Set_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Set_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Set_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Set_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable other) : this(new _ByValue_Set_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Set_MRStdContainersNonAssignable(Set_MRStdContainersNonAssignable other) : this((Const_Set_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Set_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_set_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_set_MR_StdContainers_NonAssignable_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element.
                /// </summary>
                public unsafe void insert(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_MR_StdContainers_NonAssignable_Insert", ExactSpelling = true)]
                    extern static void __MR_C_std_set_MR_StdContainers_NonAssignable_Insert(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_set_MR_StdContainers_NonAssignable_Insert(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Set_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Set_MRStdContainersNonAssignable`/`Const_Set_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Set_MRStdContainersNonAssignable
            {
                internal readonly Const_Set_MRStdContainersNonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Set_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_Set_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Set_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Set_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Set_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Set_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Set_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Set_MRStdContainersNonAssignable`/`Const_Set_MRStdContainersNonAssignable` directly.
            /// </summary>
            public class _InOptMut_Set_MRStdContainersNonAssignable
            {
                public Set_MRStdContainersNonAssignable? Opt;

                public _InOptMut_Set_MRStdContainersNonAssignable() {}
                public _InOptMut_Set_MRStdContainersNonAssignable(Set_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_Set_MRStdContainersNonAssignable(Set_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Set_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Set_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Set_MRStdContainersNonAssignable`/`Const_Set_MRStdContainersNonAssignable` to pass it to the function.
            /// </summary>
            public class _InOptConst_Set_MRStdContainersNonAssignable
            {
                public Const_Set_MRStdContainersNonAssignable? Opt;

                public _InOptConst_Set_MRStdContainersNonAssignable() {}
                public _InOptConst_Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_Set_MRStdContainersNonAssignable(Const_Set_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
