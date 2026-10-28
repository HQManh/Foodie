using System;
using UnityEngine;

namespace CakeOrder.InGame;

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

	public StackConfig Config => null;

	private void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
	}

	private StackConfig ImportData(string data)
	{
		return null;
	}
}
