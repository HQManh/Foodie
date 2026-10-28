using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.BaseGame;
using _GAME.GameUI;

namespace _GAME.EventSale;

public class PopupEventSaleCtrl : PopupSingleton<PopupEventSaleCtrl>
{
	[Serializable]
	private class LocalizedTitleSprites
	{
		public string localeCode;

		public Sprite title;

		public Sprite specialDeals;

		public Vector4 titleInkRect;

		public Vector4 specialDealsInkRect;
	}

	[CompilerGenerated]
	private sealed class _003CUpdateTitlesAfterInitialization_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PopupEventSaleCtrl _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CUpdateTitlesAfterInitialization_003Ed__32(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public GameObject objTime;

	public GameObject objLastChance;

	public TextMeshProUGUI txtTimeLeft;

	public List<EventSalePackUICtrl> listPackUI;

	public GameObject tickBuyed;

	public GameObject objBtnBuyAll;

	public Button btnBuyAll;

	public TextMeshProUGUI txtPrice;

	public GameObject bonusItem;

	[SerializeField]
	private Image titleImage;

	[SerializeField]
	private Image specialDealsImage;

	[SerializeField]
	private List<LocalizedTitleSprites> localizedTitles;

	[SerializeField]
	private Vector4 titleReferenceInkRect;

	[SerializeField]
	private Vector4 specialDealsReferenceInkRect;

	private Sprite _defaultTitle;

	private Sprite _defaultSpecialDeals;

	private Vector2 _titleSize;

	private Vector2 _titlePosition;

	private Vector2 _specialDealsSize;

	private Vector2 _specialDealsPosition;

	private Coroutine _titleInitialization;

	private const int PackBuyAllIndex = 3;

	private const IAPSku PackBuyAllSku = IAPSku.eventsale4;

	private IAPPackConfig _packConfig;

	private int _callbackTickId;

	private int _callbackDataId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected override void OnDestroy()
	{
	}

	[IteratorStateMachine(typeof(_003CUpdateTitlesAfterInitialization_003Ed__32))]
	private IEnumerator UpdateTitlesAfterInitialization()
	{
		return null;
	}

	private void UpdateTitleSprites()
	{
	}

	private static void ApplyTitleLayout(Image image, Sprite sprite, Vector4 ink, Vector4 reference, Vector2 originalSize, Vector2 originalPosition)
	{
	}

	private void UpdateUITime()
	{
	}

	private void UpdateUIData()
	{
	}

	private void BuyAllPack()
	{
	}

	public void CheckClosePopup()
	{
	}
}
