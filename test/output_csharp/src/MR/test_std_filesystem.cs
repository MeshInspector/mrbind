public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdFilesystem
        {
            /// Generated from function `MR::StdFilesystem::GetPath`.
            public static unsafe MR.CS.Std.Filesystem.Path GetPath()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFilesystem_GetPath", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_StdFilesystem_GetPath();
                return new(__MR_StdFilesystem_GetPath(), is_owning: true);
            }

            /// Generated from function `MR::StdFilesystem::SetPath`.
            public static unsafe void SetPath(ReadOnlySpan<char> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFilesystem_SetPath", ExactSpelling = true)]
                extern static void __MR_StdFilesystem_SetPath(byte *_1, byte *_1_end);
                byte[] __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Length)];
                int __len__1 = System.Text.Encoding.UTF8.GetBytes(_1, __bytes__1);
                fixed (byte *__ptr__1 = __bytes__1)
                {
                    __MR_StdFilesystem_SetPath(__ptr__1, __ptr__1 + __len__1);
                }
            }

            /// Generated from function `MR::StdFilesystem::SetPathConstRef`.
            public static unsafe void SetPathConstRef(ReadOnlySpan<char> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFilesystem_SetPathConstRef", ExactSpelling = true)]
                extern static void __MR_StdFilesystem_SetPathConstRef(byte *_1, byte *_1_end);
                byte[] __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Length)];
                int __len__1 = System.Text.Encoding.UTF8.GetBytes(_1, __bytes__1);
                fixed (byte *__ptr__1 = __bytes__1)
                {
                    __MR_StdFilesystem_SetPathConstRef(__ptr__1, __ptr__1 + __len__1);
                }
            }

            /// Generated from function `MR::StdFilesystem::SetPathDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetPathDefTrivial(MR.CS.Misc.ReadOnlyCharSpanOpt _1 = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFilesystem_SetPathDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdFilesystem_SetPathDefTrivial(byte *_1, byte *_1_end);
                byte[] __bytes__1;
                int __len__1 = 0;
                if (_1.HasValue)
                {
                    __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Value.Length)];
                    __len__1 = System.Text.Encoding.UTF8.GetBytes(_1.Value, __bytes__1);
                }
                fixed (byte *__ptr__1 = __bytes__1)
                {
                    __MR_StdFilesystem_SetPathDefTrivial(_1.HasValue ? __ptr__1 : null, _1.HasValue ? __ptr__1 + __len__1 : null);
                }
            }

            /// Generated from function `MR::StdFilesystem::SetPathDef`.
            /// Parameter `_1` defaults to `"hmm"`.
            public static unsafe void SetPathDef(MR.CS.Misc.ReadOnlyCharSpanOpt _1 = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFilesystem_SetPathDef", ExactSpelling = true)]
                extern static void __MR_StdFilesystem_SetPathDef(byte *_1, byte *_1_end);
                byte[] __bytes__1;
                int __len__1 = 0;
                if (_1.HasValue)
                {
                    __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Value.Length)];
                    __len__1 = System.Text.Encoding.UTF8.GetBytes(_1.Value, __bytes__1);
                }
                fixed (byte *__ptr__1 = __bytes__1)
                {
                    __MR_StdFilesystem_SetPathDef(_1.HasValue ? __ptr__1 : null, _1.HasValue ? __ptr__1 + __len__1 : null);
                }
            }
        }
    }
}
