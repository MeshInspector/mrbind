public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::list<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            public class Const_List_MRStdContainersNonAssignable : MR.CS.Misc.Object<Const_List_MRStdContainersNonAssignable>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_List_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_List_MRStdContainersNonAssignable() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_List_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_List_MRStdContainersNonAssignable(MR.CS.Std._ByValue_List_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_list_MR_StdContainers_NonAssignable_Size(_Underlying *_this);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_Size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool IsEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_MR_StdContainers_NonAssignable_IsEmpty(_Underlying *_this);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// The first element or null if empty, read-only.
                public unsafe MR.CS.StdContainers.Const_NonAssignable? Front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Front", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_Front(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_MR_StdContainers_NonAssignable_Front(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }

                /// The last element or null if empty, read-only.
                public unsafe MR.CS.StdContainers.Const_NonAssignable? Back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Back", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_Back(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_MR_StdContainers_NonAssignable_Back(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_Begin(_Underlying *_this);
                    MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAlive(this);
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_MR_StdContainers_NonAssignable_IsBegin(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_End", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_End(_Underlying *_this);
                    MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAlive(this);
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_MR_StdContainers_NonAssignable_IsEnd(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_std_list_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe Const_ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable(MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// Dereferences a const iterator.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAlive(this);
                        return __ret;
                    }
                }

                /// Read-only iterator for `MR_C_std_list_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable(MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a const iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_const_iterator_Decr(_UnderlyingPtr);
                    }
                }

                /// This is used for optional parameters of class `ConstIterator` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_ConstIterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `ConstIterator`/`Const_ConstIterator` directly.
                public class _InOptMut_ConstIterator
                {
                    public ConstIterator? Opt;

                    public _InOptMut_ConstIterator() {}
                    public _InOptMut_ConstIterator(ConstIterator value) {Opt = value;}
                    public static implicit operator _InOptMut_ConstIterator(ConstIterator value) {return new(value);}
                }

                /// This is used for optional parameters of class `ConstIterator` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_ConstIterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `ConstIterator`/`Const_ConstIterator` to pass it to the function.
                public class _InOptConst_ConstIterator
                {
                    public Const_ConstIterator? Opt;

                    public _InOptConst_ConstIterator() {}
                    public _InOptConst_ConstIterator(Const_ConstIterator value) {Opt = value;}
                    public static implicit operator _InOptConst_ConstIterator(Const_ConstIterator value) {return new(value);}

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// Mutable iterator for `MR_C_std_list_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_Iterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Dereferences a mutable iterator.
                    public unsafe MR.CS.StdContainers.NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Deref(_Underlying *_this);
                        MR.CS.StdContainers.NonAssignable __ret;
                        __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAlive(this);
                        return __ret;
                    }
                }

                /// Mutable iterator for `MR_C_std_list_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class Iterator : Const_Iterator
                {
                    internal unsafe Iterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Iterator(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a mutable iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a mutable iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_MR_StdContainers_NonAssignable_iterator_Decr(_UnderlyingPtr);
                    }
                }

                /// This is used for optional parameters of class `Iterator` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_Iterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Iterator`/`Const_Iterator` directly.
                public class _InOptMut_Iterator
                {
                    public Iterator? Opt;

                    public _InOptMut_Iterator() {}
                    public _InOptMut_Iterator(Iterator value) {Opt = value;}
                    public static implicit operator _InOptMut_Iterator(Iterator value) {return new(value);}
                }

                /// This is used for optional parameters of class `Iterator` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_Iterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Iterator`/`Const_Iterator` to pass it to the function.
                public class _InOptConst_Iterator
                {
                    public Const_Iterator? Opt;

                    public _InOptConst_Iterator() {}
                    public _InOptConst_Iterator(Const_Iterator value) {Opt = value;}
                    public static implicit operator _InOptConst_Iterator(Const_Iterator value) {return new(value);}
                }
            }

            /// Generated from C++ container `std::list<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            public class List_MRStdContainersNonAssignable : Const_List_MRStdContainersNonAssignable
            {
                internal unsafe List_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe List_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe List_MRStdContainersNonAssignable(MR.CS.Std._ByValue_List_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_List_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Resizes the container. The new elements if any are zeroed.
                public unsafe void Resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_Resize(_UnderlyingPtr, new_size);
                }

                /// Resizes the container. The new elements if any are set to the specified value.
                public unsafe void ResizeWithDefaultValue(ulong new_size, MR.CS.StdContainers.Const_NonAssignable value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_ResizeWithDefaultValue", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_ResizeWithDefaultValue(_Underlying *_this, ulong new_size, MR.CS.StdContainers.Const_NonAssignable._Underlying *value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_ResizeWithDefaultValue(_UnderlyingPtr, new_size, value._UnderlyingPtr);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_list_MR_StdContainers_NonAssignable_Clear(_UnderlyingPtr);
                }

                /// The first element or null if empty, mutable.
                public unsafe new MR.CS.StdContainers.NonAssignable? Front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_MutableFront", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_MutableFront(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_MR_StdContainers_NonAssignable_MutableFront(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }

                /// The last element or null if empty, mutable.
                public unsafe new MR.CS.StdContainers.NonAssignable? Back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_MutableBack", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_MutableBack(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_MR_StdContainers_NonAssignable_MutableBack(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }

                /// Inserts a new element at the end.
                public unsafe void PushBack(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_PushBack(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_PushBack(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Removes one element from the end.
                public unsafe void PopBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_PopBack(_Underlying *_this);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_PopBack(_UnderlyingPtr);
                }

                /// Inserts a new element at the beginning.
                public unsafe void PushFront(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_PushFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_PushFront(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_PushFront(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Removes one element from the beginning.
                public unsafe void PopFront()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_PopFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_PopFront(_Underlying *_this);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_PopFront(_UnderlyingPtr);
                }

                /// Inserts a new element right before the specified position.
                public unsafe void InsertAtMutableIter(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator position, MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtMutableIter(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *position, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Erases the element at the specified position.
                public unsafe void EraseAtMutableIter(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtMutableIter(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *position);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                public unsafe void InsertAtIter(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator position, MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtIter(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *position, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_InsertAtIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                public unsafe void EraseAtIter(MR.CS.Std.List_MRStdContainersNonAssignable.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtIter(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.ConstIterator._Underlying *position);
                    __MR_C_std_list_MR_StdContainers_NonAssignable_EraseAtIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// The begin iterator, mutable.
                public unsafe new MR.CS.Std.List_MRStdContainersNonAssignable.Iterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_MutableBegin(_Underlying *_this);
                    MR.CS.Std.List_MRStdContainersNonAssignable.Iterator __ret;
                    __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_MutableBegin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAlive(this);
                    return __ret;
                }

                /// Tests whether a mutable iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableBegin(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, mutable.
                public unsafe new MR.CS.Std.List_MRStdContainersNonAssignable.Iterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.List_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_list_MR_StdContainers_NonAssignable_MutableEnd(_Underlying *_this);
                    MR.CS.Std.List_MRStdContainersNonAssignable.Iterator __ret;
                    __ret = new(__MR_C_std_list_MR_StdContainers_NonAssignable_MutableEnd(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAlive(this);
                    return __ret;
                }

                /// Tests whether a mutable iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableEnd(_Underlying *_this, MR.CS.Std.List_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_MR_StdContainers_NonAssignable_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// This is used as a function parameter when the underlying function receives `List_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `List_MRStdContainersNonAssignable`/`Const_List_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_List_MRStdContainersNonAssignable
            {
                internal readonly Const_List_MRStdContainersNonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_List_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_List_MRStdContainersNonAssignable(Const_List_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_List_MRStdContainersNonAssignable(Const_List_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_List_MRStdContainersNonAssignable(MR.CS.Misc._Moved<List_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_List_MRStdContainersNonAssignable(MR.CS.Misc._Moved<List_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `List_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_List_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_MRStdContainersNonAssignable`/`Const_List_MRStdContainersNonAssignable` directly.
            public class _InOptMut_List_MRStdContainersNonAssignable
            {
                public List_MRStdContainersNonAssignable? Opt;

                public _InOptMut_List_MRStdContainersNonAssignable() {}
                public _InOptMut_List_MRStdContainersNonAssignable(List_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_List_MRStdContainersNonAssignable(List_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// This is used for optional parameters of class `List_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_List_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_MRStdContainersNonAssignable`/`Const_List_MRStdContainersNonAssignable` to pass it to the function.
            public class _InOptConst_List_MRStdContainersNonAssignable
            {
                public Const_List_MRStdContainersNonAssignable? Opt;

                public _InOptConst_List_MRStdContainersNonAssignable() {}
                public _InOptConst_List_MRStdContainersNonAssignable(Const_List_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_List_MRStdContainersNonAssignable(Const_List_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
