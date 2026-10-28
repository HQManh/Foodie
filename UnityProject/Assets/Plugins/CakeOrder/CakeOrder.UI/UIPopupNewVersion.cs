using System.Collections.Generic;
using CakeOrder.BaseUI;
using CakeOrder.Home;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Components;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIPopupNewVersion : UICakePopup
{
	private const string LocTitle = "new_version_title";

	private const string LocBtnClaim = "btn_claim";

	private const string LocBtnOk = "btn_ok";

	[SerializeField]
	private TextMeshProUGUI _textTitle;

	[Tooltip("One bullet per info line.")]
	[SerializeField]
	private TextMeshProUGUI _textInfo;

	[SerializeField]
	private SfxAndHapticTrigger _sfxOnOpen;

	[Tooltip("Label of the confirm button: Claim when the update gives something, OK otherwise.")]
	[SerializeField]
	private LocalizeStringEvent _locConfirm;

	[Header("Rewards")]
	[Tooltip("Holds the reward panel and its decor; switched off when this update gives nothing, so the popup shrinks to the news.")]
	[SerializeField]
	private GameObject _rewardsContainer;

	[Tooltip("The frame around the grid. Grows when the grid needs more rows than it was laid out for.")]
	[SerializeField]
	private RectTransform _panelRewards;

	[SerializeField]
	private GridLayoutGroup _gridLayoutGroup;

	[SerializeField]
	private UIItemRewardClaimed _prefabItemRewardClaimed;

	[SerializeField]
	private UIItemRewardClaimed.VisualConfig _visualConfigItemRewardClaimed;

	[SerializeField]
	private int _minColumn;

	[SerializeField]
	private int _maxColumn;

	private readonly List<UIItemRewardClaimed> _spawnedItems = new List<UIItemRewardClaimed>();

	private int _numRewards;

	private bool _isNeedReloadContent;

	private NewVersionPopupData _data;

	private bool _baseSizesCaptured;

	private float _gridBaseHeight;

	private float _panelBaseHeight;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}

	public void SetData(NewVersionPopupData data)
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void SetRewards(RewardListData rewardList)
	{
	}

	private void ResizeGrid(int numItems)
	{
	}

	protected override void OnBeforeShow()
	{
	}
}
}
