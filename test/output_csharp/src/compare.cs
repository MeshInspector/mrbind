public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// The result of a three-way comparison between values that are not necessarily ordered with respect to each other.
            public enum PartialOrdering : int
            {
                /// A < B
                Less = -1,
                /// A == B
                Equivalent = 0,
                /// A > B
                Greater = 1,
                /// A is not comparable to B
                Unordered = 2,
            }
        }
    }
}
