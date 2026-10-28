using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class PlateController : MonoBehaviour
	{
		[SerializeField]
		private PlateSkew plateSkewPrefab;

		[SerializeField]
		private Transform plateSnapTf;

		private PlateSkew currentPlate;

		private bool isHavePlateSkew => false;

		private void Start()
		{
		}

		public void GenerateNewPlate()
		{
		}
	}
}
