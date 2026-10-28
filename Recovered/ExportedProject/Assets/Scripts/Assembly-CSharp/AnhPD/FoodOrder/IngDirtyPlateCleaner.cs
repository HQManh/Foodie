using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngDirtyPlateCleaner
	{
		private readonly IngGridLayout _layout;

		private readonly Func<Vector2Int, IngCell> _getCell;

		private readonly Action<DragItem> _despawn;

		private readonly Action _onPlateRemoved;

		private const float PunchUpDuration = 0.12f;

		private const float ShrinkDuration = 0.12f;

		private const float PunchScale = 1.18f;

		private const float StaggerPerPlate = 0.06f;

		private const float GatherFlyDuration = 0.35f;

		private const float SweepFlyDuration = 0.35f;

		private const float SweepJumpPower = 1f;

		public IngDirtyPlateCleaner(IngGridLayout layout, Func<Vector2Int, IngCell> getCell, Action<DragItem> despawn, Action onPlateRemoved)
		{
		}

		public static float ClearDuration(int plateCount)
		{
			return 0f;
		}

		public int ClearAllTo(Vector3 target)
		{
			return 0;
		}

		public static float ClearToDuration(int plateCount)
		{
			return 0f;
		}

		private int SweepPlatesIn(IngCell cell, int startIndex, Vector3 target)
		{
			return 0;
		}

		private void PlaySweepFx(DragItem plate, Vector3 target, float delay)
		{
		}

		public int ClearAll()
		{
			return 0;
		}

		public bool HasAny()
		{
			return false;
		}

		public bool ClearTallestStack()
		{
			return false;
		}

		public bool TryGetTallestStackPos(out Vector3 pos)
		{
			pos = default;
			return false;
		}

		private IngCell TallestStackCell()
		{
			return null;
		}

		public List<DragItemStackable> TallestStackOnly()
		{
			return null;
		}

		public List<DragItemStackable> GatherByType(out float duration)
		{
			duration = default;
			return null;
		}

		private static IngCell Tallest(List<IngCell> cells)
		{
			return null;
		}

		private void FlyIntoStack(DragItemStackable plate, DragItemStackable lead, float delay)
		{
		}

		private static bool HasDirtyPlate(IngCell cell)
		{
			return false;
		}

		private int RemovePlatesIn(IngCell cell, int startIndex)
		{
			return 0;
		}

		private void PlayRemoveFx(DragItem plate, float delay)
		{
		}
	}
}
