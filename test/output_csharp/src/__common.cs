public static partial class MR
{
    public static partial class CS
    {
        public static partial class Misc
        {
            /// This is the base class for all our classes.
            public abstract class Object
            {
                protected bool _IsOwningVal;
                /// Returns true if this is an owning instance, and when disposed, will destroy the underlying C++ instance.
                /// If false, we assume that the underlying C++ instance will live long enough.
                public virtual bool _IsOwning => _IsOwningVal;

                /// Which objects need to be kept alive while this object exists? This is public just in case.
                public List<object>? _KeepAliveList;
                public void _KeepAlive(object obj)
                {
                    if (_KeepAliveList is null)
                        _KeepAliveList = new();
                    _KeepAliveList.Add(obj);
                }

                internal Object(bool is_owning) {_IsOwningVal = is_owning;}
            }

            /// This is the base class for those of our classes that are backed by `std::shared_ptr`.
            public abstract class SharedObject : Object
            {
                /// This checks if the `shared_ptr` itself is owning or not, rather than whether we own our `shared_ptr`, which isn't a given.
                /// The derived classes have to implement this, since it depends on the specific `shared_ptr` type.
                public abstract override bool _IsOwning {get;}
                /// This checks if we own the underlying `shared_ptr` instance, regardless of whether it owns the underlying object, which is orthogonal.
                /// We repurpose `_IsOwningVal` for this.
                public bool _IsOwningSharedPtr => _IsOwningVal;

                internal SharedObject(bool is_owning) : base(is_owning) {}
            }

            /// This is used for optional in/out parameters, since `ref` can't be nullable.
            public class InOut<T> where T: unmanaged
            {
                public T Value;

                public InOut() {}
                public InOut(T NewValue) {Value = NewValue;}
            }

            /// This is used for optional in/out parameters with default arguments.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `InOut<T>` to pass it to the function.
            public class _InOutOpt<T> where T: unmanaged
            {
                public InOut<T>? Opt;

                // Use this constructor (by passing `new()`) if you don't want to receive output from this function parameter.
                public _InOutOpt() {}
                // Use this constructor (by passing an existing `InOut` instance) if you do want to receive output, into that object.
                public _InOutOpt(InOut<T>? NewOpt) {Opt = NewOpt;}
                // An implicit conversion for passing function parameters.
                public static implicit operator _InOutOpt<T>(InOut<T>? NewOpt) {return new _InOutOpt<T>(NewOpt);}
            }

            /// This is used for optional parameters with default arguments.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `T` to pass it to the function.
            /// Passing a null `_InOpt` means "use default argument", and passing a one with a null `.Opt` means "pass nothing to the function".
            public class _InOpt<T> where T: unmanaged
            {
                public T? Opt;

                public _InOpt() {}
                public _InOpt(T NewOpt) {Opt = NewOpt;}
                public static implicit operator _InOpt<T>(T NewOpt) {return new _InOpt<T>(NewOpt);}
            }

            /// A reference to a C object. This is used to return optional references, since `ref` can't be nullable.
            /// This object itself isn't nullable, we return `Ref<T>?` when nullability is needed.
            public unsafe class Ref<T> where T: unmanaged
            {
                /// Should never be null.
                private T *Ptr;
                /// Should never be given a null pointer. I would pass `ref T`, but this prevents the address from being taken without `fixed`.
                internal Ref(T *NewPtr)
                {
                    System.Diagnostics.Trace.Assert(NewPtr is not null);
                    Ptr = NewPtr;
                }

                public ref T Value => ref *Ptr;
            }

            /// Wraps the object in a wrapper that indicates that it should be treated as a temporary object.
            /// This can be used with `_ByValue_...` function parameters, to indicate that the argument should be moved.
            /// See those structs for a longer explanation.
            public static _Moved<T> Move<T>(T new_value) {return new(new_value);}

            /// A wrapper for `T` that indicates that it's a temporary object, or should be treated as such.
            /// If you're calling a function that returns this, you can safely convert this to `T`.
            /// If you're calling a function that takes this as a parameter, use the `Move()` function to create this wrapper.
            public readonly struct _Moved<T>
            {
                public readonly T Value;
                internal _Moved(T new_value) {Value = new_value;}
                public static implicit operator T(_Moved<T> moved) {return moved.Value;}
            }

            internal enum _PassBy : int
            {
                default_construct,
                copy,
                move,
                default_arg,
                no_object,
            }

            /// This is a tag value. Pass it to functions having a `_MoveRef` parameter.
            /// This indicates that the reference parameter immediately following it is an rvalue reference.
            public static _MoveRef MoveRef = default;
            /// This is a tag type for passing rvalue references. Don't construct directly, prefer the `MoveRef` constant.
            public struct _MoveRef {}

            /// The type of `NullOpt`, see that for more details.
            public struct NullOptType {}
            /// This can be passed into `_ByValueOptOpt_...` parameters to indicate that you want to pass no object,
            ///   as opposed to using the default argument provided by the function.
            public static NullOptType NullOpt;

            /// This is used for optional `ReadOnlySpan<char>` function parameters. This is a specialized version that provides string interop.
            /// Pass `null` or `new()` to use the default argument.
            ///   Note that for the original `ReadOnlySpan`, those result in an empty span instead.
            public ref struct ReadOnlyCharSpanOpt
            {
                public readonly bool HasValue;

                public MR.CS.Misc.ReadOnlySpan<char> _Span; // This needs to be visible for us to take the address of `_Span._reference`, when using span polyfills.
                public MR.CS.Misc.ReadOnlySpan<char> Value
                {
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return _Span;
                    }
                }

                public ReadOnlyCharSpanOpt(char[]? arr) {HasValue = arr is not null; _Span = arr;}
                public ReadOnlyCharSpanOpt(MR.CS.Misc.ReadOnlySpan<char> span) {HasValue = true; _Span = span;}
                public ReadOnlyCharSpanOpt(string? str) {HasValue = str is not null; if (str is not null) _Span = str.ToCharArray();}

                // This is disabled because it makes conversion from `null` ambiguous.
                // public static implicit operator ReadOnlyCharSpanOpt(char[]? arr) {return new(arr);}
                public static implicit operator ReadOnlyCharSpanOpt(MR.CS.Misc.ReadOnlySpan<char> span) {return new(span);}
                public static implicit operator ReadOnlyCharSpanOpt(string? str) {return new(str);}
            }

            // This is a polyfill of `Span`, pasted with minimal changes from:
            //     https://github.com/dotnet/runtime/blob/cce23eef7f53ee914777425b7fd01228e548926c/src/libraries/System.Private.CoreLib/src/System/Span.cs
            //     https://github.com/dotnet/runtime/blob/cce23eef7f53ee914777425b7fd01228e548926c/src/libraries/System.Private.CoreLib/src/System/ReadOnlySpan.cs
            // The original is licensed under MIT:
            //     The MIT License (MIT)
            //     Copyright (c) .NET Foundation and Contributors
            //     All rights reserved.
            //     Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
            //     The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
            //     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

            #pragma warning disable 0660 // '...' defines operator == or operator != but does not override Object.Equals(object o)

            /// <summary>
            /// Span represents a contiguous region of arbitrary memory. Unlike arrays, it can point to either managed
            /// or native memory, or to memory allocated on the stack. It is type-safe and memory-safe.
            /// </summary>
            public ref struct Span<T> where T: unmanaged
            {
                /// <summary>A byref or a native ptr.</summary>
                public ref T _reference; // This must not be read-only for us to be able to take its address. Because of this, we also have to mark the entire struct not read-only.
                /// <summary>The number of elements this Span contains.</summary>
                private readonly int _length;

                /// <summary>
                /// Creates a new span over the entirety of the target array.
                /// </summary>
                /// <param name="array">The target array.</param>
                /// <remarks>Returns default when <paramref name="array"/> is null.</remarks>
                /// <exception cref="ArrayTypeMismatchException">Thrown when <paramref name="array"/> is covariant and array's type is not exactly T[].</exception>
                public Span(T[]? array)
                {
                    if (array == null)
                    {
                        this = default;
                        return; // returns default
                    }
                    if (!typeof(T).IsValueType && array.GetType() != typeof(T[]))
                        throw new ArrayTypeMismatchException();

                    _reference = ref System.Runtime.InteropServices.MemoryMarshal.GetArrayDataReference(array);
                    _length = array.Length;
                }

                /// <summary>
                /// Creates a new span over the portion of the target array beginning
                /// at 'start' index and ending at 'end' index (exclusive).
                /// </summary>
                /// <param name="array">The target array.</param>
                /// <param name="start">The zero-based index at which to begin the span.</param>
                /// <param name="length">The number of items in the span.</param>
                /// <remarks>Returns default when <paramref name="array"/> is null.</remarks>
                /// <exception cref="ArrayTypeMismatchException">Thrown when <paramref name="array"/> is covariant and array's type is not exactly T[].</exception>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> or end index is not in the range (&lt;0 or &gt;Length).
                /// </exception>
                public Span(T[]? array, int start, int length)
                {
                    if (array == null)
                    {
                        if (start != 0 || length != 0)
                            throw new ArgumentOutOfRangeException();
                        this = default;
                        return; // returns default
                    }
                    if (!typeof(T).IsValueType && array.GetType() != typeof(T[]))
                        throw new ArrayTypeMismatchException();
            #if TARGET_64BIT
                    // See comment in Span<T>.Slice for how this works.
                    if ((ulong)(uint)start + (ulong)(uint)length > (ulong)(uint)array.Length)
                        throw new ArgumentOutOfRangeException();
            #else
                    if ((uint)start > (uint)array.Length || (uint)length > (uint)(array.Length - start))
                        throw new ArgumentOutOfRangeException();
            #endif

                    _reference = ref System.Runtime.CompilerServices.Unsafe.Add(ref System.Runtime.InteropServices.MemoryMarshal.GetArrayDataReference(array), (nint)(uint)start /* force zero-extension */);
                    _length = length;
                }

                /// <summary>
                /// Creates a new span over the target unmanaged buffer.  Clearly this
                /// is quite dangerous, because we are creating arbitrarily typed T's
                /// out of a void*-typed block of memory.  And the length is not checked.
                /// But if this creation is correct, then all subsequent uses are correct.
                /// </summary>
                /// <param name="pointer">An unmanaged pointer to memory.</param>
                /// <param name="length">The number of <typeparamref name="T"/> elements the memory contains.</param>
                /// <exception cref="ArgumentException">
                /// Thrown when <typeparamref name="T"/> is reference type or contains pointers and hence cannot be stored in unmanaged memory.
                /// </exception>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="length"/> is negative.
                /// </exception>
                public unsafe Span(void* pointer, int length)
                {
                    if (System.Runtime.CompilerServices.RuntimeHelpers.IsReferenceOrContainsReferences<T>())
                        throw new ArgumentException($"Type contains references: {typeof(T)}");
                    if (length < 0)
                        throw new ArgumentOutOfRangeException();

                    _reference = ref *(T*)pointer;
                    _length = length;
                }

                /// <summary>Creates a new <see cref="Span{T}"/> of length 1 around the specified reference.</summary>
                /// <param name="reference">A reference to data.</param>
                public Span(ref T reference)
                {
                    _reference = ref reference;
                    _length = 1;
                }

                // Constructor for internal use only. It is not safe to expose publicly, and is instead exposed via the unsafe MemoryMarshal.CreateSpan.
                internal Span(ref T reference, int length)
                {
                    System.Diagnostics.Debug.Assert(length >= 0);

                    _reference = ref reference;
                    _length = length;
                }

                /// <summary>
                /// Returns a reference to specified element of the Span.
                /// </summary>
                /// <param name="index">The zero-based index.</param>
                /// <returns></returns>
                /// <exception cref="IndexOutOfRangeException">
                /// Thrown when index less than 0 or index greater than or equal to Length
                /// </exception>
                public ref T this[int index]
                {
                    get
                    {
                        if ((uint)index >= (uint)_length)
                            throw new IndexOutOfRangeException();
                        return ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)index /* force zero-extension */);
                    }
                }

                /// <summary>
                /// The number of items in the span.
                /// </summary>
                public int Length
                {
                    get => _length;
                }

                /// <summary>
                /// Gets a value indicating whether this <see cref="Span{T}"/> is empty.
                /// </summary>
                /// <value><see langword="true"/> if this span is empty; otherwise, <see langword="false"/>.</value>
                public bool IsEmpty
                {
                    get => _length == 0;
                }

                /// <summary>
                /// Returns false if left and right point at the same memory and have the same length.  Note that
                /// this does *not* check to see if the *contents* are equal.
                /// </summary>
                public static bool operator !=(Span<T> left, Span<T> right) => !(left == right);

                /// <summary>
                /// Defines an implicit conversion of an array to a <see cref="Span{T}"/>
                /// </summary>
                public static implicit operator Span<T>(T[]? array) => new Span<T>(array);

                /// <summary>
                /// Defines an implicit conversion of a <see cref="ArraySegment{T}"/> to a <see cref="Span{T}"/>
                /// </summary>
                public static implicit operator Span<T>(ArraySegment<T> segment) =>
                    new Span<T>(segment.Array, segment.Offset, segment.Count);

                /// <summary>
                /// Returns an empty <see cref="Span{T}"/>
                /// </summary>
                public static Span<T> Empty => default;

                /// <summary>Gets an enumerator for this span.</summary>
                public Enumerator GetEnumerator() => new Enumerator(this);

                /// <summary>Enumerates the elements of a <see cref="Span{T}"/>.</summary>
                public ref struct Enumerator
                {
                    /// <summary>The span being enumerated.</summary>
                    private readonly Span<T> _span;
                    /// <summary>The next index to yield.</summary>
                    private int _index;

                    /// <summary>Initialize the enumerator.</summary>
                    /// <param name="span">The span to enumerate.</param>
                    internal Enumerator(Span<T> span)
                    {
                        _span = span;
                        _index = -1;
                    }

                    /// <summary>Advances the enumerator to the next element of the span.</summary>
                    public bool MoveNext()
                    {
                        int index = _index + 1;
                        if (index < _span.Length)
                        {
                            _index = index;
                            return true;
                        }

                        return false;
                    }

                    /// <summary>Gets the element at the current position of the enumerator.</summary>
                    public ref T Current
                    {
                        get => ref _span[_index];
                    }

                    void Reset() => _index = -1;

                }

                /// <summary>
                /// Returns a reference to the 0th element of the Span. If the Span is empty, returns null reference.
                /// It can be used for pinning and is required to support the use of span within a fixed statement.
                /// </summary>
                public ref T GetPinnableReference()
                {
                    // Ensure that the native code has just one forward branch that is predicted-not-taken.
                    ref T ret = ref System.Runtime.CompilerServices.Unsafe.NullRef<T>();
                    if (_length != 0) ret = ref _reference;
                    return ref ret;
                }

                /// <summary>
                /// Returns true if left and right point at the same memory and have the same length.  Note that
                /// this does *not* check to see if the *contents* are equal.
                /// </summary>
                public static bool operator ==(Span<T> left, Span<T> right) =>
                    left._length == right._length &&
                    System.Runtime.CompilerServices.Unsafe.AreSame(ref left._reference, ref right._reference);

                /// <summary>
                /// Defines an implicit conversion of a <see cref="Span{T}"/> to a <see cref="ReadOnlySpan{T}"/>
                /// </summary>
                public static implicit operator ReadOnlySpan<T>(Span<T> span) =>
                    new ReadOnlySpan<T>(ref span._reference, span._length);

                /// <summary>
                /// Forms a slice out of the given span, beginning at 'start'.
                /// </summary>
                /// <param name="start">The zero-based index at which to begin this slice.</param>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> index is not in range (&lt;0 or &gt;Length).
                /// </exception>
                public Span<T> Slice(int start)
                {
                    if ((uint)start > (uint)_length)
                        throw new ArgumentOutOfRangeException();

                    return new Span<T>(ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)start /* force zero-extension */), _length - start);
                }

                /// <summary>
                /// Forms a slice out of the given span, beginning at 'start', of given length
                /// </summary>
                /// <param name="start">The zero-based index at which to begin this slice.</param>
                /// <param name="length">The desired length for the slice (exclusive).</param>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> or end index is not in range (&lt;0 or &gt;Length).
                /// </exception>
                public Span<T> Slice(int start, int length)
                {
            #if TARGET_64BIT
                    // Since start and length are both 32-bit, their sum can be computed across a 64-bit domain
                    // without loss of fidelity. The cast to uint before the cast to ulong ensures that the
                    // extension from 32- to 64-bit is zero-extending rather than sign-extending. The end result
                    // of this is that if either input is negative or if the input sum overflows past Int32.MaxValue,
                    // that information is captured correctly in the comparison against the backing _length field.
                    // We don't use this same mechanism in a 32-bit process due to the overhead of 64-bit arithmetic.
                    if ((ulong)(uint)start + (ulong)(uint)length > (ulong)(uint)_length)
                        throw new ArgumentOutOfRangeException();
            #else
                    if ((uint)start > (uint)_length || (uint)length > (uint)(_length - start))
                        throw new ArgumentOutOfRangeException();
            #endif

                    return new Span<T>(ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)start /* force zero-extension */), length);
                }
            }

            /// <summary>
            /// ReadOnlySpan represents a contiguous region of arbitrary memory. Unlike arrays, it can point to either managed
            /// or native memory, or to memory allocated on the stack. It is type-safe and memory-safe.
            /// </summary>
            public ref struct ReadOnlySpan<T> where T: unmanaged
            {
                /// <summary>A byref or a native ptr.</summary>
                public ref T _reference; // This must not be read-only for us to be able to take its address. Because of this, we also have to mark the entire struct not read-only.
                /// <summary>The number of elements this ReadOnlySpan contains.</summary>
                private readonly int _length;

                /// <summary>
                /// Creates a new read-only span over the entirety of the target array.
                /// </summary>
                /// <param name="array">The target array.</param>
                /// <remarks>Returns default when <paramref name="array"/> is null.</remarks>
                public ReadOnlySpan(T[]? array)
                {
                    if (array == null)
                    {
                        this = default;
                        return; // returns default
                    }

                    _reference = ref System.Runtime.InteropServices.MemoryMarshal.GetArrayDataReference(array);
                    _length = array.Length;
                }

                /// <summary>
                /// Creates a new read-only span over the portion of the target array beginning
                /// at 'start' index and ending at 'end' index (exclusive).
                /// </summary>
                /// <param name="array">The target array.</param>
                /// <param name="start">The zero-based index at which to begin the read-only span.</param>
                /// <param name="length">The number of items in the read-only span.</param>
                /// <remarks>Returns default when <paramref name="array"/> is null.</remarks>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> or end index is not in the range (&lt;0 or &gt;Length).
                /// </exception>
                public ReadOnlySpan(T[]? array, int start, int length)
                {
                    if (array == null)
                    {
                        if (start != 0 || length != 0)
                            throw new ArgumentOutOfRangeException();
                        this = default;
                        return; // returns default
                    }
            #if TARGET_64BIT
                    // See comment in Span<T>.Slice for how this works.
                    if ((ulong)(uint)start + (ulong)(uint)length > (ulong)(uint)array.Length)
                        throw new ArgumentOutOfRangeException();
            #else
                    if ((uint)start > (uint)array.Length || (uint)length > (uint)(array.Length - start))
                        throw new ArgumentOutOfRangeException();
            #endif

                    _reference = ref System.Runtime.CompilerServices.Unsafe.Add(ref System.Runtime.InteropServices.MemoryMarshal.GetArrayDataReference(array), (nint)(uint)start /* force zero-extension */);
                    _length = length;
                }

                /// <summary>
                /// Creates a new read-only span over the target unmanaged buffer.  Clearly this
                /// is quite dangerous, because we are creating arbitrarily typed T's
                /// out of a void*-typed block of memory.  And the length is not checked.
                /// But if this creation is correct, then all subsequent uses are correct.
                /// </summary>
                /// <param name="pointer">An unmanaged pointer to memory.</param>
                /// <param name="length">The number of <typeparamref name="T"/> elements the memory contains.</param>
                /// <exception cref="ArgumentException">
                /// Thrown when <typeparamref name="T"/> is reference type or contains pointers and hence cannot be stored in unmanaged memory.
                /// </exception>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="length"/> is negative.
                /// </exception>
                public unsafe ReadOnlySpan(void* pointer, int length)
                {
                    if (System.Runtime.CompilerServices.RuntimeHelpers.IsReferenceOrContainsReferences<T>())
                        throw new ArgumentException($"Type contains references: {typeof(T)}");
                    if (length < 0)
                        throw new ArgumentOutOfRangeException();

                    _reference = ref *(T*)pointer;
                    _length = length;
                }

                /// <summary>Creates a new <see cref="ReadOnlySpan{T}"/> of length 1 around the specified reference.</summary>
                /// <param name="reference">A reference to data.</param>
                public ReadOnlySpan(ref readonly T reference)
                {
                    _reference = ref System.Runtime.CompilerServices.Unsafe.AsRef(in reference);
                    _length = 1;
                }

                // Constructor for internal use only. It is not safe to expose publicly, and is instead exposed via the unsafe MemoryMarshal.CreateReadOnlySpan.
                internal ReadOnlySpan(ref T reference, int length)
                {
                    System.Diagnostics.Debug.Assert(length >= 0);

                    _reference = ref reference;
                    _length = length;
                }

                /// <summary>
                /// Returns the specified element of the read-only span.
                /// </summary>
                /// <param name="index">The zero-based index.</param>
                /// <returns></returns>
                /// <exception cref="IndexOutOfRangeException">
                /// Thrown when index less than 0 or index greater than or equal to Length
                /// </exception>
                public ref readonly T this[int index]
                {
                    get
                    {
                        if ((uint)index >= (uint)_length)
                            throw new IndexOutOfRangeException();
                        return ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)index /* force zero-extension */);
                    }
                }

                /// <summary>
                /// The number of items in the read-only span.
                /// </summary>
                public int Length
                {
                    get => _length;
                }

                /// <summary>
                /// Gets a value indicating whether this <see cref="ReadOnlySpan{T}"/> is empty.
                /// </summary>
                /// <value><see langword="true"/> if this span is empty; otherwise, <see langword="false"/>.</value>
                public bool IsEmpty
                {
                    get => _length == 0;
                }

                /// <summary>
                /// Returns false if left and right point at the same memory and have the same length.  Note that
                /// this does *not* check to see if the *contents* are equal.
                /// </summary>
                public static bool operator !=(ReadOnlySpan<T> left, ReadOnlySpan<T> right) => !(left == right);

                /// <summary>
                /// Defines an implicit conversion of an array to a <see cref="ReadOnlySpan{T}"/>
                /// </summary>
                public static implicit operator ReadOnlySpan<T>(T[]? array) => new ReadOnlySpan<T>(array);

                /// <summary>
                /// Defines an implicit conversion of a <see cref="ArraySegment{T}"/> to a <see cref="ReadOnlySpan{T}"/>
                /// </summary>
                public static implicit operator ReadOnlySpan<T>(ArraySegment<T> segment)
                    => new ReadOnlySpan<T>(segment.Array, segment.Offset, segment.Count);

                /// <summary>
                /// Returns a 0-length read-only span whose base is the null pointer.
                /// </summary>
                public static ReadOnlySpan<T> Empty => default;

                /// <summary>Gets an enumerator for this span.</summary>
                public Enumerator GetEnumerator() => new Enumerator(this);

                /// <summary>Enumerates the elements of a <see cref="ReadOnlySpan{T}"/>.</summary>
                public ref struct Enumerator
                {
                    /// <summary>The span being enumerated.</summary>
                    private readonly ReadOnlySpan<T> _span;
                    /// <summary>The next index to yield.</summary>
                    private int _index;

                    /// <summary>Initialize the enumerator.</summary>
                    /// <param name="span">The span to enumerate.</param>
                    internal Enumerator(ReadOnlySpan<T> span)
                    {
                        _span = span;
                        _index = -1;
                    }

                    /// <summary>Advances the enumerator to the next element of the span.</summary>
                    public bool MoveNext()
                    {
                        int index = _index + 1;
                        if (index < _span.Length)
                        {
                            _index = index;
                            return true;
                        }

                        return false;
                    }

                    /// <summary>Gets the element at the current position of the enumerator.</summary>
                    public ref readonly T Current
                    {
                        get => ref _span[_index];
                    }

                    void Reset() => _index = -1;

                }

                /// <summary>
                /// Returns a reference to the 0th element of the Span. If the Span is empty, returns null reference.
                /// It can be used for pinning and is required to support the use of span within a fixed statement.
                /// </summary>
                public ref readonly T GetPinnableReference()
                {
                    // Ensure that the native code has just one forward branch that is predicted-not-taken.
                    ref T ret = ref System.Runtime.CompilerServices.Unsafe.NullRef<T>();
                    if (_length != 0) ret = ref _reference;
                    return ref ret;
                }

                /// <summary>
                /// Returns true if left and right point at the same memory and have the same length.  Note that
                /// this does *not* check to see if the *contents* are equal.
                /// </summary>
                public static bool operator ==(ReadOnlySpan<T> left, ReadOnlySpan<T> right) =>
                    left._length == right._length &&
                    System.Runtime.CompilerServices.Unsafe.AreSame(ref left._reference, ref right._reference);

                /// <summary>
                /// Forms a slice out of the given read-only span, beginning at 'start'.
                /// </summary>
                /// <param name="start">The zero-based index at which to begin this slice.</param>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> index is not in range (&lt;0 or &gt;Length).
                /// </exception>
                public ReadOnlySpan<T> Slice(int start)
                {
                    if ((uint)start > (uint)_length)
                        throw new ArgumentOutOfRangeException();

                    return new ReadOnlySpan<T>(ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)start /* force zero-extension */), _length - start);
                }

                /// <summary>
                /// Forms a slice out of the given read-only span, beginning at 'start', of given length
                /// </summary>
                /// <param name="start">The zero-based index at which to begin this slice.</param>
                /// <param name="length">The desired length for the slice (exclusive).</param>
                /// <exception cref="ArgumentOutOfRangeException">
                /// Thrown when the specified <paramref name="start"/> or end index is not in range (&lt;0 or &gt;Length).
                /// </exception>
                public ReadOnlySpan<T> Slice(int start, int length)
                {
            #if TARGET_64BIT
                    // See comment in Span<T>.Slice for how this works.
                    if ((ulong)(uint)start + (ulong)(uint)length > (ulong)(uint)_length)
                        throw new ArgumentOutOfRangeException();
            #else
                    if ((uint)start > (uint)_length || (uint)length > (uint)(_length - start))
                        throw new ArgumentOutOfRangeException();
            #endif

                    return new ReadOnlySpan<T>(ref System.Runtime.CompilerServices.Unsafe.Add(ref _reference, (nint)(uint)start /* force zero-extension */), length);
                }
            }

            #pragma warning restore 0660 // '...' defines operator == or operator != but does not override Object.Equals(object o)

        }

        public static partial class Std
        {
            /// This is an empty tag type.
            public struct Greater_Int {}

            /// This is an empty tag type.
            public struct Greater_Void {}

            /// This is an empty tag type.
            public struct Less_Int {}

            /// This is an empty tag type.
            public struct Less_Void {}

            /// This is an empty tag type.
            public struct Monostate {}

            /// This is an empty tag type.
            public struct VariantIndex_0 {}

            /// This is an empty tag type.
            public struct VariantIndex_1 {}

            /// This is an empty tag type.
            public struct VariantIndex_2 {}

            /// This is an empty tag type.
            public struct VariantIndex_3 {}

        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayBool4_5
        {
            MR.CS.ArrayBool5 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayBool5
        {
            byte elem;
        }

        [System.Runtime.CompilerServices.InlineArray(10)]
        public struct ArrayInt10_20
        {
            MR.CS.ArrayInt20 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ArrayInt2
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(20)]
        public struct ArrayInt20
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ArrayInt3_4
        {
            MR.CS.ArrayInt4 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayInt4
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(42)]
        public struct ArrayInt42
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(43)]
        public struct ArrayInt43
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ArrayInt4_5
        {
            MR.CS.ArrayInt5 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayInt5
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(5)]
        public struct ArrayInt5_3_4
        {
            MR.CS.ArrayInt3_4 elem;
        }

        public static partial class CSharp
        {
            [System.Runtime.CompilerServices.InlineArray(10)]
            public struct ArrayE1_10_20
            {
                MR.CS.CSharp.ArrayE1_20 elem;
            }

            [System.Runtime.CompilerServices.InlineArray(20)]
            public struct ArrayE1_20
            {
                MR.CS.CSharp.E1 elem;
            }

            [System.Runtime.CompilerServices.InlineArray(42)]
            public struct ArrayE1_42
            {
                MR.CS.CSharp.E1 elem;
            }

            [System.Runtime.CompilerServices.InlineArray(10)]
            public struct ConstArrayE1_10_20
            {
                MR.CS.CSharp.ConstArrayE1_20 elem;
            }

            [System.Runtime.CompilerServices.InlineArray(20)]
            public struct ConstArrayE1_20
            {
                MR.CS.CSharp.E1 elem;
            }

            [System.Runtime.CompilerServices.InlineArray(42)]
            public struct ConstArrayE1_42
            {
                MR.CS.CSharp.E1 elem;
            }
        }

        [System.Runtime.CompilerServices.InlineArray(10)]
        public struct ConstArrayInt10_20
        {
            MR.CS.ConstArrayInt20 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(2)]
        public struct ConstArrayInt2
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(20)]
        public struct ConstArrayInt20
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(3)]
        public struct ConstArrayInt3_4
        {
            MR.CS.ConstArrayInt4 elem;
        }

        [System.Runtime.CompilerServices.InlineArray(4)]
        public struct ConstArrayInt4
        {
            int elem;
        }

        [System.Runtime.CompilerServices.InlineArray(42)]
        public struct ConstArrayInt42
        {
            int elem;
        }

        public static partial class IncompleteArrayElemType
        {
            [System.Runtime.CompilerServices.InlineArray(4)]
            public struct ArrayE4
            {
                MR.CS.IncompleteArrayElemType.E elem;
            }
        }

        public static partial class Std
        {
            public unsafe struct ArrayString2
            {
                MR.CS.Std.String._Underlying *Ptr;

                internal ArrayString2(MR.CS.Std.String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.String this[int i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }

            public unsafe struct ConstArrayString2
            {
                MR.CS.Std.Const_String._Underlying *Ptr;

                internal ConstArrayString2(MR.CS.Std.Const_String._Underlying *new_ptr) {Ptr = new_ptr;}

                public MR.CS.Std.Const_String this[int i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_OffsetPtr", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_string_OffsetPtr(MR.CS.Std.Const_String._Underlying *ptr, nint i);
                        return new(__MR_C_std_string_OffsetPtr(Ptr, i), is_owning: false);
                    }
                }
            }
        }
    }
}
