using UnityEngine;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(BoxCollider2D))]
	public class HorizontalColliderLayout : OrderLayout
	{
		[SerializeField]
		private BoxCollider2D col;

		public bool alignCenter;

		public float spacing;

		public float offsetCenterX;

		public override void DoLayout()
		{
		}
	}
}
