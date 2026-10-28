using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class TraySkew : MonoBehaviour
	{
		[SerializeField]
		private Skew skewPrefab;

		[SerializeField]
		private Transform skewSnapTf;

		private Skew currentSkew;

		private bool isHaveSkew => false;

		private void Start()
		{
		}

		public void GenerateNewSkew()
		{
		}
	}
}
