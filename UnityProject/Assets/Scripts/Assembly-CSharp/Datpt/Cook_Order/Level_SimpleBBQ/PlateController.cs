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
			// TODO(unrecovered): spawns a PlateSkew through an unnamed helper (FUN_04c384b8) from the pooler, sets currentPlate and PlateSkew.Reset/OnAppear, and uses a DAT_0918cbd0 static pose vector for the spawn offset; the helper and the static data are not in the stubs.
		}
	}
}
