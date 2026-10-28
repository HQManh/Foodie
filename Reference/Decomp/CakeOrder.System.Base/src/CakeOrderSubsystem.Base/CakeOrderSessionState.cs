using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrderSubsystem.Base;

public class CakeOrderSessionState : MonoBehaviour
{
	public enum LevelState
	{
		None,
		InPlay,
		Win,
		Lose
	}

	[Serializable]
	public class LastPlayData
	{
		public string mapId;

		public int levelIndex;

		public bool isReplay;

		public LevelState levelState;

		public int numStarsEarned;

		public int numSoftCurrencyEarned;
	}

	[Serializable]
	public class HomeParams
	{
		public string tabId;

		public int numStarsFly;
	}

	private static CakeOrderSessionState _instance;

	public HomeParams homeParams;

	public static CakeOrderSessionState Instance => null;

	public int MaxMainLevelIndexPassed { get; set; }

	public bool IsRemoveAds { get; private set; }

	public int CountLvPlayedInSession { get; private set; }

	public LastPlayData LastPlayedData { get; set; }

	public string PendingHomeNextMapTransitionFromMapId { get; set; }

	public event Action onRemoveAds
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void OnPlayLevel()
	{
	}

	public void OnRemoveAds()
	{
	}

	public void ClearAll()
	{
	}
}
