using System;

namespace CakeOrder;

[Serializable]
public class DirtyObjectConfig
{
	public string id;

	public int maxStack;

	public int[] fromIngredients;

	public bool enabled;

	public DirtyObjectConfig Clone()
	{
		return null;
	}
}
