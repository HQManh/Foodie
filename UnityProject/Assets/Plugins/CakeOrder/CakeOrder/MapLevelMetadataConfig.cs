using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using CakeOrder.DataSO;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

public class MapLevelMetadataConfig : MonoBehaviour, IMapDataConfig
{
	[Serializable]
	public class UnlockCondition
	{
		public string id;

		public int lvStartUnlock;
	}

	[Serializable]
	public class NewUnlockData
	{
		public List<string> tools;

		public List<string> ingredients;

		public List<string> recipes;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpAfterSpawn_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public string[] remoteConfigStrings;

		public MapLevelMetadataConfig _003C_003E4__this;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[SerializeField]
	private SingleLevelMetadata _fallbackConfig;

	[SerializeField]
	private SingleLevelMetadata[] _configs;

	public int NumLevels => _configs != null ? _configs.Length : 0;

	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		if (remoteConfigStrings != null && remoteConfigStrings.Length != 0 && !string.IsNullOrEmpty(remoteConfigStrings[0]))
		{
			SingleLevelMetadata[] imported = ImportData(remoteConfigStrings[0]);
			if (imported == null || imported.Length == 0)
			{
				UnityEngine.Debug.LogWarning("[MapLevelMetadataConfig] Remote config produced no level metadata, keeping serialized data");
			}
			else
			{
				_configs = imported;
			}
		}
		return UniTask.CompletedTask;
	}

	public SingleLevelMetadata GetLevelConfig(int levelIndex)
	{
		if (levelIndex < _configs.Length)
		{
			return _configs[levelIndex];
		}
		UnityEngine.Debug.LogWarningFormat("[MapLevelMetadataConfig] No metadata for level index {0}, using fallback", levelIndex);
		return _fallbackConfig;
	}

	private SingleLevelMetadata[] ImportData(string data)
	{
		// levels are separated by '|', fields by ';': weather;difficulty;customers;dishes;ingredients;tutId
		List<SingleLevelMetadata> levels = new List<SingleLevelMetadata>();
		foreach (StringExtension.StringSplitEntry levelEntry in data.SplitNonAlloc('|'))
		{
			SingleLevelMetadata level = new SingleLevelMetadata();
			int field = 0;
			foreach (StringExtension.StringSplitEntry fieldEntry in levelEntry.SplitNonAlloc(';'))
			{
				switch (field)
				{
				case 0:
					level.weatherEffect = fieldEntry.TryParseEnum(out WeatherEffect weather) ? weather : _fallbackConfig.weatherEffect;
					break;
				case 1:
					level.difficultyTag = fieldEntry.TryParseEnum(out LevelDifficultyTag tag) ? tag : _fallbackConfig.difficultyTag;
					break;
				case 2:
					level.numCustomers = fieldEntry.TryParseInt(out int customers) ? customers : _fallbackConfig.numCustomers;
					break;
				case 3:
					level.numDishs = fieldEntry.TryParseInt(out int dishes) ? dishes : _fallbackConfig.numDishs;
					break;
				case 4:
					level.numIngredients = fieldEntry.TryParseInt(out int ingredients) ? ingredients : _fallbackConfig.numIngredients;
					break;
				case 5:
					level.tutId = fieldEntry.Str.ToString();
					break;
				}
				field++;
			}
			levels.Add(level);
		}
		return levels.ToArray();
	}
}
}
