package mrbind_test.mr.csharp;

/**
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E2
{
    public final boolean value;

    public E2(boolean value) {this.value = value;}

    /**
     * < Test a same-line documentation comment. Add some >weird< & 'characters".
     */
    public static final E2 a = new E2(false);
    public static final E2 b = new E2(true);

    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E2 of(boolean value)
    {
        if (value == a.value) return a;
        if (value == b.value) return b;
        return new E2(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E2 o && o.value == value;}
    @java.lang.Override public int hashCode() {return value ? 1 : 0;}
    @java.lang.Override public java.lang.String toString()
    {
        if (value == a.value) return "a";
        if (value == b.value) return "b";
        return "E2(" + value + ")";
    }
}
