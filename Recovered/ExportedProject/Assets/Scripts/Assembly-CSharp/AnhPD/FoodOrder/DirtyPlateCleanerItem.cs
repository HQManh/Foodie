using System;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class DirtyPlateCleanerItem : MonoBehaviour
	{
		[SerializeField]
		private float flyDuration;

		[SerializeField]
		private float jumpPower;

		[SerializeField]
		private Ease flyEase;

		private Sequence _fly;

		public void FlyTo(Vector3 target, Action onArrived)
		{
		}

		private void OnDisable()
		{
		}

		private void Despawn()
		{
		}
	}
}
