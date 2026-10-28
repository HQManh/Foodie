using UnityEngine;

namespace Utilities;

public static class GeometryUtilities
{
	public static Vector2[] CalculateIntersections(Vector2 size, Vector2 lineStart, Vector2 lineEnd)
	{
		return null;
	}

	public static bool IntersectLineSegments2D(Vector2 p1start, Vector2 p1end, Vector2 p2start, Vector2 p2end, out Vector2 intersection)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		intersection = default(Vector2);
		return false;
	}

	private static bool Approximately(float a, float b)
	{
		return false;
	}

	private static bool ApproximateZero(float value)
	{
		return false;
	}

	private static float Cross(Vector2 a, Vector2 b)
	{
		return 0f;
	}

	public static Vector2 CalculateMirroredPoint(Vector2 pointToMirror, Vector2 lineAnchor, Vector2 lineDirectionNorm)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static float CalculateDistanceFromPointToLine(Vector2 point, Vector2 linePivot, Vector2 directionNorm)
	{
		return 0f;
	}

	public static Vector2 CalculateProjectFromPointToLine(Vector2 point, Vector2 linePivot, Vector2 directionNorm)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public static void ProjectFromPointToLine(Vector2 point, Vector2 linePivot, Vector2 directionNorm, out float distanceToLine, out float distanceProjected, out Vector2 projectedPoint)
	{
		//IL_0011: Unknown result type (might be due to invalid IL or missing references)
		distanceToLine = default(float);
		distanceProjected = default(float);
		projectedPoint = default(Vector2);
	}

	public static void ProjectFromPointToLineSegment(Vector2 point, Vector2 lineStart, Vector2 lineEnd, out float distanceToLine, out float distanceProjected, out Vector2 projectedPoint)
	{
		//IL_0011: Unknown result type (might be due to invalid IL or missing references)
		distanceToLine = default(float);
		distanceProjected = default(float);
		projectedPoint = default(Vector2);
	}

	public static float CalculateSignedAreaPolygon(Vector2[] points)
	{
		return 0f;
	}

	public static float CalculateAreaPolygon(Vector2[] points)
	{
		return 0f;
	}
}
