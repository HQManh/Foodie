using System;
using CakeOrder;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class DragItemBase : InteractableItem
	{
		[SerializeField]
		protected SortingGroup sortingGroup;

		[SerializeField]
		protected AudioClip sfxPlace;

		[SerializeField]
		protected AudioClip sfxUse;

		[SerializeField]
		protected Vector3 sizeInit;

		[SerializeField]
		protected Vector2 startPos;

		[SerializeField]
		protected Vector3 startRotation;

		[SerializeField]
		protected float rewindDuration = 0.5f;

		public UnityEvent onLanded;

		protected static int _minLayer;

		protected static int _maxLayer = 30;

		private Transform _tf;

		public Vector3 SizeInit => sizeInit;

		public Transform Tf
		{
			get
			{
				if (!_tf)
				{
					_tf = base.transform;
				}
				return _tf;
			}
		}

		public virtual void InitProperties()
		{
			sortingGroup = GetComponent<SortingGroup>();
			sortingGroup.sortingOrder = _minLayer;
			sizeInit = base.transform.localScale;
			startPos = Tf.position;
			startRotation = Tf.eulerAngles;
		}

		protected void PlayPlaceSfx(AudioManagerCakeOrder.AudioTrack track)
		{
			if (base.gameObject.activeSelf)
			{
				if (!sfxPlace)
				{
					AnhPD.FoodOrder.GlobalAudio.Play(GlobalSfx.Land);
				}
				else
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxWithPitchVariant(sfxPlace, track, 1f, 0.1f);
				}
			}
		}

		public void Rewind(Action completeAction = null)
		{
			float duration = rewindDuration;
			float distance = Vector2.Distance(Tf.position, startPos);
			if (distance < 1f)
			{
				duration = distance * rewindDuration;
			}
			float remaining = Vector2.Distance(Tf.position, startPos);
			float moveDuration = ((remaining >= 0.2f) ? duration : 0.1f);
			Tf.DOMove(new Vector3(startPos.x, startPos.y, startPos.y * 0.01f), moveDuration).SetUpdate(true).OnComplete(delegate
			{
				PlayPlaceSfx((AudioManagerCakeOrder.AudioTrack)2);
				ClampSortingLayer(Tf.position);
				onLanded.Invoke();
				if (completeAction != null)
				{
					completeAction();
				}
			});
			Tf.DOScale(sizeInit, 0.3f).SetUpdate(true);
			Tf.DORotate(startRotation, 0.3f).SetUpdate(true);
		}

		protected void PlayHaptic()
		{
		}

		public void PushBelowMaxLayer()
		{
			sortingGroup.sortingOrder = _maxLayer - 1;
		}

		public void PushToTopLayer()
		{
			sortingGroup.sortingOrder = _maxLayer + 2;
		}

		protected void ClampSortingLayer(Vector3 pos)
		{
			sortingGroup.sortingOrder = (int)(0f - pos.y);
		}

		public void SetSortingOrder(int order)
		{
			sortingGroup.sortingOrder = order;
		}

		public void SetDepthByY(float depthY)
		{
			Vector3 position = Tf.position;
			Tf.position = new Vector3(position.x, position.y, depthY * 0.01f);
		}

		protected static Vector3 ClampZPosition(Vector3 pos)
		{
			return pos;
		}
	}
}
