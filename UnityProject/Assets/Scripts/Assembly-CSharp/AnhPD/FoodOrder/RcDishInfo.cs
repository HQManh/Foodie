using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RcDishInfo
	{
		public int dishKind;

		[Tooltip("Icon nhỏ, chỗ chỉ cần nhận mặt loại món (bảng order, preview khách).")]
		public Sprite icon;

		[Tooltip("Id mà một SUẤT ORDER của món này mang làm OrderSpec.BaseId.\n\nĐIỀN khi cả món chung một prefab, biến thể mã hoá trong id (sushi maki/gunkan).\nĐỂ TRỐNG khi món là nhiều id phục vụ rời nhau (Coca: cup_coca / cup_coca_ice) — một ô không gọi tên được cả hai.\n\nKHÔNG phải nguyên liệu mở đĩa: cái đó khai bằng dishKind trên chính nguyên liệu.")]
		public string baseId;

		[Tooltip("Bản vẽ đẹp của cùng loại món, cho chỗ hiển thị to (popup giới thiệu, thưởng).")]
		public Sprite sprite;

		public string dishName;

		[TextArea]
		public string desc;

		public ServePlate plate;

		public DragItem dirtyPlate;
	}
}
