using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AreaSplitHelper : MonoBehaviour
	{
		public SplitArea[] splitAreas;

		public List<Collider2D> colliders;

		[SerializeField]
		private string ignoreRaycastLayerName;

		private int _regionIndex;

		private void Split()
		{
		}

		private BoxCollider2D[] SpawnVerticalColliders(SplitArea area)
		{
			return null;
		}

		private void OnDrawGizmosSelected()
		{
		}
	}
}
