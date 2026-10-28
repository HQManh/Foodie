using System;
using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	[Serializable]
	public class CustomerTrack
	{
		public Transform startSnapTf;

		public Transform targetSnapTf;

		public List<Order> lstOrderOnTrack;
	}
}
