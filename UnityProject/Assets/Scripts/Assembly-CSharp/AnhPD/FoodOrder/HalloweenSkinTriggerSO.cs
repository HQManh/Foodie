using CakeOrder;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "SkinTrigger-Halloween", menuName = "AnhPD/Customer Skin Trigger/Halloween")]
	public class HalloweenSkinTriggerSO : CustomerSkinTriggerSO
	{
		public override bool IsActive(in SkinContext context)
		{
			if (!MonoSingleton<SkinRemoteConfig>.HasInstance)
			{
				return false;
			}
			return MonoSingleton<SkinRemoteConfig>.Instance.IsHalloween;
		}
	}
}
