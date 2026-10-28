using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.BaseUI
{

public class UIElementWithAnimHighlight : UIElementWithAnim
{
	public enum HighlightState
	{
		Normal,
		Highlighted
	}

	[SerializeField]
	private string _id;

	[SerializeField]
	protected UIAnimShowHideControl _animHighlight;

	[SerializeField]
	private Button _btn;

	public string Id => null;

	public HighlightState CurrentState { get; private set; }

	public event Action<UIElementWithAnimHighlight> onClick;

	private void Awake()
	{
	}

	public void SetId(string id)
	{
	}

	public void UpdateState(HighlightState newState, float delay = 0f)
	{
	}

	public void SetStateImmediate(HighlightState newState)
	{
	}
}
}
