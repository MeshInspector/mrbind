package mrbind_test.mr.testsimpletypes;

/**
 * This enum has a custom underlying type.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E2
{
    public final short value;

    public E2(short value) {this.value = value;}

    public static final E2 e1 = new E2((short)0);

    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E2 of(short value)
    {
        if (value == e1.value) return e1;
        return new E2(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E2 o && o.value == value;}
    @java.lang.Override public int hashCode() {return (int)value;}
    @java.lang.Override public java.lang.String toString()
    {
        if (value == e1.value) return "e1";
        return "E2(" + value + ")";
    }
}
