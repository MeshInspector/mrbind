package mrbind_test.mr.testsimpletypes;

/**
 * This has multiple words in the underlying type. This has caused a bug at one point...
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E4
{
    public final int value;

    public E4(int value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E4 of(int value)
    {
        return new E4(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E4 o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        return "E4(" + value + ")";
    }
}
