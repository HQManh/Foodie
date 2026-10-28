using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home;

[DisallowMultipleComponent]
[RequireComponent(typeof(Button))]
public sealed class UIActivateCheatSequence : MonoBehaviour
{
	private enum Step
	{
		FirstTaps,
		FirstClose,
		SecondTaps,
		ActivationClose
	}

	[SerializeField]
	[Min(1f)]
	private int _firstStepTapCount;

	[SerializeField]
	[Min(1f)]
	private int _secondStepTapCount;

	[SerializeField]
	private HapticTypes _progressHaptic;

	private Button _button;

	private Step _step;

	private int _tapCount;

	private void Awake()
	{
	}

	public bool HandleClose()
	{
		return false;
	}

	private void HandleTap()
	{
	}

	private void OnDisable()
	{
	}

	private void OnDestroy()
	{
	}

	private void ResetSequence()
	{
	}
}
