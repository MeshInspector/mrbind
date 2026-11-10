public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// The result of a three-way comparison between values that are not necessarily ordered with respect to each other.
            /// </summary>
            public enum PartialOrdering : int
            {
                /// <summary>
                /// A &lt; B
                /// </summary>
                Less = -1,
                /// <summary>
                /// A == B
                /// </summary>
                Equivalent = 0,
                /// <summary>
                /// A &gt; B
                /// </summary>
                Greater = 1,
                /// <summary>
                /// A is not comparable to B
                /// </summary>
                Unordered = 2,
            }
        }
    }
}
