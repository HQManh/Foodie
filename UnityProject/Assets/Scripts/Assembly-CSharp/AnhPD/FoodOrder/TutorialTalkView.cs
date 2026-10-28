using CakeOrder;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class TutorialTalkView : MonoBehaviour
	{
		[SerializeField]
		private RectTransform characterRoot;

		[SerializeField]
		private RectTransform textOnlyRoot;

		[SerializeField]
		private TextMeshProUGUI characterText;

		[SerializeField]
		private TextMeshProUGUI textOnlyText;

		[SerializeField]
		private GameObject textOnlyTapHint;

		[SerializeField]
		private GameObject characterTextRoot;

		[SerializeField]
		private TutorialTalkCharacterView character;

		[SerializeField]
		private Image overlay;

		[SerializeField]
		private Button nextButton;

		[SerializeField]
		private Vector2 slideOffset;

		[SerializeField]
		private float slideDuration;

		[SerializeField]
		private float overlayFadeDuration;

		[Tooltip("Tay chi tai cho khi nguoi choi khong tap (TutorialStepTalk.idleHandDelay)")]
		[SerializeField]
		private TutorialHandleTap idleHand;

		[Header("Sfx")]
		[SerializeField]
		private AudioClip sfxTalk;

		[Tooltip("Rieng dong dau; de trong thi dung sfxTalk")]
		[SerializeField]
		private AudioClip sfxGreeting;

		[SerializeField]
		private float sfxVolume;

		[SerializeField]
		private float sfxPitch;

		private UniTaskCompletionSource _completion;

		private string[] _lines;

		private TutorialTalkStyle _style;

		private bool _isGuide;

		private int _index;

		private RectTransform _characterSlide;

		private Vector2 _restPos;

		private Tween _slideTween;

		private Tween _overlayTween;

		private bool _isAnimating;

		private bool _isReady;

		private float _overlayAlpha;

		private float _lastInputTime;

		private float _idleHandDelay;

		private bool _idleHandShown;

		private void Awake()
		{
			// TODO(unrecovered): Awake null-guard chain (characterRoot/textOnlyRoot/nextButton) reduced to the listener setup.
			RectTransform slide = characterRoot;
			if (character != null)
			{
				slide = character.transform as RectTransform;
			}
			_characterSlide = slide;
			if (_characterSlide != null)
			{
				_restPos = _characterSlide.anchoredPosition;
				if (overlay != null)
				{
					_overlayAlpha = overlay.color.a;
				}
			}
			if (nextButton != null)
			{
				nextButton.onClick.AddListener(OnNextClick);
				_isReady = true;
				ResetVisual();
			}
		}

		public UniTask ShowAsync(TutorialStepTalk step, bool skipOverlay = false)
		{
			// TODO(unrecovered): guard condition on step data (step field at +0x28 / +0x18) not identified by name.
			_completion = new UniTaskCompletionSource();
			_idleHandDelay = step.idleHandDelay;
			string[] lines = step.LocalizedLines();
			Begin(lines, step.style, false, skipOverlay);
			return _completion.Task;
		}

		public void ShowGuide(string line, TutorialTalkStyle style)
		{
			if (string.IsNullOrEmpty(line))
			{
				return;
			}
			_completion = null;
			_idleHandDelay = 0f;
			Begin(new string[] { line }, style, true, true);
		}

		public void HideGuide()
		{
			if (!_isGuide)
			{
				return;
			}
			if ((int)_style != 0)
			{
				HideImmediate();
				return;
			}
			SlideOutThenComplete();
		}

		public void HideImmediate()
		{
			if (!_isReady)
			{
				return;
			}
			ResetVisual();
			gameObject.SetActive(false);
		}

		private void ResetVisual()
		{
			if (_slideTween != null)
			{
				_slideTween.Kill();
			}
			if (_overlayTween != null)
			{
				_overlayTween.Kill();
			}
			_isAnimating = false;
			_isGuide = false;
			HideIdleHand();
			if (_characterSlide != null)
			{
				_characterSlide.anchoredPosition = _restPos;
				ShowCharacterText(false);
				if (characterRoot != null)
				{
					characterRoot.gameObject.SetActive(false);
					if (textOnlyRoot != null)
					{
						textOnlyRoot.gameObject.SetActive(false);
						ShowTapHint(false);
						if (overlay != null)
						{
							SetOverlayAlpha(0f);
							// TODO(unrecovered): overlay enable call (vtable 0x2c8) not identified.
						}
					}
				}
			}
		}

		private void Begin(string[] lines, TutorialTalkStyle style, bool guide, bool skipOverlay)
		{
			gameObject.SetActive(true);
			_lines = lines;
			_style = style;
			_isGuide = guide;
			_index = 0;
			_lastInputTime = Time.unscaledTime;
			if (characterRoot != null)
			{
				characterRoot.gameObject.SetActive((int)style == 0);
			}
			if (textOnlyRoot != null)
			{
				textOnlyRoot.gameObject.SetActive((int)style != 0);
			}
			ShowTapHint(false);
			if (overlay != null)
			{
				// TODO(unrecovered): overlay enable call (vtable 0x2c8) with !guide not identified.
			}
			FadeOverlay(!(guide || skipOverlay));
			if ((int)style != 0)
			{
				ShowLine();
				return;
			}
			SlideIn();
		}

		private void SlideIn()
		{
			_isAnimating = true;
			ShowCharacterText(false);
			if (_characterSlide == null)
			{
				return;
			}
			_characterSlide.anchoredPosition = _restPos + slideOffset;
			if (_slideTween != null)
			{
				_slideTween.Kill();
			}
			_slideTween = _characterSlide.DOAnchorPos(_restPos, slideDuration)
				.SetEase(Ease.OutBack)
				.OnComplete(() =>
				{
					_isAnimating = false;
					ShowCharacterText(true);
					ShowLine();
				});
		}

		private void Update()
		{
			if (_idleHandDelay <= 0f || idleHand == null || _completion == null)
			{
				return;
			}
			float elapsed = Time.unscaledTime - _lastInputTime;
			if (elapsed >= _idleHandDelay)
			{
				if (!_idleHandShown)
				{
					ShowIdleHand();
				}
			}
			else if (_idleHandShown)
			{
				HideIdleHand();
			}
		}

		private void ShowIdleHand()
		{
			_idleHandShown = true;
			if (idleHand == null)
			{
				return;
			}
			idleHand.gameObject.SetActive(true);
			// TODO(unrecovered): idle hand play call is idleHand.Show(List<Vector2>) (vtable 0x178), but the list's point comes from the pseudocode's transform position plus a second float argument that ShowIdleHand's stub signature does not carry; not applied.
		}

		private void HideIdleHand()
		{
			if (!_idleHandShown)
			{
				return;
			}
			_idleHandShown = false;
			if (idleHand != null)
			{
				idleHand.Hide();
			}
		}

		private void OnNextClick()
		{
			if (_isGuide || _isAnimating || _completion == null)
			{
				return;
			}
			_lastInputTime = Time.unscaledTime;
			_index++;
			if (_index < _lines.Length)
			{
				ShowLine();
				return;
			}
			if ((int)_style != 0)
			{
				Complete();
				return;
			}
			SlideOutThenComplete();
		}

		private void Complete()
		{
			UniTaskCompletionSource tcs = _completion;
			_completion = null;
			HideImmediate();
			if (tcs != null)
			{
				tcs.TrySetResult();
			}
		}

		private void ShowLine()
		{
			if (_lines == null)
			{
				return;
			}
			string text = _lines[_index];
			ShowTapHint(!_isGuide);
			if ((int)_style == 0)
			{
				if (characterText != null)
				{
					characterText.text = text;
				}
				if (character != null)
				{
					character.PlayTalk();
				}
				PlayTalkSfx();
				return;
			}
			if (textOnlyText != null)
			{
				textOnlyText.text = text;
			}
		}

		private void ShowTapHint(bool show)
		{
			if (textOnlyTapHint != null)
			{
				textOnlyTapHint.SetActive(show && (int)_style != 0);
			}
		}

		private void ShowCharacterText(bool show)
		{
			GameObject go = null;
			if (characterTextRoot != null)
			{
				go = characterTextRoot;
			}
			else if (characterText != null)
			{
				go = characterText.gameObject;
			}
			if (go != null)
			{
				go.SetActive(show);
			}
		}

		private void PlayTalkSfx()
		{
			AudioClip clip = (_index == 0 && sfxGreeting != null) ? sfxGreeting : sfxTalk;
			if (clip == null)
			{
				return;
			}
			AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(clip, (AudioManagerCakeOrder.AudioTrack)3, sfxVolume, sfxPitch);
		}

		private void FadeOverlay(bool show)
		{
			if (overlay == null)
			{
				return;
			}
			if (_overlayTween != null)
			{
				_overlayTween.Kill();
			}
			float target = show ? _overlayAlpha : 0f;
			// TODO(unrecovered): tween ease/flags chained after DOVirtual.Float not identified.
			_overlayTween = DOVirtual.Float(overlay.color.a, target, overlayFadeDuration, SetOverlayAlpha);
		}

		private void SetOverlayAlpha(float alpha)
		{
			if (overlay == null)
			{
				return;
			}
			Color c = overlay.color;
			c.a = alpha;
			overlay.color = c;
		}

		private void SlideOutThenComplete()
		{
			_isAnimating = true;
			ShowTapHint(false);
			ShowCharacterText(false);
			FadeOverlay(false);
			if (_slideTween != null)
			{
				_slideTween.Kill();
			}
			if (_characterSlide == null)
			{
				return;
			}
			_slideTween = _characterSlide.DOAnchorPos(_restPos + slideOffset, slideDuration)
				.SetEase(Ease.InBack)
				.OnComplete(Complete);
		}
	}
}
