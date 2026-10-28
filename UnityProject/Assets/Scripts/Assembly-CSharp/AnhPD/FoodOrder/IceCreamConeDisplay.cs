using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamConeDisplay : IceCreamScoopDisplay
	{
		[SerializeField]
		private SpriteRenderer[] scoops = new SpriteRenderer[3];

		[SerializeField]
		private Transform decorRoot;

		[SerializeField]
		private Vector2[] decorOffsets = new Vector2[3]
		{
			Vector2.zero,
			new Vector2(0f, 0.35f),
			new Vector2(0f, 0.7f)
		};

		private Vector3 _decorBase;

		private bool _hasDecorBase;

		public override void Display(PieceSet pieces)
		{
			Display(pieces, null);
		}

		public override void Display(PieceSet pieces, IReadOnlyList<int> scoopOrder)
		{
			base.Display(pieces);
			int scoopCount = SetScoops(scoops, pieces, scoopOrder);
			PlaceDecor(scoopCount);
		}

		private void PlaceDecor(int scoopCount)
		{
			if (!(decorRoot != null) || decorOffsets == null || decorOffsets.Length == 0)
			{
				return;
			}
			if (!_hasDecorBase)
			{
				_decorBase = decorRoot.localPosition;
				_hasDecorBase = true;
			}
			int num = Mathf.Clamp(scoopCount - 1, 0, decorOffsets.Length - 1);
			Vector2 vector = decorOffsets[num];
			decorRoot.localPosition = new Vector3(_decorBase.x + vector.x, _decorBase.y + vector.y, _decorBase.z);
		}
	}
}
