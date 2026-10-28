using System;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home
{

[Serializable]
public class CoinFlyAnimConfig
{
	public float duration;

	public AnimationCurve curvePosition;

	public AnimationCurve curvePerpendicular;

	public AnimationCurve curveScale;

	[Tooltip("Phase 1: the coin bursts out of the start point before the flight (curves above) takes it to the destination.")]
	public UIFlyExplodeConfig explode;

	public AudioClip sfxSpawn;

	public AudioClip sfxArrive;
}
}
