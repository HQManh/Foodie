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
		[CompilerGenerated]
		private sealed class _003CGetFeatherKeys_003Ed__28 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private string _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public UIPopupNewFeather _003C_003E4__this;

			private Dictionary<string, NewFeatherConfig>.KeyCollection.Enumerator _003C_003E7__wrap1;

			string IEnumerator<string>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetFeatherKeys_003Ed__28(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<string> IEnumerable<string>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		private static readonly Dictionary<string, List<string>> dicNewTool;

		private static readonly Dictionary<string, List<string>> dicNewObstacle;

		private static bool _isObstacleDictBuilt;

		private static readonly HashSet<string> _builtMapIds;

		private static readonly Dictionary<string, List<int>> _newToolLevelsByMap;

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

		private readonly Dictionary<NewFeatherUI, PoolCtrlObject> _pools;

		private PoolCtrlObject _currentPool;

		private NewFeatherUI _currentFeather;

		private UIInLevelGeneralReferences _UIRefs;

		private readonly List<NewFeatherConfig> _featherQueue;

		private int _featherIndex;

		private bool _isQueuePrepared;

		protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

		private void Start()
		{
		}

		protected override void Awake()
		{
		}

		public override void HideByBackButton()
		{
		}

		public void Show(string featherKey, Action<UIElementAbstract> onClosed = null)
		{
		}

		public bool Setup(string featherKey)
		{
			return false;
		}

		public void SetUIRefs(UIInLevelGeneralReferences refs)
		{
		}

		private void TestFeather(string featherKey = "")
		{
		}

		[IteratorStateMachine(typeof(_003CGetFeatherKeys_003Ed__28))]
		private IEnumerable<string> GetFeatherKeys()
		{
			return null;
		}

		public bool SetupNextLevel()
		{
			return false;
		}

		protected override void OnBeforeShow()
		{
		}

		private static string NewToolKey(string mapId, int levelIndex)
		{
			return null;
		}

		public static IReadOnlyList<string> GetNewToolIds(string mapId, int levelIndex)
		{
			return null;
		}

		public static IReadOnlyList<string> GetNewObstacleKeys(string mapId, int levelIndex)
		{
			return null;
		}

		public static bool TryGetNewToolMilestones(string mapId, int levelIndex, UINewFeartherConfig featherConfig, out int prevLevelIndex, out int nextLevelIndex)
		{
			prevLevelIndex = default;
			nextLevelIndex = default;
			return false;
		}

		private static bool HasConfiguredNewFeature(string mapId, int levelIndex, UINewFeartherConfig featherConfig)
		{
			return false;
		}

		public static int GetRestaurantMilestone(string mapId)
		{
			return 0;
		}

		private static int GetNumRequiredLevels(CakeMapSO mapSO)
		{
			return 0;
		}

		public static bool IsRestaurantMilestone(string mapId, int levelIndex)
		{
			return false;
		}

		public static string GetNextMapId(string mapId)
		{
			return null;
		}

		private static bool TryGetRestaurantOpenedByWonLevel(out string nextMapId)
		{
			nextMapId = null;
			return false;
		}

		private static IReadOnlyList<string> GetNextLevelNewToolIds()
		{
			return null;
		}

		private static IReadOnlyList<string> GetNextLevelNewObstacleKeys()
		{
			return null;
		}

		public static void BuildNewToolDict()
		{
		}

		private static void BuildNewObstacleDict(CakeOrderDatabaseSO database)
		{
		}

		public NewFeatherConfig FindConfigByToolId(string toolId)
		{
			return null;
		}

		private void OnClickContinue()
		{
		}

		private void ShowFeatherAt(int index)
		{
		}

		private void UpdateButtons()
		{
		}

		protected override void OnDoneHide()
		{
		}

		private void CollectCurrentFeather()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
