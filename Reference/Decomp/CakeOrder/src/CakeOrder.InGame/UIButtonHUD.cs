using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UIButtonHUD : UIElementWithAnim
{
	[SerializeField]
	private Button _button;

	[Header("Optional")]
	[SerializeField]
	private GameObject _sectionAvailable;

	[SerializeField]
	private GameObject _sectionLocked;

	protected Button Button => null;

	public bool IsLocked { get; private set; }

	public BoolModifierWithRegisteredSource BlockInteractModifiers { get; private set; }

	public event Action<UIButtonHUD> onClicked
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

	protected virtual void Awake()
	{
	}

	protected virtual void OnClickButton()
	{
	}

	public void Lock()
	{
	}

	public void Unlock()
	{
	}

	protected virtual void OnUnlocked()
	{
	}
}
