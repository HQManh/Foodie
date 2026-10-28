using System.Collections.Generic;
using CakeOrder;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	public class DragItemStackable : DragItem
	{
		[SerializeField]
		private GameObject stackVisualPrefab;

		[SerializeField]
		private float stackStepY = 0.075f;

		[SerializeField]
		private bool stackOrderAscending = true;

		[SerializeField]
		private GameObject stackTopVisual;

		private readonly List<GameObject> _visuals = new List<GameObject>();

		private Vector3 _topBaseLocalPos;

		private bool _topBaseCaptured;

		public int StackCount => StackLevel + 1;

		protected virtual int StackLevel => _visuals.Count;

		protected virtual bool CanStack => stackVisualPrefab;

		protected bool IsStacking
		{
			get
			{
				if (stackLayout == StackLayout.Vertical && maxStack > 1)
				{
					return CanStack;
				}
				return false;
			}
		}

		public override void InitForDrag()
		{
			ClearVisuals();
			base.InitForDrag();
		}

		private void LateUpdate()
		{
			if (stackLayout != StackLayout.Vertical || maxStack < 2 || !CanStack)
			{
				return;
			}
			IngCell cell = base.Cell;
			if (cell == null || !cell.IsLanded(this))
			{
				return;
			}
			IReadOnlyList<DragItem> items = cell.Items;
			DragItemStackable first = ((items.Count > 0) ? (items[0] as DragItemStackable) : null);
			if (!(first == null) && !(first == this))
			{
				first.Absorb(this);
			}
		}

		private void Absorb(DragItemStackable other)
		{
			Absorb(other, true);
		}

		public void AbsorbForced(DragItemStackable other)
		{
			Absorb(other, false);
		}

		private void Absorb(DragItemStackable other, bool respectMaxStack)
		{
			if (other == null || other == this)
			{
				return;
			}
			if (!sfxPlace)
			{
				GlobalAudio.Play(GlobalSfx.Land);
			}
			else
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxPlace, (AudioManagerCakeOrder.AudioTrack)2);
			}
			int count;
			if (!respectMaxStack)
			{
				count = other.StackCount;
			}
			else
			{
				int room = Mathf.Max(0, maxStack - StackLevel - 1);
				count = Mathf.Max(0, Mathf.Min(other.StackCount, room));
			}
			other.Despawn();
			for (int i = 0; i < count; i++)
			{
				AddVisual();
			}
		}

		protected virtual void AddVisual()
		{
			GameObject go = ObjectPoolDictArray.Instance.GetGameObject(stackVisualPrefab, Tf.position, Tf.rotation);
			go.SetActive(true);
			go.transform.SetParent(Tf, false);
			_visuals.Add(go);
			LayoutVisual(go, _visuals.Count);
			RefreshTopVisual();
		}

		protected void RefreshTopVisual()
		{
			if (!stackTopVisual)
			{
				return;
			}
			Transform top = stackTopVisual.transform;
			if (!_topBaseCaptured)
			{
				_topBaseLocalPos = top.localPosition;
				_topBaseCaptured = true;
			}
			int stackLevel = StackLevel;
			top.localPosition = new Vector3(_topBaseLocalPos.x + 0f, _topBaseLocalPos.y + stackStepY * (float)stackLevel, _topBaseLocalPos.z + 0f);
			SetVisualOrder(stackTopVisual, stackLevel + 1);
		}

		private void LayoutVisual(GameObject go, int level)
		{
			Vector3 basePos = stackVisualPrefab.transform.localPosition;
			go.transform.localPosition = new Vector3(basePos.x + 0f, basePos.y + stackStepY * (float)level, basePos.z + 0f);
			go.transform.localRotation = Quaternion.identity;
			SetVisualOrder(go, level);
		}

		private void SetVisualOrder(GameObject go, int level)
		{
			int order = (stackOrderAscending ? level : (-level));
			Renderer[] renderers = go.GetComponentsInChildren<Renderer>(true);
			for (int i = 0; i < renderers.Length; i++)
			{
				renderers[i].sortingOrder = order;
			}
		}

		public override void Despawn()
		{
			ClearVisuals();
			base.Despawn();
		}

		protected virtual void ClearVisuals()
		{
			for (int i = 0; i < _visuals.Count; i++)
			{
				if ((bool)_visuals[i])
				{
					ObjectPoolDictArray.Instance.ReleaseGameObject(_visuals[i]);
				}
			}
			_visuals.Clear();
			RefreshTopVisual();
		}
	}
}
