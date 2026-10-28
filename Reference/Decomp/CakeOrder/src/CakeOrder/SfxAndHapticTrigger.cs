using System;
using Lofelt.NiceVibrations;
using UnityEngine;

namespace CakeOrder;

[Serializable]
public class SfxAndHapticTrigger
{
	public AudioClip clip;

	public HapticClip haptic;

	public PresetType fallbackHaptic;

	public float volume;
}
