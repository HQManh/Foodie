using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamCupDisplay : IceCreamScoopDisplay
	{
		[Serializable]
		public class Scoop
		{
			public SpriteRenderer renderer;

			[Tooltip("Sprites for this position; missing flavors fall back to scoopSprites.")]
			public List<ScoopSprite> sprites;
		}

		[Serializable]
		public class Form
		{
			public GameObject root;

			public Scoop[] scoops;

			public IceCreamDecorLayout decor;

			[NonSerialized]
			private SpriteRenderer[] _renderers;

			public SpriteRenderer[] Renderers => null;
		}

		[Tooltip("Index = scoop count - 1; 0 scoops shows the first, without scoops.")]
		[SerializeField]
		private Form[] forms;

		private Form _shown;

		public override bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		public override void Display(PieceSet pieces)
		{
		}

		protected override Sprite SpriteFor(int index, IceCreamPiece piece)
		{
			return null;
		}
	}
}
