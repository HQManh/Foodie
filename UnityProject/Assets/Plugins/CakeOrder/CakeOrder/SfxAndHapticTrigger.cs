using System;
using MoreMountains.NiceVibrations;
using UnityEngine;

namespace CakeOrder
{

[Serializable]
public class SfxAndHapticTrigger
{
	public AudioClip clip;

	public HapticTypes haptic;

	public HapticTypes fallbackHaptic;

	public float volume;
}
}
