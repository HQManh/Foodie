using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "BuildingUpgradeTopology-", menuName = "ScriptableObjects/CakeOrder/Building Upgrade Topology", order = 2)]
public class BuildingUpgradeTopologySO : ScriptableObject
{
	[Serializable]
	public class UpgradePartSequence
	{
		public BuildingUpgradePartSO[] parts;
	}

	[Serializable]
	public class BaseWithFollowingUpgrades
	{
		public BuildingUpgradePartSO baseItem;

		public UpgradePartSequence[] followingUpgradeSequences;
	}

	[CompilerGenerated]
	private sealed class _003CEnumerateAllParts_003Ed__9 : IEnumerable<BuildingUpgradePartSO>, IEnumerable, IEnumerator<BuildingUpgradePartSO>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private BuildingUpgradePartSO _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		public BuildingUpgradeTopologySO _003C_003E4__this;

		private BaseWithFollowingUpgrades[] _003C_003E7__wrap1;

		private int _003C_003E7__wrap2;

		private BaseWithFollowingUpgrades _003Cgroup_003E5__4;

		private UpgradePartSequence[] _003C_003E7__wrap4;

		private int _003C_003E7__wrap5;

		private BuildingUpgradePartSO[] _003C_003E7__wrap6;

		private int _003C_003E7__wrap7;

		BuildingUpgradePartSO IEnumerator<BuildingUpgradePartSO>.Current
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
		public _003CEnumerateAllParts_003Ed__9(int _003C_003E1__state)
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

		[DebuggerHidden]
		IEnumerator<BuildingUpgradePartSO> IEnumerable<BuildingUpgradePartSO>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	[CompilerGenerated]
	private sealed class _003CEnumerateDecorationPartsUpToGroup_003Ed__15 : IEnumerable<BuildingUpgradePartSO>, IEnumerable, IEnumerator<BuildingUpgradePartSO>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private BuildingUpgradePartSO _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		public BuildingUpgradeTopologySO _003C_003E4__this;

		private int groupIndex;

		public int _003C_003E3__groupIndex;

		private int _003Cg_003E5__2;

		private UpgradePartSequence[] _003C_003E7__wrap2;

		private int _003C_003E7__wrap3;

		private BuildingUpgradePartSO[] _003C_003E7__wrap4;

		private int _003C_003E7__wrap5;

		BuildingUpgradePartSO IEnumerator<BuildingUpgradePartSO>.Current
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
		public _003CEnumerateDecorationPartsUpToGroup_003Ed__15(int _003C_003E1__state)
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

		[DebuggerHidden]
		IEnumerator<BuildingUpgradePartSO> IEnumerable<BuildingUpgradePartSO>.GetEnumerator()
		{
			return null;
		}

		[DebuggerHidden]
		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	[Tooltip("The map this topology belongs to - used to locate that map's texture folder when generating building art.")]
	public string mapId;

	public BaseWithFollowingUpgrades[] groupWithBases;

	public bool HasGroups => false;

	public int NumBaseGroups => 0;

	public BuildingUpgradePartSO GetBasePartOfGroup(int groupIndex)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CEnumerateAllParts_003Ed__9))]
	public IEnumerable<BuildingUpgradePartSO> EnumerateAllParts()
	{
		return null;
	}

	public int GetTotalUpgradeItemCount()
	{
		return 0;
	}

	public BuildingUpgradePartSO GetPartById(string id)
	{
		return null;
	}

	public bool IsBasePart(BuildingUpgradePartSO part)
	{
		return false;
	}

	public int GetGroupIndexOfBase(BuildingUpgradePartSO basePart)
	{
		return 0;
	}

	public int GetGroupIndexOfPart(BuildingUpgradePartSO part)
	{
		return 0;
	}

	[IteratorStateMachine(typeof(_003CEnumerateDecorationPartsUpToGroup_003Ed__15))]
	public IEnumerable<BuildingUpgradePartSO> EnumerateDecorationPartsUpToGroup(int groupIndex)
	{
		return null;
	}
}
