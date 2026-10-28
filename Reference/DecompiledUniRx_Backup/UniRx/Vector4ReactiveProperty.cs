using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class Vector4ReactiveProperty : ReactiveProperty<Vector4>
	{
		protected override IEqualityComparer<Vector4> EqualityComparer => InternalUtil.UnityEqualityComparer.Vector4;

		public Vector4ReactiveProperty() : base()
		{
		}

		public Vector4ReactiveProperty(Vector4 initialValue) : base(initialValue)
		{
		}
	}
}
