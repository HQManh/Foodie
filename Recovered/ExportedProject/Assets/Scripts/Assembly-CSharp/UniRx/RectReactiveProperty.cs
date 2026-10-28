using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class RectReactiveProperty : ReactiveProperty<Rect>
	{
		protected override IEqualityComparer<Rect> EqualityComparer => null;

		public RectReactiveProperty()
		{
		}

		public RectReactiveProperty(Rect initialValue)
		{
		}
	}
}
