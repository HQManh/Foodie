using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	[AddComponentMenu("Layout/Adaptive Two Column Layout")]
	public class AdaptiveTwoColumnLayout : MonoBehaviour
	{
		[SerializeField]
		[FormerlySerializedAs("m_Padding")]
		private RectOffset padding;

		[SerializeField]
		[FormerlySerializedAs("m_ChildAlignment")]
		private TextAnchor childAlignment;

		[Header("Sizes at scale 1 (the owner's fit scale shrinks them all)")]
		[SerializeField]
		[FormerlySerializedAs("maxSize")]
		private float iconSize;

		[SerializeField]
		[FormerlySerializedAs("minSize")]
		private float compactSize;

		[SerializeField]
		[FormerlySerializedAs("maxRowSpacing")]
		private float rowSpacing;

		[SerializeField]
		[FormerlySerializedAs("maxColumnSpacing")]
		private float columnSpacing;

		[Header("Column Split Threshold")]
		[Tooltip("Hard cap: a column never holds more icons than this, whatever column count the owner asked for.")]
		[SerializeField]
		[Min(1f)]
		private int maxPerColumn;

		private readonly List<RectTransform> _children;

		private readonly List<bool> _compact;

		private float _lastScale;

		private int _lastColumns;

		private bool _laidOut;

		private float _edgeTop;

		private float _edgeBottom;

		[CompilerGenerated]
		private Action m_DimensionsChanged;

		private float PadTop => 0f;

		private float PadVertical => 0f;

		public event Action DimensionsChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void SetEdgePadding(float top, float bottom)
		{
		}

		private void OnRectTransformDimensionsChange()
		{
		}

		public void Relayout(float scale = 1f, int columns = 1, float tweenTime = 0f)
		{
		}

		public void RelayoutChildren(float tweenTime)
		{
		}

		public float FitScale(int columns = 1)
		{
			return 0f;
		}

		public float PreferredHeight(int columns = 1)
		{
			return 0f;
		}

		public Vector2 PreferredSize(int columns = 1)
		{
			return default;
		}

		private void Measure(int n, float scale, int columns, out float childSize, out float rowGap, out float columnGap, out int perColumn, out int columnCount)
		{
			childSize = default;
			rowGap = default;
			columnGap = default;
			perColumn = default;
			columnCount = default;
		}

		private static float ColumnHeight(int count, float childSize, float rowSpacing)
		{
			return 0f;
		}

		private float ColumnHeight(int from, int to, float childSize, float compactSize, float rowSpacing)
		{
			return 0f;
		}

		private static float ContentWidth(int columnCount, float childSize, float columnSpacing)
		{
			return 0f;
		}

		private void CollectChildren()
		{
		}

		private float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
		{
			return 0f;
		}

		private static void SetChild(RectTransform child, float x, float y, float size, float tweenTime)
		{
		}
	}
}
