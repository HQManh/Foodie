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
		private float areaWidth;

		[SerializeField]
		private float areaHeight;

		[Tooltip("Chừa trống bấy nhiêu ở rìa TRÁI và PHẢI của vùng. Holder không bao giờ chạm vào phần này: bề ngang dùng để xếp hàng chỉ còn areaWidth - 2 × padding.")]
		[SerializeField]
		private float sidePadding;

		[Tooltip("Khe giữa hai holder không giãn quá giá trị này. Bị kẹp thì hàng không còn trải kín bề ngang nữa mà co lại và căn giữa. Số ÂM = không giới hạn (giãn kín vùng như cũ).")]
		[SerializeField]
		private float maxSpacing;

		private float ContentWidth => 0f;

		public List<StationHolder> ActiveHolders { get; }

		public List<CookingStation> GetListStation()
		{
			return null;
		}

		public void Setup(List<string> stationIds)
		{
		}

		public void SetStationCount(string stationId, int count)
		{
		}

		public void Layout()
		{
		}

		private bool ShouldPlace(StationHolder holder)
		{
			return false;
		}

		private void PlaceRow(List<StationHolder> row, float rowWidth, float rowHeight, ref float top)
		{
		}
	}
}
