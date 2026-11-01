// Rebuilt shader (the extracted copy was an empty placeholder; the original is a Shader Graph): the sprite with a bright diagonal wave passing over it. _WaveRotation = stripe angle, _WaveCycle = stripes per sprite, _WaveSpeed = speed, _FlashTime = seconds per flash, _Offset = phase.
Shader "Shader Graphs/UI_ShinyButton_Shader" {
	Properties {
		[NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		_WaveAlpha ("WaveAlpha", Range(0, 1)) = 1
		_WaveRotation ("WaveRotation", Range(0, 360)) = 9
		_WaveCycle ("WaveCycle", Float) = 3
		_WaveSpeed ("WaveSpeed", Float) = 1
		_Offset ("Offset", Float) = 0
		_FlashTime ("FlashTime", Float) = 1
		_StencilComp ("Stencil Comparison", Float) = 8
		_Stencil ("Stencil ID", Float) = 0
		_StencilOp ("Stencil Operation", Float) = 0
		_StencilWriteMask ("Stencil Write Mask", Float) = 255
		_StencilReadMask ("Stencil Read Mask", Float) = 255
		_ColorMask ("Color Mask", Float) = 15
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
			float _WaveAlpha;
			float _WaveRotation;
			float _WaveCycle;
			float _WaveSpeed;
			float _Offset;
			float _FlashTime;
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
				half4 tex = (tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd) * IN.color;
				float a = radians(_WaveRotation);
				float2 p = IN.texcoord - 0.5;
				float x = p.x * cos(a) - p.y * sin(a);
				float t = _Time.y * _WaveSpeed + _Offset;
				float phase = frac(x * _WaveCycle * 0.5 - t);
				float wave = saturate(1.0 - abs(phase - 0.5) * 6.0);
				float flash = _FlashTime > 0.0001 ? saturate(sin(frac(_Time.y / max(_FlashTime, 0.0001)) * 3.14159)) : 1.0;
				half4 color = tex;
				color.rgb += wave * flash * _WaveAlpha * tex.a;
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
