using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home
{

public class HomeRestaurantsBuildingControl : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEWaitLoadThenMoveCamera_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeRestaurantsBuildingControl _003C_003E4__this;

		private SingleHomeMapDataCache.SharedPrefabLoader<HomeMapBuildingBase> _003CmainLoader_003E5__2;

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
		public _003CIEWaitLoadThenMoveCamera_003Ed__52(int _003C_003E1__state)
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadAndSetUpBuildings_003Ed__50 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeRestaurantsBuildingControl _003C_003E4__this;

		public int index;

		private SingleHomeMapDataCache _003CcacheData_003E5__2;

		private HomeMapBuildingBase _003Cbuilding_003E5__3;

		private MapLevelMetadataConfig _003ClevelPathData_003E5__4;

		private MapUpgradeConfig _003CupgradeConfigData_003E5__5;

		private UnityEngine.Awaitable<HomeMapBuildingBase>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__2;

		private UnityEngine.Awaitable<MapUpgradeConfig>.Awaiter _003C_003Eu__3;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__4;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayCelebrationOnSelectedWhenReady_003Ed__31 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public HomeRestaurantsBuildingControl _003C_003E4__this;

		public bool isWithFirework;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__25 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeRestaurantsBuildingControl _003C_003E4__this;

		public HomeSelectionControl mapControl;

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

	[Header("Spawn")]
	[SerializeField]
	private Transform _buildingContainer;

	private Coroutine _corWaitLoadThenMoveCamera;

	[Header("Camera")]
	[SerializeField]
	private Camera viewCamera;

	[SerializeField]
	private Vector2 cameraOffsetToBuilding;

	[SerializeField]
	private float cameraSize;

	[SerializeField]
	private float transitionDuration;

	[SerializeField]
	private Ease transitionEase;

	[SerializeField]
	private int _preloadRange;

	[Tooltip("World distance between the two restaurants of a map change, whatever maps they are - so a jump over several maps pans the same as a step to the next one, with nothing in between.")]
	[SerializeField]
	private float _mapSpacing;

	[Tooltip("Fog overlay for map-to-map pans. Kept inactive and only switched on while a pan runs.")]
	[SerializeField]
	private HomeMapTransitionFog _transitionFog;

	private bool _isCameraMoving;

	private int _shownMapIndex;

	private float _shownBuildingX;

	private int _fromMapIndex;

	private float _fromBuildingX;

	private float? _framingSize;

	private Vector2 _framingOffset;

	[Header("Sections")]
	private HomeSelectionControl _mapControl;

	private Tween _cameraTween;

	[Header("Fx")]
	[SerializeField]
	private SfxAndHapticTrigger _fxAndHapticTriggerDoneMap;

	[SerializeField]
	private SfxAndHapticTrigger _fxAndHapticTriggerUnlockedBuilding;

	public BoolModifierWithRegisteredSource BlockCameraControl { get; private set; }

	public Camera ViewCamera => null;

	public bool IsSelectedBuildingReady => false;

	public bool IsMapTransitioning => false;

	public int MapTransitionFromIndex => 0;

	public int MapTransitionToIndex => 0;

	public int MapTransitionDirection => 0;

	public float MapTransitionProgress => 0f;

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__25))]
	public UniTask SetUp(HomeSelectionControl mapControl)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private HomeMapBuildingBase FindLoadedBuilding(string mapId)
	{
		return null;
	}

	public bool TryGetPartWorldPosition(string mapId, BuildingUpgradePartSO part, out Vector3 worldPosition)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		worldPosition = default(Vector3);
		return false;
	}

	public bool TryGetPartDestinationTransform(string mapId, BuildingUpgradePartSO part, out Transform destination)
	{
		destination = null;
		return false;
	}

	[AsyncStateMachine(typeof(_003CPlayCelebrationOnSelectedWhenReady_003Ed__31))]
	public UniTaskVoid PlayCelebrationOnSelectedWhenReady(bool isWithFirework = true)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	public HomeMapBuildingBase GetLoadedBuilding(int mapIndex)
	{
		return null;
	}

	private bool IsBuildingShownNow(int mapIndex)
	{
		return false;
	}

	private void BeginMapTransition(int targetMapIndex)
	{
	}

	private void ApplyBuildingLayout()
	{
	}

	private void EndMapTransition()
	{
	}

	private void OnSelectedMapChanged()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadAndSetUpBuildings_003Ed__50))]
	private UniTask LoadAndSetUpBuildings(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void RequestMoveCamera(bool ignoreBlock = false)
	{
	}

	[IteratorStateMachine(typeof(_003CIEWaitLoadThenMoveCamera_003Ed__52))]
	private IEnumerator IEWaitLoadThenMoveCamera()
	{
		return null;
	}

	private void OnCameraMoveComplete()
	{
	}

	private void OnBlockCameraControlChanged()
	{
	}

	public void SetCameraFraming(float size, Vector2 offset)
	{
	}

	private void OnSelectedLevelChanged()
	{
	}

	private float GetViewportWorldWidth()
	{
		return 0f;
	}

	private Vector3 GetBuildingPosition(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private Vector3 GetCameraTargetForIndex(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private float GetCameraSize()
	{
		return 0f;
	}

	private void OnDestroy()
	{
	}

	public void ShowImmediate()
	{
	}

	public void HideImmediate()
	{
	}
}
}
