using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.Home.Map;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home
{

public class UIHomeTabPage : UIElementAbstract
{
	public enum ScreenPosition
	{
		Left,
		Center,
		Right
	}

	[Serializable]
	public class VisualConfig
	{
		public float durationChangeTab;

		public Ease easeChangeTab;

		public RectTransform containerCenter;

		public RectTransform containerLeft;

		public RectTransform containerRight;

		public Vector3 GetLocalOffset(ScreenPosition pos)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(Vector3);
		}
	}

	[Serializable]
	public class SharedData
	{
		public HomeSelectionControl mapControl;

		public WorldMapCameraControl cameraControl;

		public HomeRestaurantsBuildingControl buildingControl;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__27 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPage _003C_003E4__this;

		public HomeControllerCookOrder mainUI;

		public VisualConfig visualConfig;

		public SharedData sharedData;

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

	[SerializeField]
	private RectTransform _mainTransform;

	private VisualConfig _visualConfig;

	private Tween _tweenShowHide;

	private ScreenPosition _beginShowPosition;

	private ScreenPosition _endExitPosition;

	[SerializeField]
	private HomeTabCategory _category;

	[Tooltip("Optional. Horizontal swipes caught here step one tab towards the side the swipe points at, so a page can be left the same way it was entered. Main leaves this empty - its own _swipeDetectUIs runs the map carousel first and only reaches the tab strip at the ends.")]
	[SerializeField]
	private SwipeDetectUI[] _swipeToChangeTab;

	[Tooltip("Same job as the list above, for pages that want the drag recognised while the finger is still down and with no time limit on it. Put one on the page root for the bare areas and one on each ScrollRect object - the drag chain stops at the nearest handler, and a vertical-only ScrollRect ignores the sideways movement anyway.")]
	[SerializeField]
	private DragToChangePageUI[] _dragToChangeTab;

	[Tooltip("Camera framing applied when this tab shows. Size <= 0 leaves the camera untouched (e.g. a tab that drives the camera itself). Ignored by Main - its sub-modes own the framing.")]
	[SerializeField]
	private float _cameraSize;

	[SerializeField]
	private Vector2 _cameraOffsetFromBuilding;

	private readonly List<ScrollRect> _scrollsLockedForSlide = new List<ScrollRect>();

	protected HomeControllerCookOrder _mainUI { get; private set; }

	protected SharedData _sharedData { get; private set; }

	public HomeTabCategory Category => HomeTabCategory.COSMETIC_SHOP;

	protected float DurationChangeTab => 0f;

	public virtual bool CanSlide => false;

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__27))]
	public UniTask SetUp(HomeControllerCookOrder mainUI, VisualConfig visualConfig, SharedData sharedData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected virtual UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void SubscribeSwipeToChangeTab()
	{
	}

	protected void RegisterDragToChangeTab(DragToChangePageUI drag)
	{
	}

	private void OnSwipeToChangeTab(Vector2 delta)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected virtual void ApplyCameraFraming()
	{
	}

	public void SetStartShowPosition(ScreenPosition pos)
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	public void SetExitDestination(ScreenPosition pos)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	private void LockScrollsWhileSliding(bool locked)
	{
	}

	protected void HideElementAfterSlide(Action onDoneAnim, float delay)
	{
	}

	protected override void HideElementImmediate()
	{
	}
}
}
