public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::CSharp::ExposedLayout&gt;`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Vector_MRCSharpExposedLayout : MR.CS.Misc.Object<Const_Vector_MRCSharpExposedLayout>, System.IDisposable, IEnumerable<MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout>>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Vector_MRCSharpExposedLayout() {Dispose(false);}

                public class _Enumerator : IEnumerator<MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout>>
                {
                    Const_Vector_MRCSharpExposedLayout _container;
                    MR.CS.CSharp.ConstPtrExposedLayout _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Const_Vector_MRCSharpExposedLayout container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return new(in _cur.deref());
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

                public IEnumerator<MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout>> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Const_Vector_MRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout other) : this(new _ByValue_Vector_MRCSharpExposedLayout(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout other) : this((Const_Vector_MRCSharpExposedLayout)other) {}

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Const_Vector_MRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout? ptr, nuint size) : this(null, is_owning: true)
                {
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// The number of elements.
                /// </summary>
                public unsafe nuint size()
                {
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns true if the size is zero.
                /// </summary>
                public unsafe bool empty()
                {
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_empty(_UnderlyingPtr) != 0;
                }

                /// <summary>
                /// The memory capacity, measued in the number of elements.
                /// </summary>
                public unsafe nuint capacity()
                {
                    return __MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout this[nuint i]
                {
                    get
                    {
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_at(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ExposedLayout? front()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_front(_UnderlyingPtr);
                    if (__c_ret is not null) return *__c_ret; else return null;
                }

                /// <summary>
                /// The last element or null if empty, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ExposedLayout? back()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_back(_UnderlyingPtr);
                    if (__c_ret is not null) return *__c_ret; else return null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.ConstPtrExposedLayout data()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_data(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The begin iterator, const. Iterators of this container are plain pointers.
                /// </summary>
                public unsafe MR.CS.CSharp.ConstPtrExposedLayout begin()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_begin(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The end iterator, const. Iterators of this container are plain pointers.
                /// </summary>
                public unsafe MR.CS.CSharp.ConstPtrExposedLayout end()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_end(_UnderlyingPtr);
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(MR.CS.CSharp.ExposedLayout *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_at", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_at(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_back", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_begin", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_begin(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_capacity", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_data", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_data(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_empty", ExactSpelling = true)]
                extern static unsafe byte __MR_C_std_vector_MR_CSharp_ExposedLayout_empty(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_end", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_end(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_front", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_front(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_size", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_vector_MR_CSharp_ExposedLayout_size(_Underlying *_this);
            }

            /// <summary>
            /// Generated from C++ container `std::vector&lt;MR::CSharp::ExposedLayout&gt;`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Vector_MRCSharpExposedLayout : Const_Vector_MRCSharpExposedLayout, IEnumerable<MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>>
            {
                public new class _Enumerator : IEnumerator<MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>>
                {
                    Vector_MRCSharpExposedLayout _container;
                    MR.CS.CSharp.PtrExposedLayout _cur;
                    bool _first = true;
                    bool _done;

                    public _Enumerator(Vector_MRCSharpExposedLayout container)
                    {
                        _container = container;
                        _cur = _container.begin();
                        _done = _cur == _container.end();
                    }

                    public MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout> Current
                    {
                        get
                        {
                            if (_first || _done)
                                throw new MR.CS.Misc.InvalidEnumeratorExpression("Attempting to dereference an invalid enumerator.");
                            return new(ref _cur.deref());
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

                public new IEnumerator<MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>> GetEnumerator()
                {
                    return new _Enumerator(this);
                }

                System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
                {
                    return GetEnumerator();
                }

                internal unsafe Vector_MRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout other) : this(new _ByValue_Vector_MRCSharpExposedLayout(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout other) : this((Const_Vector_MRCSharpExposedLayout)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Vector_MRCSharpExposedLayout other)
                {
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Construct from a range of elements.
                /// </summary>
                public unsafe Vector_MRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout? ptr, nuint size) : this(null, is_owning: true)
                {
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Assign from a range of elements, overwriting previous contents.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp.ExposedLayout? ptr, nuint size)
                {
                    MR.CS.CSharp.ExposedLayout __deref_ptr = ptr.GetValueOrDefault();
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null, size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are zeroed.
                /// </summary>
                public unsafe void resize(nuint new_size)
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_resize(_UnderlyingPtr, new_size);
                }

                /// <summary>
                /// Resizes the container. The new elements if any are set to the specified value.
                /// </summary>
                public unsafe void resizeWithDefaultValue(nuint new_size, in MR.CS.CSharp.ExposedLayout value)
                {
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr_value = &value)
                    {
                        __MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(_UnderlyingPtr, new_size, __ptr_value);
                    }
                }

                /// <summary>
                /// Removes all elements from the container.
                /// </summary>
                public unsafe void clear()
                {
                    _DiscardKeepAlive();
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_clear(_UnderlyingPtr);
                }

                /// <summary>
                /// Reserves memory for a certain number of elements. Never shrinks the memory.
                /// </summary>
                public unsafe void reserve(nuint new_capacity)
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(_UnderlyingPtr, new_capacity);
                }

                /// <summary>
                /// Shrinks the capacity to match the size.
                /// </summary>
                public unsafe void shrinkToFit()
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(_UnderlyingPtr);
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new ref MR.CS.CSharp.ExposedLayout this[nuint i]
                {
                    get
                    {
                        return ref *__MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(_UnderlyingPtr, i);
                    }
                }

                /// <summary>
                /// The first element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>? front()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>(__c_ret) : null;
                }

                /// <summary>
                /// The last element or null if empty, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>? back()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout>(__c_ret) : null;
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.CSharp.PtrExposedLayout data()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// Inserts a new element at the end.
                /// </summary>
                public unsafe void pushBack(MR.CS.CSharp.ExposedLayout new_elem)
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(_UnderlyingPtr, new_elem);
                }

                /// <summary>
                /// Removes one element from the end.
                /// </summary>
                public unsafe void popBack()
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(_UnderlyingPtr);
                }

                /// <summary>
                /// Inserts a new element right before the specified position.
                /// </summary>
                public unsafe void insert(nuint position, MR.CS.CSharp.ExposedLayout new_elem)
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_insert(_UnderlyingPtr, position, new_elem);
                }

                /// <summary>
                /// Erases the element at the specified position.
                /// </summary>
                public unsafe void erase(nuint position)
                {
                    __MR_C_std_vector_MR_CSharp_ExposedLayout_erase(_UnderlyingPtr, position);
                }

                /// <summary>
                /// The begin iterator, mutable. Iterators of this container are plain pointers.
                /// </summary>
                public unsafe new MR.CS.CSharp.PtrExposedLayout begin()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }

                /// <summary>
                /// The end iterator, mutable. Iterators of this container are plain pointers.
                /// </summary>
                public unsafe new MR.CS.CSharp.PtrExposedLayout end()
                {
                    var __c_ret = __MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(_UnderlyingPtr);
                    return new(__c_ret);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(_Underlying *_this, MR.CS.CSharp.ExposedLayout *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(MR.CS.CSharp.ExposedLayout *ptr, nuint size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Vector_MRCSharpExposedLayout._Underlying *__MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(_Underlying *_this, nuint i);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_clear", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_clear(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_erase", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_erase(_Underlying *_this, nuint position);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut", ExactSpelling = true)]
                extern static unsafe MR.CS.CSharp.ExposedLayout *__MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_insert", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_insert(_Underlying *_this, nuint position, MR.CS.CSharp.ExposedLayout new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_push_back", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(_Underlying *_this, MR.CS.CSharp.ExposedLayout new_elem);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_reserve", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(_Underlying *_this, nuint new_capacity);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_resize", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_resize(_Underlying *_this, nuint new_size);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(_Underlying *_this, nuint new_size, MR.CS.CSharp.ExposedLayout *value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(_Underlying *_this);
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Vector_MRCSharpExposedLayout` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Vector_MRCSharpExposedLayout
            {
                #pragma warning disable CS0649
                internal readonly Const_Vector_MRCSharpExposedLayout? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Vector_MRCSharpExposedLayout() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout arg) {return new(arg);}
                public _ByValue_Vector_MRCSharpExposedLayout(MR.CS.Misc._Moved<Vector_MRCSharpExposedLayout> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Vector_MRCSharpExposedLayout(MR.CS.Misc._Moved<Vector_MRCSharpExposedLayout> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpExposedLayout` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Vector_MRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` directly.
            /// </summary>
            public class _InOptMut_Vector_MRCSharpExposedLayout
            {
                public Vector_MRCSharpExposedLayout? Opt;

                public _InOptMut_Vector_MRCSharpExposedLayout() {}
                public _InOptMut_Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptMut_Vector_MRCSharpExposedLayout(Vector_MRCSharpExposedLayout value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Vector_MRCSharpExposedLayout` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Vector_MRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Vector_MRCSharpExposedLayout`/`Const_Vector_MRCSharpExposedLayout` to pass it to the function.
            /// </summary>
            public class _InOptConst_Vector_MRCSharpExposedLayout
            {
                public Const_Vector_MRCSharpExposedLayout? Opt;

                public _InOptConst_Vector_MRCSharpExposedLayout() {}
                public _InOptConst_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptConst_Vector_MRCSharpExposedLayout(Const_Vector_MRCSharpExposedLayout value) {return new(value);}
            }
        }
    }
}
