using System;
using UnityEngine;

namespace CakeOrder.InGame;

public class ServeSlotConfig : MonoBehaviour
{
	[Serializable]
	public class SlotConfig
	{
		public int max;

		public int init;

		public int delayTriggerSaveMe;
	}

	public const string RemoteConfigKey = "serve_slot_config";

	[SerializeField]
	private SlotConfig _config;

	public SlotConfig Config => null;

	private void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
	}

	private SlotConfig ImportData(string data)
	{
		return null;
	}
}
