using System;
using UnityEngine;

namespace CakeOrder.InGame
{

public class StackGameplayConfig : MonoBehaviour
{
	[Serializable]
	public class StackConfig
	{
		public int numSlots;

		public float waitTimeScale;
	}

	public const string RemoteConfigKey = "stack_config";

	[SerializeField]
	private StackConfig _config;

	public StackConfig Config => _config;

	private void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
	}

	private StackConfig ImportData(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<StackConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}
}
}
