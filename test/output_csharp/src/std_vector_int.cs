public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Generated from C++ container `std::vector<int>`.
            /// This is the const half of the class.
            public class Const_Vector_Int : MR.CS.Misc.Object<Const_Vector_Int>, System.IDisposable, IEnumerable<int>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_C_std_vector_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_Int() {Dispose(false);}

                public class _Enumerator : IEnumerator<int>
                {
                    Const_Vector_Int _container;
                    MR.CS.ConstPtrInt _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_Int container)
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

                internal unsafe Const_Vector_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Vector_Int() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_int_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Vector_Int(MR.CS.Std._ByValue_Vector_Int other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_Int(Const_Vector_Int other) : this(new _ByValue_Vector_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Vector_Int(Vector_Int other) : this((Const_Vector_Int)other) {}

                /// Construct from a range of elements.
                public unsafe Const_Vector_Int(int? ptr, nuint size) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// The number of elements.
                public unsafe nuint Size()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_size(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Returns true if the size is zero.
                public unsafe bool Empty()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_empty(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                /// The memory capacity, measued in the number of elements.
                public unsafe nuint Capacity()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_capacity(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// The element at a specific index, read-only.
                public unsafe int this[nuint i]
                {
                    get
                    {
                        MR.CS.Misc._Exceptions.Prepare();
                        var __c_ret = __MR_C_std_vector_int_at(_UnderlyingPtr, i);
                        MR.CS.Misc._Exceptions.ThrowIfNeeded();
                        return *__c_ret;
                    }
                }

                /// The first element or null if empty, read-only.
                public unsafe int? Front()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_front(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// The last element or null if empty, read-only.
                public unsafe int? Back()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_back(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                public unsafe MR.CS.ConstPtrInt Data()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_data(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// The begin iterator, const. Iterators of this container are plain pointers.
                public unsafe MR.CS.ConstPtrInt Begin()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_begin(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// The end iterator, const. Iterators of this container are plain pointers.
                public unsafe MR.CS.ConstPtrInt End()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_end(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromRange", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromRange(int *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_at", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_at(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_back", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_begin", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_begin(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_capacity", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_int_capacity(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_data", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_data(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_empty", ExactSpelling = true)]
                extern static unsafe byte __MR_C_std_vector_int_empty(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_end", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_end(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_front", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_front(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_size", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_int_size(_Underlying *_this);
            }

            /// Generated from C++ container `std::vector<int>`.
            /// This is the non-const half of the class.
            public class Vector_Int : Const_Vector_Int, IEnumerable<MR.CS.Misc.Ref<int>>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Misc.Ref<int>>
                {
                    Vector_Int _container;
                    MR.CS.PtrInt _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_Int container)
                    {
                        _container = container;
                        _cur = _container.Begin();
                        _done = _cur == _container.End();
                    }

                    public MR.CS.Misc.Ref<int> Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return new(ref _cur.Deref());
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

                public new IEnumerator<MR.CS.Misc.Ref<int>> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Vector_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Vector_Int() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_int_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Vector_Int(MR.CS.Std._ByValue_Vector_Int other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_Int(Const_Vector_Int other) : this(new _ByValue_Vector_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Vector_Int(Vector_Int other) : this((Const_Vector_Int)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Vector_Int other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Construct from a range of elements.
                public unsafe Vector_Int(int? ptr, nuint size) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_int_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Assign from a range of elements, overwriting previous contents.
                public unsafe void Assign(int? ptr, nuint size)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    int __deref_ptr = ptr.GetValueOrDefault();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// Resizes the container. The new elements if any are zeroed.
                public unsafe void Resize(nuint new_size)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_resize(_UnderlyingPtr, new_size);
                }

                /// Resizes the container. The new elements if any are set to the specified value.
                public unsafe void ResizeWithDefaultValue(nuint new_size, int value)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_resize_with_default_value(_UnderlyingPtr, new_size, value);
                }

                /// Removes all elements from the container.
                public unsafe void Clear()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_clear(_UnderlyingPtr);
                }

                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                public unsafe void Reserve(nuint new_capacity)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_reserve(_UnderlyingPtr, new_capacity);
                }

                /// Shrinks the capacity to match the size.
                public unsafe void ShrinkToFit()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_shrink_to_fit(_UnderlyingPtr);
                }

                /// The element at a specific index, mutable.
                public unsafe new ref int this[nuint i]
                {
                    get
                    {
                        MR.CS.Misc._Exceptions.Prepare();
                        var __c_ret = __MR_C_std_vector_int_at_mut(_UnderlyingPtr, i);
                        MR.CS.Misc._Exceptions.ThrowIfNeeded();
                        return ref *__c_ret;
                    }
                }

                /// The first element or null if empty, mutable.
                public unsafe new MR.CS.Misc.Ref<int>? Front()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_front_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// The last element or null if empty, mutable.
                public unsafe new MR.CS.Misc.Ref<int>? Back()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_back_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                public unsafe new MR.CS.PtrInt Data()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_data_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// Inserts a new element at the end.
                public unsafe void PushBack(int new_elem)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_push_back(_UnderlyingPtr, new_elem);
                }

                /// Removes one element from the end.
                public unsafe void PopBack()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_pop_back(_UnderlyingPtr);
                }

                /// Inserts a new element right before the specified position.
                public unsafe void Insert(nuint position, int new_elem)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_insert(_UnderlyingPtr, position, new_elem);
                }

                /// Erases the element at the specified position.
                public unsafe void Erase(nuint position)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_vector_int_erase(_UnderlyingPtr, position);
                }

                /// The begin iterator, mutable. Iterators of this container are plain pointers.
                public unsafe new MR.CS.PtrInt Begin()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_begin_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                /// The end iterator, mutable. Iterators of this container are plain pointers.
                public unsafe new MR.CS.PtrInt End()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_vector_int_end_mut(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_AssignFromRange", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_AssignFromRange(_Underlying *_this, int *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_Int._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_ConstructFromRange", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_ConstructFromRange(int *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_Int._Underlying *__MR_C_std_vector_int_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_at_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_at_mut(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_back_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_back_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_begin_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_begin_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_clear", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_clear(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_data_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_data_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_end_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_end_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_erase", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_erase(_Underlying *_this, nuint position);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_front_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_vector_int_front_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_insert", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_insert(_Underlying *_this, nuint position, int new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_pop_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_pop_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_push_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_push_back(_Underlying *_this, int new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_reserve", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_reserve(_Underlying *_this, nuint new_capacity);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_resize", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_resize(_Underlying *_this, nuint new_size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_resize_with_default_value", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_resize_with_default_value(_Underlying *_this, nuint new_size, int value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_int_shrink_to_fit", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_int_shrink_to_fit(_Underlying *_this);
            }

            /// This is used as a function parameter when the underlying function receives `Vector_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Vector_Int
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_Int? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_Int(Const_Vector_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_Int(Const_Vector_Int arg) {return new(arg);}
                public _ByValue_Vector_Int(MR.CS.Misc._Moved<Vector_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_Int(MR.CS.Misc._Moved<Vector_Int> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Vector_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` directly.
            public class _InOptMut_Vector_Int
            {
                public Vector_Int? Opt;

                public _InOptMut_Vector_Int() {}
                public _InOptMut_Vector_Int(Vector_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_Int(Vector_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `Vector_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_Int`/`Const_Vector_Int` to pass it to the function.
            public class _InOptConst_Vector_Int
            {
                public Const_Vector_Int? Opt;

                public _InOptConst_Vector_Int() {}
                public _InOptConst_Vector_Int(Const_Vector_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_Int(Const_Vector_Int value) {return new(value);}
            }
        }
    }
}
