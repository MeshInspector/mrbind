public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::unordered_set<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
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

                internal unsafe Const_UnorderedSet_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_UnorderedSet_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_UnorderedSet_MRStdContainersNonAssignable(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable other) : this(new _ByValue_UnorderedSet_MRStdContainersNonAssignable(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable other) : this((Const_UnorderedSet_MRStdContainersNonAssignable)other) {}

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size(_Underlying *_this);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty(_Underlying *_this);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_empty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_contains(_UnderlyingPtr, key._UnderlyingPtr) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator Find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin(_Underlying *_this);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end(_Underlying *_this);
                    MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_std_unordered_set_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
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

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Dereferences a const iterator.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Increments a const iterator.
                    public static unsafe ConstIterator operator++(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }
                }

                /// Read-only iterator for `MR_C_std_unordered_set_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_incr(_UnderlyingPtr);
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
                }
            }

            /// Generated from C++ container `std::unordered_set<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            public class UnorderedSet_MRStdContainersNonAssignable : Const_UnorderedSet_MRStdContainersNonAssignable
            {
                internal unsafe UnorderedSet_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe UnorderedSet_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe UnorderedSet_MRStdContainersNonAssignable(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public UnorderedSet_MRStdContainersNonAssignable(Const_UnorderedSet_MRStdContainersNonAssignable other) : this(new _ByValue_UnorderedSet_MRStdContainersNonAssignable(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable other) : this((Const_UnorderedSet_MRStdContainersNonAssignable)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_UnorderedSet_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_unordered_set_MR_StdContainers_NonAssignable_clear(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `UnorderedSet_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
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

            /// This is used for optional parameters of class `UnorderedSet_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UnorderedSet_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` directly.
            public class _InOptMut_UnorderedSet_MRStdContainersNonAssignable
            {
                public UnorderedSet_MRStdContainersNonAssignable? Opt;

                public _InOptMut_UnorderedSet_MRStdContainersNonAssignable() {}
                public _InOptMut_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_UnorderedSet_MRStdContainersNonAssignable(UnorderedSet_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// This is used for optional parameters of class `UnorderedSet_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UnorderedSet_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedSet_MRStdContainersNonAssignable`/`Const_UnorderedSet_MRStdContainersNonAssignable` to pass it to the function.
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
