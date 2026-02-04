public static partial class MR
{
    public static partial class CS
    {
        public static partial class Phmap
        {
            /// <summary>
            /// Generated from C++ container `phmap::node_hash_map<int, float>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_NodeHashMap_Int_Float : MR.CS.Misc.Object<Const_NodeHashMap_Int_Float>, System.IDisposable, IEnumerable<MR.CS.Std.Const_Pair_ConstInt_Float>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_map_int_float_Destroy(_Underlying *_this);
                    __MR_C_phmap_node_hash_map_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_NodeHashMap_Int_Float() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.Std.Const_Pair_ConstInt_Float>
                {
                    Const_NodeHashMap_Int_Float _container;
                    MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_NodeHashMap_Int_Float container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.Std.Const_Pair_ConstInt_Float Current
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

                public IEnumerator<MR.CS.Std.Const_Pair_ConstInt_Float> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_NodeHashMap_Int_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_NodeHashMap_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_NodeHashMap_Int_Float(MR.CS.Phmap._ByValue_NodeHashMap_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float other) : this(new _ByValue_NodeHashMap_Int_Float(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_NodeHashMap_Int_Float(NodeHashMap_Int_Float other) : this((Const_NodeHashMap_Int_Float)other) {}

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_size", ExactSpelling = true)]
                    extern static ulong __MR_C_phmap_node_hash_map_int_float_size(_Underlying *_this);
                    return __MR_C_phmap_node_hash_map_int_float_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_empty", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_empty(_Underlying *_this);
                    return __MR_C_phmap_node_hash_map_int_float_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Checks if the contain contains this key.
                /// </summary>
                public unsafe bool contains(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_contains", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_contains(_Underlying *_this, int *key);
                    return __MR_C_phmap_node_hash_map_int_float_contains(_UnderlyingPtr, &key) != 0;
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                /// </summary>
                public unsafe MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_find", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_find(_Underlying *_this, int *key);
                    MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_find(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_begin", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_begin(_Underlying *_this);
                    MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_is_begin(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_map_int_float_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_is_begin_mut", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_is_begin_mut(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_map_int_float_is_begin_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_end", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_end(_Underlying *_this);
                    MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_is_end(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_map_int_float_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_is_end_mut", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_map_int_float_is_end_mut(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_map_int_float_is_end_mut(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_phmap_node_hash_map_int_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable(MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator.
                    /// </summary>
                    public unsafe MR.CS.Std.Const_Pair_ConstInt_Float deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_Pair_ConstInt_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_deref(_Underlying *_this);
                        MR.CS.Std.Const_Pair_ConstInt_Float __ret;
                        __ret = new(__MR_C_phmap_node_hash_map_int_float_const_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Dereferences a const iterator, returning the key.
                    /// </summary>
                    public unsafe int derefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_deref_key", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_node_hash_map_int_float_const_iterator_deref_key(_Underlying *_this);
                        return *__MR_C_phmap_node_hash_map_int_float_const_iterator_deref_key(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Dereferences a const iterator, returning the mapped value.
                    /// </summary>
                    public unsafe float derefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_deref_value", ExactSpelling = true)]
                        extern static float *__MR_C_phmap_node_hash_map_int_float_const_iterator_deref_value(_Underlying *_this);
                        return *__MR_C_phmap_node_hash_map_int_float_const_iterator_deref_value(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public static unsafe ConstIterator operator++(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_const_iterator_incr(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_phmap_node_hash_map_int_float_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_phmap_node_hash_map_int_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Phmap.NodeHashMap_Int_Float.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_node_hash_map_int_float_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable(MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_const_iterator_from_mutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_const_iterator_incr(_Underlying *_this);
                        __MR_C_phmap_node_hash_map_int_float_const_iterator_incr(_UnderlyingPtr);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_phmap_node_hash_map_int_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_node_hash_map_int_float_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Const_Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Dereferences a mutable iterator.
                    /// </summary>
                    public unsafe MR.CS.Std.Pair_ConstInt_Float deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_deref", ExactSpelling = true)]
                        extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_iterator_deref(_Underlying *_this);
                        MR.CS.Std.Pair_ConstInt_Float __ret;
                        __ret = new(__MR_C_phmap_node_hash_map_int_float_iterator_deref(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator, returning the key.
                    /// </summary>
                    public unsafe int derefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_deref_key", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_node_hash_map_int_float_iterator_deref_key(_Underlying *_this);
                        return *__MR_C_phmap_node_hash_map_int_float_iterator_deref_key(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator, returning the mapped value.
                    /// </summary>
                    public unsafe ref float derefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_deref_value", ExactSpelling = true)]
                        extern static float *__MR_C_phmap_node_hash_map_int_float_iterator_deref_value(_Underlying *_this);
                        return ref *__MR_C_phmap_node_hash_map_int_float_iterator_deref_value(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public static unsafe Iterator operator++(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_iterator_incr(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator._Underlying *_this);
                        Iterator __this_copy = new(_this);
                        __MR_C_phmap_node_hash_map_int_float_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_phmap_node_hash_map_int_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public Iterator(Iterator other) : this((Const_Iterator)other) {}

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Phmap.NodeHashMap_Int_Float.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_node_hash_map_int_float_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void operator++()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_map_int_float_iterator_incr(_Underlying *_this);
                        __MR_C_phmap_node_hash_map_int_float_iterator_incr(_UnderlyingPtr);
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
            /// Generated from C++ container `phmap::node_hash_map<int, float>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class NodeHashMap_Int_Float : Const_NodeHashMap_Int_Float, IEnumerable<MR.CS.Std.Pair_ConstInt_Float>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Std.Pair_ConstInt_Float>
                {
                    NodeHashMap_Int_Float _container;
                    MR.CS.Phmap.NodeHashMap_Int_Float.Iterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(NodeHashMap_Int_Float container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.Std.Pair_ConstInt_Float Current
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

                public new IEnumerator<MR.CS.Std.Pair_ConstInt_Float> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe NodeHashMap_Int_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe NodeHashMap_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe NodeHashMap_Int_Float(MR.CS.Phmap._ByValue_NodeHashMap_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *__MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float other) : this(new _ByValue_NodeHashMap_Int_Float(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public NodeHashMap_Int_Float(NodeHashMap_Int_Float other) : this((Const_NodeHashMap_Int_Float)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Phmap._ByValue_NodeHashMap_Int_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_map_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashMap_Int_Float._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_phmap_node_hash_map_int_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_clear", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_map_int_float_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_phmap_node_hash_map_int_float_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
                /// </summary>
                public unsafe ref float findOrConstructElem(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_find_or_construct_elem", ExactSpelling = true)]
                    extern static float *__MR_C_phmap_node_hash_map_int_float_find_or_construct_elem(_Underlying *_this, int *key);
                    return ref *__MR_C_phmap_node_hash_map_int_float_find_or_construct_elem(_UnderlyingPtr, &key);
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
                /// </summary>
                public unsafe new MR.CS.Phmap.NodeHashMap_Int_Float.Iterator find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_find_mut", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_find_mut(_Underlying *_this, int *key);
                    MR.CS.Phmap.NodeHashMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_find_mut(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Phmap.NodeHashMap_Int_Float.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_begin_mut(_Underlying *_this);
                    MR.CS.Phmap.NodeHashMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_begin_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Phmap.NodeHashMap_Int_Float.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_map_int_float_end_mut", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashMap_Int_Float.Iterator._Underlying *__MR_C_phmap_node_hash_map_int_float_end_mut(_Underlying *_this);
                    MR.CS.Phmap.NodeHashMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_map_int_float_end_mut(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `NodeHashMap_Int_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NodeHashMap_Int_Float`/`Const_NodeHashMap_Int_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_NodeHashMap_Int_Float
            {
                internal readonly Const_NodeHashMap_Int_Float? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_NodeHashMap_Int_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float arg) {return new(arg);}
                public _ByValue_NodeHashMap_Int_Float(MR.CS.Misc._Moved<NodeHashMap_Int_Float> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_NodeHashMap_Int_Float(MR.CS.Misc._Moved<NodeHashMap_Int_Float> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `NodeHashMap_Int_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NodeHashMap_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NodeHashMap_Int_Float`/`Const_NodeHashMap_Int_Float` directly.
            /// </summary>
            public class _InOptMut_NodeHashMap_Int_Float
            {
                public NodeHashMap_Int_Float? Opt;

                public _InOptMut_NodeHashMap_Int_Float() {}
                public _InOptMut_NodeHashMap_Int_Float(NodeHashMap_Int_Float value) {Opt = value;}
                public static implicit operator _InOptMut_NodeHashMap_Int_Float(NodeHashMap_Int_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `NodeHashMap_Int_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NodeHashMap_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NodeHashMap_Int_Float`/`Const_NodeHashMap_Int_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_NodeHashMap_Int_Float
            {
                public Const_NodeHashMap_Int_Float? Opt;

                public _InOptConst_NodeHashMap_Int_Float() {}
                public _InOptConst_NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float value) {Opt = value;}
                public static implicit operator _InOptConst_NodeHashMap_Int_Float(Const_NodeHashMap_Int_Float value) {return new(value);}
            }
        }
    }
}
