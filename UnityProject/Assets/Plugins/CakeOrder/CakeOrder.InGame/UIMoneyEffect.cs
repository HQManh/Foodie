using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UIMoneyEffect : MonoBehaviour
{
	[SerializeField]
	private Transform target;

	[SerializeField]
	private Image coinPrefab;

	[SerializeField]
	private AudioClip sfxCoinAppear;

	[SerializeField]
	private AudioClip sfxCoinPickup;

	[Header("Spawn")]
	[SerializeField]
	private int coinCount;

	[SerializeField]
	private float coinSpawnInterval;

	[SerializeField]
	private float scatterRadius;

	[SerializeField]
	private float scatterDuration;

	[SerializeField]
	private Vector2 flyDelayRange;

	[SerializeField]
	private float flyDuration;

	[Header("Target punch")]
	[SerializeField]
	private Vector3 punchScale;

	[SerializeField]
	private float punchDuration;

	private Canvas _canvas;

	private Camera _uiCamera;

	private readonly List<Image> _pool = new List<Image>();

	public void Play(Vector3 worldPos)
	{
	}

	public void Play(Vector3 worldPos, int count, Action onCoinArrived)
	{
	}

	private void SpawnCoin(Vector3 spawnPos, Action onArrived, float startDelay)
	{
	}

	private Image GetCoin()
	{
		return null;
	}

	private void ReleaseCoin(Image coin)
	{
	}

	private void PunchTarget()
	{
	}

	private Vector3 WorldToUiPosition(Vector3 worldPos)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private void EnsureCanvas()
	{
	}
}
}
