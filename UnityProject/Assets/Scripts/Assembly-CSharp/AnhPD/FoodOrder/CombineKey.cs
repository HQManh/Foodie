using System;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public struct CombineKey : IEquatable<CombineKey>
	{
		public string a;

		public string b;

		public CombineKey(string id1, string id2)
		{
			if (string.CompareOrdinal(id1, id2) < 0)
			{
				a = id1;
				b = id2;
			}
			else
			{
				a = id2;
				b = id1;
			}
		}

		public bool Equals(CombineKey other)
		{
			if (a == other.a)
			{
				return b == other.b;
			}
			return false;
		}

		public override bool Equals(object obj)
		{
			if (obj is CombineKey other)
			{
				return Equals(other);
			}
			return false;
		}

		public override int GetHashCode()
		{
			return ((a != null) ? (a.GetHashCode() * 397) : 0) ^ ((b != null) ? b.GetHashCode() : 0);
		}
	}
}
