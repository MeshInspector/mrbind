public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdString
        {
            /// Generated from function `MR::StdString::Set`.
            public static unsafe void Set(ReadOnlySpan<char> s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_Set", ExactSpelling = true)]
                extern static void __MR_StdString_Set(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdString_Set(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdString::SetWithDefault`.
            /// Parameter `s` defaults to `"42"`.
            public static unsafe void SetWithDefault(MR.CS.Misc.ReadOnlyCharSpanOpt s = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_SetWithDefault", ExactSpelling = true)]
                extern static void __MR_StdString_SetWithDefault(byte *s, byte *s_end);
                byte[] __bytes_s;
                int __len_s = 0;
                if (s.HasValue)
                {
                    __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Value.Length)];
                    __len_s = System.Text.Encoding.UTF8.GetBytes(s.Value, __bytes_s);
                }
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdString_SetWithDefault(s.HasValue ? __ptr_s : null, s.HasValue ? __ptr_s + __len_s : null);
                }
            }

            /// Generated from function `MR::StdString::Get`.
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.String> Get()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_Get", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_StdString_Get();
                return MR.CS.Misc.Move(new MR.CS.Std.String(__MR_StdString_Get(), is_owning: true));
            }

            /// Generated from function `MR::StdString::WriteToRef`.
            public static unsafe void WriteToRef(MR.CS.Std.String ref_)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_WriteToRef", ExactSpelling = true)]
                extern static void __MR_StdString_WriteToRef(MR.CS.Std.String._Underlying *ref_);
                __MR_StdString_WriteToRef(ref_._UnderlyingPtr);
            }

            /// Generated from function `MR::StdString::WriteToPtr`.
            public static unsafe void WriteToPtr(MR.CS.Std.String? ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_WriteToPtr", ExactSpelling = true)]
                extern static void __MR_StdString_WriteToPtr(MR.CS.Std.String._Underlying *ptr);
                __MR_StdString_WriteToPtr(ptr is not null ? ptr._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdString::ConstRef`.
            public static unsafe void ConstRef(ReadOnlySpan<char> s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_ConstRef", ExactSpelling = true)]
                extern static void __MR_StdString_ConstRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdString_ConstRef(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdString::RvalueRef`.
            public static unsafe void RvalueRef(ReadOnlySpan<char> s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_RvalueRef", ExactSpelling = true)]
                extern static void __MR_StdString_RvalueRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdString_RvalueRef(__ptr_s, __ptr_s + __len_s);
                }
            }

            /// Generated from function `MR::StdString::ConstRvalueRef`.
            public static unsafe void ConstRvalueRef(ReadOnlySpan<char> s)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdString_ConstRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdString_ConstRvalueRef(byte *s, byte *s_end);
                byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                fixed (byte *__ptr_s = __bytes_s)
                {
                    __MR_StdString_ConstRvalueRef(__ptr_s, __ptr_s + __len_s);
                }
            }
        }
    }
}
