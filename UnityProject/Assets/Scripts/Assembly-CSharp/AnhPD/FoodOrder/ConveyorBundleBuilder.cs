using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorBundleBuilder
	{
		public struct Settings
		{
			public int MinBundleSize;

			public int MaxBundleSize;

			public int MaxBundleHeight;

			public int MaxCrossWidthByPrefab;

			public int RowCapacity;

			public float CrossChance;

			public float ChainChance;

			public Vector2Int ChainSize;

			public float FreezeChance;

			public int FreezeTurns;
		}

		private readonly Settings _settings;

		public int MaxSize
		{
			get
			{
				int[] array = new int[3]
				{
					_settings.MaxBundleHeight,
					(_settings.MaxBundleSize < 2) ? 1 : _settings.MaxBundleSize,
					(_settings.RowCapacity < 2) ? 1 : _settings.RowCapacity
				};
				int num = array[0];
				for (int i = 1; i < array.Length; i++)
				{
					if (array[i] < num)
					{
						num = array[i];
					}
				}
				return (num < 2) ? 1 : num;
			}
		}

		public ConveyorBundleBuilder(Settings settings)
		{
			_settings = settings;
		}

		public int RollSize()
		{
			int maxSize = MaxSize;
			int num = Mathf.Min(_settings.MinBundleSize, maxSize);
			if (_settings.MinBundleSize < 1)
			{
				num = 1;
			}
			return Random.Range(num, maxSize + 1);
		}

		public List<ConveyorBundle> BuildColumn(IEnumerable<string> ids, int roomToTheRight)
		{
			List<ConveyorBundle> list = new List<ConveyorBundle>();
			if (ids == null)
			{
				return list;
			}
			List<string> list2 = new List<string>(ids);
			int maxSize = MaxSize;
			int num = Mathf.Min(_settings.MinBundleSize, maxSize);
			if (_settings.MinBundleSize < 1)
			{
				num = 1;
			}
			int num2 = 1;
			if (_settings.CrossChance > 0f)
			{
				num2 = Mathf.Min(Mathf.Max(1, _settings.MaxCrossWidthByPrefab), roomToTheRight);
			}
			int num3 = 0;
			while (num3 < list2.Count)
			{
				bool flag = false;
				int num4 = 1;
				int num5 = 0;
				IngredientState[] array = null;
				if (num2 >= 2 && Random.value < _settings.CrossChance)
				{
					num4 = Random.Range(2, num2 + 1);
					num4 = Mathf.Min(num4, list2.Count - num3);
					if (num4 >= 2)
					{
						flag = true;
						num5 = num4;
						array = new IngredientState[num5];
					}
				}
				if (!flag)
				{
					num5 = Random.Range(num, maxSize + 1);
					num5 = Mathf.Min(num5, list2.Count - num3);
					num4 = 1;
					array = new IngredientState[num5];
				}
				for (int i = 0; i < num5; i++)
				{
					array[i] = new IngredientState(list2[num3 + i]);
				}
				bool flag2 = _settings.FreezeChance > 0f && Random.value < _settings.FreezeChance;
				ConveyorBundle item = new ConveyorBundle
				{
					Items = array,
					Status = (flag2 ? ConveyorBundleStatus.Freeze : ConveyorBundleStatus.None),
					Width = num4,
					Height = (flag ? 1 : num5),
					StatusParam = (flag2 ? _settings.FreezeTurns : 0)
				};
				list.Add(item);
				num3 += num5;
			}
			return list;
		}

		private int MaxCrossWidth(int roomToTheRight)
		{
			if (_settings.CrossChance > 0f)
			{
				return Mathf.Min(Mathf.Max(1, _settings.MaxCrossWidthByPrefab), roomToTheRight);
			}
			return 1;
		}

		public void LinkChains(IReadOnlyList<List<ConveyorBundle>> queues)
		{
			if (queues == null || _settings.ChainChance <= 0f || queues.Count < 2)
			{
				return;
			}
			int num = 0;
			foreach (List<ConveyorBundle> queue in queues)
			{
				num = Mathf.Max(num, queue.Count);
			}
			int num2 = Mathf.Min(_settings.ChainSize.x, _settings.ChainSize.y);
			if (num2 < 3)
			{
				num2 = 2;
			}
			int num3 = Mathf.Max(num2, Mathf.Max(_settings.ChainSize.x, _settings.ChainSize.y));
			List<int> list = new List<int>();
			if (num < 1)
			{
				return;
			}
			int num4 = 1;
			for (int i = 0; i < num; i++)
			{
				if (!(Random.value < _settings.ChainChance))
				{
					continue;
				}
				list.Clear();
				for (int j = 0; j < queues.Count; j++)
				{
					List<ConveyorBundle> list2 = queues[j];
					if (list2 != null && i < list2.Count && list2[i].Status != ConveyorBundleStatus.Freeze)
					{
						list.Add(j);
					}
				}
				if (list.Count > 1)
				{
					int num5 = Random.Range(num2, num3 + 1);
					if (list.Count <= num5)
					{
						num5 = list.Count;
					}
					if (num5 >= 1)
					{
						for (int k = 0; k < num5; k++)
						{
							int index = Random.Range(k, list.Count);
							int value = list[index];
							int value2 = list[k];
							list[k] = value;
							list[index] = value2;
						}
						for (int l = 0; l < num5; l++)
						{
							ConveyorBundle conveyorBundle = queues[list[l]][i];
							conveyorBundle.ChainId = num4;
							conveyorBundle.ChainSize = num5;
						}
					}
					num4++;
				}
			}
		}
	}
}
