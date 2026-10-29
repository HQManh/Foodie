using DG.Tweening;
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

	// Rebuilt: coins pop out around the spawn point, then fly to the target counter and punch it.
	public void Play(Vector3 worldPos)
	{
		Play(worldPos, Mathf.Max(1, coinCount), null);
	}

	public void Play(Vector3 worldPos, int count, Action onCoinArrived)
	{
		EnsureCanvas();
		if (target == null || coinPrefab == null || _canvas == null)
		{
			for (int i = 0; i < count; i++) onCoinArrived?.Invoke();
			return;
		}
		Vector3 start = WorldToUiPosition(worldPos);
		float interval = Mathf.Max(0f, coinSpawnInterval);
		for (int i = 0; i < count; i++)
		{
			float delay = i * interval;
			float flyDelay = UnityEngine.Random.Range(flyDelayRange.x, Mathf.Max(flyDelayRange.x, flyDelayRange.y));
			if (delay <= 0f) SpawnCoin(start, onCoinArrived, flyDelay);
			else DG.Tweening.DOVirtual.DelayedCall(delay, () => SpawnCoin(start, onCoinArrived, flyDelay), true);
		}
	}

	private void SpawnCoin(Vector3 spawnPos, Action onArrived, float startDelay)
	{
		Image coin = GetCoin();
		if (coin == null)
		{
			onArrived?.Invoke();
			return;
		}
		Transform t = coin.transform;
		t.position = spawnPos;
		t.localScale = Vector3.one;
		coin.gameObject.SetActive(true);
		Vector2 scatter = UnityEngine.Random.insideUnitCircle * Mathf.Max(0f, scatterRadius);
		float scatterTime = Mathf.Max(0.05f, scatterDuration);
		float fly = Mathf.Max(0.1f, flyDuration);
		DG.Tweening.Sequence seq = DG.Tweening.DOTween.Sequence().SetTarget(t).SetUpdate(true);
		seq.Append(t.DOMove(spawnPos + new Vector3(scatter.x, scatter.y, 0f), scatterTime).SetEase(DG.Tweening.Ease.OutQuad));
		seq.AppendInterval(startDelay);
		seq.Append(t.DOMove(target.position, fly).SetEase(DG.Tweening.Ease.InQuad));
		seq.OnComplete(() =>
		{
			ReleaseCoin(coin);
			PunchTarget();
			onArrived?.Invoke();
		});
	}

	private Image GetCoin()
	{
		for (int i = _pool.Count - 1; i >= 0; i--)
		{
			if (_pool[i] == null) { _pool.RemoveAt(i); continue; }
			if (!_pool[i].gameObject.activeSelf) return _pool[i];
		}
		if (coinPrefab == null) return null;
		Image coin = Instantiate(coinPrefab, _canvas != null ? _canvas.transform : transform);
		coin.raycastTarget = false;
		_pool.Add(coin);
		return coin;
	}

	private void ReleaseCoin(Image coin)
	{
		if (coin != null) coin.gameObject.SetActive(false);
	}

	private void PunchTarget()
	{
		if (target == null) return;
		target.DOComplete();
		target.DOPunchScale(punchScale == Vector3.zero ? new Vector3(0.15f, 0.15f, 0f) : punchScale, punchDuration > 0f ? punchDuration : 0.2f);
	}

	private Vector3 WorldToUiPosition(Vector3 worldPos)
	{
		Camera cam = Camera.main;
		if (cam == null) return worldPos;
		Vector3 screen = cam.WorldToScreenPoint(worldPos);
		// Overlay canvases use pixel coordinates; camera canvases need the screen point converted.
		if (_canvas != null && _canvas.renderMode != RenderMode.ScreenSpaceOverlay && _uiCamera != null)
		{
			RectTransformUtility.ScreenPointToWorldPointInRectangle((RectTransform)_canvas.transform, screen, _uiCamera, out Vector3 world);
			return world;
		}
		return screen;
	}

	private void EnsureCanvas()
	{
		if (_canvas == null) _canvas = GetComponentInParent<Canvas>();
		if (_canvas == null && target != null) _canvas = target.GetComponentInParent<Canvas>();
		if (_canvas != null) _canvas = _canvas.rootCanvas;
		if (_canvas != null && _canvas.renderMode != RenderMode.ScreenSpaceOverlay) _uiCamera = _canvas.worldCamera;
	}
}
}
