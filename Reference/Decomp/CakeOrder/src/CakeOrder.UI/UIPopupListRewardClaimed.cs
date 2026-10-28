using System;
using System.Collections.Generic;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.UI;

public class UIPopupListRewardClaimed : UICakePopup
{
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

	[Tooltip("Lay the rewards out in centred rows instead of a left-filled grid: two per row up to four rewards, three per row above that, and a short last row sits in the middle (3 = 2+1, 5 = 3+2). Min/Max Column are ignored while this is on.")]
	[SerializeField]
	private bool _centerRows;

	[SerializeField]
	private SfxAndHapticTrigger _sfxOnOpen;

	[Header("Anim")]
	[SerializeField]
	private float _delayAppearAnim;

	[SerializeField]
	private List<UIAnimShowHideControl> _animBeforeShowItems;

	[SerializeField]
	private List<UIAnimShowHideControl> _animAfterShowItems;

	[Header("Grow with grid")]
	[Tooltip("Frames that must get taller when the grid needs more rows than the prefab was laid out for. Optional.")]
	[SerializeField]
	private RectTransform[] _growWithGrid;

	private float _gridBaseHeight;

	private float[] _growBaseHeights;

	private bool _baseHeightsCaptured;

	[Header("Title")]
	[SerializeField]
	private TextMeshProUGUI _textTitle;

	private const string LocTitleReward = "title_reward";

	private const string LocTitlePurchased = "title_purchased";

	private const string LocReceivedLabel = "reward_received";

	[Tooltip("Localization key for this prefab's heading, replacing the built-in REWARD / PURCHASED pair. There are two reward popups now and the paid one congratulates rather than reporting a transaction - that wording belongs to the prefab that says it, not to a branch in here. Leave it empty and the pair is used, which is what the free popup wants.")]
	[SerializeField]
	private string _locKeyTitleOverride;

	[Tooltip("Shown until the localization table carries the key above. Empty falls back to the key itself.")]
	[SerializeField]
	private string _fallbackTitleOverride;

	[Tooltip("The small caption inside the rewards panel (\"Reward Received!\"). A per-list titleOverride (already localized text) replaces it.")]
	[SerializeField]
	private TextMeshProUGUI _textReceivedLabel;

	[Header("Single reward layout")]
	[Tooltip("The grid panel, shown for two rewards or more. Leave empty to keep the old behaviour of always using the grid.")]
	[SerializeField]
	private GameObject _sectionGrid;

	[Tooltip("Shown instead of the grid when the list holds exactly one reward.")]
	[SerializeField]
	private GameObject _sectionSingle;

	[Tooltip("The one card inside the single panel. Driven exactly like a grid card, so icon loading, the amount text and the show animation behave the same in both layouts.")]
	[SerializeField]
	private UIItemRewardClaimed _itemSingle;

	[Tooltip("The single panel's own copy of the \"Reward Received!\" caption.")]
	[SerializeField]
	private TextMeshProUGUI _textReceivedLabelSingle;

	private bool _isSingleLayout;

	private List<UIItemRewardClaimed> _spawnedItems;

	private bool _isNeedReloadContent;

	private RewardListData _rewardList;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}

	public void SetReward(RewardListData rewardList)
	{
	}

	private bool WantsSingleLayout(RewardListData rewardList)
	{
		return false;
	}

	private void ApplyTitle(RewardListData rewardList)
	{
	}

	private void ResizeGrid(int numItems)
	{
	}

	private void PlaceInCenteredRows(int numItems, int column, float width)
	{
	}

	private void CaptureBaseHeights(RectTransform gridRt)
	{
	}

	private void GrowFramesWithGrid(float gridHeight)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}
}
