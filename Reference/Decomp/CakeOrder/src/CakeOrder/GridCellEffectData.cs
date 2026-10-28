using System;

namespace CakeOrder;

[Serializable]
public class GridCellEffectData
{
	public GridEffectType type;

	public int[] paramInts;

	public GridCellEffectData Clone()
	{
		return null;
	}
}
