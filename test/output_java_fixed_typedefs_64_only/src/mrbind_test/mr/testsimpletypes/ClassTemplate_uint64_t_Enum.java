package mrbind_test.mr.testsimpletypes;

/**
 * Enums.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class ClassTemplate_uint64_t_Enum
{
    public final int value;

    public ClassTemplate_uint64_t_Enum(int value) {this.value = value;}


    /** Returns the named constant with this value, or a new instance if there's none. */
    public static ClassTemplate_uint64_t_Enum of(int value)
    {
        return new ClassTemplate_uint64_t_Enum(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof ClassTemplate_uint64_t_Enum o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        return "ClassTemplate_uint64_t_Enum(" + value + ")";
    }
}
