using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class QuaternionReactiveProperty : ReactiveProperty<Quaternion>
	{
		protected override IEqualityComparer<Quaternion> EqualityComparer
		{
			get
			{
				return InternalUtil.UnityEqualityComparer.Quaternion;
			}
		}

		public QuaternionReactiveProperty()
		{
		}

		public QuaternionReactiveProperty(Quaternion initialValue)
			: base(initialValue)
		{
		}
	}
}
