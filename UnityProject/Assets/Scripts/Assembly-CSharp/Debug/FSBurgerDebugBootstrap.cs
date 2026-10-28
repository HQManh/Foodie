#if UNITY_EDITOR
using System;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

// Editor-only helper, not part of the original game: the real level start (LevelPlayLoadAndSetupControl.PlayLevel) goes through the
// home/map flow, which is not rebuilt. This starts a level scene that is opened directly, using the values stored on the scene's
// LevelTestSystemSimulator ("IngameConfigTest"), so the gameplay can be run and debugged on its own.
public class FSBurgerDebugBootstrap : MonoBehaviour
{
	private const string MapIdFragment = "burger";

	private const string InitManagersScenePath = "Assets/_Production/Map-common_assets/Scenes/InitManagers.unity";

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	private static void AutoStart()
	{
		if (FindFirstObjectByType<LevelTestSystemSimulator>() == null || FindFirstObjectByType<FSBurgerDebugBootstrap>() != null)
		{
			return;
		}
		GameObject host = new GameObject("FSBurgerDebugBootstrap");
		host.AddComponent<FSBurgerDebugBootstrap>();
	}

	private async void Start()
	{
		try
		{
			await UniTask.Yield();
			await RunAsync();
		}
		catch (Exception ex)
		{
			Debug.LogError("[FSBurgerDebugBootstrap] failed: " + ex);
		}
	}

	private async UniTask RunAsync()
	{
		LevelTestSystemSimulator sim = FindFirstObjectByType<LevelTestSystemSimulator>();
		LevelBaseCakeOrderAbstract level = FindFirstObjectByType<LevelBaseCakeOrderAbstract>();
		if (sim == null || level == null)
		{
			Debug.LogWarning("[FSBurgerDebugBootstrap] scene has no LevelTestSystemSimulator or level controller; nothing to start.");
			return;
		}
		if (level.IsLevelSetupComplete)
		{
			return;
		}
		// The persistent managers (database, progress scenario, level control, ...) live in the InitManagers scene, which the real game
		// loads first. Load it additively when the level scene was opened on its own.
		if (CakeOrderDatabaseSO.Instance == null)
		{
			UnityEditor.SceneManagement.EditorSceneManager.LoadSceneInPlayMode(InitManagersScenePath, new LoadSceneParameters(LoadSceneMode.Additive));
			for (int frame = 0; frame < 120 && CakeOrderDatabaseSO.Instance == null; frame++)
			{
				await UniTask.Yield();
			}
			await UniTask.Yield();
		}
		CakeOrderDatabaseSO database = CakeOrderDatabaseSO.Instance;
		Debug.Log("[FSBurgerDebugBootstrap] database: " + (database != null ? database.name + " (" + DatabaseApi.NumMaps(database) + " maps)" : "not found"));
		string mapId = null;
		CakeMapSO mapSO = null;
		if (database != null)
		{
			for (int i = 0; i < DatabaseApi.NumMaps(database); i++)
			{
				string id = DatabaseApi.GetMapId(database, i);
				Debug.Log("[FSBurgerDebugBootstrap] database map " + i + ": '" + id + "'");
				if (mapId == null || (id != null && id.ToLowerInvariant().Contains(MapIdFragment)))
				{
					mapId = id;
					mapSO = DatabaseApi.GetMapSO(database, i);
				}
			}
		}
		int levelIndex = sim.overrideLevelIndex < 0 ? 0 : sim.overrideLevelIndex;
		SingleLevelMetadata metadata = new SingleLevelMetadata
		{
			weatherEffect = sim.overrideWeather ? sim.weatherEffect : default(WeatherEffect),
		};
		CakeLevelInitData initData = new CakeLevelInitData
		{
			mapId = mapId,
			mapIndex = 0,
			levelIndex = levelIndex,
			playMode = sim.playMode,
			levelMetadata = metadata,
			mapSO = mapSO,
			restaurantParams = sim.restaurantParams,
			stackConfig = sim.stackConfig,
			heartConfig = sim.heartConfig,
			serveSlotConfig = sim.serveSlotConfig,
			customerOrderDataString = sim.customerData,
			gridDataString = sim.gridData,
			ingredientQueueDataString = sim.ingredientQueueData,
		};
		Debug.Log("[FSBurgerDebugBootstrap] starting level: map '" + mapId + "', level index " + levelIndex + ".");
		CakeLevelRuntimeData runtimeData = new CakeLevelRuntimeData(initData);
		LevelPlayLoadAndSetupControl control = LevelPlayLoadAndSetupControl.Instance;
		if (control == null)
		{
			control = new GameObject("LevelPlayLoadAndSetupControl").AddComponent<LevelPlayLoadAndSetupControl>();
		}
		await control.SetUpAndStartDirect(level, initData, runtimeData);
		Debug.Log("[FSBurgerDebugBootstrap] level state: " + level.PlayState + ".");
	}
}
#endif
