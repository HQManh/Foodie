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
		private List<OrderIngredientIcon> icons;

		private readonly List<PieceSet> _iconPieces;

		private readonly List<IconGroup> _groups;

		public int Used { get; private set; }

		private Transform IconParent => null;

		public event Action Resized
		{
			add
			{
			}
			remove
			{
			}
		}

		public void Fill(List<RcDisplayConfig> configs, List<PieceSet> iconPieces = null, List<IconGroup> groups = null)
		{
		}

		public float FitScale(int columns)
		{
			return 0f;
		}

		public void SetEdgePadding(float top, float bottom)
		{
		}

		public Vector2 PreferredSize(int columns)
		{
			return default;
		}

		public void ClaimHeight(int columns)
		{
		}

		public void Relayout(float scale, int columns, float tweenTime = 0f)
		{
		}

		public void Hide()
		{
		}

		public void ApplyOwned(PieceSet have, float ownedAlpha, float fadeTime)
		{
		}
	}
}
