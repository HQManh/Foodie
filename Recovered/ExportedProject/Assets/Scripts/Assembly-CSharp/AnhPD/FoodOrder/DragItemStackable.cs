using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class DragItemStackable : DragItem
	{
		[SerializeField]
		private GameObject stackVisualPrefab;

		[SerializeField]
		private float stackStepY;

		[SerializeField]
		private bool stackOrderAscending;

		[SerializeField]
		private GameObject stackTopVisual;

		private readonly List<GameObject> _visuals;

		private Vector3 _topBaseLocalPos;

		private bool _topBaseCaptured;

		public int StackCount => 0;

		protected virtual int StackLevel => 0;

		protected virtual bool CanStack => false;

		protected bool IsStacking => false;

		public override void InitForDrag()
		{
		}

		private void LateUpdate()
		{
		}

		private void Absorb(DragItemStackable other)
		{
		}

		public void AbsorbForced(DragItemStackable other)
		{
		}

		private void Absorb(DragItemStackable other, bool respectMaxStack)
		{
		}

		protected virtual void AddVisual()
		{
		}

		protected void RefreshTopVisual()
		{
		}

		private void LayoutVisual(GameObject go, int level)
		{
		}

		private void SetVisualOrder(GameObject go, int level)
		{
		}

		public override void Despawn()
		{
		}

		protected virtual void ClearVisuals()
		{
		}
	}
}
