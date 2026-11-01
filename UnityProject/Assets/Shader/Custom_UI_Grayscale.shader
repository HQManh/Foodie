// Rebuilt shader (the extracted copy was an empty placeholder): UI sprite with a desaturation / saturation boost (_EffectAmount: 1 = grayscale,
// 0 = unchanged, negative = oversaturated) and a brightness multiplier. Stencil, rect-mask clipping and alpha clip are supported as in UI/Default.
Shader "Custom/UI/Grayscale" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Vector) = (1,1,1,1)
		_StencilComp ("Stencil Comparison", Float) = 8
		_Stencil ("Stencil ID", Float) = 0
		_StencilOp ("Stencil Operation", Float) = 0
		_StencilWriteMask ("Stencil Write Mask", Float) = 255
		_StencilReadMask ("Stencil Read Mask", Float) = 255
		_EffectAmount ("Effect Amount", Range(-1, 1)) = 1
		_BrightnessAmount ("Brightness Amount", Range(0, 3)) = 1
		_ColorMask ("Color Mask", Float) = 15
		[Toggle(_BG_GRADING_RECEIVE)] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
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
			#pragma target 2.0
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
			fixed4 _Color;
			fixed4 _TextureSampleAdd;
			float4 _ClipRect;
			float4 _MainTex_ST;
			float _EffectAmount;
			float _BrightnessAmount;

			v2f vert(appdata_t v) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				OUT.worldPosition = v.vertex;
				OUT.vertex = UnityObjectToClipPos(OUT.worldPosition);
				OUT.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
				OUT.color = v.color * _Color;
				return OUT;
			}

			fixed4 frag(v2f IN) : SV_Target {
				half4 tex = tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd;
				half gray = dot(tex.rgb, half3(0.299, 0.587, 0.114));
				half3 rgb = lerp(tex.rgb, gray.xxx, _EffectAmount) * _BrightnessAmount;
				half4 color = half4(rgb, tex.a) * IN.color;
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
