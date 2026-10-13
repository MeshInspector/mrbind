package mrbind_test.mr.csharp;

/**
 * Other injection cases:
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class StaticOpsEnum
{
    public final int value;

    public StaticOpsEnum(int value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static StaticOpsEnum of(int value)
    {
        return new StaticOpsEnum(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof StaticOpsEnum o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        return "StaticOpsEnum(" + value + ")";
    }
}
