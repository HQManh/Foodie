using UnityEngine;
using UnityEngine.UI;

namespace Utilities.UI
{

public class UniformStretchGridLayoutGroup : LayoutGroup
{
	public enum GridMode
	{
		Both,
		Horizontal,
		Vertical
	}

	[SerializeField]
	private GridMode _mode;

	[SerializeField]
	private int _columns;

	[SerializeField]
	private int _rows;

	[SerializeField]
	private Vector2 _spacing;

	public GridMode Mode
	{
		get
		{
			return GridMode.Both;
		}
		set
		{
		}
	}

	public int Columns
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int Rows
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public Vector2 Spacing
	{
		get
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(Vector2);
		}
		set
		{
		}
	}

	public override void CalculateLayoutInputHorizontal()
	{
	}

	public override void CalculateLayoutInputVertical()
	{
	}

	public override void SetLayoutHorizontal()
	{
	}

	public override void SetLayoutVertical()
	{
	}

	private float[] GetColumnWidths()
	{
		return null;
	}

	private float[] GetRowHeights()
	{
		return null;
	}

	private void CalculateLayout()
	{
	}

	private void CalculateLayoutBoth()
	{
	}

	private void CalculateLayoutVerticalOnly()
	{
	}

	private void CalculateLayoutHorizontalOnly()
	{
	}
}
}
