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
			public List<ScoopSprite> sprites = new List<ScoopSprite>();
		}

		[Serializable]
		public class Form
		{
			public GameObject root;

			public Scoop[] scoops = new Scoop[0];

			public IceCreamDecorLayout decor;

			[NonSerialized]
			private SpriteRenderer[] _renderers;

			public SpriteRenderer[] Renderers
			{
				get
				{
					if (_renderers == null || _renderers.Length != scoops.Length)
					{
						_renderers = new SpriteRenderer[scoops.Length];
						for (int i = 0; i < scoops.Length; i++)
						{
							_renderers[i] = ((scoops[i] != null) ? scoops[i].renderer : null);
						}
					}
					return _renderers;
				}
			}
		}

		[Tooltip("Index = scoop count - 1; 0 scoops shows the first, without scoops.")]
		[SerializeField]
		private Form[] forms = new Form[0];

		private Form _shown;

		public override bool CanShow(IceCreamPiece piece)
		{
			if (base.CanShow(piece))
			{
				return true;
			}
			for (int i = 0; i < forms.Length; i++)
			{
				Form form = forms[i];
				if (form != null && form.decor != null && form.decor.CanShow(piece))
				{
					return true;
				}
			}
			return false;
		}

		public override void Display(PieceSet pieces)
		{
			base.Display(pieces);
			if (forms.Length == 0)
			{
				return;
			}
			int num = Mathf.Clamp(CountScoops(pieces) - 1, 0, forms.Length - 1);
			for (int i = 0; i < forms.Length; i++)
			{
				Form form = forms[i];
				if (form != null && form.root != null)
				{
					form.root.SetActive(num == i);
				}
			}
			Form form2 = forms[num];
			if (form2 != null)
			{
				_shown = form2;
				SetScoops(form2.Renderers, pieces);
				if (form2.decor != null)
				{
					form2.decor.Display(pieces);
				}
			}
		}

		protected override Sprite SpriteFor(int index, IceCreamPiece piece)
		{
			if (_shown != null && index < _shown.scoops.Length)
			{
				Scoop scoop = _shown.scoops[index];
				if (scoop != null)
				{
					List<ScoopSprite> sprites = scoop.sprites;
					for (int i = 0; i < sprites.Count; i++)
					{
						ScoopSprite scoopSprite = sprites[i];
						if (scoopSprite != null && scoopSprite.piece == piece && scoopSprite.sprite != null)
						{
							return scoopSprite.sprite;
						}
					}
				}
			}
			return base.SpriteFor(index, piece);
		}
	}
}
