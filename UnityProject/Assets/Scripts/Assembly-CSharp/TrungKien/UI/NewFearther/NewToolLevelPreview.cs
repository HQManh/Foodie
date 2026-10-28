using System.Collections.Generic;
using AnhPD.FoodOrder;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;

namespace TrungKien.UI.NewFearther
{
	public static class NewToolLevelPreview
	{
		public static CakeLevelInitData BuildLevelInitData(LevelPlayLoadAndSetupControl loader, string mapId, int levelIndex)
		{
			// TODO(unrecovered): builds CakeLevelInitData through CakeOrder.InGame.CustomerScheduleBuilder, CookingGraph translators and CakeOrder data types, none of which are in the stubs.
			return null;
		}

		public static List<CakeToolSO> GetCookingToolsOfLevel(MessyController messy, CakeLevelInitData initData)
		{
			// TODO(unrecovered): uses AnhPD.FoodOrder StackModeService/LevelSupply/RecipeConfigSO and CakeOrder.MapToolConfig, none of which are in the stubs.
			return null;
		}

		public static List<string> GetObstacleKeysOfLevel(string mapId, int levelIndex)
		{
			// TODO(unrecovered): depends on GetLevelDesign (unrecovered) and CookingGraph translators, which are not in the stubs.
			return null;
		}

		public static List<string> GetGridObstacleKeysOfLevel(string mapId, int levelIndex)
		{
			// TODO(unrecovered): depends on GetLevelDesign (unrecovered) and CakeOrder.LevelGridConfig, which is not in the stubs.
			return null;
		}

		private static string GetLevelDesign(string mapId, int levelIndex)
		{
			// TODO(unrecovered): calls CakeOrder RemoteConfigDefaultSetter.GetRemoteKeyForMapLevelDesign and IapAdsSystem RemoteConfigManager.GetString, neither of which is in the stubs.
			return null;
		}
	}
}
