using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.UI
{

[Obsolete]
public class UIFameRewardPreview : MonoBehaviour
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadMapRecipeConfig_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<IMapRecipeConfig> _003C_003Et__builder;

		public UIFameRewardPreview _003C_003E4__this;

		private UnityEngine.Awaitable<ScriptableObject>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadPetAssistantAvatarPrefabAsync_003Ed__15 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIFameRewardPreview _003C_003E4__this;

		public string petAssistantId;

		private PetAssistantSO _003CpetAssistantSO_003E5__2;

		private UnityEngine.Awaitable<PetAssistantSO>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__2;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadPetAssistantSO_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<PetAssistantSO> _003C_003Et__builder;

		public UIFameRewardPreview _003C_003E4__this;

		private UnityEngine.Awaitable<PetAssistantSO>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadPreview_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIFameRewardPreview _003C_003E4__this;

		public string mapId;

		public FameRewardData fameRewardData;

		private bool _003CisHaveRecipe_003E5__2;

		private bool _003CisHaveIngredient_003E5__3;

		private bool _003CisHaveTool_003E5__4;

		private UnityEngine.Awaitable<IMapRecipeConfig>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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
	private TextMeshProUGUI _txtTitleItemReward;

	[SerializeField]
	private Image _imgIconItemReward;

	[SerializeField]
	private RectTransform _sectionPetAvatar;

	[SerializeField]
	private RectTransform _containerPetAvatar;

	[SerializeField]
	private FameRewardVisualConfigSO _visualConfig;

	private string _mapId;

	private FameRewardData _fameRewardData;

	private AsyncOperationHandle<CakeMapSO> _opLoadMapSO;

	private AsyncOperationHandle<ScriptableObject> _opLoadMapRecipeConfig;

	private AsyncOperationHandle<PetAssistantSO> _opLoadPetSO;

	private AsyncOperationHandle<GameObject> _opLoadPetAvatar;

	private bool _isLoading;

	[AsyncStateMachine(typeof(_003CLoadPreview_003Ed__12))]
	public UniTask LoadPreview(string mapId, FameRewardData fameRewardData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadMapRecipeConfig_003Ed__13))]
	private UniTask<IMapRecipeConfig> LoadMapRecipeConfig()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<IMapRecipeConfig>);
	}

	[AsyncStateMachine(typeof(_003CLoadPetAssistantSO_003Ed__14))]
	private UniTask<PetAssistantSO> LoadPetAssistantSO(string petAssistantId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<PetAssistantSO>);
	}

	[AsyncStateMachine(typeof(_003CLoadPetAssistantAvatarPrefabAsync_003Ed__15))]
	private UniTask LoadPetAssistantAvatarPrefabAsync(string petAssistantId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}
}
}
