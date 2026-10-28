using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamCreamFormDisplay : IceCreamPieceDisplay
	{
		[Serializable]
		public class Form
		{
			public GameObject root;

			public List<PieceVisual> visuals;

			public IceCreamDecorLayout decor;

			public bool CanShow(IceCreamPiece piece)
			{
				return false;
			}

			public void Show(bool on, PieceSet pieces)
			{
			}
		}

		[SerializeField]
		private Form plain;

		[Tooltip("Replaces plain when the milkshake has whipped cream.")]
		[SerializeField]
		private Form cream;

		public override bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		public override void Display(PieceSet pieces)
		{
		}
	}
}
