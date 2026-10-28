using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[AddComponentMenu("Layout/Adaptive Two Column Layout")]
	public class AdaptiveTwoColumnLayout : MonoBehaviour
	{
		[SerializeField]
		[FormerlySerializedAs("m_Padding")]
		private RectOffset padding = new RectOffset();

		[SerializeField]
		[FormerlySerializedAs("m_ChildAlignment")]
		private TextAnchor childAlignment = TextAnchor.MiddleCenter;

		[Header("Sizes at scale 1 (the owner's fit scale shrinks them all)")]
		[SerializeField]
		[FormerlySerializedAs("maxSize")]
		private float iconSize = 160f;

		[SerializeField]
		[FormerlySerializedAs("minSize")]
		private float compactSize = 60f;

		[SerializeField]
		[FormerlySerializedAs("maxRowSpacing")]
		private float rowSpacing = 40f;

		[SerializeField]
		[FormerlySerializedAs("maxColumnSpacing")]
		private float columnSpacing = 40f;

		[Header("Column Split Threshold")]
		[Tooltip("Hard cap: a column never holds more icons than this, whatever column count the owner asked for.")]
		[SerializeField]
		[Min(1f)]
		private int maxPerColumn = 5;

		private readonly List<RectTransform> _children = new List<RectTransform>();

		private readonly List<bool> _compact = new List<bool>();

		private float _lastScale = 1f;

		private int _lastColumns = 1;

		private bool _laidOut;

		private float _edgeTop;

		private float _edgeBottom;

		[CompilerGenerated]
		private Action m_DimensionsChanged;

		private float PadTop => _edgeTop + (float)padding.top;

		private float PadVertical => _edgeTop + (float)padding.vertical + _edgeBottom;

		public event Action DimensionsChanged
		{
			[CompilerGenerated]
			add
			{
				m_DimensionsChanged = (Action)Delegate.Combine(m_DimensionsChanged, value);
			}
			[CompilerGenerated]
			remove
			{
				m_DimensionsChanged = (Action)Delegate.Remove(m_DimensionsChanged, value);
			}
		}

		public void SetEdgePadding(float top, float bottom)
		{
			_edgeTop = top;
			_edgeBottom = bottom;
		}

		private void OnRectTransformDimensionsChange()
		{
			if (_laidOut && isActiveAndEnabled)
			{
				if (m_DimensionsChanged != null)
				{
					m_DimensionsChanged();
				}
				else
				{
					Relayout(_lastScale, _lastColumns);
				}
			}
		}

		public void Relayout(float scale = 1f, int columns = 1, float tweenTime = 0f)
		{
			_lastScale = scale;
			_lastColumns = columns;
			_laidOut = true;
			CollectChildren();
			int count = _children.Count;
			Measure(count, scale, columns, out var childSize, out var rowGap, out var columnGap, out var perColumn, out var columnCount);
			float compactChild = Mathf.Min(compactSize * scale, childSize);
			float contentWidth = ((columnCount > 0) ? (childSize * (float)columnCount + columnGap * (float)(columnCount - 1)) : 0f);
			float startX = GetStartOffset(0, contentWidth);
			float y = 0f;
			int lastColumn = -1;
			for (int i = 0; i < count; i++)
			{
				int column = ((perColumn != 0) ? (i / perColumn) : 0);
				if (column != lastColumn)
				{
					int from = column * perColumn;
					int to = Mathf.Min(from + perColumn, count);
					float colHeight = ColumnHeight(from, to, childSize, compactChild, rowGap);
					y = GetStartOffset(1, colHeight);
					lastColumn = column;
				}
				float size = (_compact[i] ? compactChild : childSize);
				SetChild(_children[i], startX + (childSize + columnGap) * (float)column + (childSize - size) * 0.5f, y, size, tweenTime);
				y += size + rowGap;
			}
		}

		public void RelayoutChildren(float tweenTime)
		{
			Relayout(_lastScale, _lastColumns, tweenTime);
		}

		public float FitScale(int columns = 1)
		{
			CollectChildren();
			int count = _children.Count;
			if (count == 0)
			{
				return 1f;
			}
			Measure(count, 1f, columns, out var childSize, out var rowGap, out var columnGap, out var perColumn, out var columnCount);
			if (perColumn < 1)
			{
				return 1f;
			}
			float contentWidth = ((columnCount > 0) ? (childSize * (float)columnCount + columnGap * (float)(columnCount - 1)) : 0f);
			if (contentWidth > 0f)
			{
				float contentHeight = childSize * (float)perColumn + rowGap * (float)(perColumn - 1);
				if (contentHeight > 0f)
				{
					Rect rect = ((RectTransform)base.transform).rect;
					float heightScale = (rect.height - PadVertical) / contentHeight;
					float widthScale = (rect.width - (float)padding.horizontal) / contentWidth;
					return Mathf.Clamp01(Mathf.Min(heightScale, widthScale));
				}
			}
			return 1f;
		}

		public float PreferredHeight(int columns = 1)
		{
			return PreferredSize(columns).y;
		}

		public Vector2 PreferredSize(int columns = 1)
		{
			CollectChildren();
			int count = _children.Count;
			if (count == 0)
			{
				return new Vector2(padding.horizontal, PadVertical);
			}
			Measure(count, 1f, columns, out var childSize, out var rowGap, out var columnGap, out var perColumn, out var columnCount);
			float width = ContentWidth(columnCount, childSize, columnGap);
			float height = ColumnHeight(perColumn, childSize, rowGap);
			return new Vector2(width + (float)padding.horizontal, height + PadVertical);
		}

		private void Measure(int n, float scale, int columns, out float childSize, out float rowGap, out float columnGap, out int perColumn, out int columnCount)
		{
			childSize = iconSize * scale;
			rowGap = rowSpacing * scale;
			columnGap = columnSpacing * scale;
			int needed = Mathf.CeilToInt((float)n / (float)maxPerColumn);
			int columnsToUse = Mathf.Clamp(Mathf.Max(columns, needed), 1, Mathf.Max(n, 1));
			perColumn = Mathf.Max(Mathf.CeilToInt((float)n / (float)columnsToUse), 1);
			columnCount = ((n >= 1) ? Mathf.CeilToInt((float)n / (float)perColumn) : 0);
		}

		private static float ColumnHeight(int count, float childSize, float rowSpacing)
		{
			if (count > 0)
			{
				return (float)count * childSize + (float)(count - 1) * rowSpacing;
			}
			return 0f;
		}

		private float ColumnHeight(int from, int to, float childSize, float compactSize, float rowSpacing)
		{
			float num = 0f;
			if (from < to)
			{
				num = (float)(to - from - 1) * rowSpacing;
				for (int i = from; i < to; i++)
				{
					num += (_compact[i] ? compactSize : childSize);
				}
			}
			return num;
		}

		private static float ContentWidth(int columnCount, float childSize, float columnSpacing)
		{
			if (columnCount > 0)
			{
				return (float)columnCount * childSize + (float)(columnCount - 1) * columnSpacing;
			}
			return 0f;
		}

		private void CollectChildren()
		{
			_children.Clear();
			_compact.Clear();
			for (int i = 0; i < base.transform.childCount; i++)
			{
				RectTransform rectTransform = base.transform.GetChild(i) as RectTransform;
				if (rectTransform != null && rectTransform.gameObject.activeSelf)
				{
					if (rectTransform.TryGetComponent<ILayoutIgnorer>(out var ignorer) && ignorer.ignoreLayout)
					{
						continue;
					}
					_children.Add(rectTransform);
					bool compact = rectTransform.TryGetComponent<ICompactLayoutChild>(out var compactChild) && compactChild.Compact;
					_compact.Add(compact);
				}
			}
		}

		private float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
		{
			float padSize = ((axis == 0) ? ((float)padding.horizontal) : PadVertical);
			Rect rect = ((RectTransform)base.transform).rect;
			float size;
			int alignmentIndex;
			float start;
			if (axis == 0)
			{
				size = rect.width;
				alignmentIndex = (int)childAlignment % 3;
				start = padding.left;
			}
			else
			{
				if (axis != 1)
				{
					throw new IndexOutOfRangeException();
				}
				size = rect.height;
				alignmentIndex = (int)childAlignment / 3;
				start = PadTop;
			}
			return start + (size - (padSize + requiredSpaceWithoutPadding)) * ((float)alignmentIndex / 2f);
		}

		private static void SetChild(RectTransform child, float x, float y, float size, float tweenTime)
		{
			child.anchorMin = Vector2.up;
			child.anchorMax = Vector2.up;
			Vector2 pivot = child.pivot;
			float posX = pivot.x * size + x;
			float posY = 0f - y - (1f - pivot.y) * size;
			child.DOKill();
			if (tweenTime > 0f)
			{
				child.DOSizeDelta(new Vector2(size, size), tweenTime).SetEase(Ease.OutCubic);
				child.DOAnchorPos(new Vector2(posX, posY), tweenTime).SetEase(Ease.OutCubic);
			}
			else
			{
				child.sizeDelta = new Vector2(size, size);
				child.anchoredPosition = new Vector2(posX, posY);
			}
		}
	}
}
