using CakeOrder.DataSO;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

[RequireComponent(typeof(RawImage))]
public class HomeMapTransitionFog : MonoBehaviour
{
	// The ids are Shader.PropertyToID of string literals read from the static constructor (metadata).
	private static readonly int IdProgress = Shader.PropertyToID("_Progress");

	private static readonly int IdDirection = Shader.PropertyToID("_Direction");

	private static readonly int IdAspect = Shader.PropertyToID("_Aspect");

	private static readonly int IdFromBottom = Shader.PropertyToID("_FromBottom");

	private static readonly int IdFromTop = Shader.PropertyToID("_FromTop");

	private static readonly int IdToBottom = Shader.PropertyToID("_ToBottom");

	private static readonly int IdToTop = Shader.PropertyToID("_ToTop");

	[SerializeField]
	private HomeRestaurantsBuildingControl _buildingControl;

	[SerializeField]
	private HomeMapGlobalBackgroundControl _background;

	[Tooltip("Custom/UI/MapTransitionFog. Referenced here so it ships in the build.")]
	[SerializeField]
	private Shader _fogShader;

	[Tooltip("Optional: a material on that shader holding a tuned look. Copied at runtime.")]
	[SerializeField]
	private Material _fogMaterialTemplate;

	[Tooltip("Used when a map's weather has no background gradient.")]
	[SerializeField]
	private Gradient _fallbackGradient;

	[Tooltip("Off: gradient time 0 is the bottom of the screen. On: time 0 is the top.")]
	[SerializeField]
	private bool _isGradientTopFirst;

	private RawImage _image;

	private RectTransform _rect;

	private Material _material;

	private void Awake()
	{
	}

	public void ShowForTransition()
	{
	}

	private void OnDestroy()
	{
	}

	private void LateUpdate()
	{
	}

	private void SetTheme(Gradient gradient, int idBottom, int idTop)
	{
	}

	private void SetTheme(Material material, Gradient gradient, int idBottom, int idTop)
	{
	}

	private Gradient GetGradientOfWeather(WeatherEffect weather)
	{
		return null;
	}

	private Gradient GetGradientOfMap(int mapIndex)
	{
		return null;
	}
}
}
