using System;
using UnityEngine.UI;

namespace UniRx
{
	public static class UnityGraphicExtensions
	{
		public static IObservable<Unit> DirtyLayoutCallbackAsObservable(this Graphic graphic)
		{
			return null;
		}

		public static IObservable<Unit> DirtyMaterialCallbackAsObservable(this Graphic graphic)
		{
			return null;
		}

		public static IObservable<Unit> DirtyVerticesCallbackAsObservable(this Graphic graphic)
		{
			return null;
		}
	}
}
