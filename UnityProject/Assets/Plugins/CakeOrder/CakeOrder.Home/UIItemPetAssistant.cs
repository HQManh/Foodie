using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using UnityEngine.UI.Extensions;
using Utilities;

namespace CakeOrder.Home
{

public class UIItemPetAssistant : UIElementWithAnim
{
	[Serializable]
	public class VisualConfig
	{
		public Sprite iconAssignPositionCustomerLine;

		public Sprite iconAssignPositionManager;

		public Sprite iconAssignPositionCook;

		public UnityEngine.UI.Extensions.Gradient avatarGradientLocked;

		public Color colorBorderLocked;

		public Color colorBorderNormal;

		public Color colorBorderHighlight;

		public float alphaOverlayLocked;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__31 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIItemPetAssistant _003C_003E4__this;

		public VisualConfig visualConfig;

		public PetAssistantDataAccess dataAccess;

		public AssetReference assetPetSO;

		private UnityEngine.Awaitable<PetAssistantSO>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__32 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIItemPetAssistant _003C_003E4__this;

		public VisualConfig visualConfig;

		public PetAssistantSO petAssistantSO;

		public bool isOwnPet;

		public PetAssignData petAssignData;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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
	private struct _003CSpawnAvatar_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIItemPetAssistant _003C_003E4__this;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

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
	private Button _btn;

	[SerializeField]
	private RectTransform _avatarContainer;

	[SerializeField]
	private Gradient2 _avatarGradient;

	[SerializeField]
	private UIAnimShowHideControl _animHighlight;

	[SerializeField]
	private Image _overlayLocked;

	[SerializeField]
	private Image _border;

	[SerializeField]
	private Image _iconAssignPosition;

	private PetAssistantDataAccess _dataAccess;

	private VisualConfig _visualConfig;

	private UIAvatarPetAssistant _avatar;

	private bool _isOwnedPet;

	private Tween _tweenBorder;

	private AsyncOperationHandle<PetAssistantSO> _opLoadPetAssistantSO;

	private AsyncOperationHandle<GameObject> _opLoadAssetPrefabAvatar;

	public string PetId { get; private set; }

	public PetAssistantSO PetAssistantSO { get; private set; }

	public bool IsHighlight { get; private set; }

	public event Action<UIItemPetAssistant> onSelected;

	private void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__31))]
	public UniTask SetUp(VisualConfig visualConfig, PetAssistantDataAccess dataAccess, AssetReference assetPetSO)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__32))]
	public UniTask SetUp(VisualConfig visualConfig, PetAssistantSO petAssistantSO, bool isOwnPet, PetAssignData petAssignData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSpawnAvatar_003Ed__33))]
	private UniTask SpawnAvatar()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnOwnPet(string petId)
	{
	}

	private void OnUpgradePetSkill(string petId, PetAssistantPositionType type, int level)
	{
	}

	private void OnAssignPet(string petId, PetAssignData data)
	{
	}

	private Sprite GetAssignPositionSprite(PetAssistantPositionType type)
	{
		return null;
	}

	public void SetHighlight(bool isHighlight)
	{
	}

	public void SetHighlightImmediate(bool isHighlight)
	{
	}

	private void ApplyOwnedVisual()
	{
	}

	private void UpdateBorder(bool animated)
	{
	}

	private void OnDestroy()
	{
	}
}
}
