package mrbind_test;

/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
public class UnexpectedResultException extends java.lang.RuntimeException
{
    private static final long serialVersionUID = 1;

    public UnexpectedResultException(java.lang.String message) {super(message);}
}
