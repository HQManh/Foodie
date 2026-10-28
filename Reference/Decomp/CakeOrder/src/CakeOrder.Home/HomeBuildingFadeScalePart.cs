using DG.Tweening;
using UnityEngine;

namespace CakeOrder.Home;

public class HomeBuildingFadeScalePart : MonoBehaviour
{
	[SerializeField]
	private Transform _container;

	[SerializeField]
	private SpriteRenderer[] renderers;

	[SerializeField]
	private float duration;

	[SerializeField]
	private Ease ease;

	private Tween _tween;

	private ParticleSystem _particleAppear;

	private Vector3 hiddenScale => default(Vector3);

	public bool IsShown { get; private set; }

	private Transform container => null;

	public Vector3 WorldPosition => default(Vector3);

	public Transform DestinationTransform => null;

	public void SetParticleAppear(ParticleSystem particleAppear)
	{
	}

	public Tween Show(bool useAnimation, float delay = 0f)
	{
		return null;
	}

	public void ShowImmediate()
	{
	}

	public void Hide()
	{
	}

	public void CompleteAnimation()
	{
	}

	private void PlayAppearFeedback()
	{
	}

	public static void PlayPooled(ParticleSystem prototype, Vector3 position, float scale)
	{
	}

	private float GetAlpha()
	{
		return 0f;
	}

	private void SetAlpha(float alpha)
	{
	}
}
