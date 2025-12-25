using static MR.CS.CSharp;

class MainClass
{
    public static void Main()
    {
        Console.WriteLine(Foo(true));

        try
        {
            Console.WriteLine(Foo(false));
        }
        catch (Exception e)
        {
            Console.WriteLine($"Caught: {e}");
        }
    }
}
