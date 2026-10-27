public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::vector<std::expected<int, std::string>>`.
            /// This is the const half of the class.
            public class Const_Vector_StdExpectedIntStdString : MR.CS.Misc.Object<Const_Vector_StdExpectedIntStdString>, System.IDisposable, IEnumerable<MR.CS.Std.Const_Expected_Int_StdString>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_C_std_vector_std_expected_int_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_StdExpectedIntStdString() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.Std.Const_Expected_Int_StdString>
                {
                    Const_Vector_StdExpectedIntStdString _container;
                    MR.CS.Std.ConstPtrExpectedIntStdString _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_StdExpectedIntStdString container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.Std.Const_Expected_Int_StdString Current
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

                public IEnumerator<MR.CS.Std.Const_Expected_Int_StdString> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Vector_StdExpectedIntStdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Vector_StdExpectedIntStdString() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_std_expected_int_std_string_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Vector_StdExpectedIntStdString(MR.CS.Std._ByValue_Vector_StdExpectedIntStdString other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString other) : this(new _ByValue_Vector_StdExpectedIntStdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_StdExpectedIntStdString(Vector_StdExpectedIntStdString other) : this((Const_Vector_StdExpectedIntStdString)other) {}

                /// The number of elements.
                public unsafe nuint Size()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_size(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_empty(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                /// The memory capacity, measued in the number of elements.
                public unsafe nuint Capacity()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_capacity(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// The element at a specific index, read-only.
                public unsafe MR.CS.Std.Const_Expected_Int_StdString this[nuint i]
                {
                    get
                    {
                        MR.CS.Misc._Exceptions.Prepare();
                        var __c_ret = __MR_C_std_vector_std_expected_int_std_string_at(_UnderlyingPtr, i);
                        MR.CS.Std.Const_Expected_Int_StdString __ret;
                        __ret = new(__c_ret, is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        MR.CS.Misc._Exceptions.ThrowIfNeeded();
                        return __ret;
                    }
                }

                /// The first element or null if empty, read-only.
                public unsafe MR.CS.Std.Const_Expected_Int_StdString? Front()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_front(_UnderlyingPtr);
                    MR.CS.Std.Const_Expected_Int_StdString? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.Const_Expected_Int_StdString(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// The last element or null if empty, read-only.
                public unsafe MR.CS.Std.Const_Expected_Int_StdString? Back()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_back(_UnderlyingPtr);
                    MR.CS.Std.Const_Expected_Int_StdString? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.Const_Expected_Int_StdString(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// The begin iterator, const. Iterators of this container are plain pointers.
                public unsafe MR.CS.Std.ConstPtrExpectedIntStdString Begin()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_begin(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// The end iterator, const. Iterators of this container are plain pointers.
                public unsafe MR.CS.Std.ConstPtrExpectedIntStdString End()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_end(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_at", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Const_Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_at(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_back", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Const_Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_begin", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Const_Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_begin(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_capacity", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_std_expected_int_std_string_capacity(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_empty", ExactSpelling = true)]
                extern static unsafe byte __MR_C_std_vector_std_expected_int_std_string_empty(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_end", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Const_Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_end(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_front", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Const_Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_front(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_size", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_std_expected_int_std_string_size(_Underlying *_this);
            }

            /// Generated from C++ container `std::vector<std::expected<int, std::string>>`.
            /// This is the non-const half of the class.
            public class Vector_StdExpectedIntStdString : Const_Vector_StdExpectedIntStdString, IEnumerable<MR.CS.Std.Expected_Int_StdString>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Std.Expected_Int_StdString>
                {
                    Vector_StdExpectedIntStdString _container;
                    MR.CS.Std.PtrExpectedIntStdString _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_StdExpectedIntStdString container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.Std.Expected_Int_StdString Current
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

                public new IEnumerator<MR.CS.Std.Expected_Int_StdString> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Vector_StdExpectedIntStdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Vector_StdExpectedIntStdString() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_std_expected_int_std_string_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Vector_StdExpectedIntStdString(MR.CS.Std._ByValue_Vector_StdExpectedIntStdString other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString other) : this(new _ByValue_Vector_StdExpectedIntStdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_StdExpectedIntStdString(Vector_StdExpectedIntStdString other) : this((Const_Vector_StdExpectedIntStdString)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Vector_StdExpectedIntStdString other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Resizes the container. The new elements if any are zeroed.
                public unsafe void Resize(nuint new_size)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_resize(_UnderlyingPtr, new_size);
                }

                /// Resizes the container. The new elements if any are set to the specified value.
                public unsafe void ResizeWithDefaultValue(nuint new_size, MR.CS.Std.Const_Expected_Int_StdString value)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_resize_with_default_value(_UnderlyingPtr, new_size, value._UnderlyingPtr);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_clear(_UnderlyingPtr);
                }

                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                public unsafe void Reserve(nuint new_capacity)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_reserve(_UnderlyingPtr, new_capacity);
                }

                /// Shrinks the capacity to match the size.
                public unsafe void ShrinkToFit()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_shrink_to_fit(_UnderlyingPtr);
                }

                /// The element at a specific index, mutable.
                public unsafe new MR.CS.Std.Expected_Int_StdString this[nuint i]
                {
                    get
                    {
                        MR.CS.Misc._Exceptions.Prepare();
                        var __c_ret = __MR_C_std_vector_std_expected_int_std_string_at_mut(_UnderlyingPtr, i);
                        MR.CS.Std.Expected_Int_StdString __ret;
                        __ret = new(__c_ret, is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        MR.CS.Misc._Exceptions.ThrowIfNeeded();
                        return __ret;
                    }
                }

                /// The first element or null if empty, mutable.
                public unsafe new MR.CS.Std.Expected_Int_StdString? Front()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_front_mut(_UnderlyingPtr);
                    MR.CS.Std.Expected_Int_StdString? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.Expected_Int_StdString(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// The last element or null if empty, mutable.
                public unsafe new MR.CS.Std.Expected_Int_StdString? Back()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_back_mut(_UnderlyingPtr);
                    MR.CS.Std.Expected_Int_StdString? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.Expected_Int_StdString(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// Inserts a new element at the end.
                public unsafe void PushBack(MR.CS.Std._ByValue_Expected_Int_StdString new_elem)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_push_back(_UnderlyingPtr, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Removes one element from the end.
                public unsafe void PopBack()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_pop_back(_UnderlyingPtr);
                }

                /// Inserts a new element right before the specified position.
                public unsafe void Insert(nuint position, MR.CS.Std._ByValue_Expected_Int_StdString new_elem)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    if (new_elem.Value is not null) _KeepAlive(new_elem.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_insert(_UnderlyingPtr, position, new_elem.PassByMode, new_elem.Value is not null ? new_elem.Value._UnderlyingPtr : null);
                }

                /// Erases the element at the specified position.
                public unsafe void Erase(nuint position)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_std_expected_int_std_string_erase(_UnderlyingPtr, position);
                }

                /// The begin iterator, mutable. Iterators of this container are plain pointers.
                public unsafe new MR.CS.Std.PtrExpectedIntStdString Begin()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_begin_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// The end iterator, mutable. Iterators of this container are plain pointers.
                public unsafe new MR.CS.Std.PtrExpectedIntStdString End()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_std_expected_int_std_string_end_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_at_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_at_mut(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_back_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_back_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_begin_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_begin_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_clear", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_clear(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_end_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_end_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_erase", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_erase(_Underlying *_this, nuint position);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_front_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_vector_std_expected_int_std_string_front_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_insert", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_insert(_Underlying *_this, nuint position, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_pop_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_pop_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_push_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_push_back(_Underlying *_this, MR.CS.Misc._PassBy new_elem_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_reserve", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_reserve(_Underlying *_this, nuint new_capacity);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_resize", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_resize(_Underlying *_this, nuint new_size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_resize_with_default_value", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_resize_with_default_value(_Underlying *_this, nuint new_size, MR.CS.Std.Const_Expected_Int_StdString._Underlying *value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_std_expected_int_std_string_shrink_to_fit", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_std_expected_int_std_string_shrink_to_fit(_Underlying *_this);
            }

            /// This is used as a function parameter when the underlying function receives `Vector_StdExpectedIntStdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_StdExpectedIntStdString`/`Const_Vector_StdExpectedIntStdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Vector_StdExpectedIntStdString
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_StdExpectedIntStdString? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_StdExpectedIntStdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString arg) {return new(arg);}
                public _ByValue_Vector_StdExpectedIntStdString(MR.CS.Misc._Moved<Vector_StdExpectedIntStdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_StdExpectedIntStdString(MR.CS.Misc._Moved<Vector_StdExpectedIntStdString> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Vector_StdExpectedIntStdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_StdExpectedIntStdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_StdExpectedIntStdString`/`Const_Vector_StdExpectedIntStdString` directly.
            public class _InOptMut_Vector_StdExpectedIntStdString
            {
                public Vector_StdExpectedIntStdString? Opt;

                public _InOptMut_Vector_StdExpectedIntStdString() {}
                public _InOptMut_Vector_StdExpectedIntStdString(Vector_StdExpectedIntStdString value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_StdExpectedIntStdString(Vector_StdExpectedIntStdString value) {return new(value);}
            }

            /// This is used for optional parameters of class `Vector_StdExpectedIntStdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_StdExpectedIntStdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_StdExpectedIntStdString`/`Const_Vector_StdExpectedIntStdString` to pass it to the function.
            public class _InOptConst_Vector_StdExpectedIntStdString
            {
                public Const_Vector_StdExpectedIntStdString? Opt;

                public _InOptConst_Vector_StdExpectedIntStdString() {}
                public _InOptConst_Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_StdExpectedIntStdString(Const_Vector_StdExpectedIntStdString value) {return new(value);}
            }
        }
    }
}
