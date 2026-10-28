using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;

namespace _GAME.SaveGame;

public static class SaveGameStats
{
	[Serializable]
	public class Block
	{
		public int sv;

		public Dictionary<string, decimal> pp;

		public Dictionary<string, int> bk;

		public JObject us;
	}

	public const int SchemaVersion = 1;

	private static readonly string[] IntPrefs;

	private static readonly string[] DecimalPrefs;

	private const string BucketPrefPrefix = "buck_iaa_";

	private static readonly string[] SumFields;

	private static readonly string[] MaxFields;

	private const string RevenueField = "iapRevenueByCurrency";

	private const string RevenuePrefix = "iapRevenue:";

	private const string TransactionsField = "processedIapTransactionIds";

	private const int MaxTransactions = 100;

	private static string BaseKey(string serverId)
	{
		return null;
	}

	public static Block BuildForUpload(Block server, string serverId, out Dictionary<string, decimal> newBase)
	{
		newBase = null;
		return null;
	}

	public static void ApplyOnDownload(Block server, string serverId)
	{
	}

	public static void SaveBase(string serverId, Dictionary<string, decimal> counters)
	{
	}

	private static Dictionary<string, decimal> LoadBase(string serverId)
	{
		return null;
	}

	private static Dictionary<string, decimal> ReadCounters(out JObject us)
	{
		us = null;
		return null;
	}

	private static JObject ReadStoredUserState()
	{
		return null;
	}

	private static Dictionary<string, decimal> Counters(Block block, JObject us)
	{
		return null;
	}

	private static Dictionary<string, decimal> Merge(Block server, Dictionary<string, decimal> local, Dictionary<string, decimal> baseline)
	{
		return null;
	}

	private static decimal Number(JToken token)
	{
		return default(decimal);
	}

	private static JObject MergeUserState(JObject local, JObject server, Dictionary<string, decimal> totals)
	{
		return null;
	}

	private static Dictionary<string, int> MergeBuckets(Block server)
	{
		return null;
	}
}
