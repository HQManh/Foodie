using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

public class MapToolConfig : MonoBehaviour, IMapDataConfig
{
	[Serializable]
	public class ToolData
	{
		// Values read from the static constructor data (metadata).
		public static readonly float[] DefaultSpeedMultipliers = new float[5] { 1f, 1.2f, 1.5f, 1.75f, 2f };

		public static readonly float[] DefaultSpeedOffsets = new float[5];

		public string toolId;

		public float[] speedMultipliers;

		public float[] speedOffsets;

		public int MaxLevel => Math.Max(DefaultSpeedMultipliers.Length, Math.Max(speedMultipliers != null ? speedMultipliers.Length : 0, speedOffsets != null ? speedOffsets.Length : 0));

		public int[] upgradePrices => null;

		public ToolUpgradeStat GetStat(int level)
		{
			int clamped = level < 1 ? 1 : Math.Min(level, MaxLevel);
			int index = clamped - 1;
			float multiplier = speedMultipliers != null && index < speedMultipliers.Length && speedMultipliers[index] > 0f ? speedMultipliers[index] : DefaultAt(DefaultSpeedMultipliers, index);
			float offset = speedOffsets != null && index < speedOffsets.Length ? speedOffsets[index] : DefaultAt(DefaultSpeedOffsets, index);
			return new ToolUpgradeStat { level = clamped, speedMultiplier = multiplier, speedOffset = offset };
		}

		private static float DefaultAt(float[] defaults, int index)
		{
			return defaults[Math.Max(0, Math.Min(index, defaults.Length - 1))];
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

	// The static constructor creates a ToolData whose first field (toolId) is set from a static string global, which is string.Empty.
	private static readonly ToolData DefaultRow = new ToolData { toolId = string.Empty };

	private string _mapId;

	public IReadOnlyList<CakeToolSO> ToolSOs => toolSO;

	public IReadOnlyList<ToolData> ToolDatas => _toolDatas;

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		_mapId = mapId;
		if (remoteConfigStrings != null && remoteConfigStrings.Length != 0 && !string.IsNullOrEmpty(remoteConfigStrings[0]))
		{
			ToolData[] imported = ImportData(remoteConfigStrings[0]);
			if (imported.Length != 0)
			{
				_toolDatas = imported;
			}
		}
		return UniTask.CompletedTask;
	}

	public int GetToolIndex(string id)
	{
		for (int i = 0; i < toolSO.Length; i++)
		{
			if (toolSO[i].Id == id)
			{
				return i;
			}
		}
		return -1;
	}

	public CakeToolSO GetToolSO(int index)
	{
		return index >= 0 && index < toolSO.Length ? toolSO[index] : null;
	}

	public CakeToolSO GetToolSO(string id)
	{
		foreach (CakeToolSO tool in toolSO)
		{
			if (tool.Id == id)
			{
				return tool;
			}
		}
		return null;
	}

	public ToolData GetToolData(int index)
	{
		return GetToolData(index >= 0 && index < toolSO.Length ? toolSO[index].Id : null);
	}

	public ToolData GetToolData(string toolId)
	{
		if (!string.IsNullOrEmpty(toolId) && _toolDatas != null)
		{
			foreach (ToolData data in _toolDatas)
			{
				if (data != null && data.toolId == toolId)
				{
					return data;
				}
			}
		}
		return DefaultRow;
	}

	public ToolUpgradeStat GetUpgradeStat(string toolId, int level)
	{
		return GetToolData(toolId).GetStat(level);
	}

	public IEnumerable<string> EnumerateToolIds()
	{
		HashSet<string> seen = new HashSet<string>();
		foreach (ToolData data in _toolDatas)
		{
			if (data != null && !string.IsNullOrEmpty(data.toolId) && seen.Add(data.toolId))
			{
				yield return data.toolId;
			}
		}
		foreach (CakeToolSO tool in toolSO)
		{
			if (tool != null && !string.IsNullOrEmpty(tool.Id) && seen.Add(tool.Id))
			{
				yield return tool.Id;
			}
		}
	}

	private ToolData[] ImportData(string data)
	{
		// tools are separated by '|', fields by ';': toolId;speedMultipliers;speedOffsets (lists separated by ',')
		List<ToolData> tools = new List<ToolData>();
		foreach (StringExtension.StringSplitEntry toolEntry in data.SplitNonAlloc('|'))
		{
			if (toolEntry.Str.Length == 0)
			{
				continue;
			}
			ToolData tool = new ToolData();
			int field = 0;
			foreach (StringExtension.StringSplitEntry fieldEntry in toolEntry.SplitNonAlloc(';'))
			{
				switch (field)
				{
				case 0:
					tool.toolId = fieldEntry.Str.ToString().Trim();
					break;
				case 1:
					tool.speedMultipliers = ParseFloatList(fieldEntry.Str.ToString(), 1f);
					break;
				case 2:
					tool.speedOffsets = ParseFloatList(fieldEntry.Str.ToString(), 0f);
					break;
				}
				field++;
			}
			if (string.IsNullOrEmpty(tool.toolId))
			{
				UnityEngine.Debug.LogWarning("[MapToolConfig] Skipping tool entry without id: " + toolEntry.Str.ToString());
				continue;
			}
			if (field < 3)
			{
				tool.speedOffsets = new float[tool.speedMultipliers.Length];
			}
			tools.Add(tool);
		}
		return tools.ToArray();
	}

	private static float[] ParseFloatList(string text, float fallback)
	{
		List<float> values = new List<float>();
		if (text != null)
		{
			foreach (string part in text.Split(','))
			{
				string trimmed = part.Trim();
				if (trimmed.Length == 0)
				{
					continue;
				}
				if (float.TryParse(trimmed, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out float value))
				{
					values.Add(value);
				}
				else
				{
					UnityEngine.Debug.LogWarning("[MapToolConfig] Cannot parse '" + trimmed + "' as float, using " + fallback);
					values.Add(fallback);
				}
			}
		}
		return values.ToArray();
	}
}
}
