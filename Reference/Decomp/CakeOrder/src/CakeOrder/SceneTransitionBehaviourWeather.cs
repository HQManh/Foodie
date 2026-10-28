using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using DG.Tweening;
using SceneTransitionR1;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder;

public class SceneTransitionBehaviourWeather : SceneTransitionBehaviorBase
{
	[Serializable]
	public class VisualByWeather
	{
		public Sprite sprite;

		public Color bgColor;
	}

	public const string KeyIsChangeNight = "change_night";

	public const string KeyWeatherStart = "weather_start";

	public const string KeyWeatherEnd = "weather_end";

	[SerializeField]
	private VisualByWeather _visualNight;

	[SerializeField]
	[ArrayElementNameMatchEnum(typeof(WeatherEffect), 0, -1, 20f)]
	private VisualByWeather[] _visualByWeather;

	[SerializeField]
	private AudioClip _sfxTransitionIn;

	[SerializeField]
	private AudioClip _sfxTransitionOut;

	[Header("Hole")]
	[SerializeField]
	private RectTransform _holeTransform;

	[SerializeField]
	private float _maxHoleSize;

	[SerializeField]
	private Ease _easeHoleIn;

	[SerializeField]
	private Ease _easeHoleOut;

	[SerializeField]
	private Graphic[] _raycastBlockGraphics;

	[Header("Color Fill")]
	[SerializeField]
	private RectTransform _weatherIconTransform;

	[SerializeField]
	private Image[] _weatherIcons;

	[SerializeField]
	private Image[] _imgFill;

	[SerializeField]
	private Image _imgBgr;

	public float weatherPositionYShow;

	public float weatherPositionYHide;

	[SerializeField]
	private CanvasGroup _loadProgressGroup;

	[SerializeField]
	private Ease _easeIn;

	[SerializeField]
	private Ease _easeOut;

	[SerializeField]
	private Ease _easeMoveDown;

	[SerializeField]
	private Ease _easeMoveUp;

	[SerializeField]
	private Color _colorBgrOnIconMoveDown;

	[SerializeField]
	private float _durationDelayMoveUp;

	[SerializeField]
	private float _durationDelayOut;

	private Sequence _tween;

	private WeatherEffect _weatherStart;

	private WeatherEffect _weatherEnd;

	private bool _isChangeNight;

	protected override void OnSetUp()
	{
	}

	public static Dictionary<string, object> CreateCustomDataSingleWeather(WeatherEffect weather)
	{
		return null;
	}

	public static Dictionary<string, object> CreateCustomDataChangeNight(WeatherEffect weatherStart, WeatherEffect weatherEnd)
	{
		return null;
	}

	private VisualByWeather GetVisualByWeather(WeatherEffect weather)
	{
		return null;
	}

	protected override void PlayTransitionIn(Action onDone, float duration)
	{
	}

	public override void SetProgress(float value)
	{
	}

	protected override void PlayTransitionOut(Action onDone, float duration)
	{
	}
}
