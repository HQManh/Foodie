using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Utilities;

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
		private float offsetY = 2f;

		[SerializeField]
		private float edgePadding = 0.5f;

		[Header("Timing")]
		[SerializeField]
		private float slideDuration = 0.6f;

		[SerializeField]
		private float landDelay = 0.2f;

		[SerializeField]
		private float shootDuration = 0.25f;

		[SerializeField]
		private float shootStagger = 0.06f;

		[SerializeField]
		private float retractDuration = 0.4f;

		private readonly List<SpiderWeb> _webs = new List<SpiderWeb>();

		private readonly List<DragItemStackable> _stacks = new List<DragItemStackable>();

		private Action<DragItem> _despawn;

		private Action _onDone;

		private Sequence _seq;

		private Camera _cam;

		private Camera Cam
		{
			get
			{
				if (_cam == null)
				{
					_cam = Camera.main;
				}
				return _cam;
			}
		}

		private Transform Root => lineRoot != null ? lineRoot : transform;

		public void Play(IReadOnlyList<DragItemStackable> stacks, Action<DragItem> despawn, Action onDone)
		{
			// TODO(unrecovered): DOTween-heavy sequence build (Sequence/DOMove/Append/Callback); callees not recovered in full.
		}

		private void SpawnWebs()
		{
			// TODO(unrecovered): webs are spawned through a pool singleton chain and SpiderWeb.Setup/parenting with an unrecovered spawn helper (FUN_04c37c04).
		}

		private void Shoot()
		{
			// TODO(unrecovered): DOTween-heavy shoot sequence (SpiderWeb.ShootTween, Insert with staggered offsets).
		}

		private void Catch()
		{
			// TODO(unrecovered): DOTween-heavy catch sequence (SpiderWeb.CatchTween, DragItem unregister, DOKill).
		}

		private void Climb()
		{
			// TODO(unrecovered): DOTween-heavy climb sequence (DOMove, Append, TweenCallback).
		}

		private void TakeAway()
		{
			foreach (DragItemStackable stack in _stacks)
			{
				if (stack == null)
				{
					continue;
				}
				stack.transform.SetParent(null, true);
				_despawn?.Invoke(stack);
			}
			_stacks.Clear();
			Finish();
		}

		private void Finish()
		{
			KillSeq();
			ReleaseWebs();
			_stacks.Clear();
			Action done = _onDone;
			_despawn = null;
			_onDone = null;
			ObjectPoolDictArray.Instance.ReleaseGameObject(gameObject);
			done?.Invoke();
		}

		private void ReleaseWebs()
		{
			foreach (SpiderWeb web in _webs)
			{
				if (web == null)
				{
					continue;
				}
				web.transform.SetParent(null, true);
				ObjectPoolDictArray.Instance.ReleaseGameObject(web.gameObject);
			}
			_webs.Clear();
		}

		private void LateUpdate()
		{
			foreach (SpiderWeb web in _webs)
			{
				if (web != null)
				{
					web.UpdateLine();
				}
			}
		}

		private void KillSeq()
		{
			if (_seq != null && _seq.IsActive())
			{
				_seq.Kill();
			}
			_seq = null;
		}

		private void OnDisable()
		{
			KillSeq();
		}
	}
}
