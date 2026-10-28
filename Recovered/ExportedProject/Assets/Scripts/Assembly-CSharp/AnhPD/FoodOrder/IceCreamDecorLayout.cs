using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IceCreamDecorLayout : MonoBehaviour
	{
		[Serializable]
		public class Slot
		{
			public GameObject visual;

			[Tooltip("Slots sharing a spot overlap: two fruits never take the same spot.")]
			[Range(0f, 31f)]
			public int spot;
		}

		[Serializable]
		public class FruitDecor
		{
			public IceCreamPiece piece;

			[Tooltip("By priority: the first free one wins.")]
			public List<Slot> slots;
		}

		[Serializable]
		public class SingleDecor
		{
			public IceCreamPiece piece;

			public GameObject visual;
		}

		private const int MaxFruits = 3;

		private const int SkipCost = 1000;

		[SerializeField]
		private List<FruitDecor> fruits;

		[Tooltip("Behind toppings, jellies: one spot per kind.")]
		[SerializeField]
		private List<SingleDecor> singles;

		private readonly FruitDecor[] _present;

		private readonly int[] _pick;

		private readonly int[] _best;

		private int _presentCount;

		private int _bestCost;

		public bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		public void Display(PieceSet pieces)
		{
		}

		private void Search(int i, int usedSpots, int cost)
		{
		}

		private int ChosenSlot(FruitDecor fruit)
		{
			return 0;
		}
	}
}
