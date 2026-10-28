using System;
using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class UISliderMultipeImage : MonoBehaviour
{
	[Serializable]
	public class EffectConfig
	{
		public GameObject vfxObj;

		public AudioClip sfx;

		public HapticTypes haptic;

		public void PlayVfxAndVibrate(RectTransform parent)
		{
		}

		public void PlaySound(AudioSource audioSource = null)
		{
		}
	}

	[Serializable]
	public class MoveSliderAnimConfig
	{
		public AudioSource audioSource;

		public float sliderSpeed;

		public Vector2 limitTimeMoveSlider;

		public AnimationCurve curve;

		public EffectConfig fxGain;

		public EffectConfig fxGainFull;

		public EffectConfig fxLose;

		public EffectConfig fxLoseFull;
	}

	private float _currentVisualValue;

	[SerializeField]
	private float _currentValue;

	[SerializeField]
	private Image[] _imgFillSequence;

	[Header("Anim & Effect")]
	[SerializeField]
	private MoveSliderAnimConfig _moveSliderAnimConfig;

	private Coroutine _coroutineUpdateVisual;

	public Image[] ImgFillSequence => null;

	public int MaxValue => 0;

	public int ValueInt => 0;

	public float Value => 0f;

	public void UpdateImgSequence(Image[] imgFillSequence)
	{
	}

	public void SetValueIntImmediate(int value)
	{
	}

	public void SetValueImmediate(float value)
	{
	}

	public void ChangeValue(float value, float animSpeed = 1f)
	{
	}

	private void UpdateFill()
	{
	}
}
