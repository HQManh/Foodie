using System;

namespace CakeOrder.CakeOrderSubsystem;

[Serializable]
public class MapMetadata
{
	public string mapId;

	public int numLevels;

	public int numRequiredLevels;

	public int gridColumns;

	public int gridRows;

	public int visibleRows;

	public int mode;
}
