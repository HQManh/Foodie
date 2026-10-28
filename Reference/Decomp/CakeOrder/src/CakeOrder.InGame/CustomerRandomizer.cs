using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CookingGraph;

namespace CakeOrder.InGame;

public static class CustomerRandomizer
{
	public const float OwnShare = 0.7f;

	public const float PastShare = 0.25f;

	public const float FutureShare = 0.05f;

	public const int NoRepeatWindow = 4;

	public static void Assign(List<CustomerData> customers, string mapId, int seed)
	{
	}

	private static CakeCharacterSO Pick(Random random, List<CakeCharacterSO> own, List<CakeCharacterSO> past, List<CakeCharacterSO> future, Queue<CakeCharacterSO> recent)
	{
		return null;
	}

	private static CakeCharacterSO PickInTier(Random random, List<CakeCharacterSO> tier, Queue<CakeCharacterSO> recent)
	{
		return null;
	}

	private static CakeCharacterSO LastOf(Queue<CakeCharacterSO> queue)
	{
		return null;
	}
}
