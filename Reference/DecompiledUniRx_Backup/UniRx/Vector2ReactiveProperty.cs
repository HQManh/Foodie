using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class Vector2ReactiveProperty : ReactiveProperty<Vector2>
	{
		protected override IEqualityComparer<Vector2> EqualityComparer => InternalUtil.UnityEqualityComparer.Vector2;

		public Vector2ReactiveProperty() : base()
		{
		}

		public Vector2ReactiveProperty(Vector2 initialValue) : base(initialValue)
		{
		}
	}
}
