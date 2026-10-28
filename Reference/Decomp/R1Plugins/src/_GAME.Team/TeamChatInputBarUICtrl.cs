using System;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace _GAME.Team;

public class TeamChatInputBarUICtrl : MonoBehaviour
{
	public GameObject objContent;

	public TextMeshProUGUI txtMessage;

	public GameObject objPlaceholder;

	public Button btnFocus;

	public Button btnSend;

	private TMP_InputField _input;

	private Action<string> _onSend;

	private RectTransform _rect;

	private RectTransform _contentRect;

	private Canvas _canvas;

	private Vector2 _restPosition;

	private RectTransform _chatViewport;

	private Vector2 _restViewportOffsetMin;

	private LayoutGroup _chatLayout;

	private int _chatPadBottom;

	private AndroidJavaObject _decorView;

	private AndroidJavaObject _visibleFrame;

	private bool _keyboardMeasurementFailed;

	private void Awake()
	{
	}

	public void Bind(TMP_InputField input, Action<string> onSend, RectTransform chatContent)
	{
	}

	private void Update()
	{
	}

	private void LateUpdate()
	{
	}

	private void ResizeChatViewport()
	{
	}

	private void RestoreLayout()
	{
	}

	private void FitChatPadding()
	{
	}

	private bool TryGetKeyboardTop(out float top)
	{
		top = default(float);
		return false;
	}

	private void OnDisable()
	{
	}

	private void OnDestroy()
	{
	}

	private void UpdateVisible()
	{
	}

	private void OnInputChanged(string text)
	{
	}

	private void FocusInput()
	{
	}

	public bool IsBarPress(BaseEventData eventData)
	{
		return false;
	}

	private void Send()
	{
	}
}
