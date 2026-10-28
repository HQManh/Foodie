using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame
{

public class CookOrderModuleIngredientShopping : MonoBehaviour
{
	private const int ID_BLOCKER_GAME_NOT_START = -9999;

	private const int ID_BLOCKER_GAME_ENDED = -9998;

	private LevelPlayLoadAndSetupControl _levelPlayControl;

	public bool IsUsedInLevel { get; private set; }

	public BoolModifierWithRegisteredSource ShoppingBlocker { get; private set; }

	public bool IsAllowShopping => false;

	public event Action onAllowShoppingChanged;

	public void SetUp(LevelPlayLoadAndSetupControl levelPlayControl, bool isUsedInLevel)
	{
	}

	private void TrigggerAllowShoppingChanged()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnPlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
	}
}
}
