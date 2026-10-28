using System.Collections.Generic;
using CakeOrder;
using Sirenix.OdinInspector;
using UnityEngine;

namespace TrungKien.UI.NewFearther
{
	[CreateAssetMenu(fileName = "UINewFeartherConfig", menuName = "ScriptableObjects/CakeOrder/UINewFeartherConfig", order = 2)]
	public class UINewFeartherConfig : SerializedScriptableObject
	{
		public Dictionary<string, NewFeatherConfig> dicFeather;

		public const string LinkedSlotObstacleKey = "Slot-Linked";

		public const string CombinedSlotObstacleKey = "Slot-Combined";

		public static string RestaurantKey(string mapId)
		{
			return null;
		}

		public NewFeatherConfig FindRestaurantConfig(string mapId)
		{
			return null;
		}

		public static string GridObstacleKey(GridEffectType type)
		{
			return null;
		}

		public static string SlotObstacleKey(IngredientSlotStatus status)
		{
			return null;
		}

		public NewFeatherConfig FindObstacleConfig(string obstacleKey)
		{
			return null;
		}

		public NewFeatherConfig FindConfigByToolId(string toolId)
		{
			return null;
		}
	}
}
