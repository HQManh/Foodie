using Coffee.UIExtensions;
using System.Collections.Generic;
using CakeOrder.Home;
using Coffee.UIExtensions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame.UI
{

public class UIComboBar : UIButtonHUD
{
	private InGameComboMechanicControl _controller;

	[SerializeField]
	private Slider _slider;

	[SerializeField]
	private TextMeshProUGUI _txtProgress;

	[SerializeField]
	private TextMeshProUGUI _txtActivating;

	[SerializeField]
	private RectTransform _prefabMilestone;

	[SerializeField]
	private RectTransform _milestoneContainer;

	private List<RectTransform> _milestoneInstances = new List<RectTransform>();

	[SerializeField]
	private UIAnimShowHideControl _hightlight;

	[SerializeField]
	private bool _isAlwaysHighlight;

	public float durationShowHighlight;

	public float tweenSpeed;

	private float _visualProgress;

	private int _txtPercentageDisplayed;

	[SerializeField]
	private UIParticle _vfxIncStep;

	[SerializeField]
	private UIParticle _vfxActivating;

	[SerializeField]
	private UIParticle[] _screenVfxActivating;

	[SerializeField]
	private Color _backgroundTint;

	// The static constructor sets this to white (a splat of 1.0f across the four components).
	private static Color NormalBackgroundTint = Color.white;

	[Header("Tut")]
	[SerializeField]
	private TutorialReferenceGroupUI _tutRefBar;

	[Header("Cheat")]
	[SerializeField]
	private Button _btnCheatIncComboStep;

	public InGameComboMechanicControl Controller => null;

	public TutorialReferenceGroupUI TutRefBar => null;

	public bool IsDoneShow { get; private set; }

	public void SetUp(InGameComboMechanicControl controller)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void HandleComboStepIncreased()
	{
	}

	private void Highlight()
	{
	}

	private void HandleComboStepExpired()
	{
	}

	private void HandleFailedAllComboSteps()
	{
	}

	private void HandleComboActivated()
	{
	}

	private void HandleComboDeactivated()
	{
	}

	private void Update()
	{
	}

	private void OnDestroy()
	{
	}

	protected override void Awake()
	{
	}
}
}
