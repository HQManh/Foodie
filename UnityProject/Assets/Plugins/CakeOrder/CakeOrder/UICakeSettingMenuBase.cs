using System;
using CakeOrder.BaseUI;
using CakeOrder.Home;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder
{

public class UICakeSettingMenuBase : UICakePopup
{
	[Serializable]
	public class SettingButtonConfig
	{
		public Color[] colorsOn;

		public Color[] colorsOff;

		public Vector2[] anchoredPositionsOn;

		public Vector2[] anchoredPositionsOff;

		public float[] scalesOn;

		public float[] scalesOff;
	}

	[Serializable]
	public class SettingButtonRefs
	{
		public Button button;

		public Graphic[] graphics;

		public RectTransform[] moveRectTransforms;

		public RectTransform[] scaleRectTransforms;
	}

	[Header("Config")]
	[SerializeField]
	private bool _isStopTimeWhileOpen;

	[Header("Setting Btns")]
	[SerializeField]
	private SettingButtonConfig _settingButtonConfig;

	[SerializeField]
	private SettingButtonRefs _btnSound;

	[SerializeField]
	private SettingButtonRefs _btnMusic;

	[SerializeField]
	private SettingButtonRefs _btnVibration;

	[Header("FPS")]
	[SerializeField]
	private Toggle toggleFps30;

	[SerializeField]
	private Toggle toggleFps60;

	[SerializeField]
	private Toggle toggleFps120;

	[Header("Hidden Cheat Activation")]
	[SerializeField]
	private Button _btnActivateCheat;

	private UIActivateCheatSequence _activateCheatSequence;

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	protected override void OnClickClose()
	{
	}

	private void SetFPS(int fps)
	{
	}

	private void OnBgmChanged(bool isOn)
	{
	}

	private void OnSfxChanged(bool isOn)
	{
	}

	private void OnHapticChanged(bool isOn)
	{
	}

	private void ApplyButtonVisual(SettingButtonRefs btnRefs, bool isOn)
	{
	}

	protected virtual void OnDestroy()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void OnDisable()
	{
	}
}
}
