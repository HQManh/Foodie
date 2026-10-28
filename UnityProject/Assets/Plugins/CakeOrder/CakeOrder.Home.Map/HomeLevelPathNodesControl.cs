using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home.Map
{

public class HomeLevelPathNodesControl : MonoBehaviour
{
	[Serializable]
	public class VisualConfig
	{
		public int maxNodeSpawnEachFrame;

		public int maxLinkSpawnEachFrame;

		public float delayShowNodes;

		public float delayBetweenNodes;

		public float delayShowLinkAfterNode;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSpawnAndShowLevelNodes_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeLevelPathNodesControl _003C_003E4__this;

		private float _003CfarestPreconfigPositions_003E5__2;

		private float _003CdistanceScale_003E5__3;

		private float _003CadditionNodeStep_003E5__4;

		private int _003CnodesSpawnedThisFrame_003E5__5;

		private int _003ClinksSpawnedThisFrame_003E5__6;

		private int _003ClvIndex_003E5__7;

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

	[Header("Level Nodes")]
	[SerializeField]
	private Transform _levelNodesContainer;

	[SerializeField]
	private HomeLevelNode _prefabLevelNode;

	[SerializeField]
	private HomeLevelLink _prefabLevelLink;

	[SerializeField]
	private HomeLevelNode.VisualConfig _levelNodeVisualConfig;

	[SerializeField]
	private HomeLevelLink.VisualConfig _levelLinkVisualConfig;

	[Header("Node Positions")]
	[SerializeField]
	private Vector3[] _nodePositions;

	[SerializeField]
	private float _paddingBottom;

	[SerializeField]
	private float _paddingTop;

	private HomeLevelNode[] _spawnedNodes;

	private HomeLevelLink[] _spawnedLinks;

	private bool _isShownFirstTime;

	private float _mapSectionLength;

	private VisualConfig _config;

	private bool _isShowing;

	private bool _isSpawning;

	private Coroutine _corShowNode;

	private Coroutine _corShowLink;

	public string MapId { get; private set; }

	public int NumLevels { get; private set; }

	public event Action<int> onSelectLevelNode;

	public event Action onDoneShowAllLevelNodes;

	internal void SetUp(string mapId, float mapSectionLength, int numLevels, VisualConfig visualConfig)
	{
	}

	[AsyncStateMachine(typeof(_003CSpawnAndShowLevelNodes_003Ed__33))]
	internal UniTask SpawnAndShowLevelNodes()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnSelectNode(HomeLevelNode node)
	{
	}

	private void ShowLevelNodes()
	{
	}

	public HomeLevelNode GetNode(int nodeIndex)
	{
		return null;
	}

	public Vector3 GetNodePosition(int nodeIndex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	internal void HideLevelNodes()
	{
	}
}
}
