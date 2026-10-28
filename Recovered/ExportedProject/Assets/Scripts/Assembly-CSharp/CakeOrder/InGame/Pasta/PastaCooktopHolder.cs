using AnhPD.FoodOrder;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaCooktopHolder : StationHolderFixedType
	{
		[Tooltip("The shared cooktop keeps this area while either station is active. Station transforms stay as authored.")]
		[SerializeField]
		private Vector2 areaSize;

		public override float Width => 0f;

		public override float Height => 0f;

		public override void SetActiveCount(string stationId, int count)
		{
		}
	}
}
