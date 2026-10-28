using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UIEndGameLose : UIEndGameBase
{
	private const string LocHeaderHard = "endgame_lose_hard";

	private const string LocHeaderSuperHard = "endgame_lose_superhard";

	[Header("Lose")]
	[SerializeField]
	private SfxAndHapticTrigger _sfxLose;

	[Header("Buttons")]
	[SerializeField]
	private Button _btnHome;

	[SerializeField]
	private Button _btnRetry;

	[Header("View Game")]
	[Tooltip("Hold to hide the UI and watch the board underneath; release to bring it back.")]
	[FormerlySerializedAs("_triggerFastForward")]
	[SerializeField]
	private ForwardUIPointerEvent _triggerViewGame;

	[SerializeField]
	private GameObject _objTextHoldToView;

	private int _viewGamePointerId;

	private bool _isViewingGame;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public bool IsViewingGame => false;

	public event Action<bool> onViewGameChanged
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

	protected override void Awake()
	{
	}

	protected override void OnSetUpOnCreated()
	{
	}

	protected override string HeaderKeyFor(LevelDifficultyTag difficulty)
	{
		return null;
	}

	protected override void CollectAnimButtons(List<UIAnimShowHideControl> buttons)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnButtonsRevealed(float delay)
	{
	}

	protected override void OnShowAllElementImmediate()
	{
	}

	private void BeginViewGame(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void EndViewGame(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void SetViewingGame(bool isViewing)
	{
	}

	private void OnDisable()
	{
	}

	private void OnClickHome()
	{
	}

	private void OnClickRetry()
	{
	}
}
