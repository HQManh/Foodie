using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationHolderGrid : MonoBehaviour
	{
		[SerializeField]
		private StationHolder[] holders;

		[Header("Vùng chứa holder")]
		[SerializeField]
		private float areaWidth = 10f;

		[SerializeField]
		private float areaHeight = 5f;

		[Tooltip("Chừa trống bấy nhiêu ở rìa TRÁI và PHẢI của vùng. Holder không bao giờ chạm vào phần này: bề ngang dùng để xếp hàng chỉ còn areaWidth - 2 × padding.")]
		[SerializeField]
		private float sidePadding;

		[Tooltip("Khe giữa hai holder không giãn quá giá trị này. Bị kẹp thì hàng không còn trải kín bề ngang nữa mà co lại và căn giữa. Số ÂM = không giới hạn (giãn kín vùng như cũ).")]
		[SerializeField]
		private float maxSpacing = -1f;

		private float ContentWidth => Mathf.Max(0f, areaWidth - 2f * sidePadding);

		public List<StationHolder> ActiveHolders { get; } = new List<StationHolder>();

		public List<CookingStation> GetListStation()
		{
			List<CookingStation> list = new List<CookingStation>();
			foreach (StationHolder holder in ActiveHolders)
			{
				list.AddRange(holder.GetActiveStation());
			}
			return list;
		}

		public void Setup(List<string> stationIds)
		{
			ActiveHolders.Clear();
			foreach (StationHolder holder in holders)
			{
				holder.Hide();
			}
			foreach (string stationId in stationIds)
			{
				foreach (StationHolder holder in holders)
				{
					if (holder.IsContainStationId(stationId))
					{
						holder.ActiveStation(stationId);
						if (!ActiveHolders.Contains(holder))
						{
							ActiveHolders.Add(holder);
						}
						break;
					}
				}
			}
			Layout();
		}

		public void SetStationCount(string stationId, int count)
		{
			foreach (StationHolder holder in ActiveHolders)
			{
				if (holder.IsContainStationId(stationId))
				{
					holder.SetActiveCount(stationId, count);
					break;
				}
			}
			Layout();
		}

		public void Layout()
		{
			List<StationHolder> row = new List<StationHolder>();
			float top = areaHeight * 0.5f;
			float rowWidth = 0f;
			float rowHeight = 0f;
			foreach (StationHolder holder in holders)
			{
				if (!holder || !ShouldPlace(holder))
				{
					continue;
				}
				if (holder.ActiveStationCount <= 0)
				{
					continue;
				}
				holder.RefreshStations();
				float width = holder.Width;
				if (width <= 0f)
				{
					continue;
				}
				if (row.Count > 0 && ContentWidth < rowWidth + width)
				{
					PlaceRow(row, rowWidth, rowHeight, ref top);
					row.Clear();
					rowWidth = 0f;
					rowHeight = 0f;
				}
				row.Add(holder);
				rowWidth += width;
				rowHeight = Mathf.Max(rowHeight, holder.Height);
			}
			PlaceRow(row, rowWidth, rowHeight, ref top);
		}

		private bool ShouldPlace(StationHolder holder)
		{
			if (Application.isPlaying)
			{
				return ActiveHolders.Contains(holder);
			}
			return true;
		}

		private void PlaceRow(List<StationHolder> row, float rowWidth, float rowHeight, ref float top)
		{
			if (row.Count == 0)
			{
				return;
			}
			int gapCount = row.Count - 1;
			float gap = 0f;
			if (gapCount > 0)
			{
				gap = Mathf.Max(0f, ContentWidth - rowWidth) / gapCount;
			}
			if (maxSpacing >= 0f && maxSpacing <= gap)
			{
				gap = maxSpacing;
			}
			float y = top - rowHeight * 0.5f;
			float x = -(gap * gapCount + rowWidth) * 0.5f;
			foreach (StationHolder holder in row)
			{
				float width = holder.Width;
				holder.transform.position = transform.TransformPoint(x + width * 0.5f, y, 0f);
				x += gap + width;
			}
			top -= rowHeight;
		}
	}
}
