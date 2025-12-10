using static MR.CS.CSharp;

class MainClass
{
    static void foo(MR.CS.Std.String s)
    {

    }

    public static void Main()
    {
        F0("blah");
        F1(new A("blah"));
        F1(null);
        F2(42);
        F2(null);
        F3("blah");
        F3(null);
    }
}
