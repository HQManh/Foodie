using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using TMPro;
using TrungKienPack;
using UnityEngine;
using UnityEngine.UI;

namespace TrungKien.UI.NewFearther
{
	public class UIPopupNewFeather : UICakePopup, IUIPopupInLevel
	{
		private static readonly Dictionary<string, List<string>> dicNewTool = new Dictionary<string, List<string>>();

		private static readonly Dictionary<string, List<string>> dicNewObstacle = new Dictionary<string, List<string>>();

		private static bool _isObstacleDictBuilt;

		private static readonly HashSet<string> _builtMapIds = new HashSet<string>();

		private static readonly Dictionary<string, List<int>> _newToolLevelsByMap = new Dictionary<string, List<int>>();

		[Tooltip("Only the features having an entry here are shown (e.g. an obstacle-only config hides the tools).")]
		[SerializeField]
		private UINewFeartherConfig config;

		[SerializeField]
		private Transform parentFeather;

		[SerializeField]
		private TextMeshProUGUI txtFeatherTitle;

		[SerializeField]
		private TextMeshProUGUI txtFeatureDesc;

		[SerializeField]
		private Button btnContinue;

		[SerializeField]
		private Button btnClose;

		[SerializeField]
		private SfxAndHapticTrigger _sfxShow;

		private readonly Dictionary<NewFeatherUI, PoolCtrlObject> _pools = new Dictionary<NewFeatherUI, PoolCtrlObject>();

		private PoolCtrlObject _currentPool;

		private NewFeatherUI _currentFeather;

		private UIInLevelGeneralReferences _UIRefs;

		private readonly List<NewFeatherConfig> _featherQueue = new List<NewFeatherConfig>();

		private int _featherIndex;

		private bool _isQueuePrepared;

		protected override SfxAndHapticTrigger SfxAndHapticOnOpen => _sfxShow;

		private void Start()
		{
			BuildNewToolDict();
		}

		protected override void Awake()
		{
			// Rebuilt from the decompiled code: base.Awake, then click listeners on btnClose and btnContinue.
			// The decompile does not name the listener methods; OnClickContinue and HideByBackButton are inferred from the button names.
			base.Awake();
			if (btnClose != null)
			{
				btnClose.onClick.AddListener(HideByBackButton);
			}
			if (btnContinue != null)
			{
				btnContinue.onClick.AddListener(OnClickContinue);
			}
		}

		public override void HideByBackButton()
		{
			Hide();
		}

		public void Show(string featherKey, Action<UIElementAbstract> onClosed = null)
		{
			if (Setup(featherKey))
			{
				Show(onClosed);
			}
		}

		public bool Setup(string featherKey)
		{
			if (config == null || config.dicFeather == null)
			{
				UnityEngine.Debug.LogError("NewFeather: config or feather dictionary missing, key " + featherKey /* literal recovered by guess */);
				return false;
			}
			NewFeatherConfig feather;
			if (!config.dicFeather.TryGetValue(featherKey, out feather))
			{
				UnityEngine.Debug.LogError("NewFeather: feather not found, key " + featherKey /* literal recovered by guess */);
				return false;
			}
			_featherQueue.Clear();
			_featherQueue.Add(feather);
			_isQueuePrepared = true;
			ShowFeatherAt(0);
			return true;
		}

		public void SetUIRefs(UIInLevelGeneralReferences refs)
		{
			_UIRefs = refs;
		}

		private void TestFeather(string featherKey = "")
		{
			// TODO(unrecovered): calls UIElementAbstract.IsShowing/Show (CakeOrder.BaseUI) which is not in the stubs.
		}

		private IEnumerable<string> GetFeatherKeys()
		{
			// The first value the original iterator yields is read from a static string global (DAT_09535468); it is taken to be string.Empty (a blank first entry).
			yield return string.Empty;
			if (config != null && config.dicFeather != null)
			{
				foreach (string key in config.dicFeather.Keys)
				{
					yield return key;
				}
			}
		}

