using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class TutorialHandle : MonoBehaviour
	{
		public abstract void Show(List<Vector2> positions);

		public virtual void Show(List<Transform> points)
		{
		}

		public abstract void Hide();
	}
}
