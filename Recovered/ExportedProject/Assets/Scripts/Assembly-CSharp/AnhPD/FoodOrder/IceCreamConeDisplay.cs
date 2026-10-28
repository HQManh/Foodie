using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamConeDisplay : IceCreamScoopDisplay
	{
		[SerializeField]
		private SpriteRenderer[] scoops;

		[SerializeField]
		private Transform decorRoot;

		[SerializeField]
		private Vector2[] decorOffsets;

		private Vector3 _decorBase;

		private bool _hasDecorBase;

		public override void Display(PieceSet pieces)
		{
		}

		public override void Display(PieceSet pieces, IReadOnlyList<int> scoopOrder)
		{
		}

		private void PlaceDecor(int scoopCount)
		{
		}
	}
}
