public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::set<float>`.
            /// This is the const half of the class.
            public class Const_Set_Float : MR.CS.Misc.Object<Const_Set_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Set_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_set_float_Destroy(_Underlying *_this);
                    __MR_C_std_set_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Set_Float() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Set_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_set_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Set_Float(MR.CS.Std._ByValue_Set_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_set_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Construct from a range of elements.
                public unsafe Const_Set_Float(float? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_ConstructFromRange(float *ptr, ulong size);
                    float __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_set_float_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_set_float_Size(_Underlying *_this);
                    return __MR_C_std_set_float_Size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool IsEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_float_IsEmpty(_Underlying *_this);
                    return __MR_C_std_set_float_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe bool Contains(float key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Contains", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_float_Contains(_Underlying *_this, float *key);
                    return __MR_C_std_set_float_Contains(_UnderlyingPtr, &key) != 0;
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Std.Set_Float.ConstIterator Find(float key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Find", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_Find(_Underlying *_this, float *key);
                    MR.CS.Std.Set_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_float_Find(_UnderlyingPtr, &key), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.Set_Float.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_Begin(_Underlying *_this);
                    MR.CS.Std.Set_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_float_Begin(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.Set_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_float_IsBegin(_Underlying *_this, MR.CS.Std.Set_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_set_float_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.Set_Float.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_End(_Underlying *_this);
                    MR.CS.Std.Set_Float.ConstIterator __ret;
                    __ret = new(__MR_C_std_set_float_End(_UnderlyingPtr), is_owning: true);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.Set_Float.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_set_float_IsEnd(_Underlying *_this, MR.CS.Std.Set_Float.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_set_float_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_std_set_float`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object<Const_ConstIterator>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_set_float_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_set_float_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_set_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.Set_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_const_iterator_ConstructFromAnother(MR.CS.Std.Set_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_set_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Dereferences a const iterator.
                    public unsafe float Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_Deref", ExactSpelling = true)]
                        extern static float *__MR_C_std_set_float_const_iterator_Deref(_Underlying *_this);
                        return *__MR_C_std_set_float_const_iterator_Deref(_UnderlyingPtr);
                    }
                }

                /// Read-only iterator for `MR_C_std_set_float`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_set_float_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.Set_Float.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_C_std_set_float_const_iterator_ConstructFromAnother(MR.CS.Std.Set_Float.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_set_float_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                        _KeepAlive(other);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.Set_Float.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_set_float_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Set_Float.ConstIterator._Underlying *other);
                        _DiscardKeepAlive();
                        _KeepAlive(other);
                        __MR_C_std_set_float_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_set_float_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_set_float_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a const iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_set_float_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_set_float_const_iterator_Decr(_UnderlyingPtr);
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

            /// Generated from C++ container `std::set<float>`.
            /// This is the non-const half of the class.
            public class Set_Float : Const_Set_Float
            {
                internal unsafe Set_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Set_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_set_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Set_Float(MR.CS.Std._ByValue_Set_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_set_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Set_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_set_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Set_Float._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_set_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Construct from a range of elements.
                public unsafe Set_Float(float? ptr, ulong size) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_ConstructFromRange", ExactSpelling = true)]
                    extern static MR.CS.Std.Set_Float._Underlying *__MR_C_std_set_float_ConstructFromRange(float *ptr, ulong size);
                    float __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_set_float_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Assign from a range of elements, overwriting previous contents.
                public unsafe void Assign(float? ptr, ulong size)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_AssignFromRange", ExactSpelling = true)]
                    extern static void __MR_C_std_set_float_AssignFromRange(_Underlying *_this, float *ptr, ulong size);
                    float __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_set_float_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_set_float_Clear(_Underlying *_this);
                    _DiscardKeepAlive();
                    __MR_C_std_set_float_Clear(_UnderlyingPtr);
                }

                /// Inserts a new element.
                public unsafe void Insert(float new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_set_float_Insert", ExactSpelling = true)]
                    extern static void __MR_C_std_set_float_Insert(_Underlying *_this, float new_elem);
                    __MR_C_std_set_float_Insert(_UnderlyingPtr, new_elem);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Set_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Set_Float`/`Const_Set_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Set_Float
            {
                internal readonly Const_Set_Float? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Set_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Set_Float(Const_Set_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Set_Float(Const_Set_Float arg) {return new(arg);}
                public _ByValue_Set_Float(MR.CS.Misc._Moved<Set_Float> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Set_Float(MR.CS.Misc._Moved<Set_Float> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Set_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Set_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Set_Float`/`Const_Set_Float` directly.
            public class _InOptMut_Set_Float
            {
                public Set_Float? Opt;

                public _InOptMut_Set_Float() {}
                public _InOptMut_Set_Float(Set_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Set_Float(Set_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Set_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Set_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Set_Float`/`Const_Set_Float` to pass it to the function.
            public class _InOptConst_Set_Float
            {
                public Const_Set_Float? Opt;

                public _InOptConst_Set_Float() {}
                public _InOptConst_Set_Float(Const_Set_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Set_Float(Const_Set_Float value) {return new(value);}
            }
        }
    }
}
