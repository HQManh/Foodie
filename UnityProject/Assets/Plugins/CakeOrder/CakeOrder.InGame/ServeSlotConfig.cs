using System;
using UnityEngine;

namespace CakeOrder.InGame
{

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

	public SlotConfig Config => _config;

	private void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
		if (string.IsNullOrEmpty(remoteConfigStr))
		{
			return;
		}
		SlotConfig imported = ImportData(remoteConfigStr);
		if (imported == null)
		{
			Debug.LogWarning("[ServeSlotConfig] Failed to parse remote config, keeping serialized values");
			return;
		}
		_config = imported;
		Debug.LogFormat("[ServeSlotConfig] Remote config applied: {0}", remoteConfigStr);
	}

	private SlotConfig ImportData(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<SlotConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}
}
}
