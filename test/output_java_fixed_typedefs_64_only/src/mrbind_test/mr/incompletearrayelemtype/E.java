package mrbind_test.mr.incompletearrayelemtype;

/**
 * Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class E
{
    public final int value;

    public E(int value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static E of(int value)
    {
        return new E(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof E o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        return "E(" + value + ")";
    }
}
