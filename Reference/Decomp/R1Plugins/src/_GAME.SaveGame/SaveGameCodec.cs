using System;
using System.Collections.Generic;
using System.Reflection;
using CakeOrder.SaveProfile;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

namespace _GAME.SaveGame;

public static class SaveGameCodec
{
	private class FieldsOnlyResolver : DefaultContractResolver
	{
		protected override List<MemberInfo> GetSerializableMembers(Type objectType)
		{
			return null;
		}
	}

	public class Parsed
	{
		public SaveGameModel model;

		public bool coreUsable;

		public bool r1Usable;

		public bool isNewerSchema;
	}

	private static readonly IContractResolver Resolver;

	private static readonly JsonSerializerSettings SaveSettings;

	public static string Build(out SaveGameModel model, SaveGameStats.Block serverStats, out Dictionary<string, decimal> statsBase)
	{
		model = null;
		statsBase = null;
		return null;
	}

	public static Parsed Parse(string json)
	{
		return null;
	}

	private static SaveGameSummary BuildSummary(Snapshot snapshot)
	{
		return null;
	}
}
