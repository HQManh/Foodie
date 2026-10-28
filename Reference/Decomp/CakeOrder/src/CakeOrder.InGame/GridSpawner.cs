using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.InGame;

public class GridSpawner
{
	[Serializable]
	public struct SpawnNode
	{
		public Vector2 origin;

		public float maxRadius;

		public Color color;
	}

	[Header("Configuration")]
	public float cellSize;

	private Dictionary<int, List<Vector2>> spawnRegions;

	[ContextMenu("Force Precalculate")]
	public void PrecalculateGrid(SpawnNode[] spawnNodes, Vector2[] polygon)
	{
	}

	public Vector2 GetRandomSpawnPoint(int spawnIndex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private Vector2 GetWorldPos(int x, int y, float minX, float minY)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private bool IsPointInPolygon(Vector2 point, Vector2[] polygon)
	{
		return false;
	}

	private Vector2Int GetNearestValidGridPos(Vector2 worldPos, bool[,] isValidCell, float minX, float minY, int width, int height)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2Int);
	}
}
