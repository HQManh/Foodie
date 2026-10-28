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
		return new SingleLevelMetadata
		{
			weatherEffect = weatherEffect,
			difficultyTag = difficultyTag,
			numCustomers = numCustomers,
			numDishs = numDishs,
			numIngredients = numIngredients,
			tutId = tutId
		};
	}
}
}
