using System;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UniRx
{
	public static class UnityGraphicExtensions
	{
		public static IObservable<Unit> DirtyLayoutCallbackAsObservable(this Graphic graphic)
		{
			return Observable.Create<Unit>(observer =>
			{
				if (graphic == null) return Disposable.Empty;
				UnityAction handler = () => observer.OnNext(Unit.Default);
				graphic.RegisterDirtyLayoutCallback(handler);
				return Disposable.Create(() =>
				{
					if (graphic != null) graphic.UnregisterDirtyLayoutCallback(handler);
				});
			});
		}

		public static IObservable<Unit> DirtyMaterialCallbackAsObservable(this Graphic graphic)
		{
			return Observable.Create<Unit>(observer =>
			{
				if (graphic == null) return Disposable.Empty;
				UnityAction handler = () => observer.OnNext(Unit.Default);
				graphic.RegisterDirtyMaterialCallback(handler);
				return Disposable.Create(() =>
				{
					if (graphic != null) graphic.UnregisterDirtyMaterialCallback(handler);
				});
			});
		}

		public static IObservable<Unit> DirtyVerticesCallbackAsObservable(this Graphic graphic)
		{
			return Observable.Create<Unit>(observer =>
			{
				if (graphic == null) return Disposable.Empty;
				UnityAction handler = () => observer.OnNext(Unit.Default);
				graphic.RegisterDirtyVerticesCallback(handler);
				return Disposable.Create(() =>
				{
					if (graphic != null) graphic.UnregisterDirtyVerticesCallback(handler);
				});
			});
		}
	}
}
