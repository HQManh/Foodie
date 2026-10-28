using System;
using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

public class LevelGridConfig : MonoBehaviour
{
	[SerializeField]
	private GridCellEffectData[] _gridData;

	public GridCellEffectData[] GridData => _gridData;

	public void Clear()
	{
		_gridData = null;
	}

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
		if (!config.IsEmpty)
		{
			GridCellEffectData[] data = ImportQueueData(config);
			if (data == null)
			{
				Debug.LogWarning("[LevelGridConfig] grid data could not be parsed"); // literal recovered by guess
			}
			else
			{
				_gridData = data;
			}
		}
	}

	public static GridCellEffectData[] ParseGridData(ReadOnlySpan<char> data)
	{
		if (!data.IsEmpty)
		{
			return ImportQueueData(data);
		}
		return Array.Empty<GridCellEffectData>();
	}

	private static GridCellEffectData[] ImportQueueData(ReadOnlySpan<char> data)
	{
		List<GridCellEffectData> cells = new List<GridCellEffectData>();
		foreach (StringExtension.StringSplitEntry cell in data.SplitNonAlloc(','))
		{
			cells.Add(ParseCellData(cell));
		}
		return cells.ToArray();
	}

	// A cell reads "<cell>#<Type>:<param>:<param>..." - the text before '#' is ignored, the type is an enum name.
	private static GridCellEffectData ParseCellData(ReadOnlySpan<char> singleCellDataStr)
	{
		if (singleCellDataStr.IsEmpty)
		{
			return new GridCellEffectData();
		}
		int type = -1;
		List<int> values = new List<int>();
		int segmentIndex = 0;
		foreach (StringExtension.StringSplitEntry segment in singleCellDataStr.SplitNonAlloc('#'))
		{
			if (segmentIndex++ != 1)
			{
				continue;
			}
			int tokenIndex = 0;
			foreach (StringExtension.StringSplitEntry token in segment.SplitNonAlloc(':'))
			{
				if (tokenIndex == 0)
				{
					if (token.TryParseEnum(out GridEffectType parsed, true))
					{
						type = (int)parsed;
					}
				}
				else if (token.TryParseInt(out int value))
				{
					values.Add(value);
				}
				else
				{
					Debug.LogWarningFormat("[LevelGridConfig] bad cell parameter '{0}' in '{1}'", token.Str.ToString(), singleCellDataStr.ToString()); // literal recovered by guess
				}
				tokenIndex++;
			}
			break;
		}
		if (type == -1)
		{
			Debug.LogWarningFormat("[LevelGridConfig] cell '{0}' has no valid type", singleCellDataStr.ToString()); // literal recovered by guess
			return new GridCellEffectData();
		}
		return new GridCellEffectData
		{
			type = (GridEffectType)type,
			paramInts = values.ToArray()
		};
	}
}
}
