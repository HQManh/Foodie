using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.Model;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder.DataSO
{

public class MapUpgradeConfig : MonoBehaviour, IMapDataConfig
{
	[Serializable]
	public class UpgradeItemConfig
	{
		public string id;

		public int price;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadTopologyAsync_003Ed__40 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MapUpgradeConfig _003C_003E4__this;

		private UnityEngine.Awaitable<BuildingUpgradeTopologySO>.Awaiter _003C_003Eu__1;

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
	private struct _003CSetUpAsync_003Ed__41 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MapUpgradeConfig _003C_003E4__this;

		public string mapId;

		public bool loadTopology;

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
	private UpgradeItemConfig[] _itemConfigs;

	[SerializeField]
	private AssetReferenceT<BuildingUpgradeTopologySO> _assetTopology;

	[Tooltip("Paid when the last base (the reward milestone) is built.")]
	[SerializeField]
	private ItemPackDataGroup _rewardFullUpgrade;

	[Tooltip("Paid when every item is owned.")]
	[SerializeField]
	private ItemPackDataGroup _rewardAllItems;

	private string _mapId;

	private BuildingUpgradeTopologySO _topologyAsset;

	private AsyncOperationHandle<BuildingUpgradeTopologySO> _topologyHandle;

	private readonly HashSet<string> _deferredPartRevealIds = new HashSet<string>();

	private static readonly HashSet<string> _boughtLookup = new HashSet<string>();

	public BuildingUpgradeTopologySO Topology => null;

	public string MapId => null;

	public ItemPackDataGroup RewardFullUpgrade => null;

	public ItemPackDataGroup RewardAllItems => null;

	private bool HasTopology => false;

	public int NumBaseGroups => 0;

	public event Action<BuildingUpgradePartSO> onPartUpgraded;

	public event Action onUpgradeStateReloaded;

	public bool IsUpgradeRewardPending()
	{
		return false;
	}

	public bool IsAllUpgradeRewardsClaimed()
	{
		return false;
	}

	public int GetTotalUpgradeItemCount()
	{
		return 0;
	}

	public IEnumerable<BuildingUpgradePartSO> EnumerateAllParts()
	{
		return null;
	}

	public BuildingUpgradePartSO GetPartById(string id)
	{
		return null;
	}

	public bool IsBasePart(BuildingUpgradePartSO part)
	{
		return false;
	}

	public BuildingUpgradePartSO GetBasePartOfGroup(int groupIndex)
	{
		return null;
	}

	public int GetGroupIndexOfPart(BuildingUpgradePartSO part)
	{
		return 0;
	}

	public int GetGroupIndexOfBase(BuildingUpgradePartSO basePart)
	{
		return 0;
	}

	public IEnumerable<BuildingUpgradePartSO> EnumerateDecorationPartsUpToGroup(int groupIndex)
	{
		return null;
	}

	public UpgradeItemConfig GetItemConfigById(string id)
	{
		return null;
	}

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public UniTask SetUpWithoutTopology(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadTopologyAsync_003Ed__40))]
	private UniTask LoadTopologyAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSetUpAsync_003Ed__41))]
	private UniTask SetUpAsync(string mapId, bool loadTopology, string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	private void OnMapBuildingUnlocked(string mapId)
	{
	}

	public void EnsureFirstBaseGranted()
	{
	}

	private void OnHomeBuildingItemBought(string mapId, string itemId)
	{
	}

	private void SyncToolLevels(string onlyToolId = null)
	{
	}

	public int GetToolUpgradePartCount(string toolId)
	{
		return 0;
	}

	public bool DeferPartReveal(string itemId)
	{
		return false;
	}

	public void RevealDeferredPart(string itemId)
	{
	}

	private void WarnAboutPartsWithoutConfig()
	{
	}

	private HashSet<string> GetBoughtLookup()
	{
		return null;
	}

	public int CountBuiltItems()
	{
		return 0;
	}

	public bool IsFullyUpgraded()
	{
		return false;
	}

	public BuildingUpgradePartSO GetRewardMilestonePart()
	{
		return null;
	}

	public bool IsRewardMilestonePart(BuildingUpgradePartSO part)
	{
		return false;
	}

	public bool IsRewardMilestoneReached()
	{
		return false;
	}

	public int GetRewardMilestoneItemCount()
	{
		return 0;
	}

	public int CountBuiltItemsUpToRewardMilestone()
	{
		return 0;
	}

	private int CountItemsUpToMilestone(HashSet<string> onlyOwned)
	{
		return 0;
	}

	private void SyncRewardMilestone()
	{
	}

	public int GetCurrentBaseLevel()
	{
		return 0;
	}

	public bool IsHaveUpgradeAvailable()
	{
		return false;
	}

	public List<KeyValuePair<BuildingUpgradePartSO, UpgradeItemConfig>> GetUpgradableParts()
	{
		return null;
	}

	private void AddIfHasConfig(List<KeyValuePair<BuildingUpgradePartSO, UpgradeItemConfig>> result, BuildingUpgradePartSO part)
	{
	}

	public bool IsPartUpgradable(BuildingUpgradePartSO part)
	{
		return false;
	}

	[Obsolete]
	public int GetCurrentRestaurantStat(RestaurantUpgradeStat stat)
	{
		return 0;
	}

	[Obsolete]
	public Dictionary<RestaurantUpgradeStat, int> GetCurrentRestaurantStats()
	{
		return null;
	}

	private UpgradeItemConfig[] ImportConfigs(string data)
	{
		return null;
	}
}
}
