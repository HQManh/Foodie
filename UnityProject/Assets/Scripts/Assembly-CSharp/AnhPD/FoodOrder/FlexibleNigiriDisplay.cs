using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleNigiriDisplay : MonoBehaviour
	{
		[Serializable]
		public class Slot
		{
			public SpriteRenderer rice;

			public SpriteRenderer main;
		}

		[Serializable]
		public class MainSprite
		{
			public SushiPiece piece;

			public Sprite sprite;

			[Tooltip("Vị trí nhân so với miếng cơm của nó.")]
			public Vector2 offset;
		}

		[Tooltip("Thứ tự = thứ tự rơi khi tạo món.")]
		[SerializeField]
		private List<Slot> slots = new List<Slot>();

		[SerializeField]
		private List<MainSprite> mains = new List<MainSprite>();

		[Tooltip("Topping / trang trí: bật/tắt theo piece.")]
		[SerializeField]
		private List<FlexibleSushiDisplay.PieceVisual> toppings = new List<FlexibleSushiDisplay.PieceVisual>();

		private Vector3[] _riceRest;

		public int SlotCount => slots.Count;

		public Transform RiceOf(int slot)
		{
			if (!(slots[slot].rice != null))
			{
				return null;
			}
			return slots[slot].rice.transform;
		}

		public Transform MainOf(int slot)
		{
			if (!(slots[slot].main != null))
			{
				return null;
			}
			return slots[slot].main.transform;
		}

		private void Awake()
		{
			_riceRest = new Vector3[slots.Count];
			for (int i = 0; i < slots.Count; i++)
			{
				if (slots[i].rice != null)
				{
					_riceRest[i] = slots[i].rice.transform.localPosition;
				}
			}
		}

		public bool IsMain(SushiPiece piece)
		{
			return MainFor(piece) != null;
		}

		public bool CanShow(SushiPiece piece)
		{
			if (MainFor(piece) != null)
			{
				return true;
			}
			for (int i = 0; i < toppings.Count; i++)
			{
				FlexibleSushiDisplay.PieceVisual pieceVisual = toppings[i];
				if (pieceVisual != null && pieceVisual.piece == piece && pieceVisual.visual != null && !pieceVisual.hideWhenPresent)
				{
					return true;
				}
			}
			return false;
		}

		public void Display(PieceSet pieces)
		{
			MainSprite main = null;
			foreach (var (kind, _) in pieces)
			{
				main = MainFor((SushiPiece)kind);
				if (main != null)
				{
					break;
				}
			}
			for (int i = 0; i < slots.Count; i++)
			{
				Slot slot = slots[i];
				if (!(slot.main != null))
				{
					continue;
				}
				slot.main.sprite = ((main != null) ? main.sprite : null);
				if (main == null)
				{
					slot.main.gameObject.SetActive(value: false);
					continue;
				}
				slot.main.gameObject.SetActive(main.sprite != null);
				if (_riceRest != null)
				{
					slot.main.transform.localPosition = new Vector3(_riceRest[i].x + main.offset.x, _riceRest[i].y + main.offset.y, _riceRest[i].z + 0f);
				}
			}
			for (int j = 0; j < toppings.Count; j++)
			{
				FlexibleSushiDisplay.PieceVisual pieceVisual = toppings[j];
				if (pieceVisual != null && pieceVisual.visual != null)
				{
					pieceVisual.visual.SetActive(pieceVisual.WantsActive(pieces));
				}
			}
		}

		private MainSprite MainFor(SushiPiece piece)
		{
			for (int i = 0; i < mains.Count; i++)
			{
				if (mains[i] != null && mains[i].piece == piece)
				{
					return mains[i];
				}
			}
			return null;
		}
	}
}
