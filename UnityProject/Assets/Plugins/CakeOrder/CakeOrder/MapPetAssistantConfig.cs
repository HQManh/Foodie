using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder
{

public class MapPetAssistantConfig : MonoBehaviour, IMapDataConfig
{
	[Serializable]
	public class PetAssistantConfig
	{
		public string name;

		public int costSoftCurrency;

		public int costHardCurrency;

		public int availableTurn;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpAfterSpawn_003Ed__9 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public string[] remoteConfigStrings;

		public MapPetAssistantConfig _003C_003E4__this;

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
	private string[] _petAssistantIds;

	[SerializeField]
	private AssetReference[] _assetPetAssistantSOs;

	[SerializeField]
	private PetAssistantConfig[] _petAssistantConfigs;

	public string[] AvailablePetAssistantIds => null;

	public AssetReference[] AssetPetAssistantSOs => null;

	public PetAssistantConfig GetConfig(string petId)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CSetUpAfterSpawn_003Ed__9))]
	public UniTask SetUpAfterSpawn(string mapId, params string[] remoteConfigStrings)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public bool IsHaveUpgradeAvailable()
	{
		return false;
	}

	private PetAssistantConfig[] ImportData(string data)
	{
		return null;
	}
}
}
