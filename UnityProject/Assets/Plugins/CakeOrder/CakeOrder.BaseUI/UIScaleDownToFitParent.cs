using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace CakeOrder.BaseUI
{

[RequireComponent(typeof(RectTransform))]
public class UIScaleDownToFitParent : UIBehaviour
{
	[Header("Band")]
	[Tooltip("The row of buttons above the pack. Its BOTTOM edge is the ceiling: nothing the pack draws, badge included, goes above it. Leave it empty and the parent's own top edge is used, which is only right when nothing overlaps the parent.")]
	[SerializeField]
	private RectTransform _ceiling;

	[Tooltip("Breathing room between the buttons and the highest thing the pack draws. A real gap - the badge is already measured, so this does not have to make up for it.")]
	[SerializeField]
	private float _gapBelowCeiling;

	[Tooltip("Breathing room between the pack and the bottom of the parent - the top of the banner, once one shows.")]
	[SerializeField]
	private float _gapAboveFloor;

	[Header("Shrinking")]
	[Tooltip("Off to only ever move the pack, never resize it.")]
	[SerializeField]
	private bool _allowScaleDown;

	[Tooltip("Never shrink past this. If the band is too short even then, the pack stays under the buttons and it is its bottom edge that runs under the banner.")]
	[Range(0.1f, 1f)]
	[SerializeField]
	private float _minScale;

	private RectTransform _rect;

	private Vector2 _basePosition;

	private bool _hasBasePosition;

	private readonly Vector3[] _corners;

	private readonly List<Graphic> _graphics = new List<Graphic>();

	private RectTransform Rect => null;

	protected override void OnEnable()
	{
	}

	protected override void OnDisable()
	{
	}

	private void LateUpdate()
	{
	}

	private void CaptureBase()
	{
	}

	private void Restore()
	{
	}

	private void Apply()
	{
	}

	private float ReadCeilingY(RectTransform parent)
	{
		return 0f;
	}

	private bool ReadLocalExtent(out float top, out float bottom)
	{
		top = default(float);
		bottom = default(float);
		return false;
	}
}
}
