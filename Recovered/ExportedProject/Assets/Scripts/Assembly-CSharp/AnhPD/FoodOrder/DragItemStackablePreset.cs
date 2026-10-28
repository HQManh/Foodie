using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class DragItemStackablePreset : DragItemStackable
	{
		[Tooltip("Hình của từng độ cao, thấp lên cao. [0] = ĐỨNG MỘT MÌNH, [1] = chồng 2, ... Số phần tử nên khớp maxStack.")]
		[SerializeField]
		private GameObject[] levelVisuals;

		[Tooltip("Bật: mỗi lúc chỉ hiện ĐÚNG MỘT hình — hình của độ cao hiện tại (mỗi độ cao vẽ riêng một kiểu). Tắt: hiện dồn, chồng 3 thì [0][1][2] cùng bật.")]
		[SerializeField]
		private bool showOneAtATime;

		private int _level;

		protected override int StackLevel => 0;

		protected override bool CanStack => false;

		protected override void AddVisual()
		{
		}

		protected override void ClearVisuals()
		{
		}

		private void RefreshLevelVisuals()
		{
		}
	}
}
