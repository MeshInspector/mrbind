public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::unordered_set<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UnorderedSet_MRStdContainersNonAssignable : MR.CS.Misc.Object<Const_UnorderedSet_MRStdContainersNonAssignable>, System.IDisposable, IEnumerable<MR.CS.StdContainers.Const_NonAssignable>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UnorderedSet_MRStdContainersNonAssignable() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.StdContainers.Const_NonAssignable>
                {
                    Const_UnorderedSet_MRStdContainersNonAssignable _container;
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_UnorderedSet_MRStdContainersNonAssignable container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.StdContainers.Const_NonAssignable Current
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

                public IEnumerator<MR.CS.StdContainers.Const_NonAssignable> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_UnorderedSet_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UnorderedSet_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UnorderedSet_MRStdContainersNonAssignable(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable other) : this(new _ByValue_UnorderedSet_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable other) : this((Const_UnorderedSet_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size(_Underlying *_this);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty(_Underlying *_this);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Checks if the contain contains this key.
                /// </summary>
                public unsafe bool contains(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains(_UnderlyingPtr, key._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin(_Underlying *_this);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end(_Underlying *_this);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_unordered_set_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonAssignable deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator++(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// <summary>
                    /// Compares two const iterators for equality.
                    /// </summary>
                    public static unsafe bool operator==(Const_ConstIterator a, Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *a, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *b);
                        return __MR_C_equal_MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
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
                /// Read-only iterator for `MR_C_std_unordered_set_MR_StdContainers_NonAssignable`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(_UnderlyingPtr);
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
                }
            }

            /// <summary>
            /// Generated from C++ container `std::unordered_set<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class UnorderedSet_MRStdContainersNonAssignable : Const_UnorderedSet_MRStdContainersNonAssignable
            {
                internal unsafe UnorderedSet_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UnorderedSet_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UnorderedSet_MRStdContainersNonAssignable(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable other) : this(new _ByValue_UnorderedSet_MRStdContainersNonAssignable(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable other) : this((Const_UnorderedSet_MRStdContainersNonAssignable)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `UnorderedSet_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_UnorderedSet_MRStdContainersNonAssignable
            {
                internal readonly Const_UnorderedSet_MRStdContainersNonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_UnorderedSet_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_UnorderedSet_MRStdContainersNonAssignable(MR.CS.Misc._Moved<UnorderedSet_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_UnorderedSet_MRStdContainersNonAssignable(MR.CS.Misc._Moved<UnorderedSet_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UnorderedSet_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UnorderedSet_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` directly.
            /// </summary>
            public class _InOptMut_UnorderedSet_MRStdContainersNonAssignable
            {
                public UnorderedSet_MRStdContainersNonAssignable? Opt;

                public _InOptMut_UnorderedSet_MRStdContainersNonAssignable() {}
                public _InOptMut_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UnorderedSet_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UnorderedSet_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` to pass it to the function.
            /// </summary>
            public class _InOptConst_UnorderedSet_MRStdContainersNonAssignable
            {
                public Const_UnorderedSet_MRStdContainersNonAssignable? Opt;

                public _InOptConst_UnorderedSet_MRStdContainersNonAssignable() {}
                public _InOptConst_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
