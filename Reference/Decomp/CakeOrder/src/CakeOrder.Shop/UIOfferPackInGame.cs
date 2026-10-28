using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.UI;
using UnityEngine;

namespace CakeOrder.Shop;

public class UIOfferPackInGame : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass33_0
	{
		public bool isNotified;

		public UIOfferPackInGame _003C_003E4__this;

		public string shopId;

		internal void _003CShowRewardsThenNotify_003Eb__0(UIElementAbstract _)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowRewardsThenNotify_003Ed__33 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UIOfferPackInGame _003C_003E4__this;

		public string shopId;

		public RewardListData rewardList;

		private _003C_003Ec__DisplayClass33_0 _003C_003E8__1;

		private TaskAwaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[Header("Refs")]
	[Tooltip("Switched off whenever there is nothing to offer. Leave empty to use this object.")]
	[SerializeField]
	private GameObject _root;

	[Tooltip("Cards are spawned in here. Leave empty to use this object's transform.")]
	[SerializeField]
	private RectTransform _cardContainer;

	[Tooltip("Resolves a shop id to its card prefab. Every pack the group can pick must be in it.")]
	[SerializeField]
	private ShopCardCatalogSO _catalog;

	[Header("Offer group")]
	[Tooltip("Group in the shop offer rules asset - failoffer, booster. Required: with no group there is nothing to decide and the offer stays hidden.")]
	[SerializeField]
	private string _offerGroupId;

	[Header("Anim")]
	[SerializeField]
	private float _delayShowCard;

	private SceneMainUI _mainUI;

	private string _shownShopId;

	private bool _isSubscribedBuyPack;

	private readonly Dictionary<string, UIShopItemPack> _cardsByShopId;

	private readonly HashSet<string> _loggedMissingPackValue;

	private GameObject Root => null;

	private Transform CardParent => null;

	public string ShownShopId => null;

	public string TrackingPlacement => null;

	public event Action<string> onShownPackBought
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<string> onShownPackPurchased
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void ShowOffer(SceneMainUI mainUI, float delay = -1f)
	{
	}

	public void HideOffer()
	{
	}

	private void HideCardsExcept(UIShopItemPack keep)
	{
	}

	private UIShopItemPack GetOrCreateCard(string shopId)
	{
		return null;
	}

	private string ResolveShopIdToOffer()
	{
		return null;
	}

	private bool IsOfferAvailable(string shopId)
	{
		return false;
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

	[AsyncStateMachine(typeof(_003CShowRewardsThenNotify_003Ed__33))]
	private Task ShowRewardsThenNotify(string shopId, RewardListData rewardList)
	{
		return null;
	}

	private void OnDisable()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDestroy()
	{
	}
}
