using System;

namespace CakeOrder
{

[Serializable]
public class GridCellEffectData
{
	public GridEffectType type;

	public int[] paramInts;

	// Inferred alias: the game code reads paramInts as values.
	public int[] values => paramInts;

	public GridCellEffectData Clone()
	{
		return new GridCellEffectData
		{
			type = type,
			paramInts = paramInts != null ? (int[])paramInts.Clone() : null
		};
	}
}
}
