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
		private List<Slot> slots;

		[SerializeField]
		private List<MainSprite> mains;

		[Tooltip("Topping / trang trí: bật/tắt theo piece.")]
		[SerializeField]
		private List<FlexibleSushiDisplay.PieceVisual> toppings;

		private Vector3[] _riceRest;

		public int SlotCount => 0;

		public Transform RiceOf(int slot)
		{
			return null;
		}

		public Transform MainOf(int slot)
		{
			return null;
		}

		private void Awake()
		{
		}

		public bool IsMain(SushiPiece piece)
		{
			return false;
		}

		public bool CanShow(SushiPiece piece)
		{
			return false;
		}

		public void Display(PieceSet pieces)
		{
		}

		private MainSprite MainFor(SushiPiece piece)
		{
			return null;
		}
	}
}
