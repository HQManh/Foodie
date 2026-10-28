using System.Collections.Generic;
using CakeOrder.BaseUI;
using CakeOrder.UI;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.LiveOpsImplement
{

public class UIPopup7DayLogin : UICakePopup
{
	private readonly struct PendingFly
	{
		public readonly string rewardId;

		public readonly UIImageFlyToCounter fly;

		public readonly int amount;

		public PendingFly(string rewardId, UIImageFlyToCounter fly, int amount)
		{
			this.rewardId = null;
			this.fly = null;
			this.amount = 0;
		}
	}

	[SerializeField]
	private List<UIItemLoginDayReward> _items;

	[SerializeField]
	private UIItemLoginDayReward.VisualConfig _itemVisualConfig;

	[SerializeField]
	private UIItemLoginDayReward.VisualConfig _finalItemVisualConfig;

	[Tooltip("Upper bound on how many coins/gems are spawned for one claim; a smaller reward spawns one per unit.")]
	[SerializeField]
	private int _numRewardFlyObjects;

	[Tooltip("On = coins and gems fly from the card to the Home counter instead of opening the rewards popup. Off = every day, currency included, confirms through the rewards popup like any other item.")]
	[SerializeField]
	private bool _useCurrencyFly;

	[Tooltip("Played on a claim that confirms without the rewards popup - the currency fly path. A claim that opens the popup is already covered by the popup's own open sound.")]
	[SerializeField]
	private AudioClip _sfxClaimReward;

	[Tooltip("Optional. The Claim button under the popup. It takes whichever day the grid says is claimable - there is only ever one, the run opens a day at a time - so tapping it reads the same as tapping that card. Leave empty and the grid is the only way in.")]
	[SerializeField]
	private Button _btnClaim;

	[Tooltip("The button as drawn while today's reward is still on offer.")]
	[SerializeField]
	private GameObject _objBtnClaim;

	[Tooltip("The greyed 'Claimed' look, drawn once today's reward is in. Authored rather than recoloured at runtime, so the art can change without touching the code.")]
	[SerializeField]
	private GameObject _objBtnClaimed;

	private LiveOpBehavior7DayLogin _liveOpBehavior;

	private readonly List<PendingFly> _pendingFlies = new List<PendingFly>();

	private UIItemLoginDayReward _pendingFlyItem;

	private bool _isCheckingInternet;

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	private void RefreshAllItemStates(int animateRevealForIndex = -1)
	{
	}

	private void OnClickClaimButton()
	{
	}

	private int FindClaimableIndex()
	{
		return 0;
	}

	private void RefreshClaimButton()
	{
	}

	private static List<UIItemLoginDayReward.RewardView> BuildRewardViews(LiveOpBehavior7DayLogin.RewardMilestone milestone)
	{
		return null;
	}

	private void OnReceiveReward(int rewardIndex, RewardListData data)
	{
	}

	private bool TryGetMilestone(int rewardIndex, out LiveOpBehavior7DayLogin.RewardMilestone milestone)
	{
		milestone = null;
		return false;
	}

	private void PrepareCurrencyFly(int rewardIndex, UIItemLoginDayReward item)
	{
	}

	private void OnTakedReward(int rewardIndex)
	{
	}

	private void OnClosedPopupReward(UIElementAbstract element)
	{
	}

	private void OnClickItem(UIItemLoginDayReward item)
	{
	}

	private void OnDestroy()
	{
	}
}
}
