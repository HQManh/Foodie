using CakeOrder.DataSO;
using CakeOrder.Home;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame;

public class UIButtonHUDBooster : UIButtonHUD
{
	private const string LocDayN = "day_n";

	[Header("Visual")]
	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private GameObject _sectionCountItem;

	[SerializeField]
	private TextMeshProUGUI _txtCountItem;

	[SerializeField]
	private GameObject _sectionPlus;

	[SerializeField]
	private GameObject _sectionPrice;

	[SerializeField]
	private TextMeshProUGUI _txtPrice;

	[SerializeField]
	private TextMeshProUGUI _txtLock;

	[Header("Tutorial")]
	[SerializeField]
	private RectTransform _behindFrame;

	[SerializeField]
	private TutorialReferenceGroupUI _tutRefs;

	[SerializeField]
	private RectTransform _aboveFrame;

	private CakeCurrencySO _currencySO;

	private UIInLevelCakeOrder.BoosterUIData _data;

	[SerializeField]
	private RectTransform _rectLock;

	public TutorialReferenceGroupUI TutorialRefs => null;

	public RectTransform BehindFrame => null;

	public RectTransform AboveFrame => null;

	public string BoosterId => null;

	public RectTransform RectLock => null;

	protected override void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetUp(UIInLevelCakeOrder.BoosterUIData data, CakeCurrencySO currencySO)
	{
	}

	private void OnItemChanged(string itemId, int oldValue, int newValue)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnUnlocked()
	{
	}

	private void UpdateVisual()
	{
	}
}
