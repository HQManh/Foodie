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
		// The managers scene brings its own camera and audio listener; the level scene has its own, so keep only the level's.
		Scene managers = SceneManager.GetSceneByName("InitManagers");
		if (managers.isLoaded)
		{
			foreach (GameObject root in managers.GetRootGameObjects())
			{
				foreach (Camera managerCamera in root.GetComponentsInChildren<Camera>(true))
				{
					managerCamera.enabled = false;
				}
				foreach (AudioListener listener in root.GetComponentsInChildren<AudioListener>(true))
				{
					listener.enabled = false;
				}
			}
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
		if (!SceneManager.GetSceneByName("GameplayHUD").isLoaded)
		{
			UnityEditor.SceneManagement.EditorSceneManager.LoadSceneInPlayMode("Assets/_Production/Map-common_assets/Scenes/GameplayHUD.unity", new LoadSceneParameters(LoadSceneMode.Additive));
			for (int frame = 0; frame < 120 && !SceneManager.GetSceneByName("GameplayHUD").isLoaded; frame++)
			{
				await UniTask.Yield();
			}
			Scene hud = SceneManager.GetSceneByName("GameplayHUD");
			if (hud.isLoaded)
			{
				foreach (GameObject root in hud.GetRootGameObjects())
				{
					foreach (AudioListener listener in root.GetComponentsInChildren<AudioListener>(true))
					{
						listener.enabled = false;
					}
					foreach (Camera hudCamera in root.GetComponentsInChildren<Camera>(true))
					{
						Debug.Log("[FSBurgerDebugBootstrap] HUD camera: " + hudCamera.name);
					}
				}
			}
		}
		level.onPlayStateChanged += OnPlayStateChanged;
		if (FindFirstObjectByType<FSBurgerAutoPlayer>() == null)
		{
			gameObject.AddComponent<FSBurgerAutoPlayer>();
		}
	}

	// The HUD prefab's logic (UIInLevelCakeOrder) is an empty DLL shell, so the numbers on the recovered HUD are bound here.
	private TMPro.TMP_Text _coinText, _customerText, _dayText;

	private static TMPro.TMP_Text FindHudText(Scene hud, string pathPart)
	{
		foreach (GameObject root in hud.GetRootGameObjects())
		{
			foreach (TMPro.TMP_Text text in root.GetComponentsInChildren<TMPro.TMP_Text>(true))
			{
				string path = text.name;
				for (Transform t = text.transform.parent; t != null; t = t.parent) path = t.name + "/" + path;
				if (path.Contains(pathPart)) return text;
			}
		}
		return null;
	}

	// The real end-of-level flow (UIInLevelCakeOrder.ShowEndGame) is an empty shell, so the recovered result popup is just shown on top.
	private void OnPlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
		if (newState != LevelPlayState.Ended) return;
		LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
		bool win = level != null && level.RuntimeData != null && level.RuntimeData.resultType != GameResultType.Lose;
		string path = "Assets/_Production/Map-common_assets/Prefabs/UI/InGame/" + (win ? "UIPopup-EndGame-Win.prefab" : "UIPopup-EndGame-Lose.prefab");
		GameObject prefab = UnityEditor.AssetDatabase.LoadAssetAtPath<GameObject>(path);
		Canvas canvas = null;
		Scene hud = SceneManager.GetSceneByName("GameplayHUD");
		foreach (GameObject root in hud.GetRootGameObjects())
		{
			foreach (Canvas c in root.GetComponentsInChildren<Canvas>(true))
			{
				if (c.isRootCanvas && c.renderMode == RenderMode.ScreenSpaceOverlay) { canvas = c; break; }
			}
			if (canvas != null) break;
		}
		if (prefab == null || canvas == null)
		{
			Debug.Log("[FSBurgerDebugBootstrap] level ended (" + (win ? "win" : "lose") + "); result popup unavailable.");
			return;
		}
		GameObject popup = Instantiate(prefab, canvas.transform);
		RectTransform rect = popup.GetComponent<RectTransform>();
		if (rect != null)
		{
			rect.anchorMin = Vector2.zero;
			rect.anchorMax = Vector2.one;
			rect.offsetMin = Vector2.zero;
			rect.offsetMax = Vector2.zero;
		}
		popup.transform.SetAsLastSibling();
		popup.SetActive(true);
		Debug.Log("[FSBurgerDebugBootstrap] level ended (" + (win ? "win" : "lose") + "); showing the result popup.");
	}

	private static void SetIfChanged(TMPro.TMP_Text text, string value)
	{
		if (text.text != value) text.text = value;
	}

	private void Update()
	{
		Scene hud = SceneManager.GetSceneByName("GameplayHUD");
		LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
		if (!hud.isLoaded || level == null || level.RuntimeData == null) return;
		if (_coinText == null) _coinText = FindHudText(hud, "CounterHUD-Final/UI-Counter-SoftCurrency Variant/frame/Text");
		if (_customerText == null) _customerText = FindHudText(hud, "CounterHUD-Final/UI-Counter-Customer/frame/Text");
		if (_dayText == null) _dayText = FindHudText(hud, "CounterHUD-Final/LevelName/Text");
		CakeLevelRuntimeData data = level.RuntimeData;
		if (_coinText != null && data.softCurrencyData != null) SetIfChanged(_coinText, data.softCurrencyData.Amount.ToString());
		if (_customerText != null && data.customerData != null) SetIfChanged(_customerText, Mathf.Max(0, data.customerData.maxNumCustomers - data.customerData.Amount).ToString());
		if (_dayText != null) SetIfChanged(_dayText, "Day 1");
	}
}
#endif
