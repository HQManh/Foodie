using System;

namespace AnhPD.FoodOrder
{
	public readonly struct PieceSet : IEquatable<PieceSet>
	{
		public struct Enumerator
		{
			private readonly ulong _l1;

			private readonly ulong _l2;

			private ulong _bits;

			private int _lane;

			private int _kind;

			public (int kind, int count) Current { get; private set; }

			internal Enumerator(ulong l0, ulong l1, ulong l2)
			{
				_l1 = 0uL;
				_l2 = 0uL;
				_bits = 0uL;
				_lane = 0;
				_kind = 0;
				Current = default;
			}

			public bool MoveNext()
			{
				return false;
			}
		}

		private const int LaneKinds = 16;

		private const int Lanes = 3;

		public const int MaxKinds = 48;

		public const int MaxCount = 15;

		private const int BitsPerKind = 4;

		private const ulong KindMask = 15uL;

		private readonly ulong _l0;

		private readonly ulong _l1;

		private readonly ulong _l2;

		public static readonly PieceSet Empty;

		public bool IsEmpty => false;

		public int this[int kind] => 0;

		public int TotalCount => 0;

		private PieceSet(ulong l0, ulong l1, ulong l2)
		{
			_l0 = 0uL;
			_l1 = 0uL;
			_l2 = 0uL;
		}

		public static PieceSet One(int kind)
		{
			return default;
		}

		public static PieceSet Of(int kind, int count)
		{
			return default;
		}

		private ulong LaneOf(int kind)
		{
			return 0uL;
		}

		private static int TotalOf(ulong bits)
		{
			return 0;
		}

		public PieceSet Add(PieceSet other)
		{
			return default;
		}

		private static ulong AddLane(ulong a, ulong b)
		{
			return 0uL;
		}

		public PieceSet Add(int kind, int count = 1)
		{
			return default;
		}

		public PieceSet Subtract(PieceSet other)
		{
			return default;
		}

		private static ulong SubtractLane(ulong a, ulong b)
		{
			return 0uL;
		}

		public PieceSet Subtract(int kind, int count = 1)
		{
			return default;
		}

		public bool Covers(PieceSet inner)
		{
			return false;
		}

		private static bool CoversLane(ulong a, ulong b)
		{
			return false;
		}

		public int MissingFrom(PieceSet has)
		{
			return 0;
		}

		private static int MissingLane(ulong need, ulong own)
		{
			return 0;
		}

		public int IntersectCount(PieceSet other)
		{
			return 0;
		}

		private static int IntersectLane(ulong a, ulong b)
		{
			return 0;
		}

		public Enumerator GetEnumerator()
		{
			return default;
		}

		public bool Equals(PieceSet other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static bool operator ==(PieceSet a, PieceSet b)
		{
			return false;
		}

		public static bool operator !=(PieceSet a, PieceSet b)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public string ToString(Func<int, string> nameOf)
		{
			return null;
		}
	}
}
