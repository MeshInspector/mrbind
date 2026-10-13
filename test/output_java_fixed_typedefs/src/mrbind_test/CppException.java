package mrbind_test;

/** A C++ exception thrown by the C bindings. */
public class CppException extends RuntimeException
{
    private static final long serialVersionUID = 1;

    public CppException(String message) {super(message);}
}
