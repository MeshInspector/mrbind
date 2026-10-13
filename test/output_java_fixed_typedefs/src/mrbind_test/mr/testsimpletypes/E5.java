package mrbind_test.mr.testsimpletypes;

/**
 * This will use a custom typedef for the underlying type, if that's enabled!
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E5
{
    public final long value;

    public E5(long value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E5 of(long value)
    {
        return new E5(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E5 o && o.value == value;}
    @java.lang.Override public int hashCode() {return java.lang.Long.hashCode(value);}
    @java.lang.Override public java.lang.String toString()
    {
        return "E5(" + value + ")";
    }
}
