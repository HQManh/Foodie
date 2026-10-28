using System;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class FTimer : MonoBehaviour
	{
		[SerializeField]
		private Image imgTimer;

		[SerializeField]
		private Sprite spriteHappy;

		[SerializeField]
		private Sprite spriteNormal;

		[SerializeField]
		private Sprite spriteAngry;

		[SerializeField]
		private float duration;

		[SerializeField]
		private float refillDuration;

		public int[] timePercentToEmotion;

		private static readonly CustomerEmotion[] EmotionByStage;

		public Action OnTimeout;

		public Action OnShake;

		public Action OnStopShake;

		public Action OnUpset;

		public Action OnStopUpset;

		private float _timer;

		private float _rate;

		private float _speed;

		private CustomerEmotion _state;

		private WeatherEffect _currentWeather;

		private bool _isWaiting;

		private Tween _refillTween;

		private static readonly int FillId;

		private Material _fillMaterial;

		private float _fill;

		private Func<bool> _isHeld;

		public bool IsSatisfied => false;

		public float Rate => 0f;

		private float RealDeltaTime => 0f;

		private bool IsHeld => false;

		private void Awake()
		{
		}

		public void SetEmotionThresholds(int[] percents)
		{
		}

		public void Init(float dur)
		{
		}

		public void ResetTimer()
		{
		}

		public void HideTimer()
		{
		}

		public void StartWaiting()
		{
		}

		public void StopWaiting()
		{
		}

		public void SetHoldSource(Func<bool> isHeld)
		{
		}

		private void Update()
		{
		}

		private void CheckTimeOut()
		{
		}

		private CustomerEmotion GetEmotionByRate(float r)
		{
			return CustomerEmotion.Leave;
		}

		private void UpdateDisplay()
		{
		}

		private void SetRadial(float fill01)
		{
		}

		private Sprite SpriteFor(CustomerEmotion state)
		{
			return null;
		}

		private void ChangeEmoji(CustomerEmotion newState)
		{
		}

		public void RefillTime(Action onDone = null)
		{
		}

		private void OnDestroy()
		{
		}

		public int GetEmojiState()
		{
			return 0;
		}
	}
}
