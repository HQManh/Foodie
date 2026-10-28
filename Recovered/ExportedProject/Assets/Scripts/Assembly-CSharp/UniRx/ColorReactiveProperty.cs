using System;
using System.Collections.Generic;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class ColorReactiveProperty : ReactiveProperty<Color>
	{
		protected override IEqualityComparer<Color> EqualityComparer => null;

		public ColorReactiveProperty()
		{
		}

		public ColorReactiveProperty(Color initialValue)
		{
		}
	}
}
