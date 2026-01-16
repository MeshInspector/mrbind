public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector<int>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Vector_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Destroy(_Underlying *_this);
                    __MR_C_std_vector_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_Int() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_Int(MR.CS.Std._ByValue_Vector_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Const_Vector_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_int_Size(_Underlying *_this);
                    return __MR_C_std_vector_int_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_IsEmpty(_Underlying *_this);
                    return __MR_C_std_vector_int_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_int_Capacity(_Underlying *_this);
                    return __MR_C_std_vector_int_Capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe int this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_At", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_At(_Underlying *_this, ulong i);
                        return *__MR_C_std_vector_int_At(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe int? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Front", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_Front(_Underlying *_this);
                    var __ret = __MR_C_std_vector_int_Front(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe int? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Back", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_Back(_Underlying *_this);
                    var __ret = __MR_C_std_vector_int_Back(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// Returns a read-only pointer.
                /// </summary>
                public unsafe int *data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Data", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_Data(_Underlying *_this);
                    return __MR_C_std_vector_int_Data(_UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_Int.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_Begin(_Underlying *_this);
                    return new(__MR_C_std_vector_int_Begin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_IsBegin(_Underlying *_this, MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_Int.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_End(_Underlying *_this);
                    return new(__MR_C_std_vector_int_End(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_IsEnd(_Underlying *_this, MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_int_ToIndex(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_ToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_int_MutableToIndex(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_MutableToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_FromMutable(MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_const_iterator_Deref(_Underlying *_this);
                        return *__MR_C_std_vector_int_const_iterator_Deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_Int.Const_ConstIterator a, MR.CS.Std.Vector_Int.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_int_const_iterator_Distance(MR.CS.Std.Vector_Int.ConstIterator._Underlying *a, MR.CS.Std.Vector_Int.ConstIterator._Underlying *b);
                        return __MR_C_std_vector_int_const_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_Int.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *other);
                        __MR_C_std_vector_int_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_FromMutable(MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_int_const_iterator_OffsetBy(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_int_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_int_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.Vector_Int.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_iterator_ConstructFromAnother(MR.CS.Std.Vector_Int.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_int_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe ref int deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_iterator_Deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_int_iterator_Deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_Int.Const_Iterator a, MR.CS.Std.Vector_Int.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_int_iterator_Distance(MR.CS.Std.Vector_Int.Iterator._Underlying *a, MR.CS.Std.Vector_Int.Iterator._Underlying *b);
                        return __MR_C_std_vector_int_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_int_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.Vector_Int.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_iterator_ConstructFromAnother(MR.CS.Std.Vector_Int.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_int_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_Int.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *other);
                        __MR_C_std_vector_int_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_int_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_int_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_int_iterator_OffsetBy(_UnderlyingPtr, delta);
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
            /// Generated from C++ container `std::vector<int>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_Int : Const_Vector_Int
            {
                internal unsafe Vector_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_Int(MR.CS.Std._ByValue_Vector_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);
                    __MR_C_std_vector_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Vector_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Assign from a range of elements, overwriting previous contents.
                /// </summary>
                public unsafe void assign(int? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_AssignFromRange(_Underlying *_this, int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_vector_int_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_int_Resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ResizeWithDefaultValue", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_ResizeWithDefaultValue(_Underlying *_this, ulong new_size, int value);
                    __MR_C_std_vector_int_ResizeWithDefaultValue(_UnderlyingPtr, new_size, value);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Clear(_Underlying *_this);
                    __MR_C_std_vector_int_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_int_Reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ShrinkToFit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_ShrinkToFit(_Underlying *_this);
                    __MR_C_std_vector_int_ShrinkToFit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref int this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableAt", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_MutableAt(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_int_MutableAt(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableFront", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_MutableFront(_Underlying *_this);
                    var __ret = __MR_C_std_vector_int_MutableFront(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableBack", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_MutableBack(_Underlying *_this);
                    var __ret = __MR_C_std_vector_int_MutableBack(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// Returns a mutable pointer.
                /// </summary>
                public unsafe new int *data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableData", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_MutableData(_Underlying *_this);
                    return __MR_C_std_vector_int_MutableData(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_PushBack(_Underlying *_this, int new_elem);
                    __MR_C_std_vector_int_PushBack(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_PopBack(_Underlying *_this);
                    __MR_C_std_vector_int_PopBack(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(ulong position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Insert", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Insert(_Underlying *_this, ulong position, int new_elem);
                    __MR_C_std_vector_int_Insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(ulong position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Erase", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_Erase(_Underlying *_this, ulong position);
                    __MR_C_std_vector_int_Erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.Vector_Int.Const_Iterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_InsertAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_InsertAtMutableIter(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *position, int new_elem);
                    __MR_C_std_vector_int_InsertAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.Vector_Int.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_EraseAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_EraseAtMutableIter(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *position);
                    __MR_C_std_vector_int_EraseAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.Vector_Int.Const_ConstIterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_InsertAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_InsertAtIter(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *position, int new_elem);
                    __MR_C_std_vector_int_InsertAtIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.Vector_Int.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_EraseAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_EraseAtIter(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *position);
                    __MR_C_std_vector_int_EraseAtIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_Int.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_MutableBegin(_Underlying *_this);
                    return new(__MR_C_std_vector_int_MutableBegin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_IsMutableBegin(_Underlying *_this, MR.CS.Std.Vector_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_Int.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_MutableEnd(_Underlying *_this);
                    return new(__MR_C_std_vector_int_MutableEnd(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_IsMutableEnd(_Underlying *_this, MR.CS.Std.Vector_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_Int
            {
                internal readonly Const_Vector_Int? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_Int(Const_Vector_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_Int(Const_Vector_Int arg) {return new(arg);}
                public _ByValue_Vector_Int(MR.CS.Misc._Moved<Vector_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_Int(MR.CS.Misc._Moved<Vector_Int> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` directly.
            /// </summary>
            public class _InOptMut_Vector_Int
            {
                public Vector_Int? Opt;

                public _InOptMut_Vector_Int() {}
                public _InOptMut_Vector_Int(Vector_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_Int(Vector_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_Int
            {
                public Const_Vector_Int? Opt;

                public _InOptConst_Vector_Int() {}
                public _InOptConst_Vector_Int(Const_Vector_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_Int(Const_Vector_Int value) {return new(value);}
            }
        }
    }
}
