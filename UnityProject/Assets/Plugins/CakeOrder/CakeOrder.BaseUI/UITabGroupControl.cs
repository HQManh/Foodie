using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.BaseUI
{

public class UITabGroupControl : UIElementWithAnim
{
	[SerializeField]
	protected UIElementWithAnimHighlight[] _tabItems;

	[SerializeField]
	private bool _autoChangeTabWhenClick;

	[SerializeField]
	private bool _setHighlightTabAsLastSibling;

	protected string _tabIdSelected;

	private bool _isShownFirstTime;

	private const float DelayShowBetweenItem = 0.05f;

	public event Action<string> onTabChanged;

	private void OnTabItemClick(UIElementWithAnimHighlight item)
	{
	}

	protected virtual void PlayTabClickSfx()
	{
	}

	public virtual void ChangeTab(string id)
	{
	}

	public void SetUp(UIElementWithAnimHighlight[] items, string firstSelectTab)
	{
	}

	protected virtual void OnSetUp()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}
}
}
