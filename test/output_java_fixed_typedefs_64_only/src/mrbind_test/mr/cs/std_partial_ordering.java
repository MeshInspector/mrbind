package mrbind_test.mr.cs;

/**
 * The result of a three-way comparison between values that are not necessarily ordered with respect to each other.
 *
 * The constants are static fields of this class. `value` holds the underlying value, so this can also hold values that aren't named constants.
 */
public final class std_partial_ordering
{
    public final int value;

    public std_partial_ordering(int value) {this.value = value;}

    /**
     * A < B
     */
    public static final std_partial_ordering less = new std_partial_ordering(-1);
    /**
     * A == B
     */
    public static final std_partial_ordering equivalent = new std_partial_ordering(0);
    /**
     * A > B
     */
    public static final std_partial_ordering greater = new std_partial_ordering(1);
    /**
     * A is not comparable to B
     */
    public static final std_partial_ordering unordered = new std_partial_ordering(2);

    /** Returns the named constant with this value, or a new instance if there's none. */
    public static std_partial_ordering of(int value)
    {
        if (value == less.value) return less;
        if (value == equivalent.value) return equivalent;
        if (value == greater.value) return greater;
        if (value == unordered.value) return unordered;
        return new std_partial_ordering(value);
    }

    @java.lang.Override public boolean equals(java.lang.Object other) {return other instanceof std_partial_ordering o && o.value == value;}
    @java.lang.Override public int hashCode() {return value;}
    @java.lang.Override public java.lang.String toString()
    {
        if (value == less.value) return "less";
        if (value == equivalent.value) return "equivalent";
        if (value == greater.value) return "greater";
        if (value == unordered.value) return "unordered";
        return "std_partial_ordering(" + value + ")";
    }
}
