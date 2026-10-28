using System;
using UnityEngine;
using UnityEngine.UI;

namespace UniRx
{
	public static class UnityUIComponentExtensions
	{
		public static IDisposable SubscribeToText(this IObservable<string> source, Text text)
		{
			return null;
		}

		public static IDisposable SubscribeToText<T>(this IObservable<T> source, Text text)
		{
			return null;
		}

		public static IDisposable SubscribeToText<T>(this IObservable<T> source, Text text, Func<T, string> selector)
		{
			return null;
		}

		public static IDisposable SubscribeToInteractable(this IObservable<bool> source, Selectable selectable)
		{
			return null;
		}

		public static IObservable<Unit> OnClickAsObservable(this Button button)
		{
			return null;
		}

		public static IObservable<bool> OnValueChangedAsObservable(this Toggle toggle)
		{
			return null;
		}

		public static IObservable<float> OnValueChangedAsObservable(this Scrollbar scrollbar)
		{
			return null;
		}

		public static IObservable<Vector2> OnValueChangedAsObservable(this ScrollRect scrollRect)
		{
			return null;
		}

		public static IObservable<float> OnValueChangedAsObservable(this Slider slider)
		{
			return null;
		}

		public static IObservable<string> OnEndEditAsObservable(this InputField inputField)
		{
			return null;
		}

		public static IObservable<string> OnValueChangedAsObservable(this InputField inputField)
		{
			return null;
		}

		public static IObservable<int> OnValueChangedAsObservable(this Dropdown dropdown)
		{
			return null;
		}
	}
}
