using CakeOrder.BaseUI;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

public class UIHomeNavControl : UITabGroupControl
{
	[SerializeField]
	private RectTransform _containerIconAndTexts;

	[SerializeField]
	private RectTransform _containerBaseFrame;

	[SerializeField]
	private Image _imgHighlight;

	[SerializeField]
	private RectTransform _imgHighlightContainer;

	[SerializeField]
	private float _transitionDuration;

	[Header("Tab widths: each tab takes its weight's share of the bar (4 x 1 + 1.3 = 5.3 parts)")]
	[SerializeField]
	private float _widthWeightNormal;

	[SerializeField]
	private float _widthWeightSelected;

	[SerializeField]
	private float _resizeDuration;

	[SerializeField]
	private Ease _resizeEase;

	private const float SnapDistanceSqr = 0.0001f;

	private UIItemNavHomeTab _selectedItem;

	private RectTransform _rectHighlight;

	private RectTransform[] _layoutOrder;

	private float[] _weights;

	private float[] _weightsFrom;

	private float[] _weightsTo;

	private Tween _tweenResize;

	public RectTransform ContainerBaseFrame => null;

	public RectTransform ContainerIconAndTexts => null;

	protected override void OnSetUp()
	{
	}

	private void SetJourneyNoti(bool show)
	{
	}

	protected override void PlayTabClickSfx()
	{
	}

	public override void ChangeTab(string id)
	{
	}

	private void Update()
	{
	}

	private void ParkHighlight()
	{
	}

	private void IsolateHighlightBatch()
	{
	}

	private void SetUpTabWidths()
	{
	}

	private void ResizeTabs(bool animate)
	{
	}

	private void ApplyTabWeights(float progress)
	{
	}
}
}
