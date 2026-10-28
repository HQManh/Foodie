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
			a = null;
			b = null;
		}

		public bool Equals(CombineKey other)
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
	}
}
