public static partial class MR
{
    public static partial class CS
    {
        public static partial class Phmap
        {
            /// Generated from C++ container `phmap::flat_hash_set<int>`.
            /// This is the const half of the class.
            public class Const_FlatHashSet_Int : MR.CS.Misc.Object<Const_FlatHashSet_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_phmap_flat_hash_set_int_Destroy(_Underlying *_this);
                    __MR_C_phmap_flat_hash_set_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_FlatHashSet_Int() {Dispose(false);}

                internal unsafe Const_FlatHashSet_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_FlatHashSet_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_FlatHashSet_Int(MR.CS.Phmap._ByValue_FlatHashSet_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.FlatHashSet_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_FlatHashSet_Int(Const_FlatHashSet_Int other) : this(new _ByValue_FlatHashSet_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_FlatHashSet_Int(FlatHashSet_Int other) : this((Const_FlatHashSet_Int)other) {}

                /// Construct from a range of elements.
                public unsafe Const_FlatHashSet_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_phmap_flat_hash_set_int_Size(_Underlying *_this);
                    return __MR_C_phmap_flat_hash_set_int_Size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool IsEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_flat_hash_set_int_IsEmpty(_Underlying *_this);
                    return __MR_C_phmap_flat_hash_set_int_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Contains", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_flat_hash_set_int_Contains(_Underlying *_this, int *key);
                    return __MR_C_phmap_flat_hash_set_int_Contains(_UnderlyingPtr, &key) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Phmap.FlatHashSet_Int.ConstIterator Find(int key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Find", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_Find(_Underlying *_this, int *key);
                    MR.CS.Phmap.FlatHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_flat_hash_set_int_Find(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Phmap.FlatHashSet_Int.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Begin", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_Begin(_Underlying *_this);
                    MR.CS.Phmap.FlatHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_flat_hash_set_int_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_flat_hash_set_int_IsBegin(_Underlying *_this, MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_flat_hash_set_int_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Phmap.FlatHashSet_Int.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_End", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_End(_Underlying *_this);
                    MR.CS.Phmap.FlatHashSet_Int.ConstIterator __ret;
                    __ret = new(__MR_C_phmap_flat_hash_set_int_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_phmap_flat_hash_set_int_IsEnd(_Underlying *_this, MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator._Underlying *iter);
                    return __MR_C_phmap_flat_hash_set_int_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_phmap_flat_hash_set_int`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_phmap_flat_hash_set_int_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_phmap_flat_hash_set_int_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Dereferences a const iterator.
                    public unsafe int Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_Deref", ExactSpelling = true)]
                        extern static int *__MR_C_phmap_flat_hash_set_int_const_iterator_Deref(_Underlying *_this);
                        return *__MR_C_phmap_flat_hash_set_int_const_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// Read-only iterator for `MR_C_phmap_flat_hash_set_int`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *__MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public ConstIterator(ConstIterator other) : this((Const_ConstIterator)other) {}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Phmap.FlatHashSet_Int.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_phmap_flat_hash_set_int_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Phmap.FlatHashSet_Int.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_phmap_flat_hash_set_int_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_phmap_flat_hash_set_int_const_iterator_Incr(_Underlying *_this);
                        __MR_C_phmap_flat_hash_set_int_const_iterator_Incr(_UnderlyingPtr);
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

            /// Generated from C++ container `phmap::flat_hash_set<int>`.
            /// This is the non-const half of the class.
            public class FlatHashSet_Int : Const_FlatHashSet_Int
            {
                internal unsafe FlatHashSet_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe FlatHashSet_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe FlatHashSet_Int(MR.CS.Phmap._ByValue_FlatHashSet_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.FlatHashSet_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public FlatHashSet_Int(Const_FlatHashSet_Int other) : this(new _ByValue_FlatHashSet_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public FlatHashSet_Int(FlatHashSet_Int other) : this((Const_FlatHashSet_Int)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Phmap._ByValue_FlatHashSet_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_phmap_flat_hash_set_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Phmap.FlatHashSet_Int._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_phmap_flat_hash_set_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Construct from a range of elements.
                public unsafe FlatHashSet_Int(int? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Phmap.FlatHashSet_Int._Underlying *__MR_C_phmap_flat_hash_set_int_ConstructFromRange(int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_phmap_flat_hash_set_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Assign from a range of elements, overwriting previous contents.
                public unsafe void Assign(int? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_phmap_flat_hash_set_int_AssignFromRange(_Underlying *_this, int *ptr, ulong size);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_phmap_flat_hash_set_int_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Clear", ExactSpelling = true)]
                    extern static void __MR_C_phmap_flat_hash_set_int_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_phmap_flat_hash_set_int_Clear(_UnderlyingPtr);
                }

                /// Inserts a new element.
                public unsafe void Insert(int new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_phmap_flat_hash_set_int_Insert", ExactSpelling = true)]
                    extern static void __MR_C_phmap_flat_hash_set_int_Insert(_Underlying *_this, int new_elem);
                    __MR_C_phmap_flat_hash_set_int_Insert(_UnderlyingPtr, new_elem);
                }
            }

            /// This is used as a function parameter when the underlying function receives `FlatHashSet_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `FlatHashSet_Int`/`Const_FlatHashSet_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_FlatHashSet_Int
            {
                internal readonly Const_FlatHashSet_Int? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_FlatHashSet_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_FlatHashSet_Int(Const_FlatHashSet_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_FlatHashSet_Int(Const_FlatHashSet_Int arg) {return new(arg);}
                public _ByValue_FlatHashSet_Int(MR.CS.Misc._Moved<FlatHashSet_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_FlatHashSet_Int(MR.CS.Misc._Moved<FlatHashSet_Int> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `FlatHashSet_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_FlatHashSet_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `FlatHashSet_Int`/`Const_FlatHashSet_Int` directly.
            public class _InOptMut_FlatHashSet_Int
            {
                public FlatHashSet_Int? Opt;

                public _InOptMut_FlatHashSet_Int() {}
                public _InOptMut_FlatHashSet_Int(FlatHashSet_Int value) {Opt = value;}
                public static implicit operator _InOptMut_FlatHashSet_Int(FlatHashSet_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `FlatHashSet_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_FlatHashSet_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `FlatHashSet_Int`/`Const_FlatHashSet_Int` to pass it to the function.
            public class _InOptConst_FlatHashSet_Int
            {
                public Const_FlatHashSet_Int? Opt;

                public _InOptConst_FlatHashSet_Int() {}
                public _InOptConst_FlatHashSet_Int(Const_FlatHashSet_Int value) {Opt = value;}
                public static implicit operator _InOptConst_FlatHashSet_Int(Const_FlatHashSet_Int value) {return new(value);}
            }
        }
    }
}
