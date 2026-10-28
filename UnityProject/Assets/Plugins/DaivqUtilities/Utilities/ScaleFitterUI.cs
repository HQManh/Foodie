using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Utilities
{

[AddComponentMenu("Layout/Scale Fitter", 142)]
[ExecuteInEditMode]
[RequireComponent(typeof(RectTransform))]
public class ScaleFitterUI : UIBehaviour, ILayoutSelfController, ILayoutController
{
	public enum ScaleMode
	{
		None,
		AlwaysFitHeight,
		AlwaysFitWidth,
		FitInParent,
		EnvelopeParent
	}

	[SerializeField]
	private ScaleMode m_AspectMode;

	[NonSerialized]
	private RectTransform m_Rect;

	private DrivenRectTransformTracker m_Tracker;

	[NonSerialized]
	private bool m_IsUpdatingRect;

	public ScaleMode aspectMode
	{
		get
		{
			return ScaleMode.None;
		}
		set
		{
		}
	}

	private RectTransform rectTransform => null;

	protected ScaleFitterUI()
	{
	}

	protected override void OnEnable()
	{
	}

	protected override void OnDisable()
	{
	}

	protected override void OnRectTransformDimensionsChange()
	{
	}

	private void UpdateRect()
	{
	}

	private Vector2 GetParentSize()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public virtual void SetLayoutHorizontal()
	{
	}

	public virtual void SetLayoutVertical()
	{
	}

	protected void SetDirty()
	{
	}

	private static bool SetStruct<T>(ref T currentValue, T newValue) where T : struct
	{
		return false;
	}
}
}
