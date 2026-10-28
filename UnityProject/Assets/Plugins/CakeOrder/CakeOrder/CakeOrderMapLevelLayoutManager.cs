using System;
using System.Collections.Generic;
using EssentialSystemR1;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

[Obsolete]
public class CakeOrderMapLevelLayoutManager : EssentialSystemR1.MonoSingleton<CakeOrderMapLevelLayoutManager>
{
	[Serializable]
	public class MapLayoutConfig
	{
		public string mapId;

		public int numMainLv;

		public int numAdvancedLv;
	}

	// Values read from the static constructor (string literals decoded from the metadata).
	private static readonly R1Logger LocalLogger = new R1Logger
	{
		prefix = "[MapLevelLayoutManager]",
		enableLog = true,
		colorCode = "#ff5733"
	};

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
}
