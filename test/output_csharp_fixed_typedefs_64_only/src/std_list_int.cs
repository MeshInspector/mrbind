public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::list<int>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_List_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_List_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_Destroy(_Underlying *_this);
                    __MR_C_std_list_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_List_Int() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_List_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_List_Int(MR.CS.Std._ByValue_List_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Const_List_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_list_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_list_int_Size(_Underlying *_this);
                    return __MR_C_std_list_int_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int_IsEmpty(_Underlying *_this);
                    return __MR_C_std_list_int_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe int? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Front", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int_Front(_Underlying *_this);
                    var __ret = __MR_C_std_list_int_Front(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe int? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Back", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int_Back(_Underlying *_this);
                    var __ret = __MR_C_std_list_int_Back(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.List_Int.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_Begin(_Underlying *_this);
                    return new(__MR_C_std_list_int_Begin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.List_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int_IsBegin(_Underlying *_this, MR.CS.Std.List_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_int_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.List_Int.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_End", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_End(_Underlying *_this);
                    return new(__MR_C_std_list_int_End(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.List_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int_IsEnd(_Underlying *_this, MR.CS.Std.List_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_list_int_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_list_int`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_ConstIterator : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_int_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.List_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_ConstructFromAnother(MR.CS.Std.List_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.List_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_FromMutable(MR.CS.Std.List_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.List_Int.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_list_int_const_iterator_Deref(_Underlying *_this);
                        return *__MR_C_std_list_int_const_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_list_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.List_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_ConstructFromAnother(MR.CS.Std.List_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.List_Int.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_Int.ConstIterator._Underlying *other);
                        __MR_C_std_list_int_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.List_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.ConstIterator._Underlying *__MR_C_std_list_int_const_iterator_FromMutable(MR.CS.Std.List_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_list_int_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.List_Int.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_int_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_int_const_iterator_Decr(_UnderlyingPtr);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.List_Int.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_list_int`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_Iterator : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_list_int_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.List_Int.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_iterator_ConstructFromAnother(MR.CS.Std.List_Int.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe ref int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_list_int_iterator_Deref(_Underlying *_this);
                        return ref *__MR_C_std_list_int_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_list_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_list_int_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.List_Int.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_iterator_ConstructFromAnother(MR.CS.Std.List_Int.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_list_int_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.List_Int.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.List_Int.Iterator._Underlying *other);
                        __MR_C_std_list_int_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_iterator_Incr(_Underlying *_this);
                        __MR_C_std_list_int_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_list_int_iterator_Decr(_Underlying *_this);
                        __MR_C_std_list_int_iterator_Decr(_UnderlyingPtr);
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
            /// Generated from C++ container `std::list<int>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class List_Int : Const_List_Int
            {
                internal unsafe List_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe List_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_list_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe List_Int(MR.CS.Std._ByValue_List_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_list_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_List_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.List_Int._Underlying *other);
                    __MR_C_std_list_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe List_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int._Underlying *__MR_C_std_list_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_list_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Assign from a range of elements, overwriting previous contents.
                /// </summary>
                public unsafe void assign(int? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_AssignFromRange(_Underlying *_this, int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_list_int_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_list_int_Resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_ResizeWithDefaultValue", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_ResizeWithDefaultValue(_Underlying *_this, ulong new_size, int value);
                    __MR_C_std_list_int_ResizeWithDefaultValue(_UnderlyingPtr, new_size, value);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_Clear(_Underlying *_this);
                    __MR_C_std_list_int_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_MutableFront", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int_MutableFront(_Underlying *_this);
                    var __ret = __MR_C_std_list_int_MutableFront(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_MutableBack", ExactSpelling = true)]
                    extern static int *__MR_C_std_list_int_MutableBack(_Underlying *_this);
                    var __ret = __MR_C_std_list_int_MutableBack(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_PushBack(_Underlying *_this, int new_elem);
                    __MR_C_std_list_int_PushBack(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_PopBack(_Underlying *_this);
                    __MR_C_std_list_int_PopBack(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the beginning.
                /// </summary>
                public unsafe void pushFront(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_PushFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_PushFront(_Underlying *_this, int new_elem);
                    __MR_C_std_list_int_PushFront(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the beginning.
                /// </summary>
                public unsafe void popFront()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_PopFront", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_PopFront(_Underlying *_this);
                    __MR_C_std_list_int_PopFront(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.List_Int.Const_Iterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_InsertAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_InsertAtMutableIter(_Underlying *_this, MR.CS.Std.List_Int.Iterator._Underlying *position, int new_elem);
                    __MR_C_std_list_int_InsertAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.List_Int.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_EraseAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_EraseAtMutableIter(_Underlying *_this, MR.CS.Std.List_Int.Iterator._Underlying *position);
                    __MR_C_std_list_int_EraseAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.List_Int.Const_ConstIterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_InsertAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_InsertAtIter(_Underlying *_this, MR.CS.Std.List_Int.ConstIterator._Underlying *position, int new_elem);
                    __MR_C_std_list_int_InsertAtIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.List_Int.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_EraseAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_list_int_EraseAtIter(_Underlying *_this, MR.CS.Std.List_Int.ConstIterator._Underlying *position);
                    __MR_C_std_list_int_EraseAtIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.List_Int.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_MutableBegin(_Underlying *_this);
                    return new(__MR_C_std_list_int_MutableBegin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.List_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int_IsMutableBegin(_Underlying *_this, MR.CS.Std.List_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_int_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.List_Int.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.List_Int.Iterator._Underlying *__MR_C_std_list_int_MutableEnd(_Underlying *_this);
                    return new(__MR_C_std_list_int_MutableEnd(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.List_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_list_int_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_list_int_IsMutableEnd(_Underlying *_this, MR.CS.Std.List_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_list_int_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `List_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `List_Int`/`Const_List_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_List_Int
            {
                internal readonly Const_List_Int? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_List_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_List_Int(Const_List_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_List_Int(Const_List_Int arg) {return new(arg);}
                public _ByValue_List_Int(MR.CS.Misc._Moved<List_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_List_Int(MR.CS.Misc._Moved<List_Int> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `List_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_List_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_Int`/`Const_List_Int` directly.
            /// </summary>
            public class _InOptMut_List_Int
            {
                public List_Int? Opt;

                public _InOptMut_List_Int() {}
                public _InOptMut_List_Int(List_Int value) {Opt = value;}
                public static implicit operator _InOptMut_List_Int(List_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `List_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_List_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `List_Int`/`Const_List_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_List_Int
            {
                public Const_List_Int? Opt;

                public _InOptConst_List_Int() {}
                public _InOptConst_List_Int(Const_List_Int value) {Opt = value;}
                public static implicit operator _InOptConst_List_Int(Const_List_Int value) {return new(value);}
            }
        }
    }
}
