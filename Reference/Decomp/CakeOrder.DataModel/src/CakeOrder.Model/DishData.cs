using System;
using System.Collections.Generic;

namespace CakeOrder.Model;

[Serializable]
public class DishData
{
	public int price;

	public HashSet<string> ingredients { get; private set; }

	public HashSet<string> tags { get; private set; }

	public Dictionary<string, int> dataInt { get; private set; }

	public Dictionary<string, float> dataFloat { get; private set; }

	public Dictionary<string, string> dataString { get; private set; }

	public void AddIngredient(string ingredientId, int price, string tags)
	{
	}

	public void AddTag(params string[] tags)
	{
	}
}
