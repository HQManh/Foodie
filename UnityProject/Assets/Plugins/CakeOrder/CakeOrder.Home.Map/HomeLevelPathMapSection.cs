using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.Rendering;

namespace CakeOrder.Home.Map
{

public class HomeLevelPathMapSection : MonoBehaviour, IMapDataConfig
{
	public enum LevelOfDetailMode
	{
		Undefined,
		Disable,
		NearCamera,
		Minimal,
		FullDetails
	}

	[Serializable]
	public class LevelOfDetailConfig
	{
		public float distanceNearCamera;

		public float extrudeCameraVisibleSize;

		public float cameraSizeShowMapDetailsThreshold;

		public HomeLevelPathNodesControl.VisualConfig levelNodesVisualConfig;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__36 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeLevelPathMapSection _003C_003E4__this;

		public int mapIndex;

		public Camera viewCamera;

		public LevelOfDetailConfig levelOfDetailConfig;

		public MapLevelMetadataConfig levelPathConfig;

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
	private float _sectionLength;

	[SerializeField]
	private float _sectionWidth;

	[SerializeField]
	private float _initZoomDistance;

	[Header("References")]
	[SerializeField]
	private Transform _mainTransform;

	[SerializeField]
	private HomeLevelPathNodesControl _nodesControl;

	[SerializeField]
	private SortingGroup _sortingGroup;

	[Header("Visuals")]
	[SerializeField]
	private Transform _groundContainer;

	[SerializeField]
	private Transform _minimalVisualContainer;

	[SerializeField]
	private Transform _fullDetailsVisualContainer;

	private LevelOfDetailConfig _levelOfDetailConfig;

	private Camera _viewCamera;

	private LevelOfDetailMode _levelOfDetailMode;

	private bool _isShow;

	public string MapId { get; private set; }

	public int MapIndex { get; private set; }

	public float SectionLength => 0f;

	public float SectionWidth => 0f;

	public Vector3 InitZoomPosition => default(Vector3);

	public event Action<HomeLevelPathMapSection, int> onSelectLevelNode;

	public event Action<HomeLevelPathMapSection> onLevelNodesDoneLoaded;

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__36))]
	public UniTask SetUp(int mapIndex, MapLevelMetadataConfig levelPathConfig, Camera viewCamera, LevelOfDetailConfig levelOfDetailConfig)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void SetPosition(float posY)
	{
	}

	public Vector3 GetNodePosition(int nodeIndex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public HomeLevelNode GetNode(int nodeIndex)
	{
		return null;
	}

	public bool IsLevelInsideView(int levelIndex)
	{
		return false;
	}

	private void LateUpdate()
	{
	}

	private void UpdateLevelOfDetails(LevelOfDetailMode mode)
	{
	}

	public void Show()
	{
	}

	public void Hide()
	{
	}
}
}
