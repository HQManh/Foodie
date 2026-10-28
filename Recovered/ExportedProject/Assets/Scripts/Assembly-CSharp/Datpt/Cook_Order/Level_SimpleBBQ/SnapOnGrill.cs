using System;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	[Serializable]
	public class SnapOnGrill
	{
		public Transform skewSnapTf;

		public Skew skew { get; set; }

		public bool IsHaveSkew => false;
	}
}
