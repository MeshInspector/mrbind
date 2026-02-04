public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector<MR::CSharp::A *>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRCSharpAPtr : MR.CS.Misc.Object<Const_Vector_MRCSharpAPtr>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_A_ptr_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRCSharpAPtr() {Dispose(false);}

                internal unsafe Const_Vector_MRCSharpAPtr(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRCSharpAPtr() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRCSharpAPtr(MR.CS.Std._ByValue_Vector_MRCSharpAPtr other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpAPtr._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr other) : this(new _ByValue_Vector_MRCSharpAPtr(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCSharpAPtr(Vector_MRCSharpAPtr other) : this((Const_Vector_MRCSharpAPtr)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_CSharp_A_ptr_size(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_A_ptr_empty(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_CSharp_A_ptr_capacity(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// In C++ this function returns an rvalue reference.
                /// </summary>
                public unsafe ref readonly void *this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_at", ExactSpelling = true)]
                        extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_at(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_MR_CSharp_A_ptr_at(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe void **front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_front", ExactSpelling = true)]
                    extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_front(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_front(_UnderlyingPtr);
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe void **back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_back", ExactSpelling = true)]
                    extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_back(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_back(_UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_begin(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_A_ptr_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_A_ptr_is_begin(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_end", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_end(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_A_ptr_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_A_ptr_is_end(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_to_index", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_CSharp_A_ptr_to_index(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_to_index(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// In C++ this function returns an rvalue reference.
                    /// </summary>
                    public unsafe ref readonly void *deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref", ExactSpelling = true)]
                        extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator++(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator--(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_ConstIterator a, MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// In C++ this function returns an rvalue reference.
                    /// </summary>
                    public unsafe ref void *deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref", ExactSpelling = true)]
                        extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator++(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator--(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_Iterator a, MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator(MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *a, MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign(_UnderlyingPtr, delta);
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
            /// Generated from C++ container `std::vector<MR::CSharp::A *>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRCSharpAPtr : Const_Vector_MRCSharpAPtr
            {
                internal unsafe Vector_MRCSharpAPtr(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRCSharpAPtr() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRCSharpAPtr(MR.CS.Std._ByValue_Vector_MRCSharpAPtr other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpAPtr._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr other) : this(new _ByValue_Vector_MRCSharpAPtr(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCSharpAPtr(Vector_MRCSharpAPtr other) : this((Const_Vector_MRCSharpAPtr)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRCSharpAPtr other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpAPtr._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_MR_CSharp_A_ptr_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, MR.CS.CSharp.A? value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value(_Underlying *_this, ulong new_size, MR.CS.CSharp.A._Underlying *value);
                    __MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value(_UnderlyingPtr, new_size, value is not null ? value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_CSharp_A_ptr_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_MR_CSharp_A_ptr_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// In C++ this function returns an rvalue reference.
                /// </summary>
                public unsafe new ref void *this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_at_mut", ExactSpelling = true)]
                        extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_at_mut(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_MR_CSharp_A_ptr_at_mut(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new void **front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_front_mut", ExactSpelling = true)]
                    extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_front_mut(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_front_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new void **back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_back_mut", ExactSpelling = true)]
                    extern static void **__MR_C_std_vector_MR_CSharp_A_ptr_back_mut(_Underlying *_this);
                    return __MR_C_std_vector_MR_CSharp_A_ptr_back_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.CSharp.A? new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_push_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_push_back(_Underlying *_this, MR.CS.CSharp.A._Underlying *new_elem);
                    if (new_elem is not null) _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_CSharp_A_ptr_push_back(_UnderlyingPtr, new_elem is not null ? new_elem._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_pop_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_pop_back(_Underlying *_this);
                    __MR_C_std_vector_MR_CSharp_A_ptr_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(ulong position, MR.CS.CSharp.A? new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_insert", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_insert(_Underlying *_this, ulong position, MR.CS.CSharp.A._Underlying *new_elem);
                    if (new_elem is not null) _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_CSharp_A_ptr_insert(_UnderlyingPtr, position, new_elem is not null ? new_elem._UnderlyingPtr : null);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(ulong position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_erase", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_erase(_Underlying *_this, ulong position);
                    __MR_C_std_vector_MR_CSharp_A_ptr_erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator position, MR.CS.CSharp.A? new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *position, MR.CS.CSharp.A._Underlying *new_elem);
                    if (new_elem is not null) _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem is not null ? new_elem._UnderlyingPtr : null);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.Vector_MRCSharpAPtr.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *position);
                    __MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator position, MR.CS.CSharp.A? new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *position, MR.CS.CSharp.A._Underlying *new_elem);
                    if (new_elem is not null) _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem is not null ? new_elem._UnderlyingPtr : null);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.Vector_MRCSharpAPtr.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter(_Underlying *_this, MR.CS.Std.Vector_MRCSharpAPtr.ConstIterator._Underlying *position);
                    __MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRCSharpAPtr.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_begin_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpAPtr.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_A_ptr_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRCSharpAPtr.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_A_ptr_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRCSharpAPtr.Iterator._Underlying *__MR_C_std_vector_MR_CSharp_A_ptr_end_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRCSharpAPtr.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_CSharp_A_ptr_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRCSharpAPtr` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRCSharpAPtr`/`Const_Vector_MRCSharpAPtr` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRCSharpAPtr
            {
                internal readonly Const_Vector_MRCSharpAPtr? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRCSharpAPtr() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr arg) {return new(arg);}
                public _ByValue_Vector_MRCSharpAPtr(MR.CS.Misc._Moved<Vector_MRCSharpAPtr> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRCSharpAPtr(MR.CS.Misc._Moved<Vector_MRCSharpAPtr> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpAPtr` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRCSharpAPtr`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpAPtr`/`Const_Vector_MRCSharpAPtr` directly.
            /// </summary>
            public class _InOptMut_Vector_MRCSharpAPtr
            {
                public Vector_MRCSharpAPtr? Opt;

                public _InOptMut_Vector_MRCSharpAPtr() {}
                public _InOptMut_Vector_MRCSharpAPtr(Vector_MRCSharpAPtr value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRCSharpAPtr(Vector_MRCSharpAPtr value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpAPtr` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRCSharpAPtr`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpAPtr`/`Const_Vector_MRCSharpAPtr` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRCSharpAPtr
            {
                public Const_Vector_MRCSharpAPtr? Opt;

                public _InOptConst_Vector_MRCSharpAPtr() {}
                public _InOptConst_Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRCSharpAPtr(Const_Vector_MRCSharpAPtr value) {return new(value);}
            }
        }
    }
}
