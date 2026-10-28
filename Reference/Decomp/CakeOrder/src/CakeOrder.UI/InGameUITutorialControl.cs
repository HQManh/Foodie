using System;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.UI;

public class InGameUITutorialControl : UICakePopup
{
	public enum TutorialType
	{
		None,
		Combo,
		Booster
	}

	[Serializable]
	public class References
	{
		[NonSerialized]
		public LevelBaseCakeOrderAbstract levelBase;

		[NonSerialized]
		public UIInLevelCakeOrder mainUI;
	}

	[SerializeField]
	private UITutorialProcessBase.VisualElements _visualElements;

	[SerializeField]
	private InGameUITutorialProcessCombo _processUseCombo;

	[SerializeField]
	private InGameUITutorialProcessBooster _processUseBooster;

	private References _references;

	private TutorialType _tutType;

	private int _index;

	[Header("Cheat")]
	[SerializeField]
	private Button _btnHide;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	private static string GetKeyIsDoneTut(TutorialType type, int index)
	{
		return null;
	}

	public static bool IsDoneTut(TutorialType type, int index = 0)
	{
		return false;
	}

	public static void SetDoneTut(TutorialType type, int index = 0)
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	public void SetData(References references, TutorialType tutType, int index, CakeCurrencySO boosterSO = null)
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
}
