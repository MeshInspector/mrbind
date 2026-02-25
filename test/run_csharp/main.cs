using static MR.CS.CSharp;

class MainClass
{
    public static void Main()
    {
        B b = new();
        b.Call();
        b.f1.Assign((MR.CS.Std.String s) => (int)s.Size());
        b.f2.Assign((int a, int b) => new MR.CS.Std.String($"[{a},{b}]"));
        b.f3.Assign((E e) => {Console.WriteLine(e); return E.E3;});
        b.f4.Assign((ref readonly ExposedLayout e) => {ExposedLayout ret = new(e); ret.x++; return ret;});
        b.f5.Assign((ref int a, ref readonly int b) => {Console.WriteLine($"C#: [{a};{b}]"); return ref a;});
        b.Call();
        b.f1.Reset();
        b.Call();
    }
}