		public bool SetupNextLevel()
		{
			_featherQueue.Clear();
			if (TryGetRestaurantOpenedByWonLevel(out string restaurantMapId) && config != null)
			{
				NewFeatherConfig restaurantConfig = config.FindRestaurantConfig(restaurantMapId);
				if (restaurantConfig != null)
				{
					_featherQueue.Add(restaurantConfig);
				}
			}
			foreach (string toolId in GetNextLevelNewToolIds())
			{
				NewFeatherConfig toolConfig = FindConfigByToolId(toolId);
				if (toolConfig != null)
				{
					_featherQueue.Add(toolConfig);
				}
			}
			if (config != null)
			{
				foreach (string obstacleKey in GetNextLevelNewObstacleKeys())
				{
					NewFeatherConfig obstacleConfig = config.FindObstacleConfig(obstacleKey);
					if (obstacleConfig != null)
					{
						_featherQueue.Add(obstacleConfig);
					}
				}
			}
			_isQueuePrepared = true;
			if (_featherQueue.Count != 0)
			{
				ShowFeatherAt(0);
				return true;
			}
			UnityEngine.Debug.LogWarning("NewFeather: no new feather to show" /* literal recovered by guess */);
			CollectCurrentFeather();
			// Both texts are set to the static string global DAT_09535468, taken to be string.Empty.
			if (txtFeatherTitle != null)
			{
				txtFeatherTitle.text = string.Empty;
			}
			if (txtFeatureDesc != null)
			{
				txtFeatureDesc.text = string.Empty;
			}
			UpdateButtons();
			return false;
		}

		protected override void OnBeforeShow()
		{
			base.OnBeforeShow();
			if (!_isQueuePrepared)
			{
				SetupNextLevel();
			}
		}

		private static string NewToolKey(string mapId, int levelIndex)
		{
			// The format literal is "{0}_{1}" (DAT_092267b0, decoded from the metadata).
			return string.Format("{0}_{1}", mapId, levelIndex);
		}

		public static IReadOnlyList<string> GetNewToolIds(string mapId, int levelIndex)
		{
			BuildNewToolDict();
			string key = NewToolKey(mapId, levelIndex);
			List<string> ids;
			if (!dicNewTool.TryGetValue(key, out ids))
			{
				ids = new List<string>();
			}
			return ids;
		}

		public static IReadOnlyList<string> GetNewObstacleKeys(string mapId, int levelIndex)
		{
			BuildNewToolDict();
			string key = NewToolKey(mapId, levelIndex);
			List<string> keys;
			if (!dicNewObstacle.TryGetValue(key, out keys))
			{
				keys = new List<string>();
			}
			return keys;
		}

		public static bool TryGetNewToolMilestones(string mapId, int levelIndex, UINewFeartherConfig featherConfig, out int prevLevelIndex, out int nextLevelIndex)
		{
			prevLevelIndex = -1;
			nextLevelIndex = -1;
			BuildNewToolDict();
			if (mapId == null)
			{
				return false;
			}
			if (featherConfig == null)
			{
				return false;
			}
			List<int> levels;
			if (!_newToolLevelsByMap.TryGetValue(mapId, out levels))
			{
				return false;
			}
			List<int> milestones = new List<int>();
			foreach (int level in levels)
			{
				if (HasConfiguredNewFeature(mapId, level, featherConfig))
				{
					milestones.Add(level);
				}
			}
			int restaurantMilestone = GetRestaurantMilestone(mapId);
			if (restaurantMilestone >= 0)
			{
				string nextMapId = GetNextMapId(mapId);
				if (featherConfig.FindRestaurantConfig(nextMapId) != null)
				{
					milestones.Add(restaurantMilestone);
				}
			}
			foreach (int level in milestones)
			{
				if (levelIndex < level)
				{
					if (nextLevelIndex < 0 || level < nextLevelIndex)
					{
						nextLevelIndex = level;
					}
				}
				else if (prevLevelIndex <= level)
				{
					prevLevelIndex = level;
				}
			}
			return nextLevelIndex >= 0;
		}

		private static bool HasConfiguredNewFeature(string mapId, int levelIndex, UINewFeartherConfig featherConfig)
		{
			foreach (string toolId in GetNewToolIds(mapId, levelIndex))
			{
				if (featherConfig.FindConfigByToolId(toolId) != null)
				{
					return true;
				}
			}
			foreach (string obstacleKey in GetNewObstacleKeys(mapId, levelIndex))
			{
				if (featherConfig.FindObstacleConfig(obstacleKey) != null)
				{
					return true;
				}
			}
			return false;
		}

		public static int GetRestaurantMilestone(string mapId)
		{
			// TODO(unrecovered): reads CakeOrder.DataSO.CakeOrderDatabaseSO (GetMapSO, map level counts) which is not in the stubs.
			return 0;
		}

