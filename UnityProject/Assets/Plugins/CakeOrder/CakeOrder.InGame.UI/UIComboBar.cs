using DG.Tweening;
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

	public InGameComboMechanicControl Controller => _controller;

	public TutorialReferenceGroupUI TutRefBar => _tutRefBar;

	public bool IsDoneShow { get; private set; }

	// Rebuilt from the decompile: one milestone tick per combo step, a slider over the steps, a percentage text while filling and an
	// "activating" text with particles (and a tinted background) while the combo is on.
	public void SetUp(InGameComboMechanicControl controller)
	{
		_controller = controller;
		if (_controller == null)
		{
			return;
		}
		if (_prefabMilestone != null && _milestoneContainer != null)
		{
			foreach (RectTransform old in _milestoneInstances)
			{
				if (old != null) Destroy(old.gameObject);
			}
			_milestoneInstances.Clear();
			for (int i = 0; i < _controller.StepRequiredToActivate - 1; i++)
			{
				RectTransform milestone = Instantiate(_prefabMilestone, _milestoneContainer);
				float x = (float)(i + 1) / _controller.StepRequiredToActivate;
				milestone.anchorMin = new Vector2(x, 0f);
				milestone.anchorMax = new Vector2(x, 1f);
				milestone.anchoredPosition = Vector2.zero;
				_milestoneInstances.Add(milestone);
				milestone.gameObject.SetActive(true);
			}
		}
		if (_slider != null)
		{
			_slider.maxValue = _controller.StepRequiredToActivate;
			_slider.value = 0f;
		}
		if (_txtProgress != null)
		{
			_txtProgress.gameObject.SetActive(true);
			_txtProgress.text = _controller.TotalProgress.ToString();
		}
		_visualProgress = 0f;
		if (_txtActivating != null) _txtActivating.gameObject.SetActive(false);
		if (_vfxActivating != null) _vfxActivating.Stop();
		if (_screenVfxActivating != null)
		{
			foreach (UIParticle p in _screenVfxActivating)
			{
				if (p == null) continue;
				p.Stop();
				p.Clear();
			}
		}
		_controller.onComboStepIncreased += HandleComboStepIncreased;
		_controller.onComboStepExpired += HandleComboStepExpired;
		_controller.onFailedAllComboSteps += HandleFailedAllComboSteps;
		_controller.onComboActivated += HandleComboActivated;
		_controller.onComboDeactivated += HandleComboDeactivated;
		IsDoneShow = true;
	}

	protected override void OnBeforeShow()
	{
		Highlight();
	}

	protected override void OnDoneShow()
	{
		IsDoneShow = true;
	}

	private void HandleComboStepIncreased()
	{
		if (_vfxIncStep != null) _vfxIncStep.Play();
		Highlight();
	}

	// A short pop of the whole bar (the original plays a show/hide animation on _hightlight).
	private void Highlight()
	{
		if (_isAlwaysHighlight)
		{
			return;
		}
		transform.DOKill(true);
		transform.localScale = Vector3.one;
		transform.DOPunchScale(Vector3.one * 0.12f, 0.3f, 6, 0.5f);
	}

	private void HandleComboStepExpired()
	{
	}

	private void HandleFailedAllComboSteps()
	{
	}

	private void HandleComboActivated()
	{
		if (_txtProgress != null) _txtProgress.gameObject.SetActive(false);
		if (_txtActivating != null) _txtActivating.gameObject.SetActive(true);
		if (_vfxActivating != null) _vfxActivating.Play();
		if (_screenVfxActivating != null)
		{
			foreach (UIParticle p in _screenVfxActivating)
			{
				if (p == null) continue;
				p.Play();
				p.StartEmission();
			}
		}
		if (_controller != null && _controller.LevelBase != null && _controller.LevelBase.BackgroundControl != null)
		{
			_controller.LevelBase.BackgroundControl.ChangeTintColorAll(_backgroundTint);
		}
	}

	private void HandleComboDeactivated()
	{
		if (_txtProgress != null) _txtProgress.gameObject.SetActive(true);
		if (_txtActivating != null) _txtActivating.gameObject.SetActive(false);
		if (_vfxActivating != null) _vfxActivating.Stop();
		if (_screenVfxActivating != null)
		{
			foreach (UIParticle p in _screenVfxActivating)
			{
				if (p != null) p.StopEmission();
			}
		}
		if (_controller != null && _controller.LevelBase != null && _controller.LevelBase.BackgroundControl != null)
		{
			_controller.LevelBase.BackgroundControl.ChangeTintColorAll(NormalBackgroundTint);
		}
	}

	private void Update()
	{
		if (_controller == null)
		{
			return;
		}
		if (_controller.IsInComboState)
		{
			// While the combo runs the bar drains over its duration.
			if (_slider != null) _slider.value = (1f - _controller.ComboActivationCountdownProgress) * _slider.maxValue;
			return;
		}
		_visualProgress += (_controller.TotalProgress - _visualProgress) * Mathf.Clamp01(Time.unscaledDeltaTime * tweenSpeed * 50f);
		if (_slider != null) _slider.value = _visualProgress;
		int percentage = Mathf.RoundToInt(_visualProgress / _controller.StepRequiredToActivate * 100f);
		if (percentage != _txtPercentageDisplayed)
		{
			_txtPercentageDisplayed = percentage;
			if (_txtProgress != null) _txtProgress.text = percentage + "%";
		}
	}

	private void OnDestroy()
	{
		if (_controller == null)
		{
			return;
		}
		_controller.onComboStepIncreased -= HandleComboStepIncreased;
		_controller.onComboStepExpired -= HandleComboStepExpired;
		_controller.onFailedAllComboSteps -= HandleFailedAllComboSteps;
		_controller.onComboActivated -= HandleComboActivated;
		_controller.onComboDeactivated -= HandleComboDeactivated;
	}

	protected override void Awake()
	{
		if (_btnCheatIncComboStep != null)
		{
			_btnCheatIncComboStep.gameObject.SetActive(false);
		}
	}
}
}
