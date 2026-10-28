using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class ListIngredientBoardView : MonoBehaviour
	{
		[SerializeField]
		private AdaptiveTwoColumnLayout layout;

		[SerializeField]
		private LayoutElement layoutElement;

		[SerializeField]
		private OrderIngredientIcon iconPrefab;

		[SerializeField]
		private List<OrderIngredientIcon> icons = new List<OrderIngredientIcon>();

		private readonly List<PieceSet> _iconPieces = new List<PieceSet>();

		private readonly List<IconGroup> _groups = new List<IconGroup>();

		public int Used { get; private set; }

		private Transform IconParent => (layout != null) ? layout.transform : null;

		public event Action Resized
		{
			add
			{
				if (layout != null)
				{
					layout.DimensionsChanged += value;
				}
			}
			remove
			{
				if (layout != null)
				{
					layout.DimensionsChanged -= value;
				}
			}
		}

		public void Fill(List<RcDisplayConfig> configs, List<PieceSet> iconPieces = null, List<IconGroup> groups = null)
		{
			base.gameObject.SetActive(true);
			_iconPieces.Clear();
			_groups.Clear();
			if (iconPieces != null && iconPieces.Count == configs.Count)
			{
				_iconPieces.AddRange(iconPieces);
				if (groups != null)
				{
					_groups.AddRange(groups);
				}
			}
			while (icons.Count < configs.Count)
			{
				icons.Add(UnityEngine.Object.Instantiate(iconPrefab, IconParent));
			}
			Used = configs.Count;
			for (int i = 0; i < Used; i++)
			{
				icons[i].Bind(configs[i].id, configs[i].sprite);
				icons[i].transform.SetAsLastSibling();
			}
			for (int j = Used; j < icons.Count; j++)
			{
				icons[j].Hide();
			}
		}

		public float FitScale(int columns)
		{
			if (layout != null)
			{
				return layout.FitScale(columns);
			}
			return 1f;
		}

		public void SetEdgePadding(float top, float bottom)
		{
			if (layout != null)
			{
				layout.SetEdgePadding(top, bottom);
			}
		}

		public Vector2 PreferredSize(int columns)
		{
			if (layout != null)
			{
				return layout.PreferredSize(columns);
			}
			return Vector2.zero;
		}

		public void ClaimHeight(int columns)
		{
			if (layoutElement != null && layout != null)
			{
				Vector2 vector = layout.PreferredSize(columns);
				layoutElement.minHeight = vector.y;
				layoutElement.preferredHeight = vector.y;
			}
		}

		public void Relayout(float scale, int columns, float tweenTime = 0f)
		{
			if (layout != null)
			{
				layout.Relayout(scale, columns, tweenTime);
			}
		}

		public void Hide()
		{
			base.gameObject.SetActive(false);
		}

		public void ApplyOwned(PieceSet have, float ownedAlpha, float fadeTime)
		{
			int groupIndex = 0;
			for (int i = 0; i < Used; i++)
			{
				if (groupIndex < _groups.Count && _groups[groupIndex].Start == i)
				{
					IconGroup group = _groups[groupIndex];
					groupIndex++;
					if (!group.Pieces.IsEmpty && have.Covers(group.Pieces))
					{
						have = have.Subtract(group.Pieces);
						for (int j = i; j < i + group.Count && j < Used; j++)
						{
							icons[j].SetOwned(true, ownedAlpha, fadeTime);
						}
						i += group.Count - 1;
						continue;
					}
				}
				OrderIngredientIcon orderIngredientIcon = icons[i];
				PieceSet pieceSet = ((i < _iconPieces.Count) ? _iconPieces[i] : PieceLookup.PiecesOfAnyRole(orderIngredientIcon.Id));
				bool owned = false;
				if (!pieceSet.IsEmpty && have.Covers(pieceSet))
				{
					have = have.Subtract(pieceSet);
					owned = true;
				}
				orderIngredientIcon.SetOwned(owned, ownedAlpha, fadeTime);
			}
		}
	}
}
