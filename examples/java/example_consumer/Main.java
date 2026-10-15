import example.example.Functions;

public class Main
{
    public static void main(String[] args)
    {
        Functions.SayHello();
        if (Functions.Square(4) != 16)
            throw new AssertionError("Square(4) != 16");
    }
}
