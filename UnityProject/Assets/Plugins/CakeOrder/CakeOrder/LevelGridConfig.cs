using System;
using UnityEngine;

namespace CakeOrder
{

public class LevelGridConfig : MonoBehaviour
{
	[SerializeField]
	private GridCellEffectData[] _gridData;

	public GridCellEffectData[] GridData => null;

	public void Clear()
	{
	}

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
	}

	public static GridCellEffectData[] ParseGridData(ReadOnlySpan<char> data)
	{
		return null;
	}

	private static GridCellEffectData[] ImportQueueData(ReadOnlySpan<char> data)
	{
		return null;
	}

	private static GridCellEffectData ParseCellData(ReadOnlySpan<char> singleCellDataStr)
	{
		return null;
	}
}
}
