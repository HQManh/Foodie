using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameItem;
using _GAME.GameUI;

namespace _GAME.DreamyPass;

public class PopupDreamyPassUnclaimedRewardCtrl : PopupSingleton<PopupDreamyPassUnclaimedRewardCtrl>
{
	public List<RwItemUICtrl> listRwUI;

	public RectTransform listRwUILayout;

	public Button btnClaimReward;

	private List<RwItemModel> _rwUnclaimed;

	protected override void Awake()
	{
	}

	public void Open(List<RwItemModel> rwUnclaimed)
	{
	}

	private void ClaimRewardAndFinishSeason()
	{
	}
}
