using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(BoxCollider2D))]
	public class HorizontalColliderLayout : OrderLayout
	{
		[SerializeField]
		private BoxCollider2D col;

		public bool alignCenter = true;

		public float spacing = 0.5f;

		public float offsetCenterX;

		public override void DoLayout()
		{
			List<Transform> list = new List<Transform>();
			foreach (Transform item in base.transform)
			{
				if (item.gameObject.activeSelf)
				{
					list.Add(item);
				}
			}
			if (list.Count == 0)
			{
				return;
			}
			float num = spacing;
			float x = base.transform.position.x;
			float x2 = col.offset.x;
			float num2 = col.size.x;
			if (alignCenter)
			{
				num2 = num * (float)list.Count - num;
			}
			float num3 = offsetCenterX + x + x2 + num2 * -0.5f;
			foreach (Transform item2 in list)
			{
				Vector3 position = item2.position;
				position.x = num3;
				item2.position = position;
				num3 += spacing;
			}
		}
	}
}
