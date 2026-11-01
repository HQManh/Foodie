// Rebuilt approximation (the extracted copy was an empty placeholder): a fog band that sweeps across the rect as _Progress goes 0..1 (_Direction = +1 pans right), tinted from the From to the To theme colours (bottom to top gradient), with noise-modulated edges.
Shader "Custom/UI/MapTransitionFog" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		[Header(Driven by script)] _Progress ("Progress", Range(0, 1)) = 0.5
		_Direction ("Direction (+1 pans right)", Float) = 1
		_Aspect ("Rect Aspect (w/h)", Float) = 0.5
		_FromBottom ("From Bottom", Vector) = (0.8,0.85,0.9,1)
		_FromTop ("From Top", Vector) = (0.9,0.95,1,1)
		_ToBottom ("To Bottom", Vector) = (0.8,0.85,0.9,1)
		_ToTop ("To Top", Vector) = (0.9,0.95,1,1)
		[Header(Look)] [NoScaleOffset] _NoiseTex ("Noise (R, tiling)", 2D) = "gray" {}
		_MaxAlpha ("Max Alpha", Range(0, 1)) = 1
		_BandWidth ("Band Width (screens)", Range(0.5, 3)) = 1.3
		_EdgeSoftness ("Edge Softness (screens)", Range(0.01, 1)) = 0.35
		_EdgeNoise ("Edge Wobble", Range(0, 0.5)) = 0.18
		_NoiseScale ("Noise Tiles per Screen Height", Float) = 1.2
		_NoiseStrength ("Noise Strength", Range(0, 1)) = 0.45
		_NoiseScroll ("Noise Scroll (parallax)", Float) = 1.5
		_ThemeBrighten ("Theme Brighten", Range(0, 1)) = 0.35
		_StencilComp ("Stencil Comparison", Float) = 8
		_Stencil ("Stencil ID", Float) = 0
		_StencilOp ("Stencil Operation", Float) = 0
		_StencilWriteMask ("Stencil Write Mask", Float) = 255
		_StencilReadMask ("Stencil Read Mask", Float) = 255
		_ColorMask ("Color Mask", Float) = 15
		_ClipRect ("Clip Rect", Vector) = (-32767,-32767,32767,32767)
	}
	SubShader {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" "CanUseSpriteAtlas"="True" }
		Stencil {
			Ref [_Stencil]
			Comp [_StencilComp]
			Pass [_StencilOp]
			ReadMask [_StencilReadMask]
			WriteMask [_StencilWriteMask]
		}
		Cull Off
		Lighting Off
		ZWrite Off
		ZTest [unity_GUIZTestMode]
		Blend SrcAlpha OneMinusSrcAlpha
		ColorMask [_ColorMask]

		Pass {
			Name "Default"
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#include "UnityCG.cginc"
			#include "UnityUI.cginc"
			#pragma multi_compile_local _ UNITY_UI_CLIP_RECT
			#pragma multi_compile_local _ UNITY_UI_ALPHACLIP

			struct appdata_t {
				float4 vertex : POSITION;
				float4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};
			struct v2f {
				float4 vertex : SV_POSITION;
				fixed4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				float4 worldPosition : TEXCOORD1;
				UNITY_VERTEX_OUTPUT_STEREO
			};

			sampler2D _MainTex;
			fixed4 _TextureSampleAdd;
			float4 _ClipRect;
			float4 _MainTex_ST;
			float _Progress, _Direction, _Aspect, _MaxAlpha, _BandWidth, _EdgeSoftness, _EdgeNoise, _NoiseScale, _NoiseStrength, _NoiseScroll, _ThemeBrighten;
			float4 _FromBottom, _FromTop, _ToBottom, _ToTop;
			sampler2D _NoiseTex;
			v2f vert(appdata_t v) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				OUT.worldPosition = v.vertex;
				OUT.vertex = UnityObjectToClipPos(OUT.worldPosition);
				OUT.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
				OUT.color = v.color;
				return OUT;
			}

			fixed4 frag(v2f IN) : SV_Target {
				// x runs along the sweep direction in "screens" (the rect is one screen wide), y is the vertical position.
				float x = (_Direction >= 0 ? IN.texcoord.x : 1.0 - IN.texcoord.x) * _Aspect;
				float travel = lerp(-_BandWidth, 1.0 * _Aspect + _BandWidth, _Progress);
				float2 nuv = float2(IN.texcoord.x * _Aspect, IN.texcoord.y) * _NoiseScale + float2(_Progress * _NoiseScroll * _Direction, 0);
				float n = tex2D(_NoiseTex, nuv).r;
				float dist = abs(x - travel) + (n - 0.5) * _EdgeNoise;
				float band = 1.0 - smoothstep(_BandWidth * 0.5 - _EdgeSoftness, _BandWidth * 0.5, dist);
				float4 fromCol = lerp(_FromBottom, _FromTop, IN.texcoord.y);
				float4 toCol = lerp(_ToBottom, _ToTop, IN.texcoord.y);
				float4 fog = lerp(fromCol, toCol, smoothstep(0.35, 0.65, _Progress));
				fog.rgb = lerp(fog.rgb, 1.0.xxx, _ThemeBrighten * 0.5);
				half4 color = half4(fog.rgb, band * lerp(1.0, n, _NoiseStrength) * _MaxAlpha * fog.a * IN.color.a);
				#ifdef UNITY_UI_CLIP_RECT
				color.a *= UnityGet2DClipping(IN.worldPosition.xy, _ClipRect);
				#endif
				#ifdef UNITY_UI_ALPHACLIP
				clip(color.a - 0.001);
				#endif
				return color;
			}
			ENDCG
		}
	}
	Fallback "UI/Default"
}
