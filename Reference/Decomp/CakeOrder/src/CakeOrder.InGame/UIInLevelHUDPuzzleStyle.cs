using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.CakeOrderSubsystem;
using Coffee.UIExtensions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UIInLevelHUDPuzzleStyle : UIElementAbstract
{
	private const string LocDayN = "day_n";

	[SerializeField]
	private UICurrencyCounter _softCurrencyCounter;

	[SerializeField]
	private UIInGameNumberCounter _customerCounter;

	[SerializeField]
	private TextMeshProUGUI _levelName;

	[SerializeField]
	private UIElementWithAnim _lvNameAnim;

	[SerializeField]
	private UIButtonHUD _btnWeatherForecast;

	[SerializeField]
	private Image _iconWeatherForecast;

	private bool _isShownFirstTime;

	[Header("Speed Up")]
	[SerializeField]
	private UIButtonHUD _buttonToggleSpeed;

	[SerializeField]
	private UIAnimShowHideControl _fxSpeedUpButton;

	[SerializeField]
	private UIParticle[] _fxSpeedUpParticles;

	[SerializeField]
	private UIElementWithAnim _speedBudgetPanel;

	[SerializeField]
	private TextMeshProUGUI _speedBudgetText;

	private bool _isEndgameRush;

	private float _endgameRushTimeScale;

	private float _speedBudgetSeconds;

	private float _timeSinceBudgetSave;

	private bool _isSpeedBudgetLoaded;

	private const string SpeedBudgetSaveKey = "SpeedUpRemainingSeconds";

	public bool IsSpeedUp { get; private set; }

	private float SoundTimeScale => 0f;

	public event Action onSpeedBudgetRechargeRequested
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

	private static event Action onCheatResetSpeedBudget
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

	public static void CheatResetSpeedBudget()
	{
	}

	private void OnCheatResetSpeedBudget()
	{
	}

	private void OnClickToggleSpeed(UIButtonHUD button)
	{
	}

	public void SetUp(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElementImmediate()
	{
	}

	private void OnClickBtnWeatherForecast(UIButtonHUD hUD)
	{
	}

	public void SetSpeedUp(bool isSpeedUp)
	{
	}

	public void SetSpeedUpEndgame(float timeScale)
	{
	}

	public void StopSpeedUpEndgame()
	{
	}

	private void ApplySpeedUpTime(bool isSpeedUp)
	{
	}

	private void ApplySpeedUpFx(bool isSpeedUp)
	{
	}

	public void ReactivateSpeedUp()
	{
	}

	private void Update()
	{
	}

	private SpeedUpConfig GetSpeedUpConfig()
	{
		return null;
	}

	private void LoadSpeedBudget()
	{
	}

	private void SaveSpeedBudget()
	{
	}

	private void UpdateSpeedBudgetText()
	{
	}

	private void OnDestroy()
	{
	}
}
