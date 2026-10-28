using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class GridCellData
{
	public List<EffectData> effects;

	public bool IsBlank => false;

	public bool Has(CellStatusId status)
	{
		return false;
	}
}
