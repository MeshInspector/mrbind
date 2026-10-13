package mrbind_test.mr.csharp;

/**
 * Enum comment.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E1
{
    public final int value;

    public E1(int value) {this.value = value;}

    /**
     * A
     */
    public static final E1 a = new E1(10);
    /**
     * B
     */
    public static final E1 b = new E1(20);
    /**
     * C
     */
    public static final E1 c = new E1(30);

    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E1 of(int value)
    {
        if (value == a.value) return a;
        if (value == b.value) return b;
        if (value == c.value) return c;
        return new E1(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E1 o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        if (value == a.value) return "a";
        if (value == b.value) return "b";
        if (value == c.value) return "c";
        return "E1(" + value + ")";
    }
}
