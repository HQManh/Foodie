using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class BoundsReactiveProperty : ReactiveProperty<Bounds>
	{
		protected override IEqualityComparer<Bounds> EqualityComparer => null;

		public BoundsReactiveProperty()
		{
		}

		public BoundsReactiveProperty(Bounds initialValue)
		{
		}
	}
}
