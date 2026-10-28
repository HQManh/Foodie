using System;
using CakeOrder;
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
		protected float rewindDuration;

		public UnityEvent onLanded;

		protected static int _minLayer;

		protected static int _maxLayer;

		private Transform _tf;

		public Vector3 SizeInit => default;

		public Transform Tf => null;

		public virtual void InitProperties()
		{
		}

		protected void PlayPlaceSfx(AudioManagerCakeOrder.AudioTrack track)
		{
		}

		public void Rewind(Action completeAction = null)
		{
		}

		protected void PlayHaptic()
		{
		}

		public void PushBelowMaxLayer()
		{
		}

		public void PushToTopLayer()
		{
		}

		protected void ClampSortingLayer(Vector3 pos)
		{
		}

		public void SetSortingOrder(int order)
		{
		}

		public void SetDepthByY(float depthY)
		{
		}

		protected static Vector3 ClampZPosition(Vector3 pos)
		{
			return default;
		}
	}
}
