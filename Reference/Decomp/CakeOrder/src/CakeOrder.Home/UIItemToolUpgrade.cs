using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home;

public class UIItemToolUpgrade : UIElementWithAnim
{
	private const string LocLvMax = "lv_max";

	private const string LocLvN = "lv_n";

	private const string LocNotEnough = "toast_not_enough_x";

	private const string LocAlreadyMax = "toast_already_max_level";

	[Header("Available")]
	[SerializeField]
	private TextMeshProUGUI _txtTitle;

	[SerializeField]
	private RectTransform _sectionAvailable;

	[SerializeField]
	private Image _imgToolIcon;

	[SerializeField]
	private RectTransform _punchScaleTransform;

	[SerializeField]
	private TextMeshProUGUI _txtLv;

	[SerializeField]
	private GameObject _outline;

	[SerializeField]
	private Button _btnSelect;

	[Header("Upgrade")]
	[SerializeField]
	private RectTransform _milestoneContainer;

	[SerializeField]
	private UIElementWithAnimHighlight _prefabMilestone;

	[SerializeField]
	private Button _btnUpgrade;

	[SerializeField]
	private TextMeshProUGUI _txtPrice;

	private UIElementWithAnimHighlight[] _milestoneAnimControls;

	[Header("Locked")]
	[SerializeField]
	private RectTransform _sectionLocked;

	[SerializeField]
	private Image _imgToolIconLocked;

	[Header("Tut References")]
	[SerializeField]
	private TutorialReferenceGroupUI _tutorialRefs;

	private bool _isUnlocked;

	private int _currentLevel;

	private int _maxLevel;

	private SceneMainUI _sceneMainUI;

	public string MapId { get; private set; }

	public CakeToolSO ToolSO { get; private set; }

	public MapToolConfig.ToolData ToolData { get; private set; }

	public TutorialReferenceGroupUI TutorialRefs => null;

	public bool IsDoneShow { get; private set; }

	public event Action<UIItemToolUpgrade> onSelected
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

	public void SetUp(SceneMainUI sceneMainUI, string mapId, CakeToolSO toolSO, MapToolConfig.ToolData toolData, bool isUnlocked)
	{
	}

	public void SetSelected(bool selected)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void OnClickUpgrade()
	{
	}

	private void OnToolUpgraded(string mapId, string toolId)
	{
	}

	private void OnCurrencyChanged(string itemId, int oldValue, int newValue)
	{
	}

	private void PlayAnimUpgrade()
	{
	}

	private void UpdateVisual()
	{
	}

	private void OnDestroy()
	{
	}
}
