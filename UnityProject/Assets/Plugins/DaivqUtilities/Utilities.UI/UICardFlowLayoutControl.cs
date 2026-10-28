using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Utilities.UI
{

public class UICardFlowLayoutControl : UIBehaviour, ILayoutGroup, ILayoutController
{
	public enum LayoutDirection
	{
		BottomToTop,
		TopToBottom
	}

	[Serializable]
	public class CardGroup
	{
		public RectTransform[] cards;

		[NonSerialized]
		public Vector2[] cardDesiredAnchoredPositions;
	}

	[Serializable]
	public class CardGroupEndWithBar
	{
		public CardGroup[] groups;

		public RectTransform bar;

		[NonSerialized]
		public Vector2 barDesiredAnchoredPositions;
	}

	public RectTransform container;

	public CardGroupEndWithBar[] groups;

	public LayoutDirection layoutDirection;

	[Tooltip("x = horizontal gap between columns, y = vertical gap between cards stacked in the same column.")]
	public Vector2 spacing;

	[Tooltip("Extra gap added before each section's bar (skipped for the first section).")]
	public float sectionSpacing;

	public float lerpSpeed;

	public bool useUnscaledTime;

	[Tooltip("Resize the container's height to the laid-out cards. Measured from the target layout, so a card playing its hide anim still counts until it is deactivated.")]
	public bool fitContainerHeight;

	private float _columnWidth;

	private bool _isSetUp;

	public float ContentHeight { get; private set; }

	public event Action<float> onContentHeightChanged;

	public void SetUp()
	{
	}

	private void CalculateDesiredAnchoredPositions()
	{
	}

	private void ApplyContentHeight(float height)
	{
	}

	private Vector2 GetAnchoredPosition(RectTransform rectTransform, float left, float start)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public void UpdateVisual()
	{
	}

	public void UpdateVisualImmediate()
	{
	}

	private void Update()
	{
	}

	public void SetDirty()
	{
	}

	protected override void OnEnable()
	{
	}

	protected void OnTransformChildrenChanged()
	{
	}

	public void SetLayoutHorizontal()
	{
	}

	public void SetLayoutVertical()
	{
	}
}
}
