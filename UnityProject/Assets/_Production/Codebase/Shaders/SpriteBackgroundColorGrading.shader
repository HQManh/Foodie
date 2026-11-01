// Rebuilt shader (the extracted copy was an empty placeholder): a standard sprite shader (premultiplied alpha, tinted by the sprite colour). The shared background grading is applied through the sprite colour by InGameSingleBackground.
// It uses Unity's own sprite vertex/fragment functions so the SpriteRenderer colour arrives through the per-instance _RendererColor (batched sprites get a white vertex colour).
Shader "Custom/Sprite-Background-ColorGrading" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
		[HideInInspector] _Color ("Tint", Color) = (1,1,1,1)
		[HideInInspector] PixelSnap ("Pixel snap", Float) = 0
		[HideInInspector] _RendererColor ("RendererColor", Color) = (1,1,1,1)
		[HideInInspector] _Flip ("Flip", Vector) = (1,1,1,1)
		[HideInInspector] _AlphaTex ("External Alpha", 2D) = "white" {}
		[HideInInspector] _EnableExternalAlpha ("Enable External Alpha", Float) = 0
	}
	SubShader {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" "CanUseSpriteAtlas"="True" }
		Cull Off
		Lighting Off
		ZWrite Off
		Blend One OneMinusSrcAlpha

		Pass {
			CGPROGRAM
			#pragma vertex SpriteVert
			#pragma fragment SpriteFrag
			#pragma target 2.0
			#pragma multi_compile_instancing
			#pragma multi_compile_local _ PIXELSNAP_ON
			#pragma multi_compile _ ETC1_EXTERNAL_ALPHA
			#include "UnitySprites.cginc"
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
