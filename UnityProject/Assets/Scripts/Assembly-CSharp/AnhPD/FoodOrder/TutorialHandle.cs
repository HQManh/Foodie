using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class TutorialHandle : MonoBehaviour
	{
		public abstract void Show(List<Vector2> positions);

		public virtual void Show(List<Transform> points)
		{
			Show(points.Select(t => (Vector2)t.position).ToList());
		}

		public abstract void Hide();
	}
}
