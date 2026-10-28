using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AlwaysUp : MonoBehaviour
	{
		private void Update()
		{
			base.transform.eulerAngles = Vector3.up;
		}
	}
}
