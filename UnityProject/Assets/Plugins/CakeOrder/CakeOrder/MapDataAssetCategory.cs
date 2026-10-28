using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder
{

public static class MapDataAssetCategory
{
	public enum Category
	{
		Common,
		InGame,
		Home
	}

	public enum AssetClass
	{
		ScriptableObject,
		Prefab
	}

	public enum AssetType
	{
		LevelMetadataConfig,
		UpgradeConfig,
		ToolConfig,
		CookingProcessConfig,
		CustomerPack,
		InGameVisualPack,
		HomeMapBuilding,
		HomeLevelPath
	}

	public static string GetCharactersGroupName(string mapId)
	{
		return null;
	}

	public static string GetGroupName(string mapId, Category category)
	{
		return null;
	}

	public static string GetMapThumbnailAssetAddress(string mapId)
	{
		return null;
	}

	public static AssetClass GetAssetClass(AssetType assetType)
	{
		return AssetClass.ScriptableObject;
	}

	public static Category GetCategory(AssetType assetType)
	{
		return Category.Common;
	}

	public static string GetAssetAddressableLabel(AssetType assetType)
	{
		return null;
	}

	private static string GetAssetPostfix(string mapId, AssetType assetType)
	{
		return null;
	}

	public static string GetAssetAddress(string mapId, AssetType assetType)
	{
		return null;
	}

	public static AsyncOperationHandle<T> LoadAssetSO<T>(string mapId, AssetType assetType) where T : ScriptableObject
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(AsyncOperationHandle<T>);
	}

	public static AsyncOperationHandle<GameObject> InstantiateAssetPrefab(string mapId, AssetType assetType, Transform container)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(AsyncOperationHandle<GameObject>);
	}

	public static AsyncOperationHandle<Sprite> LoadThumbnail(string mapId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(AsyncOperationHandle<Sprite>);
	}
}
}
