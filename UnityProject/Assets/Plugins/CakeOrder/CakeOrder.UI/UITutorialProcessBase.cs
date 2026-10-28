using System;
using System.Collections;
using CakeOrder.Home;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using Utilities;

namespace CakeOrder.UI
{

public abstract class UITutorialProcessBase : MonoBehaviour
{
	[Serializable]
	public class VisualElements
	{
		public RectTransform focusContainer;

		public UIAnimShowHideControl arrow;

		public UIAnimShowHideControl textAnim;

		public TextMeshProUGUI textInstruct;

		public ForwardUIPointerEvent tapBlocker;

		public CanvasGroup overlay;
	}

	protected const float DelayShowTextAnim = 0.05f;

	protected VisualElements _visualElements;

	protected bool _isTapBlockerClicked;

	public virtual void SetUp(VisualElements visualElements)
	{
	}

	private void OnTapBlockerClicked(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	public abstract IEnumerator Process(Action onComplete);

	protected void ShowTutInstruct(TutorialReferenceGroupUI tutRef, string text)
	{
	}

	protected void HideTutInstruct(TutorialReferenceGroupUI tutRef)
	{
	}
}
}
