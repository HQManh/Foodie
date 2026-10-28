using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.LiveOpsImplement;

public class UIItemSlotDailyRewards : MonoBehaviour
{
	public enum State
	{
		Hiden,
		Locked,
		Claimable,
		Claimed
	}

	private const string LocClaimed = "reward_claimed";

	[SerializeField]
	private CanvasGroup _canvasGroup;

	[SerializeField]
	private TMP_Text _txtAmount;

	[SerializeField]
	private Image _imgIcon;

	[Tooltip("Drawn instead of the icon the reward's currency carries. Leave empty to follow the currency. This is local to this popup - it does not change how that currency looks anywhere else in the game.")]
	[SerializeField]
	private Sprite _iconOverride;

	[Tooltip("Optional third state. The rows only need claimed / not-claimed, so this is normally empty; wire it only if a row ever needs a separate greyed-out button.")]
	[SerializeField]
	private Button _btnLocked;

	[Tooltip("Optional. Where this row draws its countdown. Leave empty and the label inside the claimed button is used, which is what every row wants - wire it only to point somewhere else.")]
	[SerializeField]
	private TMP_Text _txtCountdown;

	[Tooltip("What that label reads when no countdown is running. Authored here rather than read off the Text at Awake: a countdown written at runtime can end up saved into the prefab, and then the 'default' would be a stale clock reading.")]
	[SerializeField]
	private Button _btnClaim;

	[SerializeField]
	private GameObject _sectionClaimed;

	[SerializeField]
	private Image _imgCheck;

	private State _state;

	private TMP_Text _countdownTarget;

	private bool _isCountingDown;

	private Tween _tweenChangeState;

	private const float DurationFade = 0.25f;

	public int Index { get; private set; }

	private TMP_Text CountdownTarget => null;

	public event Action<UIItemSlotDailyRewards> onClickLocked
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<UIItemSlotDailyRewards> onClickClaimed
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	public void SetUp(int index, string text, Sprite icon)
	{
	}

	public void SetCountdown(string countdown)
	{
	}

	private void UpdateButtons()
	{
	}

	public void SetStateImmediate(State state)
	{
	}

	public void ChangeState(State state)
	{
	}
}
