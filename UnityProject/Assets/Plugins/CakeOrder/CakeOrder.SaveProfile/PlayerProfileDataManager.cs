using System;
using System.Collections.Generic;
using DataSaveLoadR1;
using MessagePack;

namespace CakeOrder.SaveProfile
{

public class PlayerProfileDataManager : SaveLoadDataManagerAbstract<PlayerProfileDataManager.RawData, PlayerProfileDataManager.RuntimeData>
{
	[Serializable]
	[MessagePackObject(false)]
	public class SaveDataPack
	{
		[Key(0)]
		public string id;

		[Key(1)]
		public Dictionary<string, int> intData;

		[Key(2)]
		public Dictionary<string, float> floatData;

		[Key(3)]
		public Dictionary<string, string> stringData;

		[Key(4)]
		public Dictionary<string, DateTime> datetimeData;

		public SaveDataPack(string id)
		{
		}
	}

	[Serializable]
	[MessagePackObject(false)]
	public class RawData
	{
		[Key(0)]
		public SaveDataPack[] packs;
	}

	[Serializable]
	public class RuntimeData
	{
		public Dictionary<string, SaveDataPack> packs;
	}

	protected override string SaveFileName => null;

	protected override string LogColorCode => null;

	protected override string LogPrefix => null;

	public override RawData ToRaw(RuntimeData data)
	{
		return null;
	}

	public override RuntimeData ToSaveData(RawData rawData)
	{
		return null;
	}

	public override RuntimeData NewData()
	{
		return null;
	}

	public SaveDataPack GetOrCreateDataPack(string packId)
	{
		return null;
	}
}
}
