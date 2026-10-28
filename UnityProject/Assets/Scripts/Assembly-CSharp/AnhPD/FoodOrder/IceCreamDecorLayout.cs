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
			public List<Slot> slots = new List<Slot>();
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
		private List<FruitDecor> fruits = new List<FruitDecor>();

		[Tooltip("Behind toppings, jellies: one spot per kind.")]
		[SerializeField]
		private List<SingleDecor> singles = new List<SingleDecor>();

		private readonly FruitDecor[] _present = new FruitDecor[3];

		private readonly int[] _pick = new int[3];

		private readonly int[] _best = new int[3];

		private int _presentCount;

		private int _bestCost;

		public bool CanShow(IceCreamPiece piece)
		{
			for (int i = 0; i < fruits.Count; i++)
			{
				FruitDecor fruitDecor = fruits[i];
				if (fruitDecor != null && fruitDecor.piece == piece)
				{
					for (int j = 0; j < fruitDecor.slots.Count; j++)
					{
						Slot slot = fruitDecor.slots[j];
						if (slot != null && slot.visual != null)
						{
							return true;
						}
					}
				}
			}
			for (int k = 0; k < singles.Count; k++)
			{
				SingleDecor singleDecor = singles[k];
				if (singleDecor != null && singleDecor.piece == piece && singleDecor.visual != null)
				{
					return true;
				}
			}
			return false;
		}

		public void Display(PieceSet pieces)
		{
			_presentCount = 0;
			for (int i = 0; i < fruits.Count && _presentCount <= 2; i++)
			{
				FruitDecor fruitDecor = fruits[i];
				if (fruitDecor != null && pieces[(int)fruitDecor.piece] > 0)
				{
					_present[_presentCount++] = fruitDecor;
				}
			}
			_bestCost = int.MaxValue;
			Search(0, 0, 0);
			for (int j = 0; j < fruits.Count; j++)
			{
				FruitDecor fruitDecor2 = fruits[j];
				if (fruitDecor2 == null)
				{
					continue;
				}
				int num = ChosenSlot(fruitDecor2);
				for (int k = 0; k < fruitDecor2.slots.Count; k++)
				{
					Slot slot = fruitDecor2.slots[k];
					if (slot != null && slot.visual != null)
					{
						slot.visual.SetActive(num == k);
					}
				}
			}
			for (int l = 0; l < singles.Count; l++)
			{
				SingleDecor singleDecor = singles[l];
				if (singleDecor != null && singleDecor.visual != null)
				{
					singleDecor.visual.SetActive(pieces[(int)singleDecor.piece] > 0);
				}
			}
		}

		private void Search(int i, int usedSpots, int cost)
		{
			while (cost < _bestCost)
			{
				if (i == _presentCount)
				{
					_bestCost = cost;
					Array.Copy(_pick, _best, i);
					return;
				}
				List<Slot> slots = _present[i].slots;
				for (int j = 0; j < slots.Count; j++)
				{
					Slot slot = slots[j];
					if (slot != null && slot.visual != null)
					{
						int num = 1 << (slot.spot & 0x1F);
						if ((num & usedSpots) == 0)
						{
							_pick[i] = j;
							Search(i + 1, num | usedSpots, cost + j);
						}
					}
				}
				_pick[i] = -1;
				cost += 1000;
				i++;
			}
		}

		private int ChosenSlot(FruitDecor fruit)
		{
			for (int i = 0; i < _presentCount; i++)
			{
				if (_present[i] == fruit)
				{
					return _best[i];
				}
			}
			return -1;
		}
	}
}
