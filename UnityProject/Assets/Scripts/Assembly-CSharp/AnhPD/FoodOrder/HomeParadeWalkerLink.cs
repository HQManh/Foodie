using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class HomeParadeWalkerLink : MonoBehaviour
	{
		[SerializeField]
		[Min(0.01f)]
		private float multiSpeed = 1f;

		public float MultiSpeed => multiSpeed;

		public HomeCustomerParade Parade { get; set; }

		public void StopWalker()
		{
			if (Parade != null)
			{
				Parade.StopWalker(base.gameObject);
			}
		}

		public void StartWalker()
		{
			if (Parade != null)
			{
				Parade.StartWalker(base.gameObject);
			}
		}
	}
}
