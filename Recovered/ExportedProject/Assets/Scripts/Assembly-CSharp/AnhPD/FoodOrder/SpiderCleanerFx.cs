using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpiderCleanerFx : MonoBehaviour
	{
		[SerializeField]
		private Transform lineRoot;

		[SerializeField]
		private SpiderWeb webPrefab;

		[SerializeField]
		private AudioClip sfxShoot;

		[Header("Spawn")]
		[SerializeField]
		private float offsetY;

		[SerializeField]
		private float edgePadding;

		[Header("Timing")]
		[SerializeField]
		private float slideDuration;

		[SerializeField]
		private float landDelay;

		[SerializeField]
		private float shootDuration;

		[SerializeField]
		private float shootStagger;

		[SerializeField]
		private float retractDuration;

		private readonly List<SpiderWeb> _webs;

		private readonly List<DragItemStackable> _stacks;

		private Action<DragItem> _despawn;

		private Action _onDone;

		private Sequence _seq;

		private Camera _cam;

		private Camera Cam => null;

		private Transform Root => null;

		public void Play(IReadOnlyList<DragItemStackable> stacks, Action<DragItem> despawn, Action onDone)
		{
		}

		private void SpawnWebs()
		{
		}

		private void Shoot()
		{
		}

		private void Catch()
		{
		}

		private void Climb()
		{
		}

		private void TakeAway()
		{
		}

		private void Finish()
		{
		}

		private void ReleaseWebs()
		{
		}

		private void LateUpdate()
		{
		}

		private void KillSeq()
		{
		}

		private void OnDisable()
		{
		}
	}
}
