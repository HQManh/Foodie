using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemAlpha : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer[] renderers;

		private float a = -1f;

		public float alpha = 1f;

		public void SetAlpha(float alpha)
		{
			this.alpha = alpha;
			LateUpdate();
		}

		private void LateUpdate()
		{
			if (a == alpha)
			{
				return;
			}

			a = alpha;
			if (renderers == null)
			{
				return;
			}

			foreach (SpriteRenderer rdr in renderers)
			{
				if (rdr == null)
				{
					continue;
				}

				Color c = rdr.color;
				c.a = a;
				rdr.color = c;
			}
		}

		private void Setup()
		{
			renderers = GetComponentsInChildren<SpriteRenderer>();
		}
	}
}
