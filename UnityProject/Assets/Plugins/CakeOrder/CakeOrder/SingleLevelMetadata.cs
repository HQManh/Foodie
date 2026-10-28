using System;
using CakeOrder.DataSO;

namespace CakeOrder
{

[Serializable]
public class SingleLevelMetadata
{
	public WeatherEffect weatherEffect;

	public LevelDifficultyTag difficultyTag;

	public int numCustomers;

	public int numDishs;

	public int numIngredients;

	public string tutId;

	public SingleLevelMetadata Clone()
	{
		return null;
	}
}
}
