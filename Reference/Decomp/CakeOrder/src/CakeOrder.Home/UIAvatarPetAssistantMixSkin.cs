using System;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

namespace CakeOrder.Home;

public class UIAvatarPetAssistantMixSkin : UIAvatarPetAssistant
{
	[Serializable]
	public struct SkinCategory
	{
		public string categoryName;

		[SpineSkin(null, null, false, false, false, false)]
		public List<string> skinNames;
	}

	[Header("Skin Categories")]
	[SerializeField]
	private List<SkinCategory> skinCategories;

	[SerializeField]
	private SkeletonGraphic _skeletonGraphic;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false, dataField = "_skeletonGraphic")]
	private string animIdle;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false, dataField = "_skeletonGraphic")]
	private string animHappy;

	protected override void OnSetUp()
	{
	}

	protected override void OnChangeStateOwned()
	{
	}

	public override void PlayHappy()
	{
	}

	public void ApplyRandomMix(int seed)
	{
	}
}
