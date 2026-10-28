using System;
using CakeOrder.BaseUI;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

namespace CakeOrder.Home;

public class UIHomeTabPageMainPreviewMode : UIHomeTabPageMainSubModeBase
{
	[SerializeField]
	private UIElementWithAnim _panel;

	[SerializeField]
	private TextMeshProUGUI _txtMessage;

	private const string LocPreview = "map_preview_future_update";

	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}
}
