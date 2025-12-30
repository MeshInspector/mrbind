public static partial class MR
{
    public static partial class CS
    {
        /// Generated from class `MR::A`.
        /// This is the const half of the class.
        public class Const_A : MR.CS.Misc.Object, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_Destroy", ExactSpelling = true)]
                extern static void __MR_A_Destroy(_Underlying *_this);
                __MR_A_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_A() {Dispose(false);}

            public unsafe MR.CS.Std.Const_String x
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_Get_x", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_A_Get_x(_Underlying *_this);
                    return new(__MR_A_Get_x(_UnderlyingPtr), is_owning: false);
                }
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe Const_A() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.A._Underlying *__MR_A_DefaultConstruct();
                _UnderlyingPtr = __MR_A_DefaultConstruct();
            }

            /// Generated from constructor `MR::A::A`.
            public unsafe Const_A(MR.CS._ByValue_A _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.A._Underlying *__MR_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.A._Underlying *_other);
                _UnderlyingPtr = __MR_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
            }
        }

        /// Generated from class `MR::A`.
        /// This is the non-const half of the class.
        public class A : Const_A
        {
            internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            public new unsafe MR.CS.Std.String x
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_GetMutable_x", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_A_GetMutable_x(_Underlying *_this);
                    return new(__MR_A_GetMutable_x(_UnderlyingPtr), is_owning: false);
                }
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe A() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.A._Underlying *__MR_A_DefaultConstruct();
                _UnderlyingPtr = __MR_A_DefaultConstruct();
            }

            /// Generated from constructor `MR::A::A`.
            public unsafe A(MR.CS._ByValue_A _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.A._Underlying *__MR_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.A._Underlying *_other);
                _UnderlyingPtr = __MR_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
            }

            /// Generated from method `MR::A::operator=`.
            public unsafe MR.CS.A Assign(MR.CS._ByValue_A _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_A_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.A._Underlying *__MR_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.A._Underlying *_other);
                return new(__MR_A_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
            }
        }

        /// This is used as a function parameter when the underlying function receives `A` by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `A`/`Const_A` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn't a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        public class _ByValue_A
        {
            internal readonly Const_A? Value;
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValue_A() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
            public _ByValue_A(Const_A new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValue_A(Const_A arg) {return new(arg);}
            public _ByValue_A(MR.CS.Misc._Moved<A> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValue_A(MR.CS.Misc._Moved<A> arg) {return new(arg);}
        }

        /// This is used for optional parameters of class `A` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `A`/`Const_A` directly.
        public class _InOptMut_A
        {
            public A? Opt;

            public _InOptMut_A() {}
            public _InOptMut_A(A value) {Opt = value;}
            public static implicit operator _InOptMut_A(A value) {return new(value);}
        }

        /// This is used for optional parameters of class `A` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `A`/`Const_A` to pass it to the function.
        public class _InOptConst_A
        {
            public Const_A? Opt;

            public _InOptConst_A() {}
            public _InOptConst_A(Const_A value) {Opt = value;}
            public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
        }

        /// Generated from function `MR::foo`.
        public static unsafe MR.CS.Std.Vector_MRA Foo()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_foo", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRA._Underlying *__MR_foo();
            return new(__MR_foo(), is_owning: true);
        }

        /// Generated from function `MR::bar`.
        public static unsafe void Bar(MR.CS.Std._ByValue_Vector_MRA _1)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_bar", ExactSpelling = true)]
            extern static void __MR_bar(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_MRA._Underlying *_1);
            __MR_bar(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
        }
    }
}
