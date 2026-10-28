using System.Collections.Generic;
using CakeOrder.InGame;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Localization.Components;
using UnityEngine.UI;

namespace TrungKien.UI.NewFearther
{
	[RequireComponent(typeof(Button))]
	public class UINextFeatherButton : MonoBehaviour, INewFeatureElement
	{
		[SerializeField]
		private Button btn;

		[Tooltip("UIPopup-NewFeather prefab, loaded and stacked by SceneMainUI on click.")]
		[SerializeField]
		private AssetReference assetPopupNewFeather;

		[Tooltip("Gives the icon of the next feature. Only the features having an entry here count as milestones (e.g. an obstacle-only config hides the tools); use the same config as UIPopup-NewFeather.")]
		[SerializeField]
		private UINewFeartherConfig featherConfig;

		[Header("Progress")]
		[SerializeField]
		private TextMeshProUGUI txtProgress;

		[Tooltip("Bar image resized in width: ratio of the parent width, never below fillMinWidth.")]
		[SerializeField]
		private RectTransform rectFill;

		[Tooltip("Smallest width of the fill, below it the sliced sprite gets squashed.")]
		[SerializeField]
		private float fillMinWidth = 75f;

		[Tooltip("Wait before the bar starts to fill.")]
		[SerializeField]
		private float fillDelay = 1f;

		[Tooltip("Time the bar takes to fill from the previous level's value to the current one.")]
		[SerializeField]
		private float fillDuration = 0.5f;

		[Tooltip("When ready: time the shine shows after the fill before UIPopupNewFeather opens on its own.")]
		[SerializeField]
		private float shineDuration = 0.4f;

		[Tooltip("Other buttons (e.g. of the win popup) set non-interactable while the fill and the shine play.")]
		[SerializeField]
		private List<Button> buttonsLockDuringAnim;

		[Header("Next Tool")]
		[SerializeField]
		private Image imgIconTool;

		[SerializeField]
		private GameObject objShine;

		[Tooltip("LocalizeStringEvent of the \"New Feature\" label: switched to newRestaurantKey while the next milestone is the next map's restaurant.")]
		[SerializeField]
		private LocalizeStringEvent locTxtNew;

		[SerializeField]
		private string newRestaurantKey;

		private bool _isReady;

		private bool _isOpeningPopup;

		private Sequence _fillSeq;

		private string _newFeatureKey;

		private long _newFeatureKeyId;

		[SerializeField]
		private ParticleSystem vfxStartFill;

		private void Reset()
		{
			btn = GetComponent<Button>();
		}

		private void Awake()
		{
			if (btn == null)
			{
				btn = GetComponent<Button>();
			}
			if (btn != null)
			{
				btn.onClick.AddListener(OnClick);
			}
		}

		public bool UpdateFeatureAvailable()
		{
			// TODO(unrecovered): depends on CakeOrder/Localization/RemoteConfig types and on UIPopupNewFeather milestone helpers, none of which are in the stubs.
			return false;
		}

		private void PlayFillAnim(float fromRatio, float toRatio)
		{
			// TODO(unrecovered): builds the fill tween on top of SetFill, whose width source is not recoverable (see SetFill).
		}

		private void SetNewLabel(bool isNewRestaurant)
		{
			// TODO(unrecovered): sets a LocalizedReference table entry from CakeOrder/Localization types that are not in the stubs.
		}

		private void OnFillDone()
		{
			if (objShine != null)
			{
				objShine.SetActive(_isReady);
			}
		}

		private void KillFillAnim()
		{
			if (_fillSeq != null)
			{
				_fillSeq.Kill();
			}
			_fillSeq = null;
		}

		private void SetLockButtons(bool isLocked)
		{
			bool btnInteractable = !isLocked && _isReady;
			if (btn == null)
			{
				return;
			}
			btn.interactable = btnInteractable;
			if (buttonsLockDuringAnim == null)
			{
				return;
			}
			foreach (Button b in buttonsLockDuringAnim)
			{
				if (b != null)
				{
					b.interactable = !isLocked;
				}
			}
		}

		private Sprite GetToolIcon(string mapId, int levelIndex)
		{
			// TODO(unrecovered): depends on UIPopupNewFeather milestone lookups and FeatherConfig icon resolution (see NewFeatherConfig.GetIconNewFeather) through CakeOrder types not in the stubs.
			return null;
		}

		private void SetFill(float ratio)
		{
			// TODO(unrecovered): the parent-width source passed to the fill calculation is not recoverable from the pseudocode (unnamed float argument).
		}

		private void OnClick()
		{
			if (_isReady && !_isOpeningPopup && _fillSeq == null)
			{
				ShowPopup();
			}
		}

		private void ShowPopup()
		{
			// TODO(unrecovered): depends on the Addressables popup load and CakeOrder.BaseUI types, none of which are in the stubs.
		}

		private void OnDisable()
		{
			if (_fillSeq != null)
			{
				_fillSeq.Kill();
			}
			_fillSeq = null;
		}
	}
}
