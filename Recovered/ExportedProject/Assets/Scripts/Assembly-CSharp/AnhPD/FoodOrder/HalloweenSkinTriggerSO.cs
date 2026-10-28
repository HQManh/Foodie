using UnityEngine;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "SkinTrigger-Halloween", menuName = "AnhPD/Customer Skin Trigger/Halloween")]
	public class HalloweenSkinTriggerSO : CustomerSkinTriggerSO
	{
		public override bool IsActive(in SkinContext context)
		{
			return false;
		}
	}
}
