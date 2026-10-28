using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public static class CookOrderHelper2D
	{
		public static bool Contains(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			if (safeAreas == null)
			{
				return false;
			}

			foreach (SafeAreaIngredient area in safeAreas)
			{
				if (area.Contains(point))
				{
					return true;
				}
			}

			return false;
		}

		public static bool Contains(this List<SafeAreaIngredient> safeAreas, Transform target)
		{
			return safeAreas.Contains((Vector2)target.position);
		}

		public static bool Contains(this SafeAreaIngredient area, Vector2 point)
		{
			if (area.topLeft == null || area.topRight == null || area.bottomRight == null || area.bottomLeft == null)
			{
				return false;
			}

			Vector2 tl = area.topLeft.position;
			Vector2 tr = area.topRight.position;
			Vector2 br = area.bottomRight.position;
			Vector2 bl = area.bottomLeft.position;

			return PointInTriangle(point, tl, tr, br) || PointInTriangle(point, tl, br, bl);
		}

		public static bool Contains(this SafeAreaIngredient area, Transform target)
		{
			return area.Contains((Vector2)target.position);
		}

		private static bool PointInTriangle(Vector2 p, Vector2 a, Vector2 b, Vector2 c)
		{
			Vector2 v0 = c - a;
			Vector2 v1 = b - a;
			Vector2 v2 = p - a;

			float dot00 = Vector2.Dot(v0, v0);
			float dot01 = Vector2.Dot(v0, v1);
			float dot02 = Vector2.Dot(v0, v2);
			float dot11 = Vector2.Dot(v1, v1);
			float dot12 = Vector2.Dot(v1, v2);

			float invDenom = 1f / (dot11 * dot00 - dot01 * dot01);
			float u = (dot11 * dot02 - dot01 * dot12) * invDenom;
			float v = (dot00 * dot12 - dot01 * dot02) * invDenom;

			return u >= 0f && v >= 0f && u + v < 1f;
		}

		public static Vector2 RandomPositionInHalfNearest(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			// TODO(unrecovered): RandomPositionInHalf's corner-average computation is garbled in the pseudocode (the y components are lost), and the empty-list fallback reads an unnamed singleton.
			return default;
		}

		public static Vector2 RandomPositionInHalf(this SafeAreaIngredient area, Vector2 point)
		{
			// TODO(unrecovered): the pseudocode mixes up the x and y components of the corner positions, so the half-selection cannot be reproduced reliably.
			return default;
		}

		public static Vector2 RandomPosition(this SafeAreaIngredient area)
		{
			Vector2 tl = area.topLeft.position;
			Vector2 tr = area.topRight.position;
			Vector2 br = area.bottomRight.position;
			Vector2 bl = area.bottomLeft.position;

			if (Random.value < 0.5f)
			{
				return RandomPointInTriangle(tl, tr, br);
			}

			return RandomPointInTriangle(tl, br, bl);
		}

		public static Vector2 RandomPosition(this List<SafeAreaIngredient> safeAreas)
		{
			if (safeAreas != null && safeAreas.Count > 0)
			{
				return safeAreas[Random.Range(0, safeAreas.Count)].RandomPosition();
			}

			// TODO(unrecovered): the empty-list fallback reads a float from an unnamed singleton.
			return default;
		}

		private static Vector2 RandomPointInTriangle(Vector2 a, Vector2 b, Vector2 c)
		{
			float r1 = Mathf.Sqrt(Random.value);
			float r2 = Random.value;
			return a * (1f - r1) + b * (r1 * (1f - r2)) + c * (r1 * r2);
		}

		public static Vector2 ClosestPoint(this SafeAreaIngredient area, Vector2 point)
		{
			if (Contains(area, point))
			{
				return point;
			}

			Vector2 tl = area.topLeft.position;
			Vector2 tr = area.topRight.position;
			Vector2 br = area.bottomRight.position;
			Vector2 bl = area.bottomLeft.position;

			Vector2 c1 = ClosestPointInTriangle(point, tl, tr, br);
			Vector2 c2 = ClosestPointInTriangle(point, tl, br, bl);

			return (point - c1).sqrMagnitude < (point - c2).sqrMagnitude ? c1 : c2;
		}

		public static Vector2 ClosestPoint(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			if (safeAreas == null || safeAreas.Count == 0)
			{
				// TODO(unrecovered): the empty-list fallback reads a float from an unnamed singleton.
				return default;
			}

			Vector2 best = point;
			float bestDist = float.MaxValue;
			foreach (SafeAreaIngredient area in safeAreas)
			{
				Vector2 c = area.ClosestPoint(point);
				float d = (point - c).sqrMagnitude;
				if (d < bestDist)
				{
					best = c;
					bestDist = d;
				}
			}

			return best;
		}

		public static Vector2 ClosestPointOnSegment(Vector2 A, Vector2 B, Vector2 P)
		{
			Vector2 ab = B - A;
			float t = Vector2.Dot(P - A, ab) / ab.sqrMagnitude;
			t = Mathf.Clamp01(t);
			return A + ab * t;
		}

		public static Vector2 ClosestPointInTriangle(Vector2 p, Vector2 a, Vector2 b, Vector2 c)
		{
			Vector2 ab = b - a;
			Vector2 ac = c - a;
			Vector2 ap = p - a;
			float d1 = Vector2.Dot(ab, ap);
			float d2 = Vector2.Dot(ac, ap);
			if (d1 <= 0f && d2 <= 0f)
			{
				return a;
			}

			Vector2 bp = p - b;
			float d3 = Vector2.Dot(ab, bp);
			float d4 = Vector2.Dot(ac, bp);
			if (d3 >= 0f && d4 <= d3)
			{
				return b;
			}

			float vc = d1 * d4 - d3 * d2;
			if (vc <= 0f && d1 >= 0f && d3 <= 0f)
			{
				float v = d1 / (d1 - d3);
				return a + ab * v;
			}

			Vector2 cp = p - c;
			float d5 = Vector2.Dot(ab, cp);
			float d6 = Vector2.Dot(ac, cp);
			if (d6 >= 0f && d5 <= d6)
			{
				return c;
			}

			float vb = d5 * d2 - d1 * d6;
			if (vb <= 0f && d2 >= 0f && d6 <= 0f)
			{
				float w = d2 / (d2 - d6);
				return a + ac * w;
			}

			float va = d3 * d6 - d5 * d4;
			if (va <= 0f && d4 - d3 >= 0f && d5 - d6 >= 0f)
			{
				float w = (d4 - d3) / ((d4 - d3) + (d5 - d6));
				return b + (c - b) * w;
			}

			float denom = 1f / (va + vb + vc);
			float v2 = vb * denom;
			float w2 = vc * denom;
			return a + ab * v2 + ac * w2;
		}
	}
}
