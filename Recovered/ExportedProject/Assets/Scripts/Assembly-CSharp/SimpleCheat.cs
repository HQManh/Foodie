using Lofelt.NiceVibrations;
using UnityEngine;

public class SimpleCheat : MonoBehaviour
{
	[SerializeField]
	private bool showHapticTuner;

	private bool _tunerOpen;

	private float _amplitude;

	private float _frequency;

	private float _duration;

	private static readonly HapticPatterns.PresetType[] Presets;

	private void OnGUI()
	{
	}

	private void DrawTuner()
	{
	}

	private static float Row(string label, float value, float min, float max, string format)
	{
		return 0f;
	}

	private static string ShortName(HapticPatterns.PresetType preset)
	{
		return null;
	}
}
