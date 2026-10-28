using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class GridLayoutData
{
	public List<GridCellData> cells;

	public int width;

	public int height;

	public bool HasDimensions => false;

	public int IndexOf(int x, int y)
	{
		return 0;
	}

	public GridCellData CellAt(int x, int y)
	{
		return null;
	}
}
