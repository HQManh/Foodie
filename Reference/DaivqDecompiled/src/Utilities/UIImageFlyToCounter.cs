using System;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class UIImageFlyToCounter : MonoBehaviour
{
	private UINumberCounterAbstract _counter;

	[Header("Gold Fly")]
	[SerializeField]
	private ObjectStackPoolControl<Image> _poolGold;

	[SerializeField]
	private Transform _goldStartPos;

	[SerializeField]
	private float _delayBetweenSpawnGoldFly;

	[SerializeField]
	private float _durationGoldFly;

	[SerializeField]
	private AnimationCurve _easeGoldPositionFly;

	[SerializeField]
	private AnimationCurve _easeGoldPependicularPositionFly;

	[SerializeField]
	private AnimationCurve _easeGoldScaleFly;

	[Header("Gold Explode")]
	[SerializeField]
	private UIFlyExplodeConfig _explode;

	[Header("Counter")]
	[SerializeField]
	private float _amountTweenPerSecond;

	[SerializeField]
	private float _maxDurationTweenText;

	[SerializeField]
	private bool _isUpdateImageOnSpawn;

	[SerializeField]
	private AudioClip _sfxCoinSpawn;

	[SerializeField]
	private AudioClip _sfxCoinHit;

	[SerializeField]
	private bool _singleFirstHitSfx;

	[SerializeField]
	private AudioSource _audioSource;

	private Transform _startPoint;

	private Coroutine _coroutineTweenText;

	private float _currentAmount;

	private Sprite _icon;

	public AudioSource AudioSource => null;

	public virtual void SetUp(UINumberCounterAbstract counter, int startAmount)
	{
	}

	public void SetIcon(Sprite sprite)
	{
	}

	public void UpdateShownAmount(int value)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnDisable()
	{
	}

	protected virtual Sprite GetIcon()
	{
		return null;
	}

	public void ShowCurrencyFly(int amount, int numObjectFly, Action onAllGoldFlyDone = null, float delay = 0f)
	{
	}

	public void ShowCurrencyFly(int amount, int numObjectFly, Transform startPoint, Action onAllGoldFlyDone = null, float delay = 0f)
	{
	}
}
