using System;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey
{

public class UIJourneyRestaurantCard : MonoBehaviour
{
	public enum State
	{
		Locked,
		InProgress,
		Completed
	}

	private const string LocUnlockLevel = "unlock_level_n";

	private const string LocPassDayOfMap = "unlock_pass_day_of_map";

	private const string LocDayN = "day_n";

	private const string LocCompleted = "completed";

	private const string LocComingSoon = "coming_soon";

	private const string LocFutureUpdate = "map_preview_future_update";

	private const string PreviewName = "???";

	[Header("Name")]
	[Tooltip("The ribbon over the card. Always shown, locked or not - a locked chapter still tells the player which restaurant it is.")]
	[SerializeField]
	private GameObject _objNameRibbon;

	[SerializeField]
	private TMP_Text _txtName;

	[Header("Picture")]
	[SerializeField]
	private Image _imgPreview;

	[Tooltip("Sunlight wash over the picture. Must sit inside the same mask as the picture, after it in sibling order, so it follows the frame's rounded corners instead of squaring them off.")]
	[SerializeField]
	private GameObject _objSunlight;

	[Tooltip("Drains the colour out of a chapter the player cannot reach yet - UIGray-Full, the same material the locked Home tab button and the locked upgrade cards already use. Assigning it switches the dark overlay below off; leave it empty and the card goes back to that overlay.")]
	[SerializeField]
	private Material _matLockedPreview;

	[Tooltip("Darkens the picture of a chapter the player cannot reach yet. An overlay, not a CanvasGroup fade - a faded card goes translucent and the scroll background shows through. Only used when no locked material is assigned above.")]
	[SerializeField]
	private GameObject _objLockedTint;

	[SerializeField]
	private GameObject _objIconLocked;

	[Header("Coming soon - maps in Preview mode")]
	[Tooltip("Centred over the picture of a map that is shown but not playable yet. Replaces the lock icon there.")]
	[SerializeField]
	private GameObject _objComingSoon;

	[SerializeField]
	private TMP_Text _txtComingSoon;

	[Header("Footer - exactly one of the three is on")]
	[SerializeField]
	private GameObject _objUnlock;

	[SerializeField]
	private TMP_Text _txtUnlock;

	[Tooltip("Used until the localization table carries the key. {0} is the global level that opens the chapter.")]
	[SerializeField]
	private string _formatUnlockFallback;

	[Tooltip("Used until the localization table carries unlock_pass_day_of_map. {0} is the localized \"Day N\" of the restaurant before this one, {1} is that restaurant's name.")]
	[SerializeField]
	private string _formatPassDayFallback;

	[SerializeField]
	private GameObject _objProgress;

	[Tooltip("The pill's track. Only its width is read, to work out how long a full fill would be.")]
	[SerializeField]
	private RectTransform _rectProgressTrack;

	[Tooltip("Grown by its own width, left-pivoted. Not Image.fillAmount - that is honoured only when type is Filled, and Filled ignores the 9-slice border, so the rounded cap would smear. Its HEIGHT must stay at the sprite's own height: a 9-slice with no vertical border stretches the caps into ovals.")]
	[SerializeField]
	private RectTransform _rectProgressFill;

	[Tooltip("Gap between the track's edge and the fill, on each side.")]
	[SerializeField]
	private float _progressFillPadding;

	[Tooltip("Shortest the fill may be drawn: the two rounded caps side by side. Below this the 9-slice has to squeeze them into each other and the pill stops reading as a pill, so a sliver is drawn at this width instead.")]
	[SerializeField]
	private float _progressFillMinWidth;

	[SerializeField]
	private TMP_Text _txtProgress;

	[Tooltip("The picture itself takes the tap. Point this at the masked photo frame, not at the picture inside it: the picture is fitted to its own aspect and hangs outside the frame, so a button there would answer taps on empty card.")]
	[SerializeField]
	private Button _btnPreview;

	[Tooltip("The old View button. Nothing shows it any more - the picture is what the player taps, and a finished chapter keeps its progress pill instead of swapping to a button. Left wired so the footer can be put back without rebuilding it.")]
	[SerializeField]
	private GameObject _objView;

	[SerializeField]
	private Button _btnView;

	[Tooltip("Badge for a map that can be unlocked, or whose extra levels are ready to open, but the player hasn't yet. Stays until they do.")]
	[SerializeField]
	private GameObject _objNoti;

	private JourneyLevelMap.MapRange _range;

	private bool _isPreviewOnly;

	public JourneyLevelMap.MapRange Range => default(JourneyLevelMap.MapRange);

	public bool IsPreviewOnly => false;

	public RectTransform RectTransform => null;

	public State CurrentState { get; private set; }

	public event Action<UIJourneyRestaurantCard> onClickView;

	private void Awake()
	{
	}

	private bool HasExtraLevelToUnlock(int completedInChapter)
	{
		return false;
	}

	private bool IsReadyForExtraLevels(int completedInChapter, out int firstExtra)
	{
		firstExtra = default(int);
		return false;
	}

	private bool TryGetExtraLevelLockText(int completedInChapter, out string lockText)
	{
		lockText = null;
		return false;
	}

	private bool HasMapToUnlock()
	{
		return false;
	}

	private void ApplyNoti(bool locked, int completedInChapter)
	{
	}

	public void SetUp(JourneyLevelMap.MapRange range, string displayName, Sprite preview, bool isPreviewOnly)
	{
	}

	private void ApplyPreview(Sprite preview)
	{
	}

	private void ApplyFill(float ratio)
	{
	}

	private string GetUnlockText()
	{
		return null;
	}

	public void Apply(int completedInChapter, bool isUnlocked)
	{
	}
}
}
