using static MR.CS.CSharp;

class MainClass
{
    public static void Main()
    {
        IterableA a = new();

        foreach (var x in a)
        {
            Console.WriteLine(x);
        }

        try
        {
        }
        catch (Exception e)
        {
            Console.WriteLine($"Caught: {e}");
        }
    }
}
