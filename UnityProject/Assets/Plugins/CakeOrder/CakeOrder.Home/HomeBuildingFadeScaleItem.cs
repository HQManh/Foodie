using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.Home
{

public class HomeBuildingFadeScaleItem : MonoBehaviour
{
	[Tooltip("The upgrade part this art belongs to - must be the same asset the map's upgrade topology references.")]
	[SerializeField]
	private BuildingUpgradePartSO partSO;

	[SerializeField]
	private HomeBuildingFadeScalePart[] parts;

	[SerializeField]
	private float delayBetweenParts;

	public BuildingUpgradePartSO PartSO => null;

	public string PartId => null;

	public bool IsShown { get; private set; }

	public Vector3 WorldPosition => default(Vector3);

	public Transform DestinationTransform => null;

	public void Show(bool useAnimation, float startDelay = 0f)
	{
	}

	public void Hide()
	{
	}

	public void ActivateHidden()
	{
	}

	public void SetParticleAppear(ParticleSystem particleAppear)
	{
	}

	public void CompleteAnimations()
	{
	}
}
}
