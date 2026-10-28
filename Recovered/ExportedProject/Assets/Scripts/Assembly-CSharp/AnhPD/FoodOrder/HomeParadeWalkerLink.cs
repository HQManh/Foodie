using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class HomeParadeWalkerLink : MonoBehaviour
	{
		[SerializeField]
		[Min(0.01f)]
		private float multiSpeed;

		public float MultiSpeed => 0f;

		public HomeCustomerParade Parade { get; set; }

		public void StopWalker()
		{
		}

		public void StartWalker()
		{
		}
	}
}
