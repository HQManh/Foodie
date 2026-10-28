using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.Home;

public class HomeBuildingFadeScaleBaseVariant : MonoBehaviour
{
	[Tooltip("The topology group's baseItem this shell represents. Buying that part switches the building to this variant.")]
	[SerializeField]
	private BuildingUpgradePartSO baseItem;

	[Tooltip("The shell itself - walls, roof, door. Always visible while this variant is active.")]
	[SerializeField]
	private HomeBuildingFadeScalePart[] shellParts;

	[Tooltip("Every decoration part this shell has art for, in any order.")]
	[SerializeField]
	private HomeBuildingFadeScaleItem[] items;

	public BuildingUpgradePartSO BaseItem => null;

	public string BaseItemId => null;

	public int NumItems => 0;

	public IReadOnlyList<HomeBuildingFadeScaleItem> Items => null;

	public HomeBuildingFadeScaleItem GetItem(BuildingUpgradePartSO partSO)
	{
		return null;
	}

	public void Activate(bool animateShell)
	{
	}

	public void Deactivate()
	{
	}

	public bool ShowItem(BuildingUpgradePartSO partSO, bool useAnimation, float startDelay = 0f)
	{
		return false;
	}

	public Vector3 GetItemWorldPosition(BuildingUpgradePartSO partSO)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public Transform GetItemDestinationTransform(BuildingUpgradePartSO partSO)
	{
		return null;
	}

	public void ShowAllItems(bool useAnimation)
	{
	}

	public void SetParticleAppear(ParticleSystem particleAppear)
	{
	}

	public void CompleteAnimations()
	{
	}
}
