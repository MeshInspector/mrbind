public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::unordered_map<MR::StdContainers::NonAssignable, float>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UnorderedMap_MRStdContainersNonAssignable_Float : MR.CS.Misc.Object<Const_UnorderedMap_MRStdContainersNonAssignable_Float>, System.IDisposable
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

                internal unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Size(_Underlying *_this);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool isEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEmpty(_Underlying *_this);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Checks if the contain contains this key.
                /// </summary>
                public unsafe bool contains(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Contains(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Contains(_UnderlyingPtr, key._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Find", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Begin(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsBegin(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_End", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_End(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a const iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEnd(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator Const_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Dereferences a const iterator, returning the key.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonAssignable derefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefKey", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefKey(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefKey(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Dereferences a const iterator, returning the mapped value.
                    /// </summary>
                    public unsafe float derefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefValue", ExactSpelling = true)]
                        extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefValue(_Underlying *_this);
                        return *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DerefValue(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Read-only iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public unsafe ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.ConstIterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *iter);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_FromMutable(iter._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Makes a const iterator from a mutable one.
                    /// </summary>
                    public static unsafe implicit operator ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new(iter);}

                    /// <summary>
                    /// Increments a const iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Incr(_UnderlyingPtr);
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
                    public static unsafe implicit operator _InOptConst_ConstIterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter) {return new Const_ConstIterator(iter);}
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(_UnderlyingPtr);
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Const_Iterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator, returning the key.
                    /// </summary>
                    public unsafe MR.CS.StdContainers.Const_NonAssignable derefKey()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefKey", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefKey(_Underlying *_this);
                        MR.CS.StdContainers.Const_NonAssignable __ret;
                        __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefKey(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }

                    /// <summary>
                    /// Dereferences a mutable iterator, returning the mapped value.
                    /// </summary>
                    public unsafe ref float derefValue()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefValue", ExactSpelling = true)]
                        extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefValue(_Underlying *_this);
                        return ref *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DerefValue(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Mutable iterator for `MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct();
                    }

                    /// <summary>
                    /// Constructs a copy of another instance. The source remains alive.
                    /// </summary>
                    public unsafe Iterator(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// <summary>
                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    /// </summary>
                    public unsafe void assign(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// <summary>
                    /// Increments a mutable iterator.
                    /// </summary>
                    public unsafe void incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Incr(_Underlying *_this);
                        __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Incr(_UnderlyingPtr);
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
            /// Generated from C++ container `std::unordered_map<MR::StdContainers::NonAssignable, float>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class UnorderedMap_MRStdContainersNonAssignable_Float : Const_UnorderedMap_MRStdContainersNonAssignable_Float
            {
                internal unsafe UnorderedMap_MRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UnorderedMap_MRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UnorderedMap_MRStdContainersNonAssignable_Float(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_UnorderedMap_MRStdContainersNonAssignable_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
                /// </summary>
                public unsafe ref float findOrConstructElem(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindOrConstructElem", ExactSpelling = true)]
                    extern static float *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindOrConstructElem(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return ref *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindOrConstructElem(_UnderlyingPtr, key._UnderlyingPtr);
                }

                /// <summary>
                /// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
                /// </summary>
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindMutable(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_FindMutable(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableBegin", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableBegin(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableBegin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the begin iterator.
                /// </summary>
                public unsafe bool isBegin(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableBegin(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableEnd", ExactSpelling = true)]
                    extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator._Underlying *__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableEnd(_Underlying *_this);
                    MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Iterator __ret;
                    __ret = new(__MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_MutableEnd(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Tests whether a mutable iterator is the end iterator.
                /// </summary>
                public unsafe bool isEnd(MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableEnd(_Underlying *_this, MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float.Const_Iterator._Underlying *iter);
                    return __MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_IsMutableEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `UnorderedMap_MRStdContainersNonAssignable_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
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

            /// <summary>
            /// This is used for optional parameters of class `UnorderedMap_MRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UnorderedMap_MRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` directly.
            /// </summary>
            public class _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float
            {
                public UnorderedMap_MRStdContainersNonAssignable_Float? Opt;

                public _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float() {}
                public _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float value) {Opt = value;}
                public static implicit operator _InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float(UnorderedMap_MRStdContainersNonAssignable_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UnorderedMap_MRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UnorderedMap_MRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UnorderedMap_MRStdContainersNonAssignable_Float`/`Const_UnorderedMap_MRStdContainersNonAssignable_Float` to pass it to the function.
            /// </summary>
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
