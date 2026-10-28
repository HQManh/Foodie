using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class InGameComboMechanicControl : MonoBehaviour
{
	private LevelBaseCakeOrderAbstract _levelBase;

	private ComboMechanicParams _config;

	private CakeLevelRuntimeDataCustomer _customerRuntimeData;

	private bool _isGamePlaying;

	private float _lastTimeActivatedCombo;

	public LevelBaseCakeOrderAbstract LevelBase => null;

	public ComboMechanicParams Config => null;

	public int StepRequiredToActivate => 0;

	public float StepProgress { get; private set; }

	public int CurrentComboStep { get; private set; }

	public float TotalProgress => 0f;

	public float ComboActivationCountdownProgress => 0f;

	public bool IsInComboState { get; private set; }

	public FloatMulModifierWithRegisteredSource ComboCountdownMulModifier { get; private set; }

	public event Action onComboStepIncreased
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

	public event Action onComboStepExpired
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

	public event Action onFailedAllComboSteps
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

	public event Action onComboActivated
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

	public event Action onComboDeactivated
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

	public void SetUp(LevelBaseCakeOrderAbstract levelBase, ComboMechanicParams config, CakeLevelRuntimeDataCustomer runtimeDataCustomer)
	{
	}

	private void HandlePlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
	}

	private void HandleAddCustomerServed(ResultCustomerData data)
	{
	}

	private void HandleSingleDishServed()
	{
	}

	private void HandleSingleDishFailed()
	{
	}

	public void IncreaseComboStep(int amount = 1)
	{
	}

	private void HandleAddCustomerFailed(ResultCustomerData data)
	{
	}

	private void Update()
	{
	}

	private void OnDestroy()
	{
	}
}
