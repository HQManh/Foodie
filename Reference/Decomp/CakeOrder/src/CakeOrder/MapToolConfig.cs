using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace CakeOrder;

public class MapToolConfig : MonoBehaviour, IMapDataConfig
{
	[Serializable]
	public class ToolData
	{
		public static readonly float[] DefaultSpeedMultipliers;

		public static readonly float[] DefaultSpeedOffsets;

		public string toolId;

		public float[] speedMultipliers;

		public float[] speedOffsets;

		public int MaxLevel => 0;

		public int[] upgradePrices => null;

		public ToolUpgradeStat GetStat(int level)
		{
			return default(ToolUpgradeStat);
		}

		private static float DefaultAt(float[] defaults, int index)
		{
			return 0f;
		}
	}

	[CompilerGenerated]
	private sealed class _003CEnumerateToolIds_003Ed__16 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private string _003C_003E2__current;

		private int _003C_003El__initialThreadId;

		public MapToolConfig _003C_003E4__this;

		private HashSet<string> _003Cseen_003E5__2;

		private ToolData[] _003C_003E7__wrap2;

		private int _003C_003E7__wrap3;

		private CakeToolSO[] _003C_003E7__wrap4;

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
		public _003CEnumerateToolIds_003Ed__16(int _003C_003E1__state)
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

	[SerializeField]
	private CakeToolSO[] toolSO;

	[SerializeField]
	private ToolData[] _toolDatas;

	private static readonly ToolData DefaultRow;

	private string _mapId;

	public IReadOnlyList<CakeToolSO> ToolSOs => null;

	public IReadOnlyList<ToolData> ToolDatas => null;

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public int GetToolIndex(string id)
	{
		return 0;
	}

	public CakeToolSO GetToolSO(int index)
	{
		return null;
	}

	public CakeToolSO GetToolSO(string id)
	{
		return null;
	}

	public ToolData GetToolData(int index)
	{
		return null;
	}

	public ToolData GetToolData(string toolId)
	{
		return null;
	}

	public ToolUpgradeStat GetUpgradeStat(string toolId, int level)
	{
		return default(ToolUpgradeStat);
	}

	[IteratorStateMachine(typeof(_003CEnumerateToolIds_003Ed__16))]
	public IEnumerable<string> EnumerateToolIds()
	{
		return null;
	}

	private ToolData[] ImportData(string data)
	{
		return null;
	}

	private static float[] ParseFloatList(string text, float fallback)
	{
		return null;
	}
}
