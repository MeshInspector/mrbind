public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRStdContainersNonAssignable : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Vector_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRStdContainersNonAssignable() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonAssignable_Size(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_IsEmpty(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonAssignable_Capacity(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_Capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_At", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_At(_Underlying *_this, ulong i);
                        return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_At(_UnderlyingPtr, i), is_owning: false);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Front", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_Front(_Underlying *_this);
                    var __ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_Front(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__ret, is_owning: false) : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Back", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_Back(_Underlying *_this);
                    var __ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_Back(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__ret, is_owning: false) : null;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_Begin(_Underlying *_this);
                    return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_Begin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_IsBegin(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_End(_Underlying *_this);
                    return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_End(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_IsEnd(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_ToIndex(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_ToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_MutableToIndex(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_MutableToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonAssignable deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Deref(_Underlying *_this);
                        return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Deref(_UnderlyingPtr), is_owning: false);
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Distance(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *b);
                        return __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_OffsetBy(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.NonAssignable deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Deref(_Underlying *_this);
                        return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Deref(_UnderlyingPtr), is_owning: false);
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Distance(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *b);
                        return __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_OffsetBy(_UnderlyingPtr, delta);
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
            /// Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRStdContainersNonAssignable : Const_Vector_MRStdContainersNonAssignable
            {
                internal unsafe Vector_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_Resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_Clear(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_Reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_Reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_Reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ShrinkToFit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_ShrinkToFit(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_ShrinkToFit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableAt", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableAt(_Underlying *_this, ulong i);
                        return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableAt(_UnderlyingPtr, i), is_owning: false);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableFront", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableFront(_Underlying *_this);
                    var __ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_MutableFront(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdContainers.NonAssignable(__ret, is_owning: false) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBack", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBack(_Underlying *_this);
                    var __ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBack(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdContainers.NonAssignable(__ret, is_owning: false) : null;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_PushBack(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_PushBack(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_PopBack(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_PopBack(_UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBegin(_Underlying *_this);
                    return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableBegin(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableBegin(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableEnd(_Underlying *_this);
                    return new(__MR_C_std_vector_MR_StdContainers_NonAssignable_MutableEnd(_UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableEnd(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRStdContainersNonAssignable
            {
                internal readonly Const_Vector_MRStdContainersNonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_Vector_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Vector_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Vector_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` directly.
            /// </summary>
            public class _InOptMut_Vector_MRStdContainersNonAssignable
            {
                public Vector_MRStdContainersNonAssignable? Opt;

                public _InOptMut_Vector_MRStdContainersNonAssignable() {}
                public _InOptMut_Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRStdContainersNonAssignable
            {
                public Const_Vector_MRStdContainersNonAssignable? Opt;

                public _InOptConst_Vector_MRStdContainersNonAssignable() {}
                public _InOptConst_Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