		private static int GetNumRequiredLevels(CakeMapSO mapSO)
		{
			// Rebuilt from the decompiled code. The two ints at +0x4c / +0x50 are CakeMapSO.numMainLevels and CakeMapSO.numRequiredLevels (field order from the DLL metadata).
			if (mapSO.numRequiredLevels < 1)
			{
				return mapSO.numMainLevels;
			}
			return Math.Min(mapSO.numMainLevels, mapSO.numRequiredLevels);
		}

		public static bool IsRestaurantMilestone(string mapId, int levelIndex)
		{
			if (levelIndex < 0)
			{
				return false;
			}
			return GetRestaurantMilestone(mapId) == levelIndex;
		}

		public static string GetNextMapId(string mapId)
		{
			// TODO(unrecovered): uses CakeOrder.DataSO.CakeOrderDatabaseSO (GetMapIndexById, NumMaps, GetMapId), not in the stubs.
			return null;
		}

		private static bool TryGetRestaurantOpenedByWonLevel(out string nextMapId)
		{
			// TODO(unrecovered): uses CakeOrder save-profile and database members not in the stubs.
			nextMapId = null;
			return false;
		}

		private static IReadOnlyList<string> GetNextLevelNewToolIds()
		{
			// TODO(unrecovered): uses CakeOrder database and map members not in the stubs.
			return null;
		}

		private static IReadOnlyList<string> GetNextLevelNewObstacleKeys()
		{
			// TODO(unrecovered): uses CakeOrder database and map members not in the stubs.
			return null;
		}

		public static void BuildNewToolDict()
		{
			// TODO(unrecovered): iterates CakeOrder.DataSO.CakeOrderDatabaseSO maps and CookingGraph level data via NewToolLevelPreview, none of which is fully in the stubs.
		}

		private static void BuildNewObstacleDict(CakeOrderDatabaseSO database)
		{
			// TODO(unrecovered): iterates CakeOrder.DataSO.CakeOrderDatabaseSO maps and NewToolLevelPreview obstacle keys; CakeOrder types are not in the stubs.
		}

		public NewFeatherConfig FindConfigByToolId(string toolId)
		{
			if (config != null)
			{
				return config.FindConfigByToolId(toolId);
			}
			return null;
		}

		private void OnClickContinue()
		{
			if (_featherQueue != null && _featherIndex + 1 < _featherQueue.Count)
			{
				ShowFeatherAt(_featherIndex + 1);
			}
		}

		private void ShowFeatherAt(int index)
		{
			_featherIndex = index;
			if (_featherQueue == null)
			{
				return;
			}
			NewFeatherConfig feather = _featherQueue[index];
			CollectCurrentFeather();
			if (feather == null)
			{
				return;
			}
			if (feather.prefab != null)
			{
				if (_pools == null)
				{
					return;
				}
				if (!_pools.TryGetValue(feather.prefab, out _currentPool))
				{
					_currentPool = new PoolCtrlObject(feather.prefab);
					_pools.Add(feather.prefab, _currentPool);
				}
				if (_currentPool == null)
				{
					return;
				}
				_currentFeather = _currentPool.Spawn<NewFeatherUI>(parentFeather);
				if (_currentFeather == null)
				{
					return;
				}
				// TODO(unrecovered): the original sets _currentFeather.TF.localScale from a static Vector3 (DAT_0918cbd0) that is not recoverable.
			}
			if (txtFeatherTitle != null)
			{
				txtFeatherTitle.text = feather.LocalizedName;
			}
			if (txtFeatureDesc != null)
			{
				txtFeatureDesc.text = feather.LocalizedDesc;
			}
			UpdateButtons();
		}

		private void UpdateButtons()
		{
			if (_featherQueue == null)
			{
				return;
			}
			int next = _featherIndex + 1;
			int count = _featherQueue.Count;
			if (btnContinue != null)
			{
				btnContinue.gameObject.SetActive(next < count);
			}
			if (btnClose != null)
			{
				btnClose.gameObject.SetActive(count <= next);
			}
		}

		protected override void OnDoneHide()
		{
			base.OnDoneHide();
			CollectCurrentFeather();
			_featherQueue.Clear();
			_featherIndex = 0;
			_isQueuePrepared = false;
		}

		private void CollectCurrentFeather()
		{
			if (_currentFeather != null && _currentPool != null)
			{
				_currentPool.DeSpawn(_currentFeather);
			}
			_currentFeather = null;
			_currentPool = null;
		}

		private void OnDestroy()
		{
			foreach (PoolCtrlObject pool in _pools.Values)
			{
				pool.Release();
			}
			_pools.Clear();
		}
	}
}
