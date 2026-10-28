using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using DataSaveLoadR1;
using MessagePack;

namespace CakeOrder.SaveProfile
{

public class PlayerMapLevelProgressDataManager : SaveLoadDataManagerAbstract<PlayerMapLevelProgressDataManager.RawData, PlayerMapLevelProgressDataManager.RuntimeData>
{
	[Serializable]
	[MessagePackObject(false)]
	public class ToolData
	{
		[Key(0)]
		public string id;

		[Key(1)]
		public int level;

		public ToolData(string id, int level)
		{
		}
	}

	[Serializable]
	[MessagePackObject(false)]
	public class DayResult
	{
		[Key(0)]
		public string mapId;

		[Key(1)]
		public int day;

		[Key(2)]
		public int fame;

		[Key(3)]
		public int softCurrency;
	}

	[Serializable]
	[MessagePackObject(false)]
	public class PetAssistantData
	{
		[Key(0)]
		public string petId;

		[Key(1)]
		public bool isOwned;

		[Key(2)]
		public Dictionary<PetAssistantPositionType, int> skillLevels;

		[Key(3)]
		public string assignedMap;

		[Key(4)]
		public PetAssistantPositionType assignedType;

		[Key(5)]
		public string assignedPos;

		[Key(6)]
		public int remainingUses;

		public static PetAssistantData CreateWithId(string petId)
		{
			return null;
		}
	}

	[Serializable]
	[MessagePackObject(false)]
	public class MapLevelData
	{
		[Key(0)]
		public int levelNum;

		[Key(1)]
		public LevelState state;

		[Key(2)]
		public int stars;

		[Key(3)]
		public int countPlay;

		[Key(4)]
		public int countLose;

		[Key(5)]
		public int countWin;

		[Key(6)]
		public int countQuit;
	}

	[Serializable]
	[MessagePackObject(false)]
	public class MapData
	{
		[Key(0)]
		public string id;

		[Key(1)]
		public MapState state;

		[Key(2)]
		public List<MapLevelData> levelMains;

		[Key(3)]
		public List<MapLevelData> levelAdvanceds;

		[Key(6)]
		public Dictionary<string, ToolData> tools;

		[Key(7)]
		public int numDayFinished;

		[Key(8)]
		public List<string> keyBools;

		[Key(10)]
		public List<string> boughtPartIds;

		[Key(11)]
		public bool isExtraLevelUnlocked;

		[IgnoreMember]
		public bool isUnlocked => false;

		public static MapData CreateWithId(string id)
		{
			return null;
		}

		public ToolData GetToolData(string toolId)
		{
			return null;
		}

		public ToolData GetOrCreateToolData(string toolId)
		{
			return null;
		}

		public MapLevelData GetLevelData(int levelIndex)
		{
			return null;
		}

		public MapLevelData GetOrCreateLevelData(int levelIndex)
		{
			return null;
		}

		public int CountTotalStars()
		{
			return 0;
		}

		public bool IsContainedKeyBool(string key)
		{
			return false;
		}

		public bool AddKeyBool(string key)
		{
			return false;
		}

		public bool RemoveKeyBool(string key)
		{
			return false;
		}
	}

	[Serializable]
	[MessagePackObject(false)]
	public class RawData
	{
		[Key(0)]
		public MapData[] maps;

		[Key(1)]
		public DateTime lastPlayedTime;

		[Key(2)]
		public string lastPlayedMapId;

		[Key(3)]
		public int lastPlayedLevelIndex;

		[Key(4)]
		public PetAssistantData[] petAssistants;

		[Key(5)]
		public int winStreak;

		[Key(6)]
		public int newVersionNoticeOrder;
	}

	[Serializable]
	public class RuntimeData
	{
		public Dictionary<string, MapData> maps;

		public DateTime lastPlayedTime;

		public string lastPlayedMapId;

		public int lastPlayedLevelIndex;

		public Dictionary<string, PetAssistantData> petAssistants;

		public int winStreak;

		public int newVersionNoticeOrder;

		public MapData GetMapData(string mapId)
		{
			return null;
		}

		public MapData GetOrCreateMapData(string mapId)
		{
			return null;
		}

		public PetAssistantData GetOrCreatePetAssistantData(string petId)
		{
			return null;
		}

		public static RuntimeData CreateNewCleanData()
		{
			return null;
		}
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
}
}
