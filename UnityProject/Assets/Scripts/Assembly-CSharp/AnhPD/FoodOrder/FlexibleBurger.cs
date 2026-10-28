using CakeOrder.InGame.Burger;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleBurger : FlexibleDragItem
	{
		public enum FillingType
		{
			Bun = 0,
			Lettuce = 1,
			BeefPatty = 2,
			RedOnion = 3,
			Tomato = 4,
			Cheese = 5,
			Egg = 6
		}

		[SerializeField]
		private List<FillingType> fillings = new List<FillingType>();

		[Tooltip("Số lớp TỐI ĐA của cùng một loại nhân khi random ra order. 1 = không cho trùng (luật cũ). Chỉ chặn phía SINH order — người chơi ghép tay thì order tự chặn qua luật offer.")]
		[SerializeField]
		private int maxSameFilling = 2;

		[SerializeField]
		private FlexibleBurgerDisplay display;

		private List<FillingType> _unlockedFillings = new List<FillingType>();

		public List<FillingType> Fillings => fillings;

		public override float AssembleAnimDuration
		{
			get
			{
				if ((bool)display)
				{
					return display.AssembleDuration;
				}
				return 0f;
			}
		}

		public override PieceSet Pieces
		{
			get
			{
				PieceSet result = PieceSet.One(0);
				foreach (FillingType filling in fillings)
				{
					BurgerPiece piece;
					if (BurgerPieceTable.TryGetPiece(filling, out piece))
					{
						result = result.Add((int)piece, 1);
					}
				}
				return result;
			}
		}

		protected override bool TryGetIngIdOf<T>(T enumValue, out string id)
		{
			// TODO(unrecovered): override body not present in the pseudocode batch
			id = null;
			return false;
		}

		public override string GetId()
		{
			return BuildId(fillings);
		}

		public override string ReferenceIdOf(string longId)
		{
			return BuildId(new List<FillingType>());
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return BuildId(PickRandomFillings(maxCount));
		}

		private string BuildId(List<FillingType> list)
		{
			List<FillingType> sorted = new List<FillingType>(list);
			sorted.Sort();
			string text = id + "-flex-";
			foreach (FillingType item in sorted)
			{
				text += FlexibleDragItem.ConvertIdToString((int)item);
			}
			return text;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			string[] array = new string[2] { firstIngId, secondIngId };
			for (int i = 0; i < array.Length; i++)
			{
				FillingType filling;
				if (BurgerPieceTable.TryGetFilling(array[i], out filling) && filling != FillingType.Bun)
				{
					fillings.Add(filling);
				}
			}
			MarkVisualDirty();
		}

		public override void AddIng(string ingId)
		{
			FillingType filling;
			if (BurgerPieceTable.TryGetFilling(ingId, out filling))
			{
				fillings.Add(filling);
				fillings.Sort();
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			DisplayFilling(true);
		}

		public override List<string> GetIngIds(string longId)
		{
			List<FillingType> list = BurgerPieceTable.FillingsOfId(longId);
			list.Add(FillingType.Bun);
			list.Sort();
			List<string> list2 = new List<string>();
			foreach (FillingType item in list)
			{
				string preparedId;
				if (BurgerPieceTable.TryGetPreparedId(item, out preparedId))
				{
					list2.Add(preparedId);
				}
			}
			return list2;
		}

		protected override void ResetItem()
		{
			fillings.Clear();
			DisplayFilling(false);
		}

		private List<FillingType> PickRandomFillings(int maxCount)
		{
			List<FillingType> result = new List<FillingType>();
			if (_unlockedFillings.Count < 1)
			{
				_unlockedFillings = GetUnlockedEnums<FillingType>();
			}
			List<FillingType> pool = new List<FillingType>(_unlockedFillings);
			pool.Remove(FillingType.Bun);
			if (pool.Count != 0)
			{
				int perFilling = Mathf.Max(1, maxSameFilling);
				int cap = perFilling * pool.Count;
				int limit = cap;
				if (maxCount > 0)
				{
					limit = Mathf.Min(maxCount, cap);
				}
				limit = Mathf.Max(1, limit);
				int count = Random.Range(1, limit + 1);
				Dictionary<FillingType, int> used = new Dictionary<FillingType, int>();
				for (int i = 0; i < count; i++)
				{
					if (pool.Count < 1)
					{
						return result;
					}
					int index = Random.Range(0, pool.Count);
					FillingType filling = pool[index];
					result.Add(filling);
					int value;
					used.TryGetValue(filling, out value);
					used[filling] = value + 1;
					if (perFilling <= value + 1)
					{
						pool.RemoveAt(index);
					}
				}
			}
			return result;
		}

		public override void Display(string longId)
		{
			Display(BurgerPieceTable.BurgerPiecesOfId(longId));
		}

		public override void PlayAssembleAnim()
		{
			if ((bool)display)
			{
				display.PlayAssembleAnim();
			}
		}

		public override bool TryGetVisualBounds(out Bounds bounds)
		{
			bounds = default(Bounds);
			if ((bool)display)
			{
				return display.TryGetBounds(out bounds);
			}
			return false;
		}

		public void Display(PieceSet pieces)
		{
			fillings.Clear();
			fillings.AddRange(BurgerPieceTable.FillingsOf(pieces));
			DisplayFilling();
		}

		private void DisplayFilling(bool playAssemble = false)
		{
			display.Display(fillings, true);
			if (!playAssemble)
			{
				base.transform.DOComplete();
				base.transform.Appear(0.1f);
			}
			else
			{
				display.PlayAssembleAnim();
			}
		}
	}
}
