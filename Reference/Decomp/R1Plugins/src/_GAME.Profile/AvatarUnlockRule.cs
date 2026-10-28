using System;
using UnityEngine;

namespace _GAME.Profile;

[Serializable]
public class AvatarUnlockRule
{
	[Tooltip("CookOrder character id this avatar draws (for reading the list only)")]
	public string customer;

	[Tooltip("CookOrder map id of the restaurant (burger, coffee, sushi, pasta, icecream). Empty: CookOrder's own unlock record decides")]
	public string mapId;

	[Tooltip("VIP (boss) customer: opens once every level of the restaurant is won. Off: opens with the restaurant")]
	public bool vip;

	public bool HasRestaurant => false;
}
