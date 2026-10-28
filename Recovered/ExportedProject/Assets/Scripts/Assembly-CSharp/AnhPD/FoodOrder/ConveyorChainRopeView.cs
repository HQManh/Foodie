using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorChainRopeView
	{
		private readonly List<LineRenderer> _pool;

		private readonly List<SpriteRenderer> _anchorPool;

		private readonly List<Vector3> _anchorPoints;

		private readonly List<Color> _anchorColors;

		private Transform _root;

		private Transform _space;

		private Material _material;

		private float _width;

		private Color _color;

		private int _sortingOrder;

		private Color _brightTint;

		private Color _dimTint;

		private string _sortingLayer;

		private SpriteRenderer _anchorPrefab;

		private readonly List<Vector2Int> _pendingCells;

		public void Setup(Transform root, Transform space, Material material, float width, Color color, string sortingLayer, int sortingOrder, SpriteRenderer anchorPrefab, Color brightTint, Color dimTint)
		{
		}

		public void Redraw(ConveyorGrid grid, bool clip, Rect window)
		{
		}

		private Color RopeColorFor(bool bright)
		{
			return default;
		}

		private static bool IsBright(ConveyorSlot slot)
		{
			return false;
		}

		private void AddAnchor(Vector3 point, Color color)
		{
		}

		private void DrawAnchors(bool clip)
		{
		}

		private SpriteRenderer GetAnchor(int index)
		{
			return null;
		}

		private SpriteRenderer CreateAnchor()
		{
			return null;
		}

		private int DrawChain(ConveyorGrid grid, ConveyorChain chain, bool clip, Rect window, int used)
		{
			return 0;
		}

		private int DrawPendingLinks(ConveyorGrid grid, ConveyorChain chain, bool clip, Rect window, int used)
		{
			return 0;
		}

		private void Endpoints(ConveyorGrid grid, ConveyorSlot slotA, ConveyorSlot slotB, Color color, out Vector3 a, out Vector3 b)
		{
			a = default;
			b = default;
		}

		private static void SideAnchorPair(ConveyorSlot slotA, ConveyorSlot slotB, out Vector3 a, out Vector3 b)
		{
			a = default;
			b = default;
		}

		private bool ClipToWindow(ref Vector3 a, ref Vector3 b, Rect window)
		{
			return false;
		}

		private static bool ClipEdge(float p, float q, ref float t0, ref float t1)
		{
			return false;
		}

		private void Apply(LineRenderer line, Vector3 a, Vector3 b, Color color)
		{
		}

		private LineRenderer GetLine(int index)
		{
			return null;
		}

		private LineRenderer CreateLine()
		{
			return null;
		}

		public void Clear()
		{
		}
	}
}
