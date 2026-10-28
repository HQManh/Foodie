using System;
using Spine.Unity;
using UnityEngine;

namespace CakeOrder.Shop
{

[RequireComponent(typeof(UIShopItemGoldPack))]
public class UIGoldPackSpineByShopId : MonoBehaviour
{
	[Serializable]
	public class Entry
	{
		public string shopId;

		[Tooltip("Skin on the shared skeleton. Empty = keep whatever the prefab is set to.")]
		public string skin;

		[Tooltip("Animation to loop. Empty = leave the track alone.")]
		public string animation;

		[Tooltip("Extra scale on the spine object, for a tier that reads too big or too small next to the others.")]
		public float scale;

		[Tooltip("Where this tier's spine sits, as an anchored position - not a nudge from where the prefab leaves it. Each tier draws its own pile at its own place in the skeleton, so a tier can sit off-centre in the card even though every card holds the same object. Leave it at zero and the row keeps the position authored on the prefab.")]
		public Vector2 offset;
	}

	[SerializeField]
	private SkeletonGraphic _skeletonGraphic;

	[Tooltip("The old sprite icon. Switched off for a pack that has a spine row, left alone for one that does not - so a pack the artist has not covered yet still shows its sprite.")]
	[SerializeField]
	private GameObject _objSpriteIcon;

	[Tooltip("One row per gem pack. A pack with no row keeps the sprite icon and no spine.")]
	[SerializeField]
	private Entry[] _entries;

	private UIShopItemGoldPack _card;

	private string _appliedShopId;

	private Vector2 _spineBasePosition;

	private bool _hasBasePosition;

	private void Awake()
	{
	}

	private void CacheBasePosition()
	{
	}

	private void Start()
	{
	}

	private void OnEnable()
	{
	}

	private void Apply()
	{
	}
}
}
