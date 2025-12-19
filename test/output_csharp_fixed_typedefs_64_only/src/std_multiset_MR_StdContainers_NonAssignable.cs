public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::multiset<MR::StdContainers::NonAssignable>`.
            /// This is the const half of the class.
            public class Const_Multiset_MRStdContainersNonAssignable : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Multiset_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Multiset_MRStdContainersNonAssignable() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Multiset_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Multiset_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Multiset_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// The number of elements.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_multiset_MR_StdContainers_NonAssignable_Size(_Underlying *_this);
                    return __MR_C_std_multiset_MR_StdContainers_NonAssignable_Size(_UnderlyingPtr);
                }

                /// Returns true if the size is zero.
                public unsafe bool IsEmpty()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEmpty", ExactSpelling = true)]
                    extern static byte __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEmpty(_Underlying *_this);
                    return __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEmpty(_UnderlyingPtr) != 0;
                }

                /// Checks if the contain contains this key.
                public unsafe ulong Count(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Count", ExactSpelling = true)]
                    extern static ulong __MR_C_std_multiset_MR_StdContainers_NonAssignable_Count(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return __MR_C_std_multiset_MR_StdContainers_NonAssignable_Count(_UnderlyingPtr, key._UnderlyingPtr);
                }

                /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
                public unsafe MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator Find(MR.CS.StdContainers.Const_NonAssignable key)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Find", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_Find(_Underlying *_this, MR.CS.StdContainers.Const_NonAssignable._Underlying *key);
                    return new(__MR_C_std_multiset_MR_StdContainers_NonAssignable_Find(_UnderlyingPtr, key._UnderlyingPtr), is_owning: true);
                }

                /// The begin iterator, const.
                public unsafe MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Begin", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_Begin(_Underlying *_this);
                    return new(__MR_C_std_multiset_MR_StdContainers_NonAssignable_Begin(_UnderlyingPtr), is_owning: true);
                }

                /// Tests whether a const iterator is the begin iterator.
                public unsafe bool IsBegin(MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_IsBegin", ExactSpelling = true)]
                    extern static byte __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsBegin(_Underlying *_this, MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsBegin(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// The end iterator, const.
                public unsafe MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_End", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_End(_Underlying *_this);
                    return new(__MR_C_std_multiset_MR_StdContainers_NonAssignable_End(_UnderlyingPtr), is_owning: true);
                }

                /// Tests whether a const iterator is the end iterator.
                public unsafe bool IsEnd(MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator iter)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEnd", ExactSpelling = true)]
                    extern static byte __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEnd(_Underlying *_this, MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator._Underlying *iter);
                    return __MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEnd(_UnderlyingPtr, iter._UnderlyingPtr) != 0;
                }

                /// Read-only iterator for `MR_C_std_multiset_MR_StdContainers_NonAssignable`.
                /// This is the const half of the class.
                public class Const_ConstIterator : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_ConstIterator(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(_Underlying *_this);
                        __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_ConstIterator() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_ConstIterator(MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// Dereferences a const iterator.
                    public unsafe MR.CS.StdContainers.Const_NonAssignable Deref()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Deref", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Deref(_Underlying *_this);
                        return new(__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Deref(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Read-only iterator for `MR_C_std_multiset_MR_StdContainers_NonAssignable`.
                /// This is the non-const half of the class.
                public class ConstIterator : Const_ConstIterator
                {
                    internal unsafe ConstIterator(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstIterator() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstIterator(MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other._UnderlyingPtr);
                    }

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.Multiset_MRStdContainersNonAssignable.Const_ConstIterator other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_Underlying *_this, MR.CS.Std.Multiset_MRStdContainersNonAssignable.ConstIterator._Underlying *other);
                        __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                    }

                    /// Increments a const iterator.
                    public unsafe void Incr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Incr", ExactSpelling = true)]
                        extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Incr(_Underlying *_this);
                        __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Incr(_UnderlyingPtr);
                    }

                    /// Decrements a const iterator.
                    public unsafe void Decr()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Decr", ExactSpelling = true)]
                        extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Decr(_Underlying *_this);
                        __MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Decr(_UnderlyingPtr);
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

            /// Generated from C++ container `std::multiset<MR::StdContainers::NonAssignable>`.
            /// This is the non-const half of the class.
            public class Multiset_MRStdContainersNonAssignable : Const_Multiset_MRStdContainersNonAssignable
            {
                internal unsafe Multiset_MRStdContainersNonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Multiset_MRStdContainersNonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Multiset_MRStdContainersNonAssignable(MR.CS.Std._ByValue_Multiset_MRStdContainersNonAssignable other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Multiset_MRStdContainersNonAssignable other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *other);
                    __MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Clear", ExactSpelling = true)]
                    extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_Clear(_Underlying *_this);
                    __MR_C_std_multiset_MR_StdContainers_NonAssignable_Clear(_UnderlyingPtr);
                }

                /// Inserts a new element.
                public unsafe void Insert(MR.CS.StdContainers._ByValue_NonAssignable new_elem)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_multiset_MR_StdContainers_NonAssignable_Insert", ExactSpelling = true)]
                    extern static void __MR_C_std_multiset_MR_StdContainers_NonAssignable_Insert(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *new_elem);
                    __MR_C_std_multiset_MR_StdContainers_NonAssignable_Insert(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Multiset_MRStdContainersNonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Multiset_MRStdContainersNonAssignable`/`Const_Multiset_MRStdContainersNonAssignable` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Multiset_MRStdContainersNonAssignable
            {
                internal readonly Const_Multiset_MRStdContainersNonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Multiset_MRStdContainersNonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Multiset_MRStdContainersNonAssignable(Const_Multiset_MRStdContainersNonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Multiset_MRStdContainersNonAssignable(Const_Multiset_MRStdContainersNonAssignable arg) {return new(arg);}
                public _ByValue_Multiset_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Multiset_MRStdContainersNonAssignable> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Multiset_MRStdContainersNonAssignable(MR.CS.Misc._Moved<Multiset_MRStdContainersNonAssignable> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Multiset_MRStdContainersNonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Multiset_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Multiset_MRStdContainersNonAssignable`/`Const_Multiset_MRStdContainersNonAssignable` directly.
            public class _InOptMut_Multiset_MRStdContainersNonAssignable
            {
                public Multiset_MRStdContainersNonAssignable? Opt;

                public _InOptMut_Multiset_MRStdContainersNonAssignable() {}
                public _InOptMut_Multiset_MRStdContainersNonAssignable(Multiset_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_Multiset_MRStdContainersNonAssignable(Multiset_MRStdContainersNonAssignable value) {return new(value);}
            }

            /// This is used for optional parameters of class `Multiset_MRStdContainersNonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Multiset_MRStdContainersNonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Multiset_MRStdContainersNonAssignable`/`Const_Multiset_MRStdContainersNonAssignable` to pass it to the function.
            public class _InOptConst_Multiset_MRStdContainersNonAssignable
            {
                public Const_Multiset_MRStdContainersNonAssignable? Opt;

                public _InOptConst_Multiset_MRStdContainersNonAssignable() {}
                public _InOptConst_Multiset_MRStdContainersNonAssignable(Const_Multiset_MRStdContainersNonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_Multiset_MRStdContainersNonAssignable(Const_Multiset_MRStdContainersNonAssignable value) {return new(value);}
            }
        }
    }
}
