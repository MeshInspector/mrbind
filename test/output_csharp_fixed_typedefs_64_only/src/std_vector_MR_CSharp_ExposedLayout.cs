public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRCSharpExposedLayout : MR.CS.Misc.Object<Const_Vector_MRCSharpExposedLayout>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Vector_MRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRCSharpExposedLayout() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(MR.CS.CSharp.ExposedLayout *ptr, ulong size);
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_CSharp_ExposedLayout_Size(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_ExposedLayout_IsEmpty(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_CSharp_ExposedLayout_Capacity(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_Capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_At", ExactSpelling = true)]
                        extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_At(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_At(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ExposedLayout? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Front", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_Front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_Front(_UnderlyingPtr);
                    if (__c_ret is not null) return *__c_ret; else return null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ExposedLayout? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Back", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_Back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_Back(_UnderlyingPtr);
                    if (__c_ret is not null) return *__c_ret; else return null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ConstPtrExposedLayout? data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Data", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_Data(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_Data(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_Begin(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_ExposedLayout_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_ExposedLayout_IsBegin(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_End(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_ExposedLayout_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_ExposedLayout_IsEnd(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_CSharp_ExposedLayout_ToIndex(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_ToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableToIndex", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_CSharp_ExposedLayout_MutableToIndex(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_MutableToIndex(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable(MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe ref readonly MR.CS.CSharp.ExposedLayout deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator a, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Distance(MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *b);
                        return __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable(MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetBy(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe ref MR.CS.CSharp.ExposedLayout deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long distance(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator a, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Distance", ExactSpelling = true)]
                        extern static long __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Distance(MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *a, MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *b);
                        return __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Distance(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Incr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Decr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void offsetBy(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetBy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetBy(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetBy(_UnderlyingPtr, delta);
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
            /// Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRCSharpExposedLayout : Const_Vector_MRCSharpExposedLayout
            {
                internal unsafe Vector_MRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(MR.CS.CSharp.ExposedLayout *ptr, ulong size);
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Assign from a range of elements, overwriting previous contents.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp.ExposedLayout? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(_Underlying *_this, MR.CS.CSharp.ExposedLayout *ptr, ulong size);
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, in MR.CS.CSharp.ExposedLayout value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ResizeWithDefaultValue", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_ResizeWithDefaultValue(_Underlying *_this, ulong new_size, MR.CS.CSharp.ExposedLayout *value);
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr_value = &value)
                    {
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_ResizeWithDefaultValue(_UnderlyingPtr, new_size, __ptr_value);
                    }
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ShrinkToFit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_ShrinkToFit(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_ShrinkToFit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref MR.CS.CSharp.ExposedLayout this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableAt", ExactSpelling = true)]
                        extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableAt(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableAt(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableFront", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableFront(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_MutableFront(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBack", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBack(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBack(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>(__c_ret) : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.CSharp.PtrExposedLayout? data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableData", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableData(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_MutableData(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.CSharp.ExposedLayout new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_PushBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_PushBack(_Underlying *_this, MR.CS.CSharp.ExposedLayout new_elem);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_PushBack(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_PopBack", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_PopBack(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_PopBack(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(ulong position, MR.CS.CSharp.ExposedLayout new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Insert", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Insert(_Underlying *_this, ulong position, MR.CS.CSharp.ExposedLayout new_elem);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(ulong position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Erase", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_Erase(_Underlying *_this, ulong position);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator position, MR.CS.CSharp.ExposedLayout new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtMutableIter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *position, MR.CS.CSharp.ExposedLayout new_elem);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtMutableIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtMutableIter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *position);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtMutableIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator position, MR.CS.CSharp.ExposedLayout new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtIter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *position, MR.CS.CSharp.ExposedLayout new_elem);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtIter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtIter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtIter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.ConstIterator._Underlying *position);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtIter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBegin(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBegin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableBegin(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableEnd(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpExposedLayout.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_ExposedLayout_MutableEnd(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableEnd(_Underlying *_this, MR.CS.Std.Vector_MRCSharpExposedLayout.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRCSharpExposedLayout` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRCSharpExposedLayout
            {
                internal readonly Const_Vector_MRCSharpExposedLayout? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRCSharpExposedLayout() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout arg) {return new(arg);}
                public _ByValue_Vector_MRCSharpExposedLayout(MR.CS.Misc._Moved<Vector_MRCSharpExposedLayout> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRCSharpExposedLayout(MR.CS.Misc._Moved<Vector_MRCSharpExposedLayout> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpExposedLayout` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` directly.
            /// </summary>
            public class _InOptMut_Vector_MRCSharpExposedLayout
            {
                public Vector_MRCSharpExposedLayout? Opt;

                public _InOptMut_Vector_MRCSharpExposedLayout() {}
                public _InOptMut_Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpExposedLayout` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRCSharpExposedLayout
            {
                public Const_Vector_MRCSharpExposedLayout? Opt;

                public _InOptConst_Vector_MRCSharpExposedLayout() {}
                public _InOptConst_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout value) {return new(value);}
            }
        }
    }
}
