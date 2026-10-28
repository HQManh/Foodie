using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorChainRopeView
	{
		private readonly List<LineRenderer> _pool = new List<LineRenderer>();

		private readonly List<SpriteRenderer> _anchorPool = new List<SpriteRenderer>();

		private readonly List<Vector3> _anchorPoints = new List<Vector3>();

		private readonly List<Color> _anchorColors = new List<Color>();

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

		private readonly List<Vector2Int> _pendingCells = new List<Vector2Int>();

		public void Setup(Transform root, Transform space, Material material, float width, Color color, string sortingLayer, int sortingOrder, SpriteRenderer anchorPrefab, Color brightTint, Color dimTint)
		{
			_root = root;
			_brightTint = brightTint;
			_dimTint = dimTint;
			_space = space;
			_width = width;
			_color = color;
			_sortingOrder = sortingOrder;
			_sortingLayer = sortingLayer;
			_anchorPrefab = anchorPrefab;
			if (!material)
			{
				material = new Material(Shader.Find("Sprites/Default") /* literal recovered by guess */);
			}
			_material = material;
		}

		public void Redraw(ConveyorGrid grid, bool clip, Rect window)
		{
			_anchorPoints.Clear();
			_anchorColors.Clear();
			int num = 0;
			if (grid != null && (bool)_root)
			{
				foreach (ConveyorChain chain in grid.Chains)
				{
					num = DrawChain(grid, chain, clip, window, num);
				}
			}
			for (int i = num; i < _pool.Count; i++)
			{
				if ((bool)_pool[i])
				{
					_pool[i].enabled = false;
				}
			}
			DrawAnchors(clip);
		}

		private Color RopeColorFor(bool bright)
		{
			return _color * (bright ? _brightTint : _dimTint);
		}

		private static bool IsBright(ConveyorSlot slot)
		{
			if (slot != null && (bool)slot.Item)
			{
				return slot.Item.IsBright;
			}
			return false;
		}

		private void AddAnchor(Vector3 point, Color color)
		{
			_anchorPoints.Add(point);
			_anchorColors.Add(color);
		}

		private void DrawAnchors(bool clip)
		{
			if (!_anchorPrefab || !_root)
			{
				return;
			}
			int i;
			for (i = 0; i < _anchorPoints.Count; i++)
			{
				SpriteRenderer anchor = GetAnchor(i);
				if ((bool)anchor)
				{
					anchor.gameObject.SetActive(true);
					anchor.maskInteraction = (clip ? SpriteMaskInteraction.VisibleInsideMask : SpriteMaskInteraction.None);
					anchor.color = _anchorColors[i];
					anchor.transform.position = _anchorPoints[i];
				}
			}
			for (; i < _anchorPool.Count; i++)
			{
				if ((bool)_anchorPool[i])
				{
					_anchorPool[i].gameObject.SetActive(false);
				}
			}
		}

		private SpriteRenderer GetAnchor(int index)
		{
			while (index >= _anchorPool.Count)
			{
				_anchorPool.Add(CreateAnchor());
			}
			return _anchorPool[index];
		}

		private SpriteRenderer CreateAnchor()
		{
			SpriteRenderer spriteRenderer = Object.Instantiate(_anchorPrefab, _root);
			spriteRenderer.transform.localRotation = Quaternion.identity;
			spriteRenderer.gameObject.SetActive(true);
			if (!string.IsNullOrEmpty(_sortingLayer))
			{
				spriteRenderer.sortingLayerName = _sortingLayer;
			}
			spriteRenderer.sortingOrder = _sortingOrder + 1;
			return spriteRenderer;
		}

		private int DrawChain(ConveyorGrid grid, ConveyorChain chain, bool clip, Rect window, int used)
		{
			List<ConveyorSlot> members = chain.Members;
			for (int i = 0; i < members.Count; i++)
			{
				for (int j = i + 1; j < members.Count; j++)
				{
					if (Mathf.Abs(members[i].Col - members[j].Col) == 1)
					{
						bool bright = IsBright(members[i]) || IsBright(members[j]);
						Color color = RopeColorFor(bright);
						Endpoints(grid, members[i], members[j], color, out var a, out var b);
						if (!clip || ClipToWindow(ref a, ref b, window))
						{
							Apply(GetLine(used), a, b, color);
							used++;
						}
					}
				}
			}
			return DrawPendingLinks(grid, chain, clip, window, used);
		}

		private int DrawPendingLinks(ConveyorGrid grid, ConveyorChain chain, bool clip, Rect window, int used)
		{
			if (chain.Members.Count >= chain.Size)
			{
				return used;
			}
			_pendingCells.Clear();
			grid.AppendPendingChainCells(chain.Id, _pendingCells);
			foreach (ConveyorSlot member in chain.Members)
			{
				foreach (Vector2Int pendingCell in _pendingCells)
				{
					if (Mathf.Abs(member.Col - pendingCell.x) == 1)
					{
						Color color = RopeColorFor(IsBright(member));
						Vector3 a = grid.CellCenter(pendingCell.x, pendingCell.y);
						Vector3 b = grid.CellCenter(member.Col, member.Row);
						if ((bool)member.Item)
						{
							b = ((member.Row != pendingCell.y) ? IngredientConveyorItem.NearestAnchorTo(member.Item, a) : IngredientConveyorItem.SideAnchor(member.Item, member.Col < pendingCell.x));
							AddAnchor(b, color);
						}
						if (!clip || ClipToWindow(ref b, ref a, window))
						{
							Apply(GetLine(used), b, a, color);
							used++;
						}
					}
				}
			}
			return used;
		}

		private void Endpoints(ConveyorGrid grid, ConveyorSlot slotA, ConveyorSlot slotB, Color color, out Vector3 a, out Vector3 b)
		{
			if ((bool)slotA.Item && (bool)slotB.Item)
			{
				if (slotA.Row == slotB.Row)
				{
					SideAnchorPair(slotA, slotB, out a, out b);
				}
				else
				{
					IngredientConveyorItem.NearestAnchorPair(slotA.Item, slotB.Item, out a, out b);
				}
				AddAnchor(a, color);
				AddAnchor(b, color);
			}
			else
			{
				a = grid.CellCenter(slotA.Col, slotA.Row);
				b = grid.CellCenter(slotB.Col, slotB.Row);
			}
		}

		private static void SideAnchorPair(ConveyorSlot slotA, ConveyorSlot slotB, out Vector3 a, out Vector3 b)
		{
			a = IngredientConveyorItem.SideAnchor(slotA.Item, slotA.Col < slotB.Col);
			b = IngredientConveyorItem.SideAnchor(slotB.Item, slotB.Col <= slotA.Col);
		}

		private bool ClipToWindow(ref Vector3 a, ref Vector3 b, Rect window)
		{
			if (!_space)
			{
				return true;
			}
			Vector3 vector = _space.InverseTransformPoint(a);
			Vector3 vector2 = _space.InverseTransformPoint(b);
			float num = vector2.x - vector.x;
			float num2 = vector2.y - vector.y;
			float t = 0f;
			float t2 = 1f;
			if (ClipEdge(0f - num, vector.x - window.x, ref t, ref t2) && ClipEdge(num, window.x + window.width - vector.x, ref t, ref t2) && ClipEdge(0f - num2, vector.y - window.y, ref t, ref t2) && ClipEdge(num2, window.y + window.height - vector.y, ref t, ref t2))
			{
				float z = vector.z;
				float z2 = vector2.z;
				a = _space.TransformPoint(new Vector3(vector.x + num * t, vector.y + num2 * t, z + (z2 - z) * t));
				b = _space.TransformPoint(new Vector3(vector.x + num * t2, vector.y + num2 * t2, z + (z2 - z) * t2));
				return true;
			}
			return false;
		}

		private static bool ClipEdge(float p, float q, ref float t0, ref float t1)
		{
			float num = Mathf.Max(Mathf.Abs(p), 0f);
			float num2 = Mathf.Max(num * 1E-06f, Mathf.Epsilon * 8f);
			if (num2 <= Mathf.Abs(0f - p))
			{
				float num3 = q / p;
				if (p >= 0f)
				{
					if (num3 < t0)
					{
						return false;
					}
					if (num3 < t1)
					{
						t1 = num3;
					}
				}
				else
				{
					if (t1 < num3)
					{
						return false;
					}
					if (t0 < num3)
					{
						t0 = num3;
					}
				}
				return true;
			}
			return q >= 0f;
		}

		private void Apply(LineRenderer line, Vector3 a, Vector3 b, Color color)
		{
			if ((bool)line)
			{
				line.enabled = true;
				line.startColor = color;
				line.endColor = color;
				line.SetPosition(0, a);
				line.SetPosition(1, b);
			}
		}

		private LineRenderer GetLine(int index)
		{
			while (index >= _pool.Count)
			{
				_pool.Add(CreateLine());
			}
			return _pool[index];
		}

		private LineRenderer CreateLine()
		{
			GameObject gameObject = new GameObject("ChainRope" /* literal recovered by guess */);
			gameObject.transform.SetParent(_root, false);
			LineRenderer lineRenderer = gameObject.AddComponent<LineRenderer>();
			lineRenderer.useWorldSpace = true;
			lineRenderer.positionCount = 2;
			lineRenderer.startWidth = _width;
			lineRenderer.endWidth = _width;
			lineRenderer.material = _material;
			lineRenderer.startColor = _color;
			lineRenderer.endColor = _color;
			lineRenderer.textureMode = LineTextureMode.Tile;
			lineRenderer.numCapVertices = 2;
			lineRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
			lineRenderer.receiveShadows = false;
			if (!string.IsNullOrEmpty(_sortingLayer))
			{
				lineRenderer.sortingLayerName = _sortingLayer;
			}
			lineRenderer.sortingOrder = _sortingOrder;
			return lineRenderer;
		}

		public void Clear()
		{
			foreach (LineRenderer item in _pool)
			{
				if ((bool)item)
				{
					Object.Destroy(item.gameObject);
				}
			}
			_pool.Clear();
			foreach (SpriteRenderer item2 in _anchorPool)
			{
				if ((bool)item2)
				{
					Object.Destroy(item2.gameObject);
				}
			}
			_anchorPool.Clear();
			_anchorPoints.Clear();
			_anchorColors.Clear();
		}
	}
}
