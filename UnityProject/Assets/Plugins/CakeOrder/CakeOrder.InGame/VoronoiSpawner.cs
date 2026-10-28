using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.InGame
{

public class VoronoiSpawner
{
	[Serializable]
	public class CachedCell
	{
		public List<Triangle> Triangles;

		public List<float> CumulativeAreas;

		public float TotalArea;
	}

	public struct Triangle
	{
		public Vector2 A;

		public Vector2 B;

		public Vector2 C;

		public Triangle(Vector2 a, Vector2 b, Vector2 c)
		{
			//IL_0003: Unknown result type (might be due to invalid IL or missing references)
			//IL_0009: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0012: Unknown result type (might be due to invalid IL or missing references)
			//IL_0018: Unknown result type (might be due to invalid IL or missing references)
			//IL_0019: Unknown result type (might be due to invalid IL or missing references)
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			//IL_0027: Unknown result type (might be due to invalid IL or missing references)
			//IL_0028: Unknown result type (might be due to invalid IL or missing references)
			A = default(Vector2);
			B = default(Vector2);
			C = default(Vector2);
		}
	}

	private System.Random _rand;

	public float shrinkOffset;

	public float maxShrinkAreaPercentageAllow;

	[SerializeField]
	private Dictionary<int, CachedCell> _cellCache;

	public void PrecalculateCells(List<Vector2> points, List<Vector2> clipBoundary)
	{
	}

	private List<Vector2> GetVoronoiPolygon(List<Vector2> points, int index, List<Vector2> clipBoundary)
	{
		return null;
	}

	private List<Vector2> GetColliderPolygon(Collider2D col)
	{
		return null;
	}

	private List<Vector2> ClipPolygon(List<Vector2> poly, Vector2 planePoint, Vector2 planeNormal)
	{
		return null;
	}

	private List<Vector2> ShrinkPolygon(List<Vector2> poly, float offsetDist, float percentArea)
	{
		return null;
	}

	private float CalculateTriangleArea(Triangle tri)
	{
		return 0f;
	}

	public Vector2 GetRandomPointCached(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}
}
}
