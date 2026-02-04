public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::list<int32_t>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_List_Int32T : MR.CS.Misc.Object<Const_List_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_Destroy(_Underlying *_this);
                    __MR_C_std_list_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_List_Int32T() {Dispose(false);}

                internal unsafe Const_List_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_List_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_List_Int32T(MR.CS.Std._ByValue_List_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_int32_t_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_List_Int32T(Const_List_Int32T other) : this(new _ByValue_List_Int32T(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_List_Int32T(List_Int32T other) : this((Const_List_Int32T)other) {}

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Const_List_Int32T(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_list_int32_t_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_list_int32_t_Size(_Underlying *_this);
                    return __MR_C_std_list_int32_t_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int32_t_IsEmpty(_Underlying *_this);
                    return __MR_C_std_list_int32_t_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe int? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Front", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int32_t_Front(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_int32_t_Front(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe int? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Back", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int32_t_Back(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_int32_t_Back(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.List_Int32T.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_Begin(_Underlying *_this);
                    MR.CS.Std.List_Int32T.ConstIterator __ret;
                    __ret = new(__MR_C_std_list_int32_t_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.List_Int32T.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int32_t_IsBegin(_Underlying *_this, MR.CS.Std.List_Int32T.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_int32_t_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.List_Int32T.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_End", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_End(_Underlying *_this);
                    MR.CS.Std.List_Int32T.ConstIterator __ret;
                    __ret = new(__MR_C_std_list_int32_t_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.List_Int32T.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int32_t_IsEnd(_Underlying *_this, MR.CS.Std.List_Int32T.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_int32_t_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_list_int32_t`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_int32_t_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.List_Int32T.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_ConstructFromAnother(MR.CS.Std.List_Int32T.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.List_Int32T.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_FromMutable(MR.CS.Std.List_Int32T.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.List_Int32T.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_list_int32_t_const_iterator_Deref(_Underlying *_this);
                        return *__MR_C_std_list_int32_t_const_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_list_int32_t`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.List_Int32T.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_ConstructFromAnother(MR.CS.Std.List_Int32T.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.List_Int32T.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_Int32T.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_list_int32_t_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.List_Int32T.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.ConstIterator._Underlying *__MR_C_std_list_int32_t_const_iterator_FromMutable(MR.CS.Std.List_Int32T.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.List_Int32T.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_int32_t_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_int32_t_const_iterator_Decr(_UnderlyingPtr);
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

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.List_Int32T.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_list_int32_t`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_int32_t_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int32_t_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.List_Int32T.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_iterator_ConstructFromAnother(MR.CS.Std.List_Int32T.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe ref int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_list_int32_t_iterator_Deref(_Underlying *_this);
                        return ref *__MR_C_std_list_int32_t_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_list_int32_t`.
                /// This is the non-const half of the class.
                /// </summary>
                public class Iterator : Const_Iterator
                {
                    internal unsafe Iterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int32_t_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.List_Int32T.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_iterator_ConstructFromAnother(MR.CS.Std.List_Int32T.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int32_t_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.List_Int32T.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_Int32T.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_list_int32_t_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_int32_t_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int32_t_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_int32_t_iterator_Decr(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// This is used for optional parameters of class `Iterator` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_Iterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Iterator`/`Const_Iterator` directly.
                /// </summary>
                public class _InOptMut_Iterator
                {
                    public Iterator? Opt;

                    public _InOptMut_Iterator() {}
                    public _InOptMut_Iterator(Iterator value) {Opt = value;}
                    public static implicit operator _InOptMut_Iterator(Iterator value) {return new(value);}
                }

                /// <summary>
                /// This is used for optional parameters of class `Iterator` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_Iterator`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Iterator`/`Const_Iterator` to pass it to the function.
                /// </summary>
                public class _InOptConst_Iterator
                {
                    public Const_Iterator? Opt;

                    public _InOptConst_Iterator() {}
                    public _InOptConst_Iterator(Const_Iterator value) {Opt = value;}
                    public static implicit operator _InOptConst_Iterator(Const_Iterator value) {return new(value);}
                }
            }

            /// <summary>
            /// Generated from C++ container `std::list<int32_t>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class List_Int32T : Const_List_Int32T
            {
                internal unsafe List_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe List_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe List_Int32T(MR.CS.Std._ByValue_List_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_int32_t_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public List_Int32T(Const_List_Int32T other) : this(new _ByValue_List_Int32T(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public List_Int32T(List_Int32T other) : this((Const_List_Int32T)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_List_Int32T other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int32T._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_list_int32_t_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe List_Int32T(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T._Underlying *__MR_C_std_list_int32_t_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_list_int32_t_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Assign from a range of elements, overwriting previous contents.
                /// </summary>
                public unsafe void assign(int? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_AssignFromRange(_Underlying *_this, int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_list_int32_t_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_list_int32_t_Resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_ResizeWithDefaultValue", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_ResizeWithDefaultValue(_Underlying *_this, ulong new_size, int value);
                    __MR_C_std_list_int32_t_ResizeWithDefaultValue(_UnderlyingPtr, new_size, value);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_list_int32_t_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_MutableFront", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int32_t_MutableFront(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_int32_t_MutableFront(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_MutableBack", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int32_t_MutableBack(_Underlying *_this);
                    var __c_ret = __MR_C_std_list_int32_t_MutableBack(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_PushBack(_Underlying *_this, int new_elem);
                    __MR_C_std_list_int32_t_PushBack(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_PopBack(_Underlying *_this);
                    __MR_C_std_list_int32_t_PopBack(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the beginning.
                /// </summary>
                public unsafe void pushFront(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_PushFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_PushFront(_Underlying *_this, int new_elem);
                    __MR_C_std_list_int32_t_PushFront(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the beginning.
                /// </summary>
                public unsafe void popFront()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_PopFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_PopFront(_Underlying *_this);
                    __MR_C_std_list_int32_t_PopFront(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.List_Int32T.Const_Iterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_InsertAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_InsertAtMutableIter(_Underlying *_this, MR.CS.Std.List_Int32T.Iterator._Underlying *position, int new_elem);
                    __MR_C_std_list_int32_t_InsertAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.List_Int32T.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_EraseAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_EraseAtMutableIter(_Underlying *_this, MR.CS.Std.List_Int32T.Iterator._Underlying *position);
                    __MR_C_std_list_int32_t_EraseAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.List_Int32T.Const_ConstIterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_InsertAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_InsertAtIter(_Underlying *_this, MR.CS.Std.List_Int32T.ConstIterator._Underlying *position, int new_elem);
                    __MR_C_std_list_int32_t_InsertAtIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.List_Int32T.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_EraseAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int32_t_EraseAtIter(_Underlying *_this, MR.CS.Std.List_Int32T.ConstIterator._Underlying *position);
                    __MR_C_std_list_int32_t_EraseAtIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.List_Int32T.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_MutableBegin(_Underlying *_this);
                    MR.CS.Std.List_Int32T.Iterator __ret;
                    __ret = new(__MR_C_std_list_int32_t_MutableBegin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.List_Int32T.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int32_t_IsMutableBegin(_Underlying *_this, MR.CS.Std.List_Int32T.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_int32_t_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.List_Int32T.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int32T.Iterator._Underlying *__MR_C_std_list_int32_t_MutableEnd(_Underlying *_this);
                    MR.CS.Std.List_Int32T.Iterator __ret;
                    __ret = new(__MR_C_std_list_int32_t_MutableEnd(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.List_Int32T.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int32_t_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int32_t_IsMutableEnd(_Underlying *_this, MR.CS.Std.List_Int32T.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_int32_t_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `List_Int32T` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `List_Int32T`/`Const_List_Int32T` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_List_Int32T
            {
                internal readonly Const_List_Int32T? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_List_Int32T() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_List_Int32T(Const_List_Int32T new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_List_Int32T(Const_List_Int32T arg) {return new(arg);}
                public _ByValue_List_Int32T(MR.CS.Misc._Moved<List_Int32T> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_List_Int32T(MR.CS.Misc._Moved<List_Int32T> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `List_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_List_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_Int32T`/`Const_List_Int32T` directly.
            /// </summary>
            public class _InOptMut_List_Int32T
            {
                public List_Int32T? Opt;

                public _InOptMut_List_Int32T() {}
                public _InOptMut_List_Int32T(List_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_List_Int32T(List_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `List_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_List_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_Int32T`/`Const_List_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_List_Int32T
            {
                public Const_List_Int32T? Opt;

                public _InOptConst_List_Int32T() {}
                public _InOptConst_List_Int32T(Const_List_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_List_Int32T(Const_List_Int32T value) {return new(value);}
            }
        }
    }
}
