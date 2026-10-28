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
		}

		public UniTask ShowAsync(TutorialStepTalk step, bool skipOverlay = false)
		{
			return default;
		}

		public void ShowGuide(string line, TutorialTalkStyle style)
		{
		}

		public void HideGuide()
		{
		}

		public void HideImmediate()
		{
		}

		private void ResetVisual()
		{
		}

		private void Begin(string[] lines, TutorialTalkStyle style, bool guide, bool skipOverlay)
		{
		}

		private void SlideIn()
		{
		}

		private void Update()
		{
		}

		private void ShowIdleHand()
		{
		}

		private void HideIdleHand()
		{
		}

		private void OnNextClick()
		{
		}

		private void ShowLine()
		{
		}

		private void ShowTapHint(bool show)
		{
		}

		private void ShowCharacterText(bool show)
		{
		}

		private void PlayTalkSfx()
		{
		}

		private void FadeOverlay(bool show)
		{
		}

		private void SetOverlayAlpha(float alpha)
		{
		}

		private void SlideOutThenComplete()
		{
		}

		private void Complete()
		{
		}
	}
}
