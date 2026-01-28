public static partial class MR
{
    public static partial class CS
    {
        public static partial class Phmap
        {
            /// Generated from C++ container `phmap::btree_map<int, float>`.
            /// This is the const half of the class.
            public class Const_BtreeMap_Int_Float : MR.CS.Misc.Object<Const_BtreeMap_Int_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_phmap_btree_map_int_float_Destroy(_Underlying *_this);
                    __MR_C_phmap_btree_map_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_BtreeMap_Int_Float() {Dispose(false);}

                internal unsafe Const_BtreeMap_Int_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_BtreeMap_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float._Underlying *__MR_C_phmap_btree_map_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_BtreeMap_Int_Float(MR.CS.Phmap._ByValue_BtreeMap_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float._Underlying *__MR_C_phmap_btree_map_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.BtreeMap_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_phmap_btree_map_int_float_Size(_Underlying *_this);
                    return __MR_C_phmap_btree_map_int_float_Size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool IsEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_IsEmpty(_Underlying *_this);
                    return __MR_C_phmap_btree_map_int_float_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Contains", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_Contains(_Underlying *_this, int *key);
                    return __MR_C_phmap_btree_map_int_float_Contains(_UnderlyingPtr, &key) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator Find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Find", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_Find(_Underlying *_this, int *key);
                    MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_Find(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Begin", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_Begin(_Underlying *_this);
                    MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_IsBegin(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_btree_map_int_float_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_End", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_End(_Underlying *_this);
                    MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_IsEnd(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_btree_map_int_float_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_phmap_btree_map_int_float`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother(MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe Const_ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_FromMutable(MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter) {return new(iter);}

                    /// Dereferences a const iterator, returning the key.
                    public unsafe int DerefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_DerefKey", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_btree_map_int_float_const_iterator_DerefKey(_Underlying *_this);
                        return *__MR_C_phmap_btree_map_int_float_const_iterator_DerefKey(_UnderlyingPtr);
                    }

                    /// Dereferences a const iterator, returning the mapped value.
                    public unsafe float DerefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_DerefValue", ExactSpelling = true)]
                        extern static float *__MR_C_phmap_btree_map_int_float_const_iterator_DerefValue(_Underlying *_this);
                        return *__MR_C_phmap_btree_map_int_float_const_iterator_DerefValue(_UnderlyingPtr);
                    }
                }

                /// Read-only iterator for `MR_C_phmap_btree_map_int_float`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother(MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Phmap.BtreeMap_Int_Float.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_btree_map_int_float_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public unsafe ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.ConstIterator._Underlying *__MR_C_phmap_btree_map_int_float_const_iterator_FromMutable(MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// Makes a const iterator from a mutable one.
                    public static unsafe implicit operator ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter) {return new(iter);}

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_const_iterator_Incr(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a const iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_const_iterator_Decr(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_const_iterator_Decr(_UnderlyingPtr);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// Mutable iterator for `MR_C_phmap_btree_map_int_float`.
                /// This is the const half of the class.
                public class Const_Iterator : MR.CS.Misc.Object<Const_Iterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_Iterator() {Dispose(false);}

                    internal unsafe Const_Iterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_Iterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother(MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Dereferences a mutable iterator, returning the key.
                    public unsafe int DerefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_DerefKey", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_btree_map_int_float_iterator_DerefKey(_Underlying *_this);
                        return *__MR_C_phmap_btree_map_int_float_iterator_DerefKey(_UnderlyingPtr);
                    }

                    /// Dereferences a mutable iterator, returning the mapped value.
                    public unsafe ref float DerefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_DerefValue", ExactSpelling = true)]
                        extern static float *__MR_C_phmap_btree_map_int_float_iterator_DerefValue(_Underlying *_this);
                        return ref *__MR_C_phmap_btree_map_int_float_iterator_DerefValue(_UnderlyingPtr);
                    }
                }

                /// Mutable iterator for `MR_C_phmap_btree_map_int_float`.
                /// This is the non-const half of the class.
                public class Iterator : Const_Iterator
                {
                    internal unsafe Iterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Iterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Iterator(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother(MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_btree_map_int_float_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a mutable iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_iterator_Incr(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a mutable iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_btree_map_int_float_iterator_Decr(_Underlying *_this);
                        __MR_C_phmap_btree_map_int_float_iterator_Decr(_UnderlyingPtr);
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

            /// Generated from C++ container `phmap::btree_map<int, float>`.
            /// This is the non-const half of the class.
            public class BtreeMap_Int_Float : Const_BtreeMap_Int_Float
            {
                internal unsafe BtreeMap_Int_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe BtreeMap_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float._Underlying *__MR_C_phmap_btree_map_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe BtreeMap_Int_Float(MR.CS.Phmap._ByValue_BtreeMap_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float._Underlying *__MR_C_phmap_btree_map_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.BtreeMap_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_btree_map_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Phmap._ByValue_BtreeMap_Int_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_phmap_btree_map_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.BtreeMap_Int_Float._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_phmap_btree_map_int_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_Clear", ExactSpelling = true)]
                    extern static void __MR_C_phmap_btree_map_int_float_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_phmap_btree_map_int_float_Clear(_UnderlyingPtr);
                }

                /// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
                public unsafe ref float FindOrConstructElem(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_FindOrConstructElem", ExactSpelling = true)]
                    extern static float *__MR_C_phmap_btree_map_int_float_FindOrConstructElem(_Underlying *_this, int *key);
                    return ref *__MR_C_phmap_btree_map_int_float_FindOrConstructElem(_UnderlyingPtr, &key);
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
                public unsafe new MR.CS.Phmap.BtreeMap_Int_Float.Iterator Find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_FindMutable", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_FindMutable(_Underlying *_this, int *key);
                    MR.CS.Phmap.BtreeMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_FindMutable(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, mutable.
                public unsafe new MR.CS.Phmap.BtreeMap_Int_Float.Iterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_MutableBegin(_Underlying *_this);
                    MR.CS.Phmap.BtreeMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_MutableBegin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a mutable iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_IsMutableBegin(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_phmap_btree_map_int_float_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, mutable.
                public unsafe new MR.CS.Phmap.BtreeMap_Int_Float.Iterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Phmap.BtreeMap_Int_Float.Iterator._Underlying *__MR_C_phmap_btree_map_int_float_MutableEnd(_Underlying *_this);
                    MR.CS.Phmap.BtreeMap_Int_Float.Iterator __ret;
                    __ret = new(__MR_C_phmap_btree_map_int_float_MutableEnd(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a mutable iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_btree_map_int_float_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_btree_map_int_float_IsMutableEnd(_Underlying *_this, MR.CS.Phmap.BtreeMap_Int_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_phmap_btree_map_int_float_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// This is used as a function parameter when the underlying function receives `BtreeMap_Int_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `BtreeMap_Int_Float`/`Const_BtreeMap_Int_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_BtreeMap_Int_Float
            {
                internal readonly Const_BtreeMap_Int_Float? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_BtreeMap_Int_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_BtreeMap_Int_Float(Const_BtreeMap_Int_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_BtreeMap_Int_Float(Const_BtreeMap_Int_Float arg) {return new(arg);}
                public _ByValue_BtreeMap_Int_Float(MR.CS.Misc._Moved<BtreeMap_Int_Float> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_BtreeMap_Int_Float(MR.CS.Misc._Moved<BtreeMap_Int_Float> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `BtreeMap_Int_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_BtreeMap_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `BtreeMap_Int_Float`/`Const_BtreeMap_Int_Float` directly.
            public class _InOptMut_BtreeMap_Int_Float
            {
                public BtreeMap_Int_Float? Opt;

                public _InOptMut_BtreeMap_Int_Float() {}
                public _InOptMut_BtreeMap_Int_Float(BtreeMap_Int_Float value) {Opt = value;}
                public static implicit operator _InOptMut_BtreeMap_Int_Float(BtreeMap_Int_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `BtreeMap_Int_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_BtreeMap_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `BtreeMap_Int_Float`/`Const_BtreeMap_Int_Float` to pass it to the function.
            public class _InOptConst_BtreeMap_Int_Float
            {
                public Const_BtreeMap_Int_Float? Opt;

                public _InOptConst_BtreeMap_Int_Float() {}
                public _InOptConst_BtreeMap_Int_Float(Const_BtreeMap_Int_Float value) {Opt = value;}
                public static implicit operator _InOptConst_BtreeMap_Int_Float(Const_BtreeMap_Int_Float value) {return new(value);}
            }
        }
    }
}
