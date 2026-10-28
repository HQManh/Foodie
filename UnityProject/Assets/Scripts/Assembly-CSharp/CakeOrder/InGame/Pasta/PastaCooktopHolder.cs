using AnhPD.FoodOrder;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaCooktopHolder : StationHolderFixedType
	{
		[Tooltip("The shared cooktop keeps this area while either station is active. Station transforms stay as authored.")]
		[SerializeField]
		private Vector2 areaSize = new Vector2(2.32f, 1.6f);

		public override float Width => Mathf.Max(0f, areaSize.x);

		public override float Height => Mathf.Max(0f, areaSize.y);

		public override void SetActiveCount(string stationId, int count)
		{
			base.SetActiveCount(stationId, count);
			gameObject.SetActive(HasActiveStation);
		}
	}
}
