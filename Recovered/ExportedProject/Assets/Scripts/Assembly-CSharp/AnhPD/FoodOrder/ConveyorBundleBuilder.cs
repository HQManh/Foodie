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

		public int MaxSize => 0;

		public ConveyorBundleBuilder(Settings settings)
		{
		}

		public int RollSize()
		{
			return 0;
		}

		public List<ConveyorBundle> BuildColumn(IEnumerable<string> ids, int roomToTheRight)
		{
			return null;
		}

		private int MaxCrossWidth(int roomToTheRight)
		{
			return 0;
		}

		public void LinkChains(IReadOnlyList<List<ConveyorBundle>> queues)
		{
		}
	}
}
