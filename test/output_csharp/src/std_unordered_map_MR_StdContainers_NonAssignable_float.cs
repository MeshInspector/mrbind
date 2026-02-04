public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::unordered_map<MR::StdContainers::NonAssignable, float>`.
            /// This is the const half of the class.
            public class Const_UnorderedMap_MRStdContainersNonAssignable_Float : MR.CS.Misc.Object<Const_UnorderedMap_MRStdContainersNonAssignable_Float>, System.IDisposable, IEnumerable<MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy(_Underlying *_this);
                    __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UnorderedMap_MRStdContainersNonAssignable_Float() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float>
                {
                    Const_UnorderedMap_MRStdContainersNonAssignable_Float _container;
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_UnorderedMap_MRStdContainersNonAssignable_Float container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float Current
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

                public IEnumerator<MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(new _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float other) : this((Const_UnorderedMap_MRStdContainersNonAssignable_Float)other) {}

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_size(_Underlying *_this);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_empty", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_empty(_Underlying *_this);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_empty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_contains(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_contains(_UnderlyingPtr, key._UnderlyingPtr) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator Find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Tests whether a mutable iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin_mut(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Tests whether a mutable iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end_mut(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Makes a const iterator from a mutable one.
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new(iter);}

                    /// Dereferences a const iterator.
                    public unsafe MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(_Underlying *_this);
                        MR.CS.Std.Const_Pair_ConstMRStdContainersNonAssignable_Float __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Dereferences a const iterator, returning the key.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable DerefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Dereferences a const iterator, returning the mapped value.
                    public unsafe float DerefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value", ExactSpelling = true)]
                        extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(_Underlying *_this);
                        return *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(_UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public static unsafe ConstIterator operator++(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }
                }

                /// Read-only iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new(iter);}

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(_UnderlyingPtr);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// Mutable iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
                /// This is the const half of the class.
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_Iterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// Dereferences a mutable iterator.
                    public unsafe MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref(_Underlying *_this);
                        MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Dereferences a mutable iterator, returning the key.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable DerefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_key", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// Dereferences a mutable iterator, returning the mapped value.
                    public unsafe ref float DerefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_value", ExactSpelling = true)]
                        extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(_Underlying *_this);
                        return ref *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(_UnderlyingPtr);
                    }

                    /// Increments a mutable iterator.
                    public static unsafe Iterator operator++(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }
                }

                /// Mutable iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
                /// This is the non-const half of the class.
                public class Iterator : Const_Iterator
                {
                    internal unsafe Iterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Iterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a mutable iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(_UnderlyingPtr);
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

            /// Generated from C++ container `std::unordered_map<MR::StdContainers::NonAssignable, float>`.
            /// This is the non-const half of the class.
            public class UnorderedMap_MRStdContainersNonAssignable_Float : Const_UnorderedMap_MRStdContainersNonAssignable_Float, IEnumerable<MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float>
                {
                    UnorderedMap_MRStdContainersNonAssignable_Float _container;
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(UnorderedMap_MRStdContainersNonAssignable_Float container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float Current
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

                public new IEnumerator<MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe UnorderedMap_MRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe UnorderedMap_MRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(new _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float other) : this((Const_UnorderedMap_MRStdContainersNonAssignable_Float)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_clear", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_clear(_UnderlyingPtr);
                }

                /// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
                public unsafe ref float FindOrConstructElem(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem", ExactSpelling = true)]
                    extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return ref *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(_UnderlyingPtr, key._UnderlyingPtr);
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator Find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_mut(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_mut(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, mutable.
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin_mut(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The end iterator, mutable.
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end_mut(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// This is used as a function parameter when the underlying function receives `UnorderedMap_MRStdContainersNonAssignable_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float
            {
                internal readonly Const_UnorderedMap_MRStdContainersNonAssignable_Float? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float arg) {return new(arg);}
                public _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Misc._Moved<UnorderedMap_MRStdContainersNonAssignable_Float> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Misc._Moved<UnorderedMap_MRStdContainersNonAssignable_Float> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `UnorderedMap_MRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` directly.
            public class _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float
            {
                public UnorderedMap_MRStdContainersNonAssignable_Float? Opt;

                public _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float() {}
                public _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float value) {Opt = value;}
                public static implicit operator _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `UnorderedMap_MRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` to pass it to the function.
            public class _InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float
            {
                public Const_UnorderedMap_MRStdContainersNonAssignable_Float? Opt;

                public _InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float() {}
                public _InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float value) {Opt = value;}
                public static implicit operator _InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float(Const_UnorderedMap_MRStdContainersNonAssignable_Float value) {return new(value);}
            }
        }
    }
}
