public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            public class Const_Vector_MRStdContainersNonAssignable : MR.CS.Misc.Object<Const_Vector_MRStdContainersNonAssignable>, System.IDisposable, IEnumerable<MR.CS.StdContainers.Const_NonAssignable>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                public class _Enumerator : IEnumerator<MR.CS.StdContainers.Const_NonAssignable>
                {
                    Const_Vector_MRStdContainersNonAssignable _container;
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_MRStdContainersNonAssignable container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.StdContainers.Const_NonAssignable Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return _cur.Deref();
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
                        _cur.Incr();
                        if (_cur == _container.End())
                        {
                            _done = true;
                            return false;
                        }
                        return true;
                    }

                    public void Reset()
                    {
                        _cur = _container.Begin();
                        _first = true;
                        _done = false;
                    }

                    void IDisposable.Dispose() {}
                }

                public IEnumerator<MR.CS.StdContainers.Const_NonAssignable> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Vector_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Vector_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Vector_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable other) : this(new _ByValue_Vector_MRStdContainersNonAssignable(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable other) : this((Const_Vector_MRStdContainersNonAssignable)other) {}

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonAssignable_size(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_empty(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_empty(_UnderlyingPtr) != 0;
                }

                /// The memory capacity, measued in the number of elements.
                public unsafe ulong Capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_MR_StdContainers_NonAssignable_capacity(_Underlying *_this);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_capacity(_UnderlyingPtr);
                }

                /// The element at a specific index, read-only.
                public unsafe MR.CS.StdContainers.Const_NonAssignable this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_at", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_at(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// The first element or null if empty, read-only.
                public unsafe MR.CS.StdContainers.Const_NonAssignable? Front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_front", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_front(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The last element or null if empty, read-only.
                public unsafe MR.CS.StdContainers.Const_NonAssignable? Back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_back", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_back(_UnderlyingPtr);
                    MR.CS.StdContainers.Const_NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.Const_NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_begin(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Tests whether a mutable iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_end", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_end(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_is_end(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Tests whether a mutable iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_MR_StdContainers_NonAssignable_is_end_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Convert a const iterator to an index.
                public unsafe long ToIndex(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_to_index", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_to_index(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_to_index(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// Convert a mutable iterator to an index.
                public unsafe long ToIndex(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_to_index_mut", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_MR_StdContainers_NonAssignable_to_index_mut(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                    return __MR_C_std_vector_MR_StdContainers_NonAssignable_to_index_mut(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable, System.IEquatable<Const_ConstIterator>
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

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

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Makes a const iterator from a mutable one.
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// Dereferences a const iterator.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Increments a const iterator.
                    public static unsafe ConstIterator operator++(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// Decrements a const iterator.
                    public static unsafe ConstIterator operator--(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    public static unsafe long operator-(Const_ConstIterator a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }

                    /// Compares two const iterators for equality.
                    public static unsafe bool operator==(Const_ConstIterator a, Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *b);
                        return __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
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

                /// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new(iter);}

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr(_UnderlyingPtr);
                    }

                    /// Decrements a const iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr(_UnderlyingPtr);
                    }

                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    public unsafe void AddAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_add_assign(_UnderlyingPtr, delta);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable, System.IEquatable<Const_Iterator>
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

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

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_Iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// Dereferences a mutable iterator.
                    public unsafe MR.CS.StdContainers.NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.NonAssignable __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Increments a mutable iterator.
                    public static unsafe Iterator operator++(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// Decrements a mutable iterator.
                    public static unsafe Iterator operator--(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    public static unsafe long operator-(Const_Iterator a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
                    }

                    /// Compares two mutable iterators for equality.
                    public static unsafe bool operator==(Const_Iterator a, Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *a, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *b);
                        return __MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
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

                /// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class Iterator : Const_Iterator
                {
                    internal unsafe Iterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Iterator(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.Vector_MRStdContainersNonAssignable.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a mutable iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr(_UnderlyingPtr);
                    }

                    /// Decrements a mutable iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr(_UnderlyingPtr);
                    }

                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    public unsafe void AddAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_add_assign(_UnderlyingPtr, delta);
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

            /// Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            public class Vector_MRStdContainersNonAssignable : Const_Vector_MRStdContainersNonAssignable, IEnumerable<MR.CS.StdContainers.NonAssignable>
            {
                public new class _Enumerator : IEnumerator<MR.CS.StdContainers.NonAssignable>
                {
                    Vector_MRStdContainersNonAssignable _container;
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_MRStdContainersNonAssignable container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.StdContainers.NonAssignable Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return _cur.Deref();
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
                        _cur.Incr();
                        if (_cur == _container.End())
                        {
                            _done = true;
                            return false;
                        }
                        return true;
                    }

                    public void Reset()
                    {
                        _cur = _container.Begin();
                        _first = true;
                        _done = false;
                    }

                    void IDisposable.Dispose() {}
                }

                public new IEnumerator<MR.CS.StdContainers.NonAssignable> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Vector_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Vector_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Vector_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_MRStdContainersNonAssignable(Const_Vector_MRStdContainersNonAssignable other) : this(new _ByValue_Vector_MRStdContainersNonAssignable(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable other) : this((Const_Vector_MRStdContainersNonAssignable)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Vector_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Resizes the container. The new elements if any are zeroed.
                public unsafe void Resize(ulong new_size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_resize(_UnderlyingPtr, new_size);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_clear(_UnderlyingPtr);
                }

                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                public unsafe void Reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(_UnderlyingPtr, new_capacity);
                }

                /// Shrinks the capacity to match the size.
                public unsafe void ShrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit(_UnderlyingPtr);
                }

                /// The element at a specific index, mutable.
                public unsafe new MR.CS.StdContainers.NonAssignable this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.NonAssignable __ret;
                        __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// The first element or null if empty, mutable.
                public unsafe new MR.CS.StdContainers.NonAssignable? Front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The last element or null if empty, mutable.
                public unsafe new MR.CS.StdContainers.NonAssignable? Back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(_UnderlyingPtr);
                    MR.CS.StdContainers.NonAssignable? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdContainers.NonAssignable(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Inserts a new element at the end.
                public unsafe void PushBack(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_push_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Removes one element from the end.
                public unsafe void PopBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(_Underlying *_this);
                    __MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(_UnderlyingPtr);
                }

                /// The begin iterator, mutable.
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The end iterator, mutable.
                public unsafe new MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator._Underlying *__MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut(_Underlying *_this);
                    MR.CS.Std.Vector_MRStdContainersNonAssignable.Iterator __ret;
                    __ret = new(__MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// This is used as a function parameter when the underlying function receives `Vector_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
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

            /// This is used for optional parameters of class `Vector_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` directly.
            public class _InOptMut_Vector_MRStdContainersNonAssignable
            {
                public Vector_MRStdContainersNonAssignable? Opt;

                public _InOptMut_Vector_MRStdContainersNonAssignable() {}
                public _InOptMut_Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRStdContainersNonAssignable(Vector_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// This is used for optional parameters of class `Vector_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRStdContainersNonAssignable`/`Const_Vector_MRStdContainersNonAssignable` to pass it to the function.
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
