using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ObjectShaking : MonoBehaviour
	{
		[SerializeField]
		private Transform tfToShake;

		[SerializeField]
		private float rotStrength;

		[SerializeField]
		private float duration;

		[SerializeField]
		private int vibrato;

		private Tween rotTween;

		public void Editor()
		{
		}

		public void DoNormalShake()
		{
		}

		public void ShakingObj(Transform tf, float duration = 0.2f, float rotStrength = 1f)
		{
		}

		public void StartShake(Transform tf)
		{
		}

		public void StopShake(Transform tf)
		{
		}
	}
}
