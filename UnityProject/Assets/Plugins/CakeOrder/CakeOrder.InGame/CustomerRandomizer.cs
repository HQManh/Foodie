using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CookingGraph;

namespace CakeOrder.InGame
{

public static class CustomerRandomizer
{
	public const float OwnShare = 0.7f;

	public const float PastShare = 0.25f;

	public const float FutureShare = 0.05f;

	public const int NoRepeatWindow = 4;

	public static void Assign(List<CustomerData> customers, string mapId, int seed)
	{
		// Rebuilt from the decompiled code. The database is any loaded CakeOrderDatabaseSO (the original uses a generic static holder).
		if (customers == null)
		{
			return;
		}
		CakeOrderDatabaseSO database = DatabaseApi.Find();
		if (database == null)
		{
			return;
		}
		List<CakeCharacterSO> own = new List<CakeCharacterSO>();
		List<CakeCharacterSO> past = new List<CakeCharacterSO>();
		List<CakeCharacterSO> future = new List<CakeCharacterSO>();
		DatabaseApi.GetRandomCustomerTiers(database, mapId, own, past, future);
		if (own.Count + past.Count + future.Count == 0)
		{
			return;
		}
		Random random = new Random(seed);
		Queue<CakeCharacterSO> recent = new Queue<CakeCharacterSO>();
		foreach (CustomerData customer in customers)
		{
			CakeCharacterSO picked = Pick(random, own, past, future, recent);
			if (customer != null && string.IsNullOrEmpty(customer.customerId))
			{
				customer.customerId = DatabaseApi.IdOf(picked);
			}
			recent.Enqueue(picked);
			while (recent.Count > NoRepeatWindow)
			{
				recent.Dequeue();
			}
		}
	}

	private static CakeCharacterSO Pick(Random random, List<CakeCharacterSO> own, List<CakeCharacterSO> past, List<CakeCharacterSO> future, Queue<CakeCharacterSO> recent)
	{
		float ownWeight = own.Count > 0 ? OwnShare : 0f;
		float pastWeight = past.Count > 0 ? PastShare : 0f;
		float futureWeight = future.Count > 0 ? FutureShare : 0f;
		double roll = random.NextDouble() * (double)(ownWeight + pastWeight + futureWeight);
		List<CakeCharacterSO> tier = own;
		if ((double)ownWeight <= roll)
		{
			tier = future;
			if (roll < (double)(ownWeight + pastWeight))
			{
				tier = past;
			}
		}
		return PickInTier(random, tier, recent);
	}

	private static CakeCharacterSO PickInTier(Random random, List<CakeCharacterSO> tier, Queue<CakeCharacterSO> recent)
	{
		if (tier == null)
		{
			return null;
		}
		List<CakeCharacterSO> candidates = new List<CakeCharacterSO>(tier.Count);
		foreach (CakeCharacterSO character in tier)
		{
			if (!recent.Contains(character))
			{
				candidates.Add(character);
			}
		}
		if (candidates.Count == 0)
		{
			CakeCharacterSO last = LastOf(recent);
			foreach (CakeCharacterSO character in tier)
			{
				if (character != last)
				{
					candidates.Add(character);
				}
			}
			if (candidates.Count == 0)
			{
				candidates.AddRange(tier);
			}
		}
		return candidates[random.Next(candidates.Count)];
	}

	private static CakeCharacterSO LastOf(Queue<CakeCharacterSO> queue)
	{
		CakeCharacterSO last = null;
		if (queue != null)
		{
			foreach (CakeCharacterSO character in queue)
			{
				last = character;
			}
		}
		return last;
	}
}
}
