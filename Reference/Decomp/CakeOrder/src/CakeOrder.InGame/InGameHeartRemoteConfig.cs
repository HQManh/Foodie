using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.InGame;

[Serializable]
public class InGameHeartRemoteConfig : MonoBehaviour
{
	[Serializable]
	public class HeartConfig
	{
		public int enableFromLv;

		[EnumMask(typeof(LostHeartReason), 25f, false, 5)]
		public int lostReasonFlags;

		public int initHeart;

		public int saveMeCost;

		public int saveMeAdd;

		public int maxAds;

		public List<LostHeartReason> GetEnabledLostHeartReasons()
		{
			return null;
		}

		public bool IsLostHeartReasonEnabled(LostHeartReason reason)
		{
			return false;
		}
	}

	public const string RemoteConfigKey = "ingame_heart_config";

	[SerializeField]
	private HeartConfig _heartConfig;

	public HeartConfig Config => null;

	private void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
	}

	private HeartConfig ImportData(string data)
	{
		return null;
	}
}
