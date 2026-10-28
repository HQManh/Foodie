using System;
using System.Text;

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
				_l1 = l1;
				_l2 = l2;
				_bits = l0;
				_lane = 0;
				_kind = -1;
				Current = default;
			}

			public bool MoveNext()
			{
				while (true)
				{
					while (_bits == 0)
					{
						_lane++;
						if (_lane > 2)
						{
							return false;
						}
						_bits = (_lane == 1) ? _l1 : _l2;
						_kind = _lane * LaneKinds - 1;
					}
					_kind++;
					int count = (int)(_bits & KindMask);
					_bits >>= BitsPerKind;
					if (count != 0)
					{
						Current = (_kind, count);
						return true;
					}
				}
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

		public bool IsEmpty => _l0 == 0 && _l1 == 0 && _l2 == 0;

		public int this[int kind]
		{
			get
			{
				if ((uint)kind >= MaxKinds)
				{
					return 0;
				}
				return (int)((LaneOf(kind) >> ((kind & 0xF) << 2)) & KindMask);
			}
		}

		public int TotalCount => TotalOf(_l0) + TotalOf(_l1) + TotalOf(_l2);

		private PieceSet(ulong l0, ulong l1, ulong l2)
		{
			_l0 = l0;
			_l1 = l1;
			_l2 = l2;
		}

		public static PieceSet One(int kind)
		{
			return Of(kind, 1);
		}

		public static PieceSet Of(int kind, int count)
		{
			if ((uint)kind >= MaxKinds)
			{
				throw new ArgumentOutOfRangeException(nameof(kind));
			}
			if (count < 1)
			{
				return Empty;
			}
			if (count > MaxCount)
			{
				count = MaxCount;
			}
			ulong bits = (ulong)count << ((kind & 0xF) << 2);
			ulong l0 = (kind < 16) ? bits : 0uL;
			ulong l1 = (kind >= 16 && kind < 32) ? bits : 0uL;
			ulong l2 = (kind >= 32) ? bits : 0uL;
			return new PieceSet(l0, l1, l2);
		}

		private ulong LaneOf(int kind)
		{
			switch (kind >> 4)
			{
			case 0:
				return _l0;
			case 1:
				return _l1;
			default:
				return _l2;
			}
		}

		private static int TotalOf(ulong bits)
		{
			int total = 0;
			while (bits != 0)
			{
				total += (int)(bits & KindMask);
				bits >>= BitsPerKind;
			}
			return total;
		}

		public PieceSet Add(PieceSet other)
		{
			return new PieceSet(AddLane(_l0, other._l0), AddLane(_l1, other._l1), AddLane(_l2, other._l2));
		}

		private static ulong AddLane(ulong a, ulong b)
		{
			ulong result = 0;
			int shift = 0;
			while (a != 0 || b != 0)
			{
				ulong sum = (a & KindMask) + (b & KindMask);
				if (sum > MaxCount)
				{
					sum = MaxCount;
				}
				result |= sum << shift;
				a >>= BitsPerKind;
				b >>= BitsPerKind;
				shift += BitsPerKind;
			}
			return result;
		}

		public PieceSet Add(int kind, int count = 1)
		{
			return Add(Of(kind, count));
		}

		public PieceSet Subtract(PieceSet other)
		{
			return new PieceSet(SubtractLane(_l0, other._l0), SubtractLane(_l1, other._l1), SubtractLane(_l2, other._l2));
		}

		private static ulong SubtractLane(ulong a, ulong b)
		{
			if (a == 0 || b == 0)
			{
				return a;
			}
			ulong result = 0;
			int shift = 0;
			while (a != 0)
			{
				ulong x = a & KindMask;
				ulong y = b & KindMask;
				if (x > y)
				{
					result |= (x - y) << shift;
				}
				a >>= BitsPerKind;
				b >>= BitsPerKind;
				shift += BitsPerKind;
			}
			return result;
		}

		public PieceSet Subtract(int kind, int count = 1)
		{
			return Subtract(Of(kind, count));
		}

		public bool Covers(PieceSet inner)
		{
			return CoversLane(_l0, inner._l0) && CoversLane(_l1, inner._l1) && CoversLane(_l2, inner._l2);
		}

		private static bool CoversLane(ulong a, ulong b)
		{
			while (b != 0)
			{
				if ((b & KindMask) > (a & KindMask))
				{
					return false;
				}
				a >>= BitsPerKind;
				b >>= BitsPerKind;
			}
			return true;
		}

		public int MissingFrom(PieceSet has)
		{
			return MissingLane(_l0, has._l0) + MissingLane(_l1, has._l1) + MissingLane(_l2, has._l2);
		}

		private static int MissingLane(ulong need, ulong own)
		{
			int missing = 0;
			while (need != 0)
			{
				int diff = (int)(need & KindMask) - (int)(own & KindMask);
				if (diff > 0)
				{
					missing += diff;
				}
				need >>= BitsPerKind;
				own >>= BitsPerKind;
			}
			return missing;
		}

		public int IntersectCount(PieceSet other)
		{
			return IntersectLane(_l0, other._l0) + IntersectLane(_l1, other._l1) + IntersectLane(_l2, other._l2);
		}

		private static int IntersectLane(ulong a, ulong b)
		{
			int count = 0;
			while (a != 0 && b != 0)
			{
				count += (int)Math.Min(a & KindMask, b & KindMask);
				a >>= BitsPerKind;
				b >>= BitsPerKind;
			}
			return count;
		}

		public Enumerator GetEnumerator()
		{
			return new Enumerator(_l0, _l1, _l2);
		}

		public bool Equals(PieceSet other)
		{
			return _l0 == other._l0 && _l1 == other._l1 && _l2 == other._l2;
		}

		public override bool Equals(object obj)
		{
			return obj is PieceSet other && Equals(other);
		}

		public override int GetHashCode()
		{
			int h0 = _l0.GetHashCode();
			int h1 = _l1.GetHashCode();
			int h2 = _l2.GetHashCode();
			return ((h0 * 0x18D) ^ h1) * 0x18D ^ h2;
		}

		public static bool operator ==(PieceSet a, PieceSet b)
		{
			return a.Equals(b);
		}

		public static bool operator !=(PieceSet a, PieceSet b)
		{
			return !a.Equals(b);
		}

		public override string ToString()
		{
			return ToString(null);
		}

		public string ToString(Func<int, string> nameOf)
		{
			if (IsEmpty)
			{
				return string.Empty; /* literal recovered by guess */
			}
			StringBuilder sb = new StringBuilder();
			foreach (var (kind, count) in this)
			{
				if (sb.Length > 0)
				{
					sb.Append(", "); /* literal recovered by guess */
				}
				sb.Append((nameOf != null) ? nameOf(kind) : ("#" + kind)); /* literal recovered by guess */
				if (count > 1)
				{
					sb.Append('×').Append(count);
				}
			}
			return sb.ToString();
		}
	}
}
