using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using UnityEngine.UI.Extensions;

namespace CakeOrder.Home
{

public class UIPetAssistantDetails : UIElementWithAnim
{
	private enum StateLoad
	{
		None,
		Loading,
		Done
	}

	[Serializable]
	public class VisualConfig
	{
		public Sprite iconAssignPositionCustomerLine;

		public Sprite iconAssignPositionManager;

		public Sprite iconAssignPositionCook;

		public UnityEngine.UI.Extensions.Gradient avatarGradientLocked;

		public UnityEngine.UI.Extensions.Gradient avatarGradientNoPet;

		public Sprite spriteFrameAvailable;

		public Sprite spriteFrameNotAvailable;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadPet_003Ed__53 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIPetAssistantDetails _003C_003E4__this;

		public PetAssistantSO petSO;

		private string _003CpetId_003E5__2;

		private GameObject _003CprefabAvatar_003E5__3;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__2;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__3;

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
	private struct _003CLoadUsesConfig_003Ed__54 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIPetAssistantDetails _003C_003E4__this;

		public string mapId;

		public string petId;

		private AsyncOperationHandle<GameObject> _003CopLoad_003E5__2;

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

	private const string LocTimesN = "times_n";

	private const string LocNotEnough = "toast_not_enough_x";

	private SceneMainUI _mainUI;

	private PetAssistantDataAccess _dataAccess;

	private PetAssignData _petAssignData;

	private AsyncOperationHandle<GameObject> _opLoadAssetPrefabAvatar;

	[SerializeField]
	private CanvasGroup _sectionNoPet;

	[SerializeField]
	private CanvasGroup _sectionLocked;

	[SerializeField]
	private CanvasGroup _sectionUnlocked;

	[SerializeField]
	private RectTransform _avatarContainer;

	[SerializeField]
	private Gradient2 _avatarGradient;

	[SerializeField]
	private Image _iconAssignPosition;

	[SerializeField]
	private Image _imgFrame;

	[SerializeField]
	private VisualConfig _visualConfig;

	[Header("Pet Info / Uses")]
	[SerializeField]
	private TMP_Text _textName;

	[SerializeField]
	private TMP_Text _textRemainingUses;

	[SerializeField]
	private GameObject _sectionBuyUses;

	[SerializeField]
	private TMP_Text _textBuyAmount;

	[SerializeField]
	private Button _btnBuyUsesSoft;

	[SerializeField]
	private TMP_Text _textCostSoft;

	[SerializeField]
	private Button _btnBuyUsesHard;

	[SerializeField]
	private TMP_Text _textCostHard;

	private UIAvatarPetAssistant _avatar;

	private bool _isOwnedPet;

	private StateLoad _loadState;

	private PetAssistantSO _petSOToLoad;

	private string _petIdToLoad;

	private string _mapIdToLoad;

	private int _costSoft;

	private int _costHard;

	private int _availableTurn;

	private bool _hasUsesConfig;

	public string InspectingPetId { get; private set; }

	public PetAssistantSO PetAssistantSO { get; private set; }

	public event Action<UIItemPetAssistant> onSelected;

	public void SetUp(SceneMainUI mainUI, PetAssistantDataAccess dataAccess)
	{
	}

	private void OnCurrencyChanged(string itemId, int oldValue, int newValue)
	{
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

	private void Update()
	{
	}

	public void ChangePet(PetAssistantSO petSO, string mapId)
	{
	}

	private void CleanPet()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadPet_003Ed__53))]
	private UniTask LoadPet(PetAssistantSO petSO)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadUsesConfig_003Ed__54))]
	private UniTask LoadUsesConfig(string petId, string mapId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void RefreshUsesSection()
	{
	}

	private void OnChangeRemainingUses(string petId, int uses)
	{
	}

	private void OnClickBuyUsesSoft()
	{
	}

	private void OnClickBuyUsesHard()
	{
	}

	private void BuyUses(string currencyId, int cost)
	{
	}

	private void OnDestroy()
	{
	}
}
}
