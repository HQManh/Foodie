using UnityEngine;
using EnhancedTouchSupport = UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport;
using ETouch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using InputTouchPhase = UnityEngine.InputSystem.TouchPhase;

namespace AnhPD
{
	public static class PointerInput
	{
		public const int NoTouch = -1;

		private static int _activeFinger = NoTouch;

		private static int _polledFrame = NoTouch;

		private static Vector2 _position;

		private static bool _isPressed;

		private static bool _pressedThisFrame;

		private static bool _releasedThisFrame;

		public static int ActiveTouchId
		{
			get
			{
				Poll();
				return _activeFinger;
			}
		}

		public static Vector3 Position
		{
			get
			{
				Poll();
				return _position;
			}
		}

		public static bool PressedThisFrame
		{
			get
			{
				Poll();
				return _pressedThisFrame;
			}
		}

		public static bool ReleasedThisFrame
		{
			get
			{
				Poll();
				return _releasedThisFrame;
			}
		}

		public static bool IsPressed
		{
			get
			{
				Poll();
				return _isPressed;
			}
		}

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
		private static void Init()
		{
			_activeFinger = NoTouch;
			_polledFrame = NoTouch;
			_isPressed = false;
			_pressedThisFrame = false;
			_releasedThisFrame = false;
			if (!EnhancedTouchSupport.enabled)
			{
				EnhancedTouchSupport.Enable();
			}
		}

		private static void Poll()
		{
			if (_polledFrame != Time.frameCount)
			{
				_polledFrame = Time.frameCount;
				_pressedThisFrame = false;
				_releasedThisFrame = false;
				if (!PollTouch())
				{
					PollMouse();
				}
			}
		}

		private static bool PollTouch()
		{
			if (!EnhancedTouchSupport.enabled)
			{
				EnhancedTouchSupport.Enable();
			}
			var touches = ETouch.activeTouches;
			if (_activeFinger == NoTouch)
			{
				for (int i = 0; i < touches.Count; i++)
				{
					ETouch touch = touches[i];
					if (touch.phase == InputTouchPhase.Began)
					{
						_activeFinger = touch.touchId;
						_position = touch.screenPosition;
						_isPressed = true;
						_pressedThisFrame = true;
						return true;
					}
				}
				return false;
			}
			for (int i = 0; i < touches.Count; i++)
			{
				ETouch touch = touches[i];
				if (touch.touchId == _activeFinger)
				{
					_position = touch.screenPosition;
					if (touch.phase != InputTouchPhase.Stationary && touch.phase != InputTouchPhase.Ended)
					{
						_isPressed = true;
						return true;
					}
					break;
				}
			}
			EndGesture();
			return true;
		}

		private static void EndGesture()
		{
			_activeFinger = NoTouch;
			_isPressed = false;
			_releasedThisFrame = true;
		}

		private static void PollMouse()
		{
			// TODO(unrecovered): the Input System mouse path (singleton at DAT_09188428 with mouse/ButtonControl members) is not recovered; only the legacy Input fallback is written.
			_position = Input.mousePosition;
			_isPressed = Input.GetMouseButton(0);
			_pressedThisFrame = Input.GetMouseButtonDown(0);
			_releasedThisFrame = Input.GetMouseButtonUp(0);
		}
	}
}
