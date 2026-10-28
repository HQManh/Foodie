using System.Collections.Generic;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.UI;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Shop
{

public class UIOfferIapStrip : MonoBehaviour
{
	[Header("Refs")]
	[Tooltip("Switched off whenever there is nothing left to sell. Leave empty to use this object.")]
	[SerializeField]
	private GameObject _root;

	[SerializeField]
	private UIScrollSnap _scrollSnap;

	[SerializeField]
	private ScrollRect _scrollRect;

	[SerializeField]
	private ShopCardCatalogSO _catalog;

	[Header("Layout")]
	[Tooltip("Size of the cards relative to their authored size - the size they have in the shop. Applied to each card's container, never the card: the card's show anim tweens its own scale from 0 to 1 and would overwrite it, while the snap only writes the container's size and position.")]
	[Range(0.5f, 1f)]
	[SerializeField]
	private float _cardScale;

	[Header("Anim")]
	[SerializeField]
	private float _delayBetweenShowCard;

	private readonly List<UIShopItemPack> _cards = new List<UIShopItemPack>();

	private bool _isBuilt;

	private bool _isSubscribedBuyPack;

	private SceneMainUI _mainUI;

	public bool HasAnyOffer => false;

	private GameObject Root => null;

	public void ShowOffers(IReadOnlyList<string> shopIds, float delay = 0f, SceneMainUI mainUI = null)
	{
	}

	public void HideAll()
	{
	}

	private void Build(IReadOnlyList<string> shopIds)
	{
	}

	private void ReplayShow(float delay)
	{
	}

	private bool IsOfferAvailable(string shopId)
	{
		return false;
	}

	private static bool IsRemoveAdsPack(string shopId)
	{
		return false;
	}

	private void UpdateSwipeEnabled()
	{
	}

	private void SubscribeBuyPack()
	{
	}

	private void UnsubscribeBuyPack()
	{
	}

	private void OnBuyPack(string shopId, RewardListData rewardList)
	{
	}

	private bool IsOfferedHere(string shopId)
	{
		return false;
	}

	private void OnDestroy()
	{
	}
}
}
