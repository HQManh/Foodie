using UnityEngine;

namespace Utilities
{

public class ObjectScatterGroup : MonoBehaviour
{
	[Header("Settings")]
	[SerializeField]
	private GameObject[] _prefabs;

	[SerializeField]
	private Transform _container;

	[SerializeField]
	private Vector2Int _countRange;

	[SerializeField]
	private float _circleAreaRadius;

	[Header("Distribution control")]
	[SerializeField]
	private Vector2 _rectAreaSize;

	[SerializeField]
	private Vector2Int _division;

	[SerializeField]
	private Vector2 _rectRandomness;

	[Header("Randomize Range")]
	[SerializeField]
	private bool _isUseSeed;

	[SerializeField]
	private int _seed;

	[SerializeField]
	private Vector2 _angleRange;

	[SerializeField]
	private Vector2 _scaleRange;

	[SerializeField]
	private Gradient _colorRange;

	[SerializeField]
	private Sprite[] _sprites;

	public Transform Container => null;

	public int Seed
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public Vector3[] GetRandomPositions()
	{
		return null;
	}

	public Vector3 GetRandomPosition(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public float[] GetRandomAngles()
	{
		return null;
	}

	public float GetRandomAngle(int index)
	{
		return 0f;
	}

	public float[] GetRandomScales()
	{
		return null;
	}

	public float GetRandomScale(int index)
	{
		return 0f;
	}

	public void GenerateScatterObjects()
	{
	}
}
}
