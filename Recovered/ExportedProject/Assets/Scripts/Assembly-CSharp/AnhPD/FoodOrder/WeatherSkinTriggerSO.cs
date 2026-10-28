using CakeOrder.DataSO;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "SkinTrigger", menuName = "AnhPD/Customer Skin Trigger/Weather")]
	public class WeatherSkinTriggerSO : CustomerSkinTriggerSO
	{
		[SerializeField]
		private WeatherEffect[] weathers;

		public override bool IsActive(in SkinContext context)
		{
			return false;
		}
	}
}
