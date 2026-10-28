using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UIEndGameWin : UIEndGameBase
{
	[CompilerGenerated]
	private sealed class _003CIEFinishClaimIfAnimationStops_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIEndGameWin _003C_003E4__this;

		public Action onDone;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEFinishClaimIfAnimationStops_003Ed__44(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIEWaitShowCurrencyFly_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public UIEndGameWin _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEWaitShowCurrencyFly_003Ed__36(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private const string LocClaimMultiplier = "btn_claim_multiplier";

	private const string LocHeaderHard = "endgame_win_hard";

	private const string LocHeaderSuperHard = "endgame_win_superhard";

	[Header("Win")]
	[SerializeField]
	private SfxAndHapticTrigger _sfxWin;

	private bool _isPlayedWinSfx;

	[Header("Auto Currency Fly")]
	[SerializeField]
	private Transform _hardCurrencyStartFlyPoint;

	[SerializeField]
	private int _numObjectFlyPerSoftCurrency;

	[SerializeField]
	private int _maxNumObjectFlyPerSoftCurrency;

	[SerializeField]
	private int _numObjectFlyPerHardCurrency;

	private bool _isShowedCurrencyFly;

	[Header("Buttons")]
	[SerializeField]
	private UIAnimShowHideControl _newFeatureAnim;

	[SerializeField]
	private Button _btnNext;

	[SerializeField]
	private TextMeshProUGUI _txtNumRewardNext;

	[SerializeField]
	private Button _btnNextRewardAdsBonus;

	[SerializeField]
	private TextMeshProUGUI _txtNextWithBonus;

	[SerializeField]
	private TextMeshProUGUI _txtNumRewardNextWithBonus;

	[SerializeField]
	private GameObject[] _objsActivateOnWin;

	[SerializeField]
	private SfxAndHapticTrigger _sfxClaim;

	[SerializeField]
	private SfxAndHapticTrigger _sfxClaimBonus;

	[SerializeField]
	private GameObject _vfxClickBtnNext;

	[SerializeField]
	private GameObject _vfxClickBtnNextWithBonus;

	private bool _isShowBonusButton;

	private bool _rewardClaimed;

	private bool _claimAnimationPending;

	private int _rwSoftCurrency;

	private int _rwHardCurrency;

	private int _rwSoftCurrencyBonus;

	private int _rwHardCurrencyBonus;

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

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void OnButtonsRevealed(float delay)
	{
	}

	protected override void OnShowAllElementImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIEWaitShowCurrencyFly_003Ed__36))]
	private IEnumerator IEWaitShowCurrencyFly(float delay)
	{
		return null;
	}

	private void ApplyAndShowAutoCurrencyFly()
	{
	}

	private int GetNumFlySoftCurrency(int amount)
	{
		return 0;
	}

	private int GetNumFlyHardCurrency(int amount)
	{
		return 0;
	}

	private void OnClickNext()
	{
	}

	private void OnClickNextRewardAdsBonus()
	{
	}

	private void DisableButtons()
	{
	}

	private void ApplyBonusAndPlayAnimHardCurrencyFlyAndNext(int amountHardCurrency, int amountSoftCurrency, Transform startFlyPoint, string trackingSource)
	{
	}

	[IteratorStateMachine(typeof(_003CIEFinishClaimIfAnimationStops_003Ed__44))]
	private IEnumerator IEFinishClaimIfAnimationStops(Action onDone)
	{
		return null;
	}
}
