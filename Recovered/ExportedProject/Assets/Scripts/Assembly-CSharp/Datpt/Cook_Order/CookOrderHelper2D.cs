using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public static class CookOrderHelper2D
	{
		public static bool Contains(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			return false;
		}

		public static bool Contains(this List<SafeAreaIngredient> safeAreas, Transform target)
		{
			return false;
		}

		public static bool Contains(this SafeAreaIngredient area, Vector2 point)
		{
			return false;
		}

		public static bool Contains(this SafeAreaIngredient area, Transform target)
		{
			return false;
		}

		private static bool PointInTriangle(Vector2 p, Vector2 a, Vector2 b, Vector2 c)
		{
			return false;
		}

		public static Vector2 RandomPositionInHalfNearest(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			return default;
		}

		public static Vector2 RandomPositionInHalf(this SafeAreaIngredient area, Vector2 point)
		{
			return default;
		}

		public static Vector2 RandomPosition(this SafeAreaIngredient area)
		{
			return default;
		}

		public static Vector2 RandomPosition(this List<SafeAreaIngredient> safeAreas)
		{
			return default;
		}

		private static Vector2 RandomPointInTriangle(Vector2 a, Vector2 b, Vector2 c)
		{
			return default;
		}

		public static Vector2 ClosestPoint(this SafeAreaIngredient area, Vector2 point)
		{
			return default;
		}

		public static Vector2 ClosestPoint(this List<SafeAreaIngredient> safeAreas, Vector2 point)
		{
			return default;
		}

		public static Vector2 ClosestPointOnSegment(Vector2 A, Vector2 B, Vector2 P)
		{
			return default;
		}

		public static Vector2 ClosestPointInTriangle(Vector2 p, Vector2 a, Vector2 b, Vector2 c)
		{
			return default;
		}
	}
}
