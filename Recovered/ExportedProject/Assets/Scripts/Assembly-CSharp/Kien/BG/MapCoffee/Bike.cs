using DG.Tweening;
using UnityEngine;

namespace Kien.BG.MapCoffee
{
	public class Bike : MonoBehaviour
	{
		[SerializeField]
		private Transform pointA;

		[SerializeField]
		private Transform pointB;

		[SerializeField]
		private float moveDistance;

		[SerializeField]
		private float moveDuration;

		[SerializeField]
		private float delayBetween;

		private Sequence sequence;

		private void Start()
		{
		}

		public void Play()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
