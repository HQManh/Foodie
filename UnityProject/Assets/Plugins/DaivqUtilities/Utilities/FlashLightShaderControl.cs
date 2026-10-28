using UnityEngine;

namespace Utilities
{

public class FlashLightShaderControl : MonoBehaviour
{
	public Transform trackingLightSource;

	public Vector2 lightScale;

	private static readonly int ShaderGlobalPropertyID_FlashLightPos;

	private static readonly int ShaderGlobalPropertyID_FlashLightSourceScaleXYRotateCacheSinCosZW;

	private Vector4 lightSourcePos;

	private Vector4 lightSourceScaleXYRotateCacheSinCosZW;

	private void Awake()
	{
	}

	private void Update()
	{
	}

	private void UpdateShaderProp()
	{
	}
}
}
