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
		private float fillMinWidth;

		[Tooltip("Wait before the bar starts to fill.")]
		[SerializeField]
		private float fillDelay;

		[Tooltip("Time the bar takes to fill from the previous level's value to the current one.")]
		[SerializeField]
		private float fillDuration;

		[Tooltip("When ready: time the shine shows after the fill before UIPopupNewFeather opens on its own.")]
		[SerializeField]
		private float shineDuration;

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
		}

		private void Awake()
		{
		}

		public bool UpdateFeatureAvailable()
		{
			return false;
		}

		private void PlayFillAnim(float fromRatio, float toRatio)
		{
		}

		private void SetNewLabel(bool isNewRestaurant)
		{
		}

		private void OnFillDone()
		{
		}

		private void KillFillAnim()
		{
		}

		private void SetLockButtons(bool isLocked)
		{
		}

		private Sprite GetToolIcon(string mapId, int levelIndex)
		{
			return null;
		}

		private void SetFill(float ratio)
		{
		}

		private void OnClick()
		{
		}

		private void ShowPopup()
		{
		}

		private void OnDisable()
		{
		}
	}
}
