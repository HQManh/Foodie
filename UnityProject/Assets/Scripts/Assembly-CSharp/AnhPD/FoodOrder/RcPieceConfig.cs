using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RcPieceConfig
	{
		public PieceRole role;

		public List<int> pieces;

		public RcPieceConfig()
		{
			pieces = new List<int>();
		}

		public bool HasPiece => (int)role != 0 && pieces != null && pieces.Count > 0;

		public bool Offers => HasPiece && ((int)role == 2 || (int)role == 4);
	}
}
