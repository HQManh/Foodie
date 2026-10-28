using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Home;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIItemUpgradeBuildingOptionCard : UIElementWithAnim
{
	public enum UpgradeState
	{
		CannotUpgrade,
		NotEnoughMoney,
		Upgradable
	}

	[Serializable]
	public class GeneralConfig
	{
		[TextArea]
		public string formatTxtPrice;

		public Color colorTextTitleUpgradable;

		public Color colorTextTitleCannotUpgrade;

		public Color colorTextPriceNormal;

		public Color colorTextPriceNotEnoughMoney;

		public Color colorTextPriceCannotUpgrade;

		public Color colorThumbnailUpgradable;

		public Color colorThumbnailCannotUpgrade;

		public float durationUpdateVisual;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadThumbnailAsync_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UIItemUpgradeBuildingOptionCard _003C_003E4__this;

		private TaskAwaiter<Sprite> _003C_003Eu__1;

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

	private GeneralConfig _generalConfig;

	private UpgradeState _upgradeState;

	[Header("Visual")]
	[SerializeField]
	private RectTransform _mainTransform;

	[SerializeField]
	private Image _imgFrame;

	[SerializeField]
	private Image _imgFrameGray;

	[SerializeField]
	private TextMeshProUGUI _txtTitle;

	[SerializeField]
	private TextMeshProUGUI _txtPrice;

	[SerializeField]
	private Image _imgThumbnail;

	[SerializeField]
	private Image _imgThumbnailGray;

	[SerializeField]
	private CanvasGroup _thumbnailFade;

	[SerializeField]
	private Button _btnUpgrade;

	[Header("Tut")]
	[SerializeField]
	private TutorialReferenceGroupUI _tutRefUI;

	private AssetReference _assetThumbnail;

	private AsyncOperationHandle<Sprite> _thumbnailHandle;

	private Tween _tweenVisual;

	public BuildingUpgradePartSO PartSO { get; private set; }

	public MapUpgradeConfig.UpgradeItemConfig ItemConfig { get; private set; }

	public RectTransform MainTransform => null;

	public TutorialReferenceGroupUI TutorialRef => null;

	public event Action<UIItemUpgradeBuildingOptionCard> onClickUpgrade;

	private void Awake()
	{
	}

	public void SetUpOnCreated(GeneralConfig generalConfig)
	{
	}

	public void SetData(BuildingUpgradePartSO partSO, MapUpgradeConfig.UpgradeItemConfig itemConfig, UpgradeState initState)
	{
	}

	public void UpdateState(UpgradeState state)
	{
	}

	public void UpdateStateImmediate(UpgradeState state)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadThumbnailAsync_003Ed__37))]
	private void LoadThumbnailAsync()
	{
	}

	private void OnDestroy()
	{
	}
}
}
