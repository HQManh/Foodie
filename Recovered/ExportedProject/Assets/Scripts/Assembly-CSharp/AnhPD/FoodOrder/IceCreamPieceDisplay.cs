using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamPieceDisplay : MonoBehaviour
	{
		[Serializable]
		public class PieceVisual
		{
			public IceCreamPiece piece;

			public GameObject visual;

			[Tooltip("Bật khi KHÔNG có piece — dùng cho biến thể mặc định.")]
			public bool hideWhenPresent;

			public bool WantsActive(PieceSet pieces)
			{
				return false;
			}
		}

		[SerializeField]
		private List<PieceVisual> visuals;

		[SerializeField]
		private IceCreamDecorLayout decor;

		public virtual bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		public virtual void Display(PieceSet pieces, IReadOnlyList<int> scoopOrder)
		{
		}

		public virtual void Display(PieceSet pieces)
		{
		}
	}
}
