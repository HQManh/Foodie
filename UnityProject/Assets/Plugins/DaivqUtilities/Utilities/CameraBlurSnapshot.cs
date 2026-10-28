using System;
using UnityEngine;

namespace Utilities
{

public class CameraBlurSnapshot
{
	[Serializable]
	public struct Settings
	{
		[Tooltip("Snapshot resolution = screen / downsample. The biggest cost knob (camera render size).")]
		[Range(1f, 8f)]
		public int downsample;

		[Tooltip("Blur passes; each one halves the resolution once more before coming back up.")]
		[Range(1f, 6f)]
		public int iterations;

		[Tooltip("Extra view captured past each screen edge, as a fraction of the view (0.06 = 6%).")]
		[Range(0f, 0.3f)]
		public float bleed;

		[Tooltip("Sample spread of each blur pass; widens the blur for free.")]
		[Range(0.5f, 3f)]
		public float offset;

		public static Settings Default => default(Settings);
	}

	[Serializable]
	public class Grading
	{
		[Header("Color")]
		public bool enableColor;

		[Tooltip("Brightness multiplier.")]
		[Range(0f, 3f)]
		public float exposure;

		[Tooltip("1 = unchanged, < 1 flatter, > 1 punchier.")]
		[Range(0f, 2f)]
		public float contrast;

		[Tooltip("0 = greyscale, 1 = unchanged, > 1 more vivid.")]
		[Range(0f, 2f)]
		public float saturation;

		[Header("Tone map (shadows / mids / highlights)")]
		public bool enableToneMap;

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

		[Header("Vignette")]
		public bool enableVignette;

		[Tooltip("Colour the edges fade to; its alpha scales the strength too.")]
		public Color vignetteColor;

		[Range(0f, 1f)]
		public float vignetteIntensity;

		[Tooltip("Where the effect starts: 0 = centre, 1 = screen edge.")]
		[Range(0f, 1.5f)]
		public float vignetteRadius;

		[Tooltip("How far it takes to reach full strength.")]
		[Range(0.01f, 1.5f)]
		public float vignetteSoftness;

		[Tooltip("0 = follows the screen shape, 1 = a true circle.")]
		[Range(0f, 1f)]
		public float vignetteRoundness;

		public bool IsAnyEnabled => false;
	}

	private const RenderTextureFormat Format = 0;

	private const int PassDown = 0;

	private const int PassUp = 1;

	private const int PassUpGrade = 2;

	private const string KeywordColor = "_GRADE_COLOR";

	private const string KeywordTone = "_GRADE_TONE";

	private const string KeywordVignette = "_GRADE_VIGNETTE";

	private static readonly int IdOffset;

	private static readonly int IdExposure;

	private static readonly int IdContrast;

	private static readonly int IdSaturation;

	private static readonly int IdToneShadow;

	private static readonly int IdToneMid;

	private static readonly int IdToneHighlight;

	private static readonly int IdToneRange;

	private static readonly int IdVignetteColor;

	private static readonly int IdVignetteIntensity;

	private static readonly int IdVignetteRadius;

	private static readonly int IdVignetteSoftness;

	private static readonly int IdVignetteRoundness;

	private static readonly int IdAspect;

	private static readonly int IdVisibleRect;

	private readonly Material _material;

	private readonly RenderTexture[] _outputs;

	private int _front;

	public RenderTexture Texture => null;

	public RenderTexture PreviousTexture => null;

	public Rect UVRect { get; private set; }

	public static bool IsSupported(Shader shader)
	{
		return false;
	}

	public CameraBlurSnapshot(Shader shader)
	{
	}

	public RenderTexture Capture(Camera camera, int cullingMask, Settings settings, Grading grading = null)
	{
		return null;
	}

	private void ApplyGrading(Grading grading, float margin, float aspect)
	{
	}

	private void SetKeyword(string keyword, bool isOn)
	{
	}

	public void ReleaseTextures()
	{
	}

	public void Dispose()
	{
	}

	private RenderTexture EnsureOutput(int index, int width, int height)
	{
		return null;
	}

	private static void RenderCamera(Camera camera, RenderTexture target, int cullingMask, float viewScale)
	{
	}
}
}
