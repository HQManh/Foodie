using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home;

public abstract class HomeMapBuildingBase : MonoBehaviour, IMapDataConfig
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetLevelConfig_003Ed__40 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeMapBuildingBase _003C_003E4__this;

		public SingleLevelMetadata levelConfig;

		public int levelIndex;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpAfterSpawn_003Ed__39 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeMapBuildingBase _003C_003E4__this;

		public string mapId;

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

	private SingleLevelMetadata _levelConfig;

	[SerializeField]
	private InGameBackgroundsControl _backgroundControl;

	public const float VisibleWidth = 12f;

	[SerializeField]
	private ParticleSystem particleFullUpgrade;

	public string MapId { get; protected set; }

	public SingleLevelMetadata LevelConfig => null;

	public int LevelIndex { get; private set; }

	public int CurrentBaseLevel { get; protected set; }

	protected MapUpgradeConfig UpgradeConfig { get; private set; }

	public bool IsFullyUpgraded => false;

	public float UpgradeProgress => 0f;

	public event Action onLevelConfigChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<BuildingUpgradePartSO> onPartPresented
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action onCelebrationRequested
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public bool IsRewardMilestonePart(BuildingUpgradePartSO part)
	{
		return false;
	}

	public virtual void PlayFullUpgradeConfetti(float duration)
	{
	}

	public void PlayFirework()
	{
	}

	public void PlayCelebration(bool isWithFirework = true)
	{
	}

	[AsyncStateMachine(typeof(_003CSetUpAfterSpawn_003Ed__39))]
	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSetLevelConfig_003Ed__40))]
	public UniTask SetLevelConfig(SingleLevelMetadata levelConfig, int levelIndex = -1)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected abstract UniTask OnSetup();

	protected abstract void SetBuildingTint(Color color);

	public void BindUpgradeConfig(MapUpgradeConfig upgradeConfig)
	{
	}

	protected virtual void OnDestroy()
	{
	}

	private void OnPartUpgraded(BuildingUpgradePartSO part)
	{
	}

	public void RefreshFromConfig()
	{
	}

	public abstract void ApplyUpgradeState(int baseLevel, IReadOnlyList<string> boughtPartIds);

	public abstract void SetBaseLevel(int baseLevel, bool animate);

	public abstract void ShowPart(BuildingUpgradePartSO part, bool animate);

	public abstract void Show();

	public abstract void Hide();

	public abstract void ShowImmediate();

	public abstract void HideImmediate();

	public abstract Vector3 GetPartWorldPosition(BuildingUpgradePartSO part);

	public virtual Transform GetPartDestinationTransform(BuildingUpgradePartSO part)
	{
		return null;
	}
}
