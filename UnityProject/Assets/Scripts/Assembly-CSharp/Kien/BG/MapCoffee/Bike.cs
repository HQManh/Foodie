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
		private float moveDistance = 500f;

		[SerializeField]
		private float moveDuration = 2f;

		[SerializeField]
		private float delayBetween = 1f;

		private Sequence sequence;

		private void Start()
		{
			// TODO(unrecovered): Start's pseudocode is a duplicate of Play's (same body, unnamed float/vector parameters); the direction vectors come from an unnamed static block (DAT_0918cbd0 + 0xb8).
		}

		public void Play()
		{
			// TODO(unrecovered): pseudocode takes unnamed Vector3-like and float parameters that have no caller in the stub, and the movement directions come from an unnamed static block (DAT_0918cbd0 + 0xb8).
		}

		private void OnDestroy()
		{
			if (sequence != null)
			{
				sequence.Kill();
			}
		}
	}
}
