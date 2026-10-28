using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder;

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

	public int NumLevels => 0;

	[AsyncStateMachine(typeof(_003CSetUpAfterSpawn_003Ed__6))]
	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public SingleLevelMetadata GetLevelConfig(int levelIndex)
	{
		return null;
	}

	private SingleLevelMetadata[] ImportData(string data)
	{
		return null;
	}
}
