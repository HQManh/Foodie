using System;
using System.Runtime.InteropServices;

namespace UniRx
{
	[Serializable]
	[StructLayout((LayoutKind)0, Size = 1)]
	public struct Unit : IEquatable<Unit>
	{
		private static readonly Unit @default;

		public static Unit Default => default;

		public static bool operator ==(Unit first, Unit second)
		{
			return false;
		}

		public static bool operator !=(Unit first, Unit second)
		{
			return false;
		}

		public bool Equals(Unit other)
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

		public override string ToString()
		{
			return null;
		}
	}
}
