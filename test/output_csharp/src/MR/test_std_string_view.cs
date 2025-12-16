public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdStringView
        {
            /// Generated from function `MR::StdStringView::Set`.
            public static unsafe void Set(MR.CS.Misc.ReadOnlyCharSpan s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_Set", ExactSpelling = true)]
                extern static void __MR_StdStringView_Set(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                fixed (byte *__ptr_s = __bytes_s)
                {
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(&s._reference, s.Length, __ptr_s, __bytes_s.Length);
                    __MR_StdStringView_Set(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdStringView::SetWithDefault`.
            /// Parameter `s` defaults to `"42"`.
            public static unsafe void SetWithDefault(MR.CS.Misc.ReadOnlyCharSpanOpt s = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_SetWithDefault", ExactSpelling = true)]
                extern static void __MR_StdStringView_SetWithDefault(byte *s, byte *s_end);
                byte[] __bytes_s;
                int __len_s = 0;
                if (s.HasValue)
                {
                    __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Value.Length)];
                    fixed (byte *__ptr_s = __bytes_s)
                    {
                        __len_s = System.Text.Encoding.UTF8.GetBytes(&s._Span._reference, s.Value.Length, __ptr_s, __bytes_s.Length);
                    }
                }
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdStringView_SetWithDefault(s.HasValue ? __ptr_s : null, s.HasValue ? __ptr_s + __len_s : null);
                }
            }

            /// Generated from function `MR::StdStringView::Get`.
            public static unsafe MR.CS.Std.StringView Get()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_Get", ExactSpelling = true)]
                extern static MR.CS.Std.StringView._Underlying *__MR_StdStringView_Get();
                return new(__MR_StdStringView_Get(), is_owning: true);
            }

            /// Generated from function `MR::StdStringView::WriteToRef`.
            public static unsafe void WriteToRef(MR.CS.Std.StringView ref_)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_WriteToRef", ExactSpelling = true)]
                extern static void __MR_StdStringView_WriteToRef(MR.CS.Std.StringView._Underlying *ref_);
                __MR_StdStringView_WriteToRef(ref_._UnderlyingPtr);
            }

            /// Generated from function `MR::StdStringView::WriteToPtr`.
            public static unsafe void WriteToPtr(MR.CS.Std.StringView? ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_WriteToPtr", ExactSpelling = true)]
                extern static void __MR_StdStringView_WriteToPtr(MR.CS.Std.StringView._Underlying *ptr);
                __MR_StdStringView_WriteToPtr(ptr is not null ? ptr._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdStringView::ConstRef`.
            public static unsafe void ConstRef(MR.CS.Misc.ReadOnlyCharSpan s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_ConstRef", ExactSpelling = true)]
                extern static void __MR_StdStringView_ConstRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                fixed (byte *__ptr_s = __bytes_s)
                {
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(&s._reference, s.Length, __ptr_s, __bytes_s.Length);
                    __MR_StdStringView_ConstRef(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdStringView::RvalueRef`.
            public static unsafe void RvalueRef(MR.CS.Misc._MoveRef _move_s, MR.CS.Misc.ReadOnlyCharSpan s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_RvalueRef", ExactSpelling = true)]
                extern static void __MR_StdStringView_RvalueRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                fixed (byte *__ptr_s = __bytes_s)
                {
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(&s._reference, s.Length, __ptr_s, __bytes_s.Length);
                    __MR_StdStringView_RvalueRef(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdStringView::ConstRvalueRef`.
            public static unsafe void ConstRvalueRef(MR.CS.Misc._MoveRef _move_s, MR.CS.Misc.ReadOnlyCharSpan s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdStringView_ConstRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdStringView_ConstRvalueRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                fixed (byte *__ptr_s = __bytes_s)
                {
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(&s._reference, s.Length, __ptr_s, __bytes_s.Length);
                    __MR_StdStringView_ConstRvalueRef(__ptr_s, __ptr_s + __len_s);
                }
            }
        }
    }
}
