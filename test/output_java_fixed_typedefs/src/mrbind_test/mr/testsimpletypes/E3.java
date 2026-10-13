package mrbind_test.mr.testsimpletypes;

/**
 * This enum has no constants.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E3
{
    public final int value;

    public E3(int value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E3 of(int value)
    {
        return new E3(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E3 o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        return "E3(" + value + ")";
    }
}
