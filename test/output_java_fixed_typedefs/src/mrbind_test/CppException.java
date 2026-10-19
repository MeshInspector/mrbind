package mrbind_test;

/** A C++ exception thrown by the C bindings. */
public class CppException extends java.lang.RuntimeException
{
    private static final long serialVersionUID = 1;

    public CppException(java.lang.String message) {super(message);}
}
