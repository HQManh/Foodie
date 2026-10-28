using System;
using UnityEngine;
using UnityEngine.UI;

namespace UniRx
{
	public static class UnityUIComponentExtensions
	{
		public static IDisposable SubscribeToText(this IObservable<string> source, Text text)
		{
			// TODO(unrecovered): body calls unnamed helpers FUN_071cd244 (cached delegate/subscription setup) and FUN_04c4c488 (subscribe); no stub equivalents.
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
			// TODO(unrecovered): body calls unnamed helper FUN_089db470 (subscribe to source with the interactable setter); no stub equivalent.
			return null;
		}

		public static IObservable<Unit> OnClickAsObservable(this Button button)
		{
			return button.onClick.AsObservable();
		}

		public static IObservable<bool> OnValueChangedAsObservable(this Toggle toggle)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b1c8 / FUN_04c3afd0; the composition step is not named.
			return null;
		}

		public static IObservable<float> OnValueChangedAsObservable(this Scrollbar scrollbar)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b078 / FUN_04c3b120; the composition step is not named.
			return null;
		}

		public static IObservable<Vector2> OnValueChangedAsObservable(this ScrollRect scrollRect)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b078 / FUN_04c3b120; the composition step is not named.
			return null;
		}

		public static IObservable<float> OnValueChangedAsObservable(this Slider slider)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b270; the composition step is not named.
			return null;
		}

		public static IObservable<string> OnEndEditAsObservable(this InputField inputField)
		{
			return inputField.onEndEdit.AsObservable();
		}

		public static IObservable<string> OnValueChangedAsObservable(this InputField inputField)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b1c8; the composition step is not named.
			return null;
		}

		public static IObservable<int> OnValueChangedAsObservable(this Dropdown dropdown)
		{
			// TODO(unrecovered): cached <>c delegate passed to unnamed helper FUN_04c3b270 / FUN_04c3b078; the composition step is not named.
			return null;
		}
	}
}
