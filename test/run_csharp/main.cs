using static MR.CS.CSharp;

class MainClass
{
    public static void Main()
    {
        foreach (var x in A())
            Console.WriteLine(x);
        Console.WriteLine("---");

        foreach (var x in B())
            Console.WriteLine(x);
        Console.WriteLine("---");

        foreach (var x in C())
            Console.WriteLine(x);
        Console.WriteLine("---");

        foreach (var x in D())
            Console.WriteLine(x);
        Console.WriteLine("---");
    }
}
