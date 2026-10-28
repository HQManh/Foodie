using UnityEngine;

namespace CakeOrder.InGame
{

[CreateAssetMenu(fileName = "BgGrading-", menuName = "ScriptableObjects/CakeOrder/Background Color Grading Preset")]
public class BackgroundColorGradingPresetSO : ScriptableObject
{
	[Header("Tone map (shadows / mids / highlights)")]
	[Tooltip("Colour given to the dark range.")]
	public Color shadowColor;

	[Tooltip("Colour given to the middle range.")]
	public Color midColor;

	[Tooltip("Colour given to the bright range.")]
	public Color highlightColor;

	[Tooltip("Brightness where shadows hand over to mids.")]
	[Range(0f, 1f)]
	public float shadowEnd;

	[Tooltip("Brightness where mids hand over to highlights.")]
	[Range(0f, 1f)]
	public float highlightStart;

	[Tooltip("How soft the two hand-overs are.")]
	[Range(0.01f, 0.5f)]
	public float toneSoftness;

	[Tooltip("0 = original colours, 1 = fully replaced by the three tones.")]
	[Range(0f, 1f)]
	public float toneBlend;

	[Header("Color")]
	[Tooltip("Brightness multiplier, 1 = unchanged.")]
	[Range(0f, 3f)]
	public float exposure;

	[Tooltip("1 = unchanged, < 1 flatter, > 1 punchier.")]
	[Range(0f, 2f)]
	public float contrast;

	[Tooltip("Added to every channel, 0 = unchanged.")]
	[Range(-0.5f, 0.5f)]
	public float brightness;

	[Header("Strength")]
	[Tooltip("How much of all the above is applied. 0 = no effect (the shader variant is switched off). Transitions between presets fade this down and back up.")]
	[Range(0f, 1f)]
	public float strength;

	public Vector4 ToneRange => default(Vector4);

	public Vector4 GetParams(float atStrength)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector4);
	}

	private void TransitionToThis()
	{
	}
}
}
