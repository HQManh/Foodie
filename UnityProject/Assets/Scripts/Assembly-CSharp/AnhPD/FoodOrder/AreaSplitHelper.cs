using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AreaSplitHelper : MonoBehaviour
	{
		public SplitArea[] splitAreas;

		public List<Collider2D> colliders = new List<Collider2D>();

		[SerializeField]
		private string ignoreRaycastLayerName = "Ignore Raycast" /* literal recovered by guess */;

		private int _regionIndex;

		private void Split()
		{
			foreach (Collider2D collider in colliders)
			{
				if ((bool)collider)
				{
					UnityEngine.Object.DestroyImmediate(collider.gameObject);
				}
			}
			colliders.Clear();
			_regionIndex = 0;
			SplitArea[] array = splitAreas;
			foreach (SplitArea area in array)
			{
				colliders.AddRange(SpawnVerticalColliders(area));
			}
		}

		private BoxCollider2D[] SpawnVerticalColliders(SplitArea area)
		{
			if (area == null)
			{
				throw new ArgumentNullException("area");
			}
			if (area.numArea <= 0)
			{
				throw new ArgumentOutOfRangeException("numArea");
			}
			BoxCollider2D[] array = new BoxCollider2D[area.numArea];
			int layer = LayerMask.NameToLayer(ignoreRaycastLayerName);
			Vector3 vector = base.transform.InverseTransformPoint(area.center.x, area.center.y, 0f);
			float width = area.size.x / (float)area.numArea;
			for (int i = 0; i < area.numArea; i++)
			{
				GameObject gameObject = new GameObject(string.Format("Region_{0}", _regionIndex) /* literal recovered by guess */);
				gameObject.transform.SetParent(base.transform, false);
				gameObject.transform.localPosition = new Vector3(width * ((float)i + 0.5f) + (vector.x - area.size.x * 0.5f), area.center.y, 0f);
				gameObject.layer = layer;
				SpriteRenderer spriteRenderer = gameObject.AddComponent<SpriteRenderer>();
				spriteRenderer.sortingOrder = -800;
				spriteRenderer.enabled = false;
				BoxCollider2D boxCollider2D = gameObject.AddComponent<BoxCollider2D>();
				boxCollider2D.size = new Vector2(width, area.size.y);
				boxCollider2D.offset = Vector2.zero;
				array[i] = boxCollider2D;
				_regionIndex++;
			}
			return array;
		}

		private void OnDrawGizmosSelected()
		{
			Gizmos.color = Color.cyan;
			SplitArea[] array = splitAreas;
			foreach (SplitArea splitArea in array)
			{
				Gizmos.DrawWireCube(new Vector3(splitArea.center.x, splitArea.center.y, 0f), new Vector3(splitArea.size.x, splitArea.size.y, 0f));
			}
		}
	}
}
