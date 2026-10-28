using System;
using System.Collections.Generic;
using EssentialSystemR1;
using UnityEngine;
using Utilities;

namespace CakeOrder;

[Obsolete]
public class CakeOrderMapLevelLayoutManager : MonoSingleton<CakeOrderMapLevelLayoutManager>
{
	[Serializable]
	public class MapLayoutConfig
	{
		public string mapId;

		public int numMainLv;

		public int numAdvancedLv;
	}

	private static readonly R1Logger LocalLogger;

	[Header("Layout")]
	[SerializeField]
	private List<MapLayoutConfig> _listMapLayoutConfig;

	public int NumMaps => 0;

	public void Initialize()
	{
	}

	public MapLayoutConfig GetMapLayoutConfig(string mapId)
	{
		return null;
	}

	public MapLayoutConfig GetMapLayoutConfig(int index)
	{
		return null;
	}

	public int GetNumMainLv(int mapIndex)
	{
		return 0;
	}

	public int GetNumAdvancedLv(int mapIndex)
	{
		return 0;
	}
}
