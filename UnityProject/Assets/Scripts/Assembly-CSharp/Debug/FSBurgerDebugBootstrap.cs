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
		DontDestroyOnLoad(host);
		host.AddComponent<FSBurgerDebugBootstrap>();
	}

	// Level shown in "Day N" and loaded from the map's level designs (0 = Day 1). Survives scene reloads.
	private static int SelectedLevel;

	private static bool _autoPlay;

	private string _levelScenePath;

	private int _levelCount = 1;

	private void OnDestroy()
	{
		SceneManager.sceneLoaded -= OnSceneLoaded;
	}

	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
		if (mode == LoadSceneMode.Single && scene.path == _levelScenePath)
		{
			_coinText = null;
			_customerText = null;
			_dayText = null;
			Time.timeScale = 1f;
			StartRun();
		}
	}

	private async void StartRun()
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

	private void LoadLevel(int index)
	{
		SelectedLevel = Mathf.Clamp(index, 0, Mathf.Max(0, _levelCount - 1));
		UnityEditor.SceneManagement.EditorSceneManager.LoadSceneInPlayMode(_levelScenePath, new LoadSceneParameters(LoadSceneMode.Single));
	}

	private async void Start()
	{
		_levelScenePath = SceneManager.GetActiveScene().path;
		SceneManager.sceneLoaded += OnSceneLoaded;
		StartRun();
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
		int levelIndex = SelectedLevel;
		string customerStrings = sim.customerData;
		string queueStrings = sim.ingredientQueueData;
		if (TryGetLevelDesign(mapId, levelIndex, out string designCustomers, out string designQueue, out int designCount))
		{
			customerStrings = designCustomers;
			queueStrings = designQueue;
			_levelCount = designCount;
		}
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
			customerOrderDataString = customerStrings,
			gridDataString = sim.gridData,
			ingredientQueueDataString = queueStrings,
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
		// The project's 2D physics runs in Script mode, so collider positions are never refreshed as items move; sync on every query so clicks hit where items are drawn.
		Physics2D.autoSyncTransforms = true;
		// Clicks reach the 2D colliders on belt and grid items only through a Physics2DRaycaster; keep a single EventSystem.
		Camera gameCamera = Camera.main;
		if (gameCamera != null && gameCamera.GetComponent<UnityEngine.EventSystems.Physics2DRaycaster>() == null)
		{
			gameCamera.gameObject.AddComponent<UnityEngine.EventSystems.Physics2DRaycaster>();
		}
		bool keptOne = false;
		foreach (UnityEngine.EventSystems.EventSystem eventSystem in FindObjectsByType<UnityEngine.EventSystems.EventSystem>(FindObjectsInactive.Include, FindObjectsSortMode.None))
		{
			if (!keptOne && eventSystem.gameObject.scene.name == "GameplayHUD")
			{
				keptOne = true;
				continue;
			}
			eventSystem.enabled = false;
		}
		level.onPlayStateChanged += OnPlayStateChanged;
		FSBurgerAutoPlayer bot = GetComponent<FSBurgerAutoPlayer>();
		if (bot == null)
		{
			bot = gameObject.AddComponent<FSBurgerAutoPlayer>();
		}
		bot.enabled = _autoPlay;
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
		if (_dayText != null) SetIfChanged(_dayText, "Day " + (SelectedLevel + 1));
	}

	// Level designs per map live in the remote-config defaults (RemoteConfigDefaultSetterCakeOrder._mapConfig[].levelDesigns): "customers~~queue".
	private static bool TryGetLevelDesign(string mapId, int index, out string customers, out string queue, out int count)
	{
		customers = null;
		queue = null;
		count = 1;
		System.Reflection.BindingFlags flags = System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public;
		RemoteConfigDefaultSetterCakeOrder setter = FindFirstObjectByType<RemoteConfigDefaultSetterCakeOrder>(FindObjectsInactive.Include);
		if (setter == null) return false;
		System.Collections.IEnumerable maps = setter.GetType().GetField("_mapConfig", flags)?.GetValue(setter) as System.Collections.IEnumerable;
		if (maps == null) return false;
		foreach (object map in maps)
		{
			System.Type t = map.GetType();
			if (!string.Equals(t.GetField("mapId", flags)?.GetValue(map) as string, mapId, StringComparison.OrdinalIgnoreCase)) continue;
			System.Collections.IList designs = t.GetField("levelDesigns", flags)?.GetValue(map) as System.Collections.IList;
			if (designs == null || designs.Count == 0) return false;
			count = designs.Count;
			string[] parts = (designs[Mathf.Clamp(index, 0, designs.Count - 1)] as string ?? "").Split(new[] { "~~" }, StringSplitOptions.None);
			if (parts.Length < 2) return false;
			customers = parts[0];
			queue = parts[1];
			return true;
		}
		return false;
	}

	// Play-it-yourself controls: pick the level, restart it, and switch the helper bot on or off.
	private void OnGUI()
	{
		int font = Mathf.Max(16, Screen.height / 55);
		GUIStyle button = new GUIStyle(GUI.skin.button) { fontSize = font, fontStyle = FontStyle.Bold };
		GUIStyle label = new GUIStyle(GUI.skin.label) { fontSize = font, fontStyle = FontStyle.Bold, alignment = TextAnchor.MiddleCenter };
		label.normal.textColor = Color.white;
		float h = font * 2.2f;
		float w = Mathf.Min(Screen.width * 0.30f, h * 2f);
		float y = Screen.height - h - 8f;
		float x = 8f;
		if (GUI.Button(new Rect(x, y, w, h), "<", button)) LoadLevel(SelectedLevel - 1);
		x += w;
		GUI.Label(new Rect(x, y, w * 1.6f, h), "Day " + (SelectedLevel + 1) + "/" + _levelCount, label);
		x += w * 1.6f;
		if (GUI.Button(new Rect(x, y, w, h), ">", button)) LoadLevel(SelectedLevel + 1);
		x += w + 8f;
		if (GUI.Button(new Rect(x, y, w * 1.6f, h), "Restart", button)) LoadLevel(SelectedLevel);
		x += w * 1.6f + 8f;
		if (GUI.Button(new Rect(x, y, w * 1.8f, h), _autoPlay ? "Auto: ON" : "Auto: OFF", button))
		{
			_autoPlay = !_autoPlay;
			FSBurgerAutoPlayer bot = GetComponent<FSBurgerAutoPlayer>();
			if (bot != null) bot.enabled = _autoPlay;
		}
	}
}
#endif
