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
			// The prefix literal is "Restaurant-" (DAT_0920bed0, decoded from the metadata).
			return "Restaurant-" + mapId;
		}

		public NewFeatherConfig FindRestaurantConfig(string mapId)
		{
			if (dicFeather == null || string.IsNullOrEmpty(mapId))
			{
				return null;
			}
			NewFeatherConfig config;
			return dicFeather.TryGetValue(RestaurantKey(mapId), out config) ? config : null;
		}

		public static string GridObstacleKey(GridEffectType type)
		{
			// The format literal is "Grid-{0}" (DAT_092039c8, decoded from the metadata).
			return string.Format("Grid-{0}", type);
		}

		public static string SlotObstacleKey(IngredientSlotStatus status)
		{
			// The format literal is "Slot-{0}" (DAT_0920d3e8, decoded from the metadata).
			return string.Format("Slot-{0}", status);
		}

		public NewFeatherConfig FindObstacleConfig(string obstacleKey)
		{
			if (dicFeather == null || string.IsNullOrEmpty(obstacleKey))
			{
				return null;
			}
			NewFeatherConfig config;
			return dicFeather.TryGetValue(obstacleKey, out config) ? config : null;
		}

		public NewFeatherConfig FindConfigByToolId(string toolId)
		{
			// TODO(unrecovered): iterates dicFeather values and compares CakeToolSO's id field at offset 0x18, which has no matching stub member.
			return null;
		}
	}
}
