using MoreMountains.NiceVibrations;
using UnityEngine;

public class SimpleCheat : MonoBehaviour
{
	[SerializeField]
	private bool showHapticTuner;

	private bool _tunerOpen;

	private float _amplitude = 1f;

	private float _frequency = 0.5f;

	private float _duration = 0.04f;

	// TODO(unrecovered): preset enum values come from an embedded RVA initializer blob (not recoverable); only the array length (9) is known.
	// Values read from the static constructor data (metadata), as HapticTypes indexes 0, 4, 7, 5, 6, 8, 1, 2, 3.
	private static readonly HapticTypes[] Presets = new HapticTypes[9]
	{
		HapticTypes.Selection,
		HapticTypes.LightImpact,
		HapticTypes.RigidImpact,
		HapticTypes.MediumImpact,
		HapticTypes.HeavyImpact,
		HapticTypes.SoftImpact,
		HapticTypes.Success,
		HapticTypes.Warning,
		HapticTypes.Failure
	};

	private void OnGUI()
	{
		// TODO(unrecovered): GUI matrix pivot/size come from an unnamed static Vector block (DAT_0918cb68 + 0xb8) and the window layout uses unnamed GUI style/skin statics.
	}

	private void DrawTuner()
	{
		// TODO(unrecovered): tuner panel uses many unnamed static string literals (labels/format strings) and unnamed static preset/option arrays; the Lofelt haptic call sites are not fully mapped.
	}

	private static float Row(string label, float value, float min, float max, string format)
	{
		GUILayout.BeginHorizontal();
		string text = label + ": " /* literal recovered by guess */ + value.ToString(format);
		GUILayout.Label(text, GUILayout.Width(130f));
		float result = GUILayout.HorizontalSlider(value, min, max);
		GUILayout.EndHorizontal();
		return result;
	}

	private static string ShortName(HapticTypes preset)
	{
		string s = preset.ToString();
		if (s.EndsWith("Preset" /* literal recovered by guess */))
		{
			s = s.Substring(0, s.Length - 6);
		}
		return s;
	}
}
