using System;
using UnityEngine;

namespace CakeOrder.Home;

public class HomeMapNpcSpawnControl : MonoBehaviour
{
	[Serializable]
	public class SpawnScenario
	{
		public int dayPlayInMap;

		public string rewardBoosterId;

		public int rewardAmount;
	}

	[Serializable]
	public class MapSpawnScenario
	{
		public string mapId;

		public SpawnScenario[] spawnScenarios;

		public SpawnScenario GetSpawnScenario(int dayInMap)
		{
			return null;
		}
	}

	[SerializeField]
	private MapSpawnScenario[] _mapSpawnScenarios;

	[SerializeField]
	private NpcHomeControl _prefabNPC;

	private SpawnScenario _todayScenario;

	private NpcHomeControl _spawnedNpc;

	private string _currentMapId;

	private bool _isClaimedTodayReward;

	private static string GetKeyClaimedReward(string mapId, int dayInMap)
	{
		return null;
	}

	public bool IsClaimedReward(string mapId, int dayInMap)
	{
		return false;
	}

	private MapSpawnScenario GetMapSpawnScenario(string mapId)
	{
		return null;
	}

	public void SetUp(string mapId, Transform[] npcSpawnPoints)
	{
	}

	public void Show()
	{
	}

	private void OnClickNpc(NpcHomeControl npc)
	{
	}
}
