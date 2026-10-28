using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RcPieceConfig
	{
		public PieceRole role;

		public List<int> pieces;

		public bool HasPiece => false;

		public bool Offers => false;
	}
}
