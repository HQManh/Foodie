using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;

namespace EssentialSystemR1;

public class OnlineTimeCheck : MonoBehaviour
{
	private enum DatePart
	{
		Year,
		Month,
		Day,
		Hour,
		Minute,
		Second
	}

	[CompilerGenerated]
	private sealed class _003CFetchGlobalTime_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public OnlineTimeCheck _003C_003E4__this;

		private UnityWebRequest _003CwebRequest_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CFetchGlobalTime_003Ed__42(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private const string KEY_TIME_PAUSED = "AppPauseTime";

	private const string KEY_CHEAT_TIME_OFFSET_TICKS = "CheatTimeOffsetTicks";

	private double _serverTimeOffsetUtc;

	private double _serverTimeOffsetLocal;

	private bool _isTimeSynced;

	private DateTime _lastTimePaused;

	private Coroutine _corFetchTime;

	private bool _isCheatPanelOpen;

	private TimeSpan _draftTimeOffset;

	private DateTime _draftLocalTime;

	private DatePart _activeDatePart;

	private int _yearSliderCenter;

	private float _daySliderValue;

	private readonly string[] _datePartText;

	private Rect _cheatWindowRect;

	private Vector2 _cheatScroll;

	private EventSystem _suspendedEventSystem;

	private static Texture2D _cheatDimTexture;

	private static Texture2D _cheatPanelTexture;

	private static Texture2D _cheatInputTexture;

	public static OnlineTimeCheck Instance { get; private set; }

	public static bool IsExistInstance => false;

	public static TimeSpan TimeOffset { get; private set; }

	private static DateTime BaseUtcNow => default(DateTime);

	private static DateTime BaseNow => default(DateTime);

	public static DateTime UtcNow => default(DateTime);

	public static DateTime Now => default(DateTime);

	public static DateTime UtcNowWithoutCheatOffset => default(DateTime);

	public static event Action TimeOffsetChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void Start()
	{
	}

	private void HandleInternetRestored()
	{
	}

	private void OnApplicationPause(bool pause)
	{
	}

	private void TryLoadLastPausedTime()
	{
	}

	private void RestartFetchGlobalTime()
	{
	}

	private void StopFetchGlobalTime()
	{
	}

	[IteratorStateMachine(typeof(_003CFetchGlobalTime_003Ed__42))]
	private IEnumerator FetchGlobalTime()
	{
		return null;
	}

	public static void OpenCheatPanel()
	{
	}

	public static void SetTimeOffset(TimeSpan offset)
	{
	}

	private static TimeSpan LoadTimeOffset()
	{
		return default(TimeSpan);
	}

	private static void SaveTimeOffset(TimeSpan offset)
	{
	}

	private void OpenCheatPanelInternal()
	{
	}

	private void CloseCheatPanel()
	{
	}

	private void SetCheatPanelInteractionBlocked(bool blocked)
	{
	}

	private void OnGUI()
	{
	}

	private bool DrawBackdropCloseButtons(float screenWidth, float screenHeight)
	{
		return false;
	}

	private void DrawCheatWindow(int windowId)
	{
	}

	private void DrawDatePartField(DatePart part, string label)
	{
	}

	private void SelectDatePart(DatePart part)
	{
	}

	private void DrawActiveDatePartSlider()
	{
	}

	private void SetDatePart(DatePart part, int value)
	{
	}

	private void TryApplyDatePartText()
	{
	}

	private void DrawOffsetButtonPair(string label, TimeSpan magnitude)
	{
	}

	private void AdjustDraftTime(TimeSpan delta)
	{
	}

	private void SyncDatePartText()
	{
	}

	private void SyncDaySlider()
	{
	}

	private static DateTime AddClamped(DateTime value, TimeSpan offset)
	{
		return default(DateTime);
	}

	public static string FormatTimeOffset(TimeSpan offset)
	{
		return null;
	}

	private static GUIStyle PanelWindowStyle()
	{
		return null;
	}

	private static GUIStyle OffsetValueStyle()
	{
		return null;
	}

	private static GUIStyle PreviewDateStyle()
	{
		return null;
	}

	private static GUIStyle PreviewTimeStyle()
	{
		return null;
	}

	private static GUIStyle SectionLabelStyle()
	{
		return null;
	}

	private static GUIStyle BodyLabelStyle()
	{
		return null;
	}

	private static GUIStyle CaptionStyle()
	{
		return null;
	}

	private static GUIStyle CardStyle()
	{
		return null;
	}

	private static GUIStyle InputFieldStyle()
	{
		return null;
	}

	private static GUIStyle StepButtonStyle()
	{
		return null;
	}

	private static GUIStyle ActionButtonStyle()
	{
		return null;
	}

	private static GUIStyle SliderStyle()
	{
		return null;
	}

	private static GUIStyle SliderThumbStyle()
	{
		return null;
	}

	private static Texture2D GetCheatDimTexture()
	{
		return null;
	}

	private static Texture2D GetCheatPanelTexture()
	{
		return null;
	}

	private static Texture2D GetCheatInputTexture()
	{
		return null;
	}

	private static Texture2D CreateSolidTexture(Color color)
	{
		return null;
	}
}
