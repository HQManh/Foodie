using System;
using System.Collections.Generic;
using DG.Tweening;
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
			_layout = layout;
			_getCell = getCell;
			_despawn = despawn;
			_onPlateRemoved = onPlateRemoved;
		}

		public static float ClearDuration(int plateCount)
		{
			if (plateCount > 0)
			{
				return (float)(plateCount - 1) * 0.06f + 0.12f + 0.12f;
			}
			return 0f;
		}

		public int ClearAllTo(Vector3 target)
		{
			int num = 0;
			foreach (Vector2Int item in _layout.EnabledCells())
			{
				IngCell cell = _getCell(item);
				num += SweepPlatesIn(cell, num, target);
			}
			return num;
		}

		public static float ClearToDuration(int plateCount)
		{
			float result = 0f;
			if (plateCount > 0)
			{
				result = (float)(plateCount - 1) * 0.06f + 0.35f;
			}
			return result;
		}

		private int SweepPlatesIn(IngCell cell, int startIndex, Vector3 target)
		{
			int num = 0;
			if (cell != null && cell.HasDirtyPlate)
			{
				foreach (DragItem plate in new List<DragItem>(cell.Items))
				{
					if ((bool)plate && plate.isDirtyPlate)
					{
						PlaySweepFx(plate, target, (float)(num + startIndex) * 0.06f);
						num++;
					}
				}
			}
			return num;
		}

		private void PlaySweepFx(DragItem plate, Vector3 target, float delay)
		{
			Transform tf = plate.Tf;
			Vector3 originalScale = tf.localScale;
			plate.UnregisterCell();
			DOTween.Sequence().AppendInterval(delay).Append(tf.DOJump(target, 1f, 1, 0.35f).SetEase(Ease.InOutQuad))
				.Join(tf.DOScale(Vector3.zero, 0.35f).SetEase(Ease.InQuad))
				.OnComplete(delegate
				{
					if ((bool)plate)
					{
						tf.localScale = originalScale;
						_despawn?.Invoke(plate);
					}
					_onPlateRemoved?.Invoke();
				});
		}

		public int ClearAll()
		{
			int num = 0;
			foreach (Vector2Int item in _layout.EnabledCells())
			{
				IngCell cell = _getCell(item);
				num += RemovePlatesIn(cell, num);
			}
			return num;
		}

		public bool HasAny()
		{
			foreach (Vector2Int item in _layout.EnabledCells())
			{
				IngCell ingCell = _getCell(item);
				if (ingCell != null && ingCell.HasDirtyPlate)
				{
					return true;
				}
			}
			return false;
		}

		public bool ClearTallestStack()
		{
			IngCell ingCell = TallestStackCell();
			if (ingCell != null)
			{
				RemovePlatesIn(ingCell, 0);
			}
			return ingCell != null;
		}

		public bool TryGetTallestStackPos(out Vector3 pos)
		{
			IngCell ingCell = TallestStackCell();
			if (ingCell == null)
			{
				pos = default(Vector3);
				return false;
			}
			pos = ingCell.Items[0].Tf.position;
			return true;
		}

		private IngCell TallestStackCell()
		{
			IngCell result = null;
			int num = 0;
			foreach (Vector2Int item in _layout.EnabledCells())
			{
				IngCell ingCell = _getCell(item);
				if (ingCell != null && ingCell.HasDirtyPlate)
				{
					int occupiedCount = ingCell.OccupiedCount;
					if (occupiedCount > num)
					{
						num = occupiedCount;
						result = ingCell;
					}
				}
			}
			return result;
		}

		public List<DragItemStackable> TallestStackOnly()
		{
			List<DragItemStackable> list = new List<DragItemStackable>();
			IngCell ingCell = TallestStackCell();
			if (ingCell != null && ingCell.Items[0] is DragItemStackable item)
			{
				list.Add(item);
			}
			return list;
		}

		public List<DragItemStackable> GatherByType(out float duration)
		{
			Dictionary<string, List<IngCell>> dictionary = new Dictionary<string, List<IngCell>>();
			foreach (Vector2Int item in _layout.EnabledCells())
			{
				IngCell ingCell = _getCell(item);
				if (ingCell != null && ingCell.HasDirtyPlate)
				{
					string id = ingCell.Items[0].GetId();
					if (!dictionary.TryGetValue(id, out var value))
					{
						value = new List<IngCell>();
						dictionary[id] = value;
					}
					value.Add(ingCell);
				}
			}
			List<DragItemStackable> list = new List<DragItemStackable>();
			int num = 0;
			foreach (List<IngCell> value2 in dictionary.Values)
			{
				IngCell ingCell2 = Tallest(value2);
				if (ingCell2 == null || !(ingCell2.Items[0] is DragItemStackable dragItemStackable))
				{
					continue;
				}
				list.Add(dragItemStackable);
				foreach (IngCell item2 in value2)
				{
					if (item2 == ingCell2)
					{
						continue;
					}
					foreach (DragItem item3 in new List<DragItem>(item2.Items))
					{
						if (item3 is DragItemStackable plate)
						{
							FlyIntoStack(plate, dragItemStackable, (float)num * 0.06f);
							num++;
						}
					}
				}
			}
			duration = 0f;
			if (num != 0)
			{
				duration = (float)(num - 1) * 0.06f + 0.35f;
			}
			return list;
		}

		private static IngCell Tallest(List<IngCell> cells)
		{
			IngCell result = null;
			int num = 0;
			foreach (IngCell cell in cells)
			{
				int occupiedCount = cell.OccupiedCount;
				if (occupiedCount > num)
				{
					num = occupiedCount;
					result = cell;
				}
			}
			return result;
		}

		private void FlyIntoStack(DragItemStackable plate, DragItemStackable lead, float delay)
		{
			plate.UnregisterCell();
			Vector3 position = lead.Tf.position;
			DOTween.Sequence().AppendInterval(delay).Append(plate.Tf.DOJump(position, 1f, 1, 0.35f).SetEase(Ease.InOutQuad))
				.OnComplete(delegate
				{
					if ((bool)plate)
					{
						if ((bool)lead)
						{
							lead.AbsorbForced(plate);
						}
						else
						{
							_despawn?.Invoke(plate);
						}
						_onPlateRemoved?.Invoke();
					}
				});
		}

		private static bool HasDirtyPlate(IngCell cell)
		{
			return cell != null && cell.HasDirtyPlate;
		}

		private int RemovePlatesIn(IngCell cell, int startIndex)
		{
			int num = 0;
			if (cell != null && cell.HasDirtyPlate)
			{
				foreach (DragItem plate in new List<DragItem>(cell.Items))
				{
					if ((bool)plate && plate.isDirtyPlate)
					{
						PlayRemoveFx(plate, (float)(num + startIndex) * 0.06f);
						num++;
					}
				}
			}
			return num;
		}

		private void PlayRemoveFx(DragItem plate, float delay)
		{
			Transform tf = plate.Tf;
			Vector3 originalScale = tf.localScale;
			DOTween.Sequence().AppendInterval(delay).Append(tf.DOScale(originalScale * 1.18f, 0.12f).SetEase(Ease.OutQuad))
				.Append(tf.DOScale(Vector3.zero, 0.12f).SetEase(Ease.InBack))
				.OnComplete(delegate
				{
					if ((bool)plate)
					{
						tf.localScale = originalScale;
						_despawn?.Invoke(plate);
					}
					_onPlateRemoved?.Invoke();
				});
		}
	}
}
