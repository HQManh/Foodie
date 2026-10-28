using System;
using CakeOrder.BaseUI;
using CakeOrder.Home;
using CakeOrder.SaveProfile;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class HomeUITutorialControl : UICakePopup
{
	public enum TutorialType
	{
		None,
		UpgradeRestaurant,
		UpgradeTool
	}

	[Serializable]
	public class References
	{
		public UIHomeTabPageMain tabPageMain;

		[NonSerialized]
		public PlayerMapLevelProgressDataAccess progressDataAccess;
	}

	[SerializeField]
	private UITutorialProcessBase.VisualElements _visualElements;

	[SerializeField]
	private HomeUITutorialProcessUpgradeRestaurant _processUpgradeRestaurant;

	[SerializeField]
	private HomeUITutorialProcessUpgradeTool _processUpgradeTool;

	private References _references;

	private TutorialType _tutType;

	private bool _ownsUpgradeRestaurantTutorialState;

	[Header("Cheat")]
	[SerializeField]
	private Button _btnHide;

	public static bool IsUpgradeRestaurantTutorialActive { get; private set; }

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	private static string GetKeyIsDoneTut(TutorialType type)
	{
		return null;
	}

	public static bool IsDoneTut(TutorialType type)
	{
		return false;
	}

	public static void SetDoneTut(TutorialType type)
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	public void SetData(References references, TutorialType tutType)
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void OnDestroy()
	{
	}

	private void ClearUpgradeRestaurantTutorialState()
	{
	}
}
}
