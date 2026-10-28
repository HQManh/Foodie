using System;
using System.Collections.Generic;
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

	private float _lastTimeActivatedCombo;

	public LevelBaseCakeOrderAbstract LevelBase => _levelBase;

	public ComboMechanicParams Config => _config;

	public int StepRequiredToActivate => _config.numStepsToActivate;

	public float StepProgress { get; private set; }

	public int CurrentComboStep { get; private set; }

	public float TotalProgress => Mathf.Clamp01((CurrentComboStep + StepProgress - 1f) / Mathf.Max(StepRequiredToActivate, 1));

	public float ComboActivationCountdownProgress => IsInComboState ? Mathf.Clamp01(1f - (Time.time - _lastTimeActivatedCombo) / _config.comboDuration) : 0f;

	public bool IsInComboState { get; private set; }

	public FloatMulModifierWithRegisteredSource ComboCountdownMulModifier { get; private set; }

	public event Action onComboStepIncreased;

	public event Action onComboStepExpired;

	public event Action onFailedAllComboSteps;

	public event Action onComboActivated;

	public event Action onComboDeactivated;

	public void SetUp(LevelBaseCakeOrderAbstract levelBase, ComboMechanicParams config, CakeLevelRuntimeDataCustomer runtimeDataCustomer)
	{
		_config = config;
		_customerRuntimeData = runtimeDataCustomer;
		_levelBase = levelBase;
		ComboCountdownMulModifier = new FloatMulModifierWithRegisteredSource();
		_levelBase.onPlayStateChanged += HandlePlayStateChanged;
		if (_config.incStepByNumRecipesOfCustomer)
		{
			_customerRuntimeData.onSingleDishServed += HandleSingleDishServed;
			_customerRuntimeData.onSingleDishFailed += HandleSingleDishFailed;
		}
		else
		{
			_customerRuntimeData.onAddCustomerServed += HandleAddCustomerServed;
		}
		_customerRuntimeData.onAddCustomerFailed += HandleAddCustomerFailed;
		StepProgress = 0f;
		CurrentComboStep = 0;
	}

	private void HandlePlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
		switch (newState)
		{
		case LevelPlayState.Playing:
			CurrentComboStep = _config.initStep;
			StepProgress = CurrentComboStep >= 1 ? 1f : 0f;
			_isGamePlaying = true;
			break;
		case LevelPlayState.Ended:
			_isGamePlaying = false;
			break;
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
			this.onComboStepIncreased?.Invoke();
			return;
		}
		IsInComboState = true;
		_lastTimeActivatedCombo = Time.time;
		this.onComboActivated?.Invoke();
		// parameter keys inferred: duration in whole seconds, unlimited uses
		LevelBaseCakeOrderAbstract.BoosterData booster = new LevelBaseCakeOrderAbstract.BoosterData
		{
			boosterEffect = BoosterType.BoostIngredientRefill,
			paramsInt = new Dictionary<string, int>()
		};
		booster.paramsInt[LevelBaseCakeOrderAbstract.BoosterData.KEY_PARAM_DURATION] = Mathf.RoundToInt(_config.comboDuration);
		booster.paramsInt[LevelBaseCakeOrderAbstract.BoosterData.KEY_PARAM_NUM] = -1;
		_levelBase.ActivateBooster(booster);
	}

	private void HandleAddCustomerFailed(ResultCustomerData data)
	{
		if (!IsInComboState && CurrentComboStep > 0)
		{
			StepProgress = 0f;
			this.onFailedAllComboSteps?.Invoke();
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
			StepProgress += -1f / _config.stepTimeCountdown * Time.deltaTime * ComboCountdownMulModifier.Value;
			if (StepProgress > 0f)
			{
				return;
			}
			CurrentComboStep--;
			StepProgress = 0f;
			if (CurrentComboStep > 0)
			{
				StepProgress = 1f;
			}
			this.onComboStepExpired?.Invoke();
		}
		else if (Time.time - _lastTimeActivatedCombo >= _config.comboDuration)
		{
			IsInComboState = false;
			StepProgress = 0f;
			CurrentComboStep = 0;
			this.onComboDeactivated?.Invoke();
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
