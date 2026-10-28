using System;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	[Serializable]
	public class SnapOnGrill
	{
		public Transform skewSnapTf;

		public Skew skew { get; set; }

		public bool IsHaveSkew
		{
			get
			{
				if (skew == null || skew.TF == null)
				{
					return false;
				}
				return Vector3.Distance(skew.TF.position, skewSnapTf.position) < 0.1f;
			}
		}
	}
}
