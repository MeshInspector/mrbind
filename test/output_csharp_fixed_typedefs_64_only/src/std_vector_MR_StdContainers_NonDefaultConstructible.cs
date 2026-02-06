public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRStdContainersNonDefaultConstructible : MR.CS.Misc.Object<Const_Vector_MRStdContainersNonDefaultConstructible>, System.IDisposable, IEnumerable<MR.CS.StdContainers.Const_NonDefaultConstructible>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRStdContainersNonDefaultConstructible() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.StdContainers.Const_NonDefaultConstructible>
                {
                    Const_Vector_MRStdContainersNonDefaultConstructible _container;
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_MRStdContainersNonDefaultConstructible container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.StdContainers.Const_NonDefaultConstructible Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return _cur.deref();
                        }
                    }

                    object System.Collections.IEnumerator.Current => Current;

                    public bool MoveNext()
                    {
                        if (_done)
                            return false;
                        if (_first)
                        {
                            _first = false;
                            return true;
                        }
                        _cur++;
                        if (_cur == _container.end())
                        {
                            _done = true;
                            return false;
                        }
                        return true;
                    }

                    public void Reset()
                    {
                        _cur = _container.begin();
                        _first = true;
                        _done = false;
                    }

                    void IDisposable.Dispose() {}
                }

                public IEnumerator<MR.CS.StdContainers.Const_NonDefaultConstructible> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Vector_MRStdContainersNonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRStdContainersNonDefaultConstructible() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRStdContainersNonDefaultConstructible(MR.CS.Std._ByValue_Vector_MRStdContainersNonDefaultConstructible other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible other) : this(new _ByValue_Vector_MRStdContainersNonDefaultConstructible(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRStdContainersNonDefaultConstructible(Vector_MRStdContainersNonDefaultConstructible other) : this((Const_Vector_MRStdContainersNonDefaultConstructible)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonDefaultConstructible this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.Const_NonDefaultConstructible __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonDefaultConstructible? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonDefaultConstructible? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonDefaultConstructible(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonDefaultConstructible? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonDefaultConstructible? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonDefaultConstructible(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable, System.IEquatable<Const_ConstIterator>
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonDefaultConstructible deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonDefaultConstructible __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator++(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator--(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_ConstIterator a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Compares two const iterators for equality.
                    /// </summary>
                    public static unsafe bool operator==(Const_ConstIterator a, Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *b);
                        return __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
                    }

                    public static unsafe bool operator!=(Const_ConstIterator a, Const_ConstIterator b)
                    {
                        return !(a == b);
                    }

                    // IEquatable:

                    public bool Equals(Const_ConstIterator? b)
                    {
                        if (b is null)
                            return false;
                        return this == b;
                    }

                    public override bool Equals(object? other)
                    {
                        if (other is null)
                            return false;
                        if (other is Const_ConstIterator)
                            return this == (Const_ConstIterator)other;
                        return false;
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void operator--()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable, System.IEquatable<Const_Iterator>
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.NonDefaultConstructible deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.NonDefaultConstructible __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator++(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator--(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_Iterator a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Compares two mutable iterators for equality.
                    /// </summary>
                    public static unsafe bool operator==(Const_Iterator a, Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *b);
                        return __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
                    }

                    public static unsafe bool operator!=(Const_Iterator a, Const_Iterator b)
                    {
                        return !(a == b);
                    }

                    // IEquatable:

                    public bool Equals(Const_Iterator? b)
                    {
                        if (b is null)
                            return false;
                        return this == b;
                    }

                    public override bool Equals(object? other)
                    {
                        if (other is null)
                            return false;
                        if (other is Const_Iterator)
                            return this == (Const_Iterator)other;
                        return false;
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void operator--()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(_UnderlyingPtr, delta);
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
            /// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRStdContainersNonDefaultConstructible : Const_Vector_MRStdContainersNonDefaultConstructible, IEnumerable<MR.CS.StdContainers.NonDefaultConstructible>
            {
                public new class _Enumerator : IEnumerator<MR.CS.StdContainers.NonDefaultConstructible>
                {
                    Vector_MRStdContainersNonDefaultConstructible _container;
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_MRStdContainersNonDefaultConstructible container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.StdContainers.NonDefaultConstructible Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return _cur.deref();
                        }
                    }

                    object System.Collections.IEnumerator.Current => Current;

                    public bool MoveNext()
                    {
                        if (_done)
                            return false;
                        if (_first)
                        {
                            _first = false;
                            return true;
                        }
                        _cur++;
                        if (_cur == _container.end())
                        {
                            _done = true;
                            return false;
                        }
                        return true;
                    }

                    public void Reset()
                    {
                        _cur = _container.begin();
                        _first = true;
                        _done = false;
                    }

                    void IDisposable.Dispose() {}
                }

                public new IEnumerator<MR.CS.StdContainers.NonDefaultConstructible> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Vector_MRStdContainersNonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRStdContainersNonDefaultConstructible() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRStdContainersNonDefaultConstructible(MR.CS.Std._ByValue_Vector_MRStdContainersNonDefaultConstructible other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible other) : this(new _ByValue_Vector_MRStdContainersNonDefaultConstructible(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRStdContainersNonDefaultConstructible(Vector_MRStdContainersNonDefaultConstructible other) : this((Const_Vector_MRStdContainersNonDefaultConstructible)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRStdContainersNonDefaultConstructible other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, MR.CS.StdContainers.Const_NonDefaultConstructible value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(_Underlying *_this, ulong new_size, MR.CS.StdContainers.Const_NonDefaultConstructible._Underlying *value);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(_UnderlyingPtr, new_size, value._UnderlyingPtr);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonDefaultConstructible this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.NonDefaultConstructible __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonDefaultConstructible? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonDefaultConstructible? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonDefaultConstructible(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonDefaultConstructible? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonDefaultConstructible? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonDefaultConstructible(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.StdContainers.Const_NonDefaultConstructible new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(_Underlying *_this, MR.CS.StdContainers.NonDefaultConstructible._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(_UnderlyingPtr, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(ulong position, MR.CS.StdContainers.Const_NonDefaultConstructible new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(_Underlying *_this, ulong position, MR.CS.StdContainers.NonDefaultConstructible._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(_UnderlyingPtr, position, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(ulong position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(_Underlying *_this, ulong position);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator position, MR.CS.StdContainers.Const_NonDefaultConstructible new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *position, MR.CS.StdContainers.NonDefaultConstructible._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *position);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator position, MR.CS.StdContainers.Const_NonDefaultConstructible new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *position, MR.CS.StdContainers.NonDefaultConstructible._Underlying *new_elem);
                    _KeepAlive(new_elem);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem._UnderlyingPtr);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.ConstIterator._Underlying *position);
                    __MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRStdContainersNonDefaultConstructible` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRStdContainersNonDefaultConstructible`/`Const_Vector_MRStdContainersNonDefaultConstructible` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRStdContainersNonDefaultConstructible
            {
                internal readonly Const_Vector_MRStdContainersNonDefaultConstructible? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRStdContainersNonDefaultConstructible() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible arg) {return new(arg);}
                public _ByValue_Vector_MRStdContainersNonDefaultConstructible(MR.CS.Misc._Moved<Vector_MRStdContainersNonDefaultConstructible> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRStdContainersNonDefaultConstructible(MR.CS.Misc._Moved<Vector_MRStdContainersNonDefaultConstructible> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRStdContainersNonDefaultConstructible` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRStdContainersNonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonDefaultConstructible`/`Const_Vector_MRStdContainersNonDefaultConstructible` directly.
            /// </summary>
            public class _InOptMut_Vector_MRStdContainersNonDefaultConstructible
            {
                public Vector_MRStdContainersNonDefaultConstructible? Opt;

                public _InOptMut_Vector_MRStdContainersNonDefaultConstructible() {}
                public _InOptMut_Vector_MRStdContainersNonDefaultConstructible(Vector_MRStdContainersNonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRStdContainersNonDefaultConstructible(Vector_MRStdContainersNonDefaultConstructible value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRStdContainersNonDefaultConstructible` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRStdContainersNonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonDefaultConstructible`/`Const_Vector_MRStdContainersNonDefaultConstructible` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRStdContainersNonDefaultConstructible
            {
                public Const_Vector_MRStdContainersNonDefaultConstructible? Opt;

                public _InOptConst_Vector_MRStdContainersNonDefaultConstructible() {}
                public _InOptConst_Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRStdContainersNonDefaultConstructible(Const_Vector_MRStdContainersNonDefaultConstructible value) {return new(value);}
            }
        }
    }
}
