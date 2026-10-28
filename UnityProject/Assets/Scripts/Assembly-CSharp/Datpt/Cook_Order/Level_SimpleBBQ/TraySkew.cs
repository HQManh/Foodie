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

		private bool isHaveSkew
		{
			get
			{
				if (currentSkew == null || currentSkew.TF == null || skewSnapTf == null)
				{
					return false;
				}
				return Vector3.Distance(currentSkew.TF.position, skewSnapTf.position) < 0.1f;
			}
		}

		private void Start()
		{
			// TODO(unrecovered): Start (0x41c2850) decompiles to the same body as GenerateNewSkew (0x41c2854) with a 4-byte offset, so the pseudocode for Start is not reliable.
		}

		public void GenerateNewSkew()
		{
			// TODO(unrecovered): spawns the skew via IL2CPP helper FUN_04c384b8 and reads tuning values from unnamed singleton DAT_0918cbd0; the SkewItem.Reset/OnAppear callees live in Level_SimpleBBQ.Skew, outside this batch.
		}
	}
}
