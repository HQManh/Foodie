using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class OrderCircleCountDownTimer : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spriteRenderer;

		[SerializeField]
		private Transform timeOut;

		[SerializeField]
		private float duration;

		public Action OnTimeout;

		public Action OnTimeOutComplete;

		private float _timer;

		private Material _material;

		private bool _isWaiting;

		private float _rate;

		public bool IsSatisfied => false;

		[field: SerializeField]
		public bool IsInUsed { get; set; }

		private void Awake()
		{
		}

		public void Init(float duration)
		{
		}

		public void StartWaiting()
		{
		}

		public void StopWaiting()
		{
		}

		private void Update()
		{
		}

		private void TimeOut()
		{
		}

		private void UpdateDisplay()
		{
		}

		public void PlusTime(float time)
		{
		}

		public void PlusTimeByPercent(float percent)
		{
		}
	}
}
