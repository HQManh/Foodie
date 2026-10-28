using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace CakeOrder.InGame
{

public class IngredientDropPositionCalculator : SerializedMonoBehaviour
{
	public enum AlgorithmType
	{
		Auto,
		Voronoi,
		Grid,
		Grid_To_Polygon
	}

	[SerializeField]
	private AlgorithmType _algorithm;

	[Header("Voronoi Settings")]
	public float shrinkOffset;

	public float maxShrinkAreaPercentageAllow;

	private VoronoiSpawner _voronoiSpawner;

	[Header("Grid Settings")]
	public float cellSize;

	public float maxRadius;

	private GridSpawner _gridSpawner;

	private List<Vector2> _points = new List<Vector2>();

	private List<Vector2> _boundary = new List<Vector2>();

	public void Precalculate(List<Vector2> points, Collider2D collider, AlgorithmType algorithm = AlgorithmType.Grid)
	{
	}

	public void Precalculate(List<Vector2> points, List<Vector2> boundary, AlgorithmType algorithm = AlgorithmType.Auto)
	{
	}

	public void ReCalculate()
	{
	}

	public Vector2 GetRandomPointCached(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private List<Vector2> GetColliderPolygon(Collider2D col)
	{
		return null;
	}
}
}
