public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// A fixed-size array of `MR::StdContainers::A` of size 42.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Array_MRStdContainersA_42 : MR.CS.Misc.Object<Const_Array_MRStdContainersA_42>, System.IDisposable, IEnumerable<MR.CS.StdContainers.Const_A>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_array_MR_StdContainers_A_42_Destroy(_Underlying *_this);
                    __MR_C_std_array_MR_StdContainers_A_42_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Array_MRStdContainersA_42() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.StdContainers.Const_A>
                {
                    Const_Array_MRStdContainersA_42 _container;
                    MR.CS.StdContainers.ConstPtrA _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Array_MRStdContainersA_42 container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.StdContainers.Const_A Current
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
                        _cur.incr();
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

                public IEnumerator<MR.CS.StdContainers.Const_A> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Array_MRStdContainersA_42(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Array_MRStdContainersA_42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Array_MRStdContainersA_42(MR.CS.Std.Const_Array_MRStdContainersA_42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(MR.CS.Std.Array_MRStdContainersA_42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Array_MRStdContainersA_42(Array_MRStdContainersA_42 other) : this((Const_Array_MRStdContainersA_42)other) {}

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_A this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_at", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.Const_A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_at(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.Const_A __ret;
                        __ret = new(__MR_C_std_array_MR_StdContainers_A_42_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.ConstPtrA data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_data", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_data(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_data(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The begin iterator, const.
                /// </summary>
                public unsafe MR.CS.StdContainers.ConstPtrA begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_begin", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_begin(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_begin(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The end iterator, const.
                /// </summary>
                public unsafe MR.CS.StdContainers.ConstPtrA end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_end", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_end(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_end(_UnderlyingPtr);
                    return new(__c_ret);
                }
            }

            /// <summary>
            /// A fixed-size array of `MR::StdContainers::A` of size 42.
            /// This is the non-const half of the class.
            /// </summary>
            public class Array_MRStdContainersA_42 : Const_Array_MRStdContainersA_42, IEnumerable<MR.CS.StdContainers.A>
            {
                public new class _Enumerator : IEnumerator<MR.CS.StdContainers.A>
                {
                    Array_MRStdContainersA_42 _container;
                    MR.CS.StdContainers.PtrA _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Array_MRStdContainersA_42 container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.StdContainers.A Current
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
                        _cur.incr();
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

                public new IEnumerator<MR.CS.StdContainers.A> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Array_MRStdContainersA_42(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Array_MRStdContainersA_42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Array_MRStdContainersA_42(MR.CS.Std.Const_Array_MRStdContainersA_42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(MR.CS.Std.Array_MRStdContainersA_42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Array_MRStdContainersA_42(Array_MRStdContainersA_42 other) : this((Const_Array_MRStdContainersA_42)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Array_MRStdContainersA_42 other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(_Underlying *_this, MR.CS.Std.Array_MRStdContainersA_42._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.A this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_at_mut", ExactSpelling = true)]
                        extern static MR.CS.StdContainers.A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_at_mut(_Underlying *_this, ulong i);
                        MR.CS.StdContainers.A __ret;
                        __ret = new(__MR_C_std_array_MR_StdContainers_A_42_at_mut(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.PtrA data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_data_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_data_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_data_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The begin iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.PtrA begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_begin_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_begin_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_begin_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The end iterator, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.PtrA end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_A_42_end_mut", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_C_std_array_MR_StdContainers_A_42_end_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_array_MR_StdContainers_A_42_end_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Array_MRStdContainersA_42` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Array_MRStdContainersA_42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Array_MRStdContainersA_42`/`Const_Array_MRStdContainersA_42` directly.
            /// </summary>
            public class _InOptMut_Array_MRStdContainersA_42
            {
                public Array_MRStdContainersA_42? Opt;

                public _InOptMut_Array_MRStdContainersA_42() {}
                public _InOptMut_Array_MRStdContainersA_42(Array_MRStdContainersA_42 value) {Opt = value;}
                public static implicit operator _InOptMut_Array_MRStdContainersA_42(Array_MRStdContainersA_42 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Array_MRStdContainersA_42` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Array_MRStdContainersA_42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Array_MRStdContainersA_42`/`Const_Array_MRStdContainersA_42` to pass it to the function.
            /// </summary>
            public class _InOptConst_Array_MRStdContainersA_42
            {
                public Const_Array_MRStdContainersA_42? Opt;

                public _InOptConst_Array_MRStdContainersA_42() {}
                public _InOptConst_Array_MRStdContainersA_42(Const_Array_MRStdContainersA_42 value) {Opt = value;}
                public static implicit operator _InOptConst_Array_MRStdContainersA_42(Const_Array_MRStdContainersA_42 value) {return new(value);}
            }
        }
    }
}
