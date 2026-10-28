using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home.Journey
{

public class UIJourneyMilestoneItem : MonoBehaviour
{
	[Tooltip("The 'Day' label above the number, written by SetUp.")]
	[SerializeField]
	private TMP_Text _txtLevel;

	[Tooltip("The number alone. Split from the label so the two can carry their own size and colour.")]
	[SerializeField]
	private TMP_Text _txtLevelNumber;

	private const string LocDay = "journey_day";

	[SerializeField]
	private Button _btnClaim;

	[SerializeField]
	private GameObject _objClaimedTick;

	[Tooltip("The \"!\" badge - a UI-Noti-Number under a wrapper. On only while the reward is waiting to be claimed.")]
	[SerializeField]
	private GameObject _objNoti;

	[Tooltip("Darkening layer over the badge while it is still locked, matching the chapter card. Not a CanvasGroup fade - the badge must stay opaque.")]
	[SerializeField]
	private GameObject _objLockedOverlay;

	[Header("Rewards")]
	[SerializeField]
	private Transform _rewardContainer;

	[Tooltip("Inactive template living under the reward container; cloned once per reward.")]
	[SerializeField]
	private UIJourneyRewardIcon _templateRewardIcon;

	[Header("Visual")]
	[Tooltip("The badge art. Its vertical centre is what gets pinned to this milestone's level on the chapter bar.")]
	[SerializeField]
	private RectTransform _rectBadge;

	[Tooltip("The badge frame. Its sprite is swapped between the two state sprites below.")]
	[SerializeField]
	private Image _imgBadgeBg;

	[Tooltip("Frame while the level is still ahead of the player. The darkening overlay stacks on top of it.")]
	[SerializeField]
	private Sprite _spriteBadgeLocked;

	[Tooltip("Frame once the player has passed the level, whether or not the reward has been claimed.")]
	[SerializeField]
	private Sprite _spriteBadgeReached;

	[Tooltip("Burst played once as the marker passes this milestone's own level during the catch-up run. Leave empty for no effect.")]
	[SerializeField]
	private UIAnimShowHideControl _animReached;

	private readonly List<UIJourneyRewardIcon> _spawnedRewardIcons = new List<UIJourneyRewardIcon>();

	public JourneyMilestoneRemoteConfig.Milestone Milestone { get; private set; }

	public JourneyProgress.MilestoneState State { get; private set; }

	public int GlobalLevel => 0;

	public RectTransform RectTransform => null;

	public RectTransform RectBadge => null;

	public event Action<UIJourneyMilestoneItem> onClickClaim;

	private void Awake()
	{
	}

	private void OnClickClaim()
	{
	}

	public void SetUp(JourneyMilestoneRemoteConfig.Milestone milestone)
	{
	}

	private void SpawnRewardIcons()
	{
	}

	public Transform GetRewardFlyStartPoint(string currencyId)
	{
		return null;
	}

	public void PlayReachedEffect()
	{
	}

	public void UpdateProgress(int completedLevels)
	{
	}
}
}
