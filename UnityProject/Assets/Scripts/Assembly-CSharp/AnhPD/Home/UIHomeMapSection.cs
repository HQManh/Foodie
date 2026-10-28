using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.SaveProfile;
using ChocDino.UIFX;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace AnhPD.Home
{
	[Obsolete]
	public class UIHomeMapSection : UIElementWithAnim
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CLoadMapThumbnailAsync_003Ed__31 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public UIHomeMapSection _003C_003E4__this;

			private UniTask<Sprite>.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): state machine body depends on CakeOrder.MapDataAssetCategory.LoadThumbnail and CakeOrder.DataSO (not in stubs).
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[SerializeField]
		private Image icon;

		[SerializeField]
		private Image lineL;

		[SerializeField]
		private Image lineR;

		[SerializeField]
		private OutlineFilter outline;

		[SerializeField]
		private OutlineFilter outlineSelected;

		[SerializeField]
		private GameObject mLock;

		[SerializeField]
		private TextMeshProUGUI text;

		[SerializeField]
		private Button button;

		private readonly Color _lockColor = new Color(0f, 0f, 0f, 1f);

		private PlayerMapLevelProgressDataAccess _dataAccess;

		private int _mapMaxBuildingLevel;

		[CompilerGenerated]
		private Action<UIHomeMapSection> m_onSelected;

		private AsyncOperationHandle<Sprite> _opLoadMapThumb;

		private Coroutine _coroutineUpdateUpgradePercent;

		private bool _isShownFirstTime;

		public int Index { get; private set; }

		public string MapId { get; private set; }

		public event Action<UIHomeMapSection> onSelected
		{
			[CompilerGenerated]
			add
			{
				m_onSelected = (Action<UIHomeMapSection>)Delegate.Combine(m_onSelected, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onSelected = (Action<UIHomeMapSection>)Delegate.Remove(m_onSelected, value);
			}
		}

		private int GetBuildingPercent()
		{
			int bought = CountBuildingItemsBought();
			float pct = (float)bought / (float)_mapMaxBuildingLevel * 100f;
			return Mathf.RoundToInt(pct);
		}

		private int CountBuildingItemsBought()
		{
			// TODO(unrecovered): calls PlayerMapLevelProgressDataAccess.CountHomeBuildingItemsBought (CakeOrder.SaveProfile, not in stubs); the pseudocode return value is not recovered, so 0 is kept.
			return 0;
		}

		private void Awake()
		{
			if (button != null)
			{
				button.onClick.AddListener(() =>
				{
					m_onSelected?.Invoke(this);
				});
			}
		}

		public void Setup(PlayerMapLevelProgressDataAccess dataAccess, int index, bool isInitUnlocked, int mapMaxBuildingLevel)
		{
			Index = index;
			// TODO(unrecovered): MapId comes from CakeOrder.DataSO.CakeOrderDatabaseSO.GetMapId(index) (not in stubs).
			_mapMaxBuildingLevel = mapMaxBuildingLevel;
			_dataAccess = dataAccess;
			// TODO(unrecovered): subscribes OnMapBuildingUnlocked / OnHomeBuildingItemBought to dataAccess events (CakeOrder.SaveProfile events, not in stubs).
			if (isInitUnlocked)
			{
				Unlock();
			}
			else
			{
				Lock();
			}
			LoadMapThumbnailAsync().Forget();
		}

		private void OnMapBuildingUnlocked(string mapId)
		{
			if (MapId == mapId)
			{
				Unlock();
			}
		}

		private void OnHomeBuildingItemBought(string mapId, string sectionId)
		{
			if (MapId != mapId)
			{
				return;
			}
			if (_coroutineUpdateUpgradePercent != null)
			{
				StopCoroutine(_coroutineUpdateUpgradePercent);
				_coroutineUpdateUpgradePercent = null;
			}
			int pct = GetBuildingPercent();
			if (text != null)
			{
				if (text.gameObject.activeInHierarchy)
				{
					// TODO(unrecovered): PlayTextTransitionUnscaledTime(pct / 100f, ...) from Utilities.MonoBehaviourExtension is not in stubs.
					return;
				}
				text.SetText(pct + /* literal recovered by guess */ "%");
			}
		}

		[AsyncStateMachine(typeof(_003CLoadMapThumbnailAsync_003Ed__31))]
		private UniTask LoadMapThumbnailAsync()
		{
			// TODO(unrecovered): loads the thumbnail via CakeOrder.MapDataAssetCategory.LoadThumbnail and CakeOrder.DataSO / CakeOrder.BaseUI (not in stubs); state machine body not recovered.
			return default;
		}

		protected override void OnBeforeShow()
		{
			base.OnBeforeShow();
			if (text == null)
			{
				return;
			}
			if (!_isShownFirstTime)
			{
				text.SetText(/* literal recovered by guess */ "--");
			}
			else
			{
				int pct = GetBuildingPercent();
				text.SetText(pct + /* literal recovered by guess */ "%");
			}
		}

		protected override void OnDoneShow()
		{
			base.OnDoneShow();
			if (_isShownFirstTime)
			{
				return;
			}
			_isShownFirstTime = true;
			int pct = GetBuildingPercent();
			if (text == null)
			{
				return;
			}
			if (text.gameObject.activeInHierarchy)
			{
				// TODO(unrecovered): PlayTextTransitionUnscaledTime(pct / 100f, ...) from Utilities.MonoBehaviourExtension is not in stubs.
				return;
			}
			text.SetText(pct + /* literal recovered by guess */ "%");
		}

		private void OnDisable()
		{
			if (_coroutineUpdateUpgradePercent != null)
			{
				StopCoroutine(_coroutineUpdateUpgradePercent);
				_coroutineUpdateUpgradePercent = null;
			}
		}

		public void SetHighlight(bool isHighlight)
		{
			if (outlineSelected != null)
			{
				outlineSelected.enabled = isHighlight;
			}
		}

		private void Unlock()
		{
			if (mLock == null)
			{
				return;
			}
			mLock.SetActive(false);
			if (text == null)
			{
				return;
			}
			text.gameObject.SetActive(true);
			if (outline != null)
			{
				outline.enabled = true;
				if (icon != null)
				{
					icon.color = Color.white;
					lineL.color = Color.white;
					lineR.color = Color.white;
					outline.Color = Color.white;
					// TODO(unrecovered): an unidentified virtual call on icon (vtable+0x2c8, argument 1) is not recovered.
					// TODO(unrecovered): the DOPunchScale on this transform uses a static config object (DAT_0918cbd0) whose fields are not in stubs.
				}
			}
		}

		private void Lock()
		{
			if (mLock == null)
			{
				return;
			}
			mLock.SetActive(true);
			if (text == null)
			{
				return;
			}
			text.gameObject.SetActive(false);
			if (outline != null)
			{
				outline.enabled = false;
				if (icon != null)
				{
					icon.color = _lockColor;
					lineL.color = _lockColor;
					lineR.color = _lockColor;
					outline.Color = _lockColor;
					// TODO(unrecovered): an unidentified virtual call on icon (vtable+0x2c8, argument 1) is not recovered.
				}
			}
		}

		private void OnDestroy()
		{
			if (_opLoadMapThumb.IsValid())
			{
				UnityEngine.AddressableAssets.Addressables.Release(_opLoadMapThumb);
			}
			// TODO(unrecovered): unsubscribes OnMapBuildingUnlocked / OnHomeBuildingItemBought from _dataAccess (CakeOrder.SaveProfile events, not in stubs).
		}
	}
}
