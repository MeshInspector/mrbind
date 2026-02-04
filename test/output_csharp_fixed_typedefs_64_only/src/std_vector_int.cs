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
            public class Const_Vector_Int : MR.CS.Misc.Object<Const_Vector_Int>, System.IDisposable, IEnumerable<int>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                public class _Enumerator : IEnumerator<int>
                {
                    Const_Vector_Int _container;
                    MR.CS.Std.Vector_Int.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_Int container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public int Current
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

                public IEnumerator<int> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Vector_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_Int(Const_Vector_Int other) : this(new _ByValue_Vector_Int(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_Int(Vector_Int other) : this((Const_Vector_Int)other) {}

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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_int_size(_Underlying *_this);
                    return __MR_C_std_vector_int_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_empty(_Underlying *_this);
                    return __MR_C_std_vector_int_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe ulong capacity()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_capacity", ExactSpelling = true)]
                    extern static ulong __MR_C_std_vector_int_capacity(_Underlying *_this);
                    return __MR_C_std_vector_int_capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe int this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_at", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_at(_Underlying *_this, ulong i);
                        return *__MR_C_std_vector_int_at(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe int? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_front", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_front(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int_front(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe int? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_back", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_back(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int_back(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.ConstPtrInt data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_data", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_data(_Underlying *_this);
                    return new(__MR_C_std_vector_int_data(_UnderlyingPtr));
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_Int.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_begin(_Underlying *_this);
                    MR.CS.Std.Vector_Int.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_int_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_is_begin(_Underlying *_this, MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_is_begin_mut(_Underlying *_this, MR.CS.Std.Vector_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.Vector_Int.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_end", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_end(_Underlying *_this);
                    MR.CS.Std.Vector_Int.ConstIterator __ret;
                    __ret = new(__MR_C_std_vector_int_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_is_end(_Underlying *_this, MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_vector_int_is_end_mut(_Underlying *_this, MR.CS.Std.Vector_Int.Const_Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Convert a const iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_to_index", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_int_to_index(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *iter);
                    return __MR_C_std_vector_int_to_index(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Convert a mutable iterator to an index.
                /// </summary>
                public unsafe long toIndex(MR.CS.Std.Vector_Int.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_to_index_mut", ExactSpelling = true)]
                    extern static long __MR_C_std_vector_int_to_index_mut(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                    return __MR_C_std_vector_int_to_index_mut(_UnderlyingPtr, iter._UnderlyingPtr);
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_vector_int`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_Destroy(_UnderlyingPtr);
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
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_from_mutable(MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_from_mutable(iter._UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_const_iterator_deref(_Underlying *_this);
                        return *__MR_C_std_vector_int_const_iterator_deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator++(MR.CS.Std.Vector_Int.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_incr(MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_int_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator--(MR.CS.Std.Vector_Int.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_decr(MR.CS.Std.Vector_Int.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_vector_int_const_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two const iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_ConstIterator a, MR.CS.Std.Vector_Int.Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_int_const_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_int_const_iterator(MR.CS.Std.Vector_Int.ConstIterator._Underlying *a, MR.CS.Std.Vector_Int.ConstIterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_int_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
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
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_Int.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_int_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.Vector_Int.ConstIterator._Underlying *__MR_C_std_vector_int_const_iterator_from_mutable(MR.CS.Std.Vector_Int.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_vector_int_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.Vector_Int.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a const iterator.
                    /// </summary>
                    public unsafe void operator--()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_int_const_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_const_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_const_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_int_const_iterator_add_assign(_UnderlyingPtr, delta);
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
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

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

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_deref", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_iterator_deref(_Underlying *_this);
                        return ref *__MR_C_std_vector_int_iterator_deref(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator++(MR.CS.Std.Vector_Int.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_incr(MR.CS.Std.Vector_Int.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_int_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator--(MR.CS.Std.Vector_Int.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_decr(MR.CS.Std.Vector_Int.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_vector_int_iterator_decr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Computes the signed difference between two mutable iterators. Completes in constant time.
                    /// </summary>
                    public static unsafe long operator-(Const_Iterator a, MR.CS.Std.Vector_Int.Const_Iterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_C_std_vector_int_iterator", ExactSpelling = true)]
                        extern static long __MR_C_sub_MR_C_std_vector_int_iterator(MR.CS.Std.Vector_Int.Iterator._Underlying *a, MR.CS.Std.Vector_Int.Iterator._Underlying *b);
                        return __MR_C_sub_MR_C_std_vector_int_iterator(a._UnderlyingPtr, b._UnderlyingPtr);
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
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.Vector_Int.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_vector_int_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_incr(_Underlying *_this);
                        __MR_C_std_vector_int_iterator_incr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Decrements a mutable iterator.
                    /// </summary>
                    public unsafe void operator--()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_decr", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_decr(_Underlying *_this);
                        __MR_C_std_vector_int_iterator_decr(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
                    /// </summary>
                    public unsafe void addAssign(long delta)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_iterator_add_assign", ExactSpelling = true)]
                        extern static void __MR_C_std_vector_int_iterator_add_assign(_Underlying *_this, long delta);
                        __MR_C_std_vector_int_iterator_add_assign(_UnderlyingPtr, delta);
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
            public class Vector_Int : Const_Vector_Int, IEnumerable<MR.CS.Misc.Ref<int>>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Misc.Ref<int>>
                {
                    Vector_Int _container;
                    MR.CS.Std.Vector_Int.Iterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_Int container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.Misc.Ref<int> Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return new(ref _cur.deref());
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

                public new IEnumerator<MR.CS.Misc.Ref<int>> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

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
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_Int(Const_Vector_Int other) : this(new _ByValue_Vector_Int(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_Int(Vector_Int other) : this((Const_Vector_Int)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_resize", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_resize(_Underlying *_this, ulong new_size);
                    __MR_C_std_vector_int_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(ulong new_size, int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_resize_with_default_value", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_resize_with_default_value(_Underlying *_this, ulong new_size, int value);
                    __MR_C_std_vector_int_resize_with_default_value(_UnderlyingPtr, new_size, value);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_vector_int_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(ulong new_capacity)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_reserve", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_reserve(_Underlying *_this, ulong new_capacity);
                    __MR_C_std_vector_int_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_shrink_to_fit", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_shrink_to_fit(_Underlying *_this);
                    __MR_C_std_vector_int_shrink_to_fit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref int this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_at_mut", ExactSpelling = true)]
                        extern static int *__MR_C_std_vector_int_at_mut(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_vector_int_at_mut(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? front()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_front_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_front_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int_front_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? back()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_back_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_back_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_vector_int_back_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.PtrInt data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_data_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_vector_int_data_mut(_Underlying *_this);
                    return new(__MR_C_std_vector_int_data_mut(_UnderlyingPtr));
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_push_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_push_back(_Underlying *_this, int new_elem);
                    __MR_C_std_vector_int_push_back(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_pop_back", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_pop_back(_Underlying *_this);
                    __MR_C_std_vector_int_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(ulong position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_insert", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_insert(_Underlying *_this, ulong position, int new_elem);
                    __MR_C_std_vector_int_insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(ulong position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_erase", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_erase(_Underlying *_this, ulong position);
                    __MR_C_std_vector_int_erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insertAtMutableIter(MR.CS.Std.Vector_Int.Const_Iterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_insert_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_insert_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *position, int new_elem);
                    __MR_C_std_vector_int_insert_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void eraseAtMutableIter(MR.CS.Std.Vector_Int.Const_Iterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_erase_at_mutable_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_erase_at_mutable_iter(_Underlying *_this, MR.CS.Std.Vector_Int.Iterator._Underlying *position);
                    __MR_C_std_vector_int_erase_at_mutable_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void insertAtIter(MR.CS.Std.Vector_Int.Const_ConstIterator position, int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_insert_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_insert_at_iter(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *position, int new_elem);
                    __MR_C_std_vector_int_insert_at_iter(_UnderlyingPtr, position._UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
                /// </summary>
                public unsafe void eraseAtIter(MR.CS.Std.Vector_Int.Const_ConstIterator position)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_erase_at_iter", ExactSpelling = true)]
                    extern static void __MR_C_std_vector_int_erase_at_iter(_Underlying *_this, MR.CS.Std.Vector_Int.ConstIterator._Underlying *position);
                    __MR_C_std_vector_int_erase_at_iter(_UnderlyingPtr, position._UnderlyingPtr);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_Int.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_begin_mut(_Underlying *_this);
                    MR.CS.Std.Vector_Int.Iterator __ret;
                    __ret = new(__MR_C_std_vector_int_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.Vector_Int.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.Vector_Int.Iterator._Underlying *__MR_C_std_vector_int_end_mut(_Underlying *_this);
                    MR.CS.Std.Vector_Int.Iterator __ret;
                    __ret = new(__MR_C_std_vector_int_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
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
