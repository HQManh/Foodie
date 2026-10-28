using UnityEngine;

namespace AnhPD
{
	public static class PointerInput
	{
		public const int NoTouch = -1;

		private static int _activeFinger;

		private static int _polledFrame;

		private static Vector2 _position;

		private static bool _isPressed;

		private static bool _pressedThisFrame;

		private static bool _releasedThisFrame;

		public static int ActiveTouchId => 0;

		public static Vector3 Position => default;

		public static bool PressedThisFrame => false;

		public static bool ReleasedThisFrame => false;

		public static bool IsPressed => false;

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
		private static void Init()
		{
		}

		private static void Poll()
		{
		}

		private static bool PollTouch()
		{
			return false;
		}

		private static void EndGesture()
		{
		}

		private static void PollMouse()
		{
		}
	}
}
