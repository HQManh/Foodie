using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame
{

public class InGameComboMechanicControl : MonoBehaviour
{
	private LevelBaseCakeOrderAbstract _levelBase;

	private ComboMechanicParams _config;

	private CakeLevelRuntimeDataCustomer _customerRuntimeData;

	private bool _isGamePlaying;

	private float _lastTimeActivatedCombo = -1000f;

	public LevelBaseCakeOrderAbstract LevelBase => _levelBase;

	public ComboMechanicParams Config => _config;

	public int StepRequiredToActivate => _config.numStepsToActivate;

	// Remaining time of the current step, 1 -> 0.
	public float StepProgress { get; private set; }

	public int CurrentComboStep { get; private set; }

	public float TotalProgress => CurrentComboStep > 0 ? StepProgress + (CurrentComboStep - 1) : 0f;

	public float ComboActivationCountdownProgress => Mathf.Clamp01((Time.time - _lastTimeActivatedCombo) / _config.comboDuration);

	public bool IsInComboState { get; private set; }

	public FloatMulModifierWithRegisteredSource ComboCountdownMulModifier { get; private set; } = new FloatMulModifierWithRegisteredSource();

	public event Action onComboStepIncreased;

	public event Action onComboStepExpired;

	public event Action onFailedAllComboSteps;

	public event Action onComboActivated;

	public event Action onComboDeactivated;

	// Rebuilt from the decompile: combo steps are gained per served customer (or per served dish), expire on a timer, and a full bar
	// switches on the combo state (tips) for comboDuration seconds. Failing a customer drops the whole bar.
	public void SetUp(LevelBaseCakeOrderAbstract levelBase, ComboMechanicParams config, CakeLevelRuntimeDataCustomer runtimeDataCustomer)
	{
		_levelBase = levelBase;
		_config = config;
		_customerRuntimeData = runtimeDataCustomer;
		if (_levelBase != null)
		{
			_levelBase.onPlayStateChanged += HandlePlayStateChanged;
		}
		if (_config != null && _customerRuntimeData != null)
		{
			if (!_config.incStepByNumRecipesOfCustomer)
			{
				_customerRuntimeData.onAddCustomerServed += HandleAddCustomerServed;
			}
			else
			{
				_customerRuntimeData.onSingleDishServed += HandleSingleDishServed;
				_customerRuntimeData.onSingleDishFailed += HandleSingleDishFailed;
			}
			_customerRuntimeData.onAddCustomerFailed += HandleAddCustomerFailed;
		}
		StepProgress = 0f;
		CurrentComboStep = 0;
		if (_levelBase != null && _levelBase.PlayState == LevelPlayState.Playing)
		{
			HandlePlayStateChanged(LevelPlayState.Setup, LevelPlayState.Playing);
		}
	}

	private void HandlePlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
		if (newState == LevelPlayState.Playing)
		{
			CurrentComboStep = _config.initStep;
			StepProgress = CurrentComboStep > 0 ? 1f : 0f;
			_isGamePlaying = true;
		}
		else if (newState == LevelPlayState.Ended)
		{
			_isGamePlaying = false;
		}
	}

	private void HandleAddCustomerServed(ResultCustomerData data)
	{
		IncreaseComboStep(1);
	}

	private void HandleSingleDishServed()
	{
		IncreaseComboStep(1);
	}

	private void HandleSingleDishFailed()
	{
	}

	public void IncreaseComboStep(int amount = 1)
	{
		if (IsInComboState)
		{
			return;
		}
		CurrentComboStep += amount;
		StepProgress = 1f;
		if (CurrentComboStep < _config.numStepsToActivate)
		{
			onComboStepIncreased?.Invoke();
			return;
		}
		IsInComboState = true;
		_lastTimeActivatedCombo = Time.time;
		onComboActivated?.Invoke();
	}

	private void HandleAddCustomerFailed(ResultCustomerData data)
	{
		if (!IsInComboState && CurrentComboStep > 0)
		{
			StepProgress = 0f;
			CurrentComboStep = 0;
			onFailedAllComboSteps?.Invoke();
		}
	}

	private void Update()
	{
		if (!_isGamePlaying)
		{
			return;
		}
		if (!IsInComboState)
		{
			if (CurrentComboStep < 1 || StepProgress <= 0f)
			{
				return;
			}
			StepProgress += (-1f / _config.stepTimeCountdown) * Time.deltaTime * ComboCountdownMulModifier.Value;
			if (StepProgress > 0f)
			{
				return;
			}
			CurrentComboStep--;
			StepProgress = CurrentComboStep > 0 ? 1f : 0f;
			onComboStepExpired?.Invoke();
		}
		else if (Time.time - _lastTimeActivatedCombo >= _config.comboDuration)
		{
			IsInComboState = false;
			StepProgress = 0f;
			CurrentComboStep = 0;
			onComboDeactivated?.Invoke();
		}
	}

	private void OnDestroy()
	{
		if (_levelBase != null)
		{
			_levelBase.onPlayStateChanged -= HandlePlayStateChanged;
		}
		if (_customerRuntimeData != null)
		{
			_customerRuntimeData.onAddCustomerServed -= HandleAddCustomerServed;
			_customerRuntimeData.onAddCustomerFailed -= HandleAddCustomerFailed;
			_customerRuntimeData.onSingleDishServed -= HandleSingleDishServed;
			_customerRuntimeData.onSingleDishFailed -= HandleSingleDishFailed;
		}
	}
}
}
