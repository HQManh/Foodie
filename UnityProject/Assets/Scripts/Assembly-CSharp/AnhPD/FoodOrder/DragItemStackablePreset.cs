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

		protected override int StackLevel => _level;

		protected override bool CanStack
		{
			get
			{
				if (levelVisuals != null)
				{
					return levelVisuals.Length > 1;
				}
				return false;
			}
		}

		protected override void AddVisual()
		{
			int next = _level + 1;
			if (next < levelVisuals.Length)
			{
				_level = next;
				RefreshLevelVisuals();
				RefreshTopVisual();
			}
		}

		protected override void ClearVisuals()
		{
			_level = 0;
			RefreshLevelVisuals();
			RefreshTopVisual();
		}

		private void RefreshLevelVisuals()
		{
			if (levelVisuals == null)
			{
				return;
			}
			for (int i = 0; i < levelVisuals.Length; i++)
			{
				if ((bool)levelVisuals[i])
				{
					bool active = i <= _level;
					if (showOneAtATime)
					{
						active = i == _level;
					}
					levelVisuals[i].SetActive(active);
				}
			}
		}
	}
}
