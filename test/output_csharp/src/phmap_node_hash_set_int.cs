public static partial class MR
{
    public static partial class CS
    {
        public static partial class Phmap
        {
            /// Generated from C++ container `phmap::node_hash_set<int>`.
            /// This is the const half of the class.
            public class Const_NodeHashSet_Int : MR.CS.Misc.Object<Const_NodeHashSet_Int>, System.IDisposable, IEnumerable<int>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_set_int_Destroy(_Underlying *_this);
                    __MR_C_phmap_node_hash_set_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_NodeHashSet_Int() {Dispose(false);}

                public class _Enumerator : IEnumerator<int>
                {
                    Const_NodeHashSet_Int _container;
                    MR.CS.Phmap.NodeHashSet_Int.ConstIterator _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_NodeHashSet_Int container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public int Current
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

                public IEnumerator<int> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_NodeHashSet_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_NodeHashSet_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_NodeHashSet_Int(MR.CS.Phmap._ByValue_NodeHashSet_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashSet_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_NodeHashSet_Int(Const_NodeHashSet_Int other) : this(new _ByValue_NodeHashSet_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_NodeHashSet_Int(NodeHashSet_Int other) : this((Const_NodeHashSet_Int)other) {}

                /// Construct from a range of elements.
                public unsafe Const_NodeHashSet_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_size", ExactSpelling = true)]
                    extern static ulong __MR_C_phmap_node_hash_set_int_size(_Underlying *_this);
                    return __MR_C_phmap_node_hash_set_int_size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_empty", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_set_int_empty(_Underlying *_this);
                    return __MR_C_phmap_node_hash_set_int_empty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_contains", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_set_int_contains(_Underlying *_this, int *key);
                    return __MR_C_phmap_node_hash_set_int_contains(_UnderlyingPtr, &key) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Phmap.NodeHashSet_Int.ConstIterator Find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_find", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_find(_Underlying *_this, int *key);
                    MR.CS.Phmap.NodeHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_set_int_find(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Phmap.NodeHashSet_Int.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_begin", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_begin(_Underlying *_this);
                    MR.CS.Phmap.NodeHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_set_int_begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_is_begin", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_set_int_is_begin(_Underlying *_this, MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_set_int_is_begin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Phmap.NodeHashSet_Int.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_end", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_end(_Underlying *_this);
                    MR.CS.Phmap.NodeHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_node_hash_set_int_end(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_is_end", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_node_hash_set_int_is_end(_Underlying *_this, MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_node_hash_set_int_is_end(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_phmap_node_hash_set_int`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable, System.IEquatable<Const_ConstIterator>
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_set_int_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_node_hash_set_int_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Dereferences a const iterator.
                    public unsafe int Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_deref", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_node_hash_set_int_const_iterator_deref(_Underlying *_this);
                        return *__MR_C_phmap_node_hash_set_int_const_iterator_deref(_UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public static unsafe ConstIterator operator++(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator _this)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_set_int_const_iterator_incr(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator._Underlying *_this);
                        ConstIterator __this_copy = new(_this);
                        __MR_C_phmap_node_hash_set_int_const_iterator_incr(__this_copy._UnderlyingPtr);
                        return __this_copy;
                    }

                    /// Compares two const iterators for equality.
                    public static unsafe bool operator==(Const_ConstIterator a, Const_ConstIterator b)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator", ExactSpelling = true)]
                        extern static byte __MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator(MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *a, MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *b);
                        return __MR_C_equal_MR_C_phmap_node_hash_set_int_const_iterator(a._UnderlyingPtr, b._UnderlyingPtr) != 0;
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

                /// Read-only iterator for `MR_C_phmap_node_hash_set_int`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother(MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Phmap.NodeHashSet_Int.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_set_int_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.NodeHashSet_Int.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_node_hash_set_int_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_const_iterator_incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_node_hash_set_int_const_iterator_incr(_Underlying *_this);
                        __MR_C_phmap_node_hash_set_int_const_iterator_incr(_UnderlyingPtr);
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

            /// Generated from C++ container `phmap::node_hash_set<int>`.
            /// This is the non-const half of the class.
            public class NodeHashSet_Int : Const_NodeHashSet_Int
            {
                internal unsafe NodeHashSet_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NodeHashSet_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe NodeHashSet_Int(MR.CS.Phmap._ByValue_NodeHashSet_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashSet_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public NodeHashSet_Int(Const_NodeHashSet_Int other) : this(new _ByValue_NodeHashSet_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public NodeHashSet_Int(NodeHashSet_Int other) : this((Const_NodeHashSet_Int)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Phmap._ByValue_NodeHashSet_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_set_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.NodeHashSet_Int._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_phmap_node_hash_set_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Construct from a range of elements.
                public unsafe NodeHashSet_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Phmap.NodeHashSet_Int._Underlying *__MR_C_phmap_node_hash_set_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_phmap_node_hash_set_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Assign from a range of elements, overwriting previous contents.
                public unsafe void Assign(int? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_set_int_AssignFromRange(_Underlying *_this, int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_phmap_node_hash_set_int_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_clear", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_set_int_clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_phmap_node_hash_set_int_clear(_UnderlyingPtr);
                }

                /// Inserts a new element.
                public unsafe void Insert(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_node_hash_set_int_insert", ExactSpelling = true)]
                    extern static void __MR_C_phmap_node_hash_set_int_insert(_Underlying *_this, int new_elem);
                    __MR_C_phmap_node_hash_set_int_insert(_UnderlyingPtr, new_elem);
                }
            }

            /// This is used as a function parameter when the underlying function receives `NodeHashSet_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NodeHashSet_Int`/`Const_NodeHashSet_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_NodeHashSet_Int
            {
                internal readonly Const_NodeHashSet_Int? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_NodeHashSet_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_NodeHashSet_Int(Const_NodeHashSet_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_NodeHashSet_Int(Const_NodeHashSet_Int arg) {return new(arg);}
                public _ByValue_NodeHashSet_Int(MR.CS.Misc._Moved<NodeHashSet_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_NodeHashSet_Int(MR.CS.Misc._Moved<NodeHashSet_Int> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `NodeHashSet_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NodeHashSet_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NodeHashSet_Int`/`Const_NodeHashSet_Int` directly.
            public class _InOptMut_NodeHashSet_Int
            {
                public NodeHashSet_Int? Opt;

                public _InOptMut_NodeHashSet_Int() {}
                public _InOptMut_NodeHashSet_Int(NodeHashSet_Int value) {Opt = value;}
                public static implicit operator _InOptMut_NodeHashSet_Int(NodeHashSet_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `NodeHashSet_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NodeHashSet_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NodeHashSet_Int`/`Const_NodeHashSet_Int` to pass it to the function.
            public class _InOptConst_NodeHashSet_Int
            {
                public Const_NodeHashSet_Int? Opt;

                public _InOptConst_NodeHashSet_Int() {}
                public _InOptConst_NodeHashSet_Int(Const_NodeHashSet_Int value) {Opt = value;}
                public static implicit operator _InOptConst_NodeHashSet_Int(Const_NodeHashSet_Int value) {return new(value);}
            }
        }
    }
}
