using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home;

public class UIHomeTabPageMain : UIHomeTabPage
{
	private enum ViewMode
	{
		Locked,
		Preview,
		Normal,
		Details
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__35 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMain _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
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

	[CompilerGenerated]
	private sealed class _003CWaitForFullUpgradeCelebration_003Ed__60 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIHomeTabPageMain _003C_003E4__this;

		object IEnumerator<object>.Current
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
		public _003CWaitForFullUpgradeCelebration_003Ed__60(int _003C_003E1__state)
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

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[SerializeField]
	private RectTransform _mainContainer;

	[SerializeField]
	private UIHomeTabPageMainNormalMode _normalMode;

	[SerializeField]
	private UIHomeTabPageMainDetailsMode _detailsMode;

	[SerializeField]
	private UIHomeTabPageMainLockedMode _lockedMode;

	[SerializeField]
	private UIHomeTabPageMainPreviewMode _previewMode;

	[SerializeField]
	private HomeMapGlobalBackgroundControl _mapGlobalBackground;

	[SerializeField]
	private HomeRestaurantsBuildingControl _buildingViewControl;

	[SerializeField]
	private SwipeDetectUI[] _swipeDetectUIs;

	[SerializeField]
	private Button _btnNextMap;

	[SerializeField]
	private Button _btnPrevMap;

	private ViewMode _currentViewMode;

	[SerializeField]
	private Button[] _btnsToNormalMode;

	[SerializeField]
	private Button[] _btnsToDetailsMode;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAndHapticTriggerOnPlay;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAndHapticTriggerOnGoToPlayMode;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAndHapticTriggerOnGoToDetailsMode;

	[Header("Full Upgrade")]
	[Min(0f)]
	[SerializeField]
	private float _fullUpgradeCelebrationDuration;

	[Tooltip("Wait after returning to Normal mode (congratulation effect) before the completion reward is claimed automatically.")]
	[Min(0f)]
	[SerializeField]
	private float _fullUpgradeAutoClaimDelay;

	private Coroutine _fullUpgradeTransitionCoroutine;

	[Header("Map Completed / Unlocked")]
	[Tooltip("Scene VFX under Building-Container. Moved onto the completed restaurant and played once the loading screen is gone, before Home moves the player on to the next map.")]
	[SerializeField]
	private ParticleSystem _vfxEndRestaurant;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAndHapticTriggerOnEndRestaurant;

	[Tooltip("Scene VFX under Building-Container. Moved onto the restaurant and played when the player taps to unlock it.")]
	[SerializeField]
	private ParticleSystem _vfxFireworkUnlockMap;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAndHapticTriggerOnUnlockMap;

	[Tooltip("Switched off while the restaurant upgrade view (Details mode) is up and back on for the other modes. The live ops floating buttons sit here so they do not cover the upgrade UI.")]
	[SerializeField]
	private GameObject[] _hideInDetailsMode;

	private CanvasGroup _canvasGroup;

	private const string LocToastRequireInternet = "toast_require_internet";

	private bool _isCheckingInternetToPlay;

	public UIHomeTabPageMainNormalMode UINormalMode => null;

	public UIHomeTabPageMainDetailsMode UIDetailsMode => null;

	public HomeRestaurantsBuildingControl BuildingViewControl => null;

	public override bool CanSlide => false;

	private void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__35))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnClickPlay()
	{
	}

	private bool IsRequireInternetToPlaySelectedMap()
	{
		return false;
	}

	private static void CheckInternetConnection(Action<bool> onResult)
	{
	}

	private void PlaySelectedLevel()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnSwipe(Vector2 vector)
	{
	}

	private void OnMapUnlocked(string mapId)
	{
	}

	private void OnSelectedMapChanged()
	{
	}

	private void UpdateMapNavButtons()
	{
	}

	public void ShowNormalMode()
	{
	}

	private void ShowDetailsMode()
	{
	}

	private bool IsSelectedMapUpgradeAllowed()
	{
		return false;
	}

	private void ShowLockedMode()
	{
	}

	private void ShowPreviewMode()
	{
	}

	private MapDataMode GetSelectedMapMode()
	{
		return (MapDataMode)0;
	}

	private void ApplyHideInDetailsMode(ViewMode mode)
	{
	}

	private void ChangeMode(ViewMode mode)
	{
	}

	public void PlayEndRestaurantVfx()
	{
	}

	public void StopEndRestaurantVfx()
	{
	}

	private void PlayUnlockMapVfx()
	{
	}

	private bool PlayVfxOnSelectedBuilding(ParticleSystem vfx)
	{
		return false;
	}

	private void OnFullUpgradeCelebrationRequested()
	{
	}

	[IteratorStateMachine(typeof(_003CWaitForFullUpgradeCelebration_003Ed__60))]
	private IEnumerator WaitForFullUpgradeCelebration()
	{
		return null;
	}

	private void CancelFullUpgradeTransition()
	{
	}

	protected override void ApplyCameraFraming()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}
}
