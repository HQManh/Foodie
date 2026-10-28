using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class QuaternionReactiveProperty : ReactiveProperty<Quaternion>
	{
		protected override IEqualityComparer<Quaternion> EqualityComparer => null;

		public QuaternionReactiveProperty()
		{
		}

		public QuaternionReactiveProperty(Quaternion initialValue)
		{
		}
	}
}
