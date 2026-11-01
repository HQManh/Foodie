// Rebuilt approximation (the extracted copy was an empty placeholder): sprite whose lookup is wobbled by a scrolling distortion texture (_ScrollSpeedXYMappingZW: xy = scroll speed, zw = distortion texture tiling), mixed by _BlendDistort.
Shader "Custom/TestVisual/CloudDistort" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		[MaterialToggle] PixelSnap ("Pixel snap", Float) = 0
		[HideInInspector] _RendererColor ("RendererColor", Vector) = (1,1,1,1)
		[HideInInspector] _Flip ("Flip", Vector) = (1,1,1,1)
		_DistortTex ("Distortion (RGB)", 2D) = "white" {}
		_DistortStrength ("Distortion Strength", Range(0, 1)) = 0.1
		_ScrollSpeedXYMappingZW ("ScrollSpeedXYMappingZW", Vector) = (0,0,0,0)
		_BlendDistort ("Blend Distort", Range(0, 1)) = 0.5
		[Toggle(_BG_GRADING_RECEIVE)] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
	}
	SubShader {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" "CanUseSpriteAtlas"="True" }
		Cull Off
		Lighting Off
		ZWrite Off
		Blend One OneMinusSrcAlpha

		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#pragma multi_compile_instancing
			#pragma multi_compile _ PIXELSNAP_ON
			#include "UnityCG.cginc"

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
				float3 world : TEXCOORD1;
				UNITY_VERTEX_OUTPUT_STEREO
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			// SpriteRenderer colour: batched (instanced) sprites get it through a per-instance array, others through a plain uniform (as in UnitySprites.cginc).
			#ifdef UNITY_INSTANCING_ENABLED
				UNITY_INSTANCING_BUFFER_START(PerDrawSprite)
					UNITY_DEFINE_INSTANCED_PROP(fixed4, unity_SpriteRendererColorArray)
				UNITY_INSTANCING_BUFFER_END(PerDrawSprite)
				#define _RendererColor UNITY_ACCESS_INSTANCED_PROP(PerDrawSprite, unity_SpriteRendererColorArray)
			#else
				fixed4 _RendererColor;
			#endif
			sampler2D _DistortTex;
			float _DistortStrength;
			float4 _ScrollSpeedXYMappingZW;
			float _BlendDistort;
			v2f vert(appdata_t IN) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(IN);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				float4 pos = IN.vertex;

				OUT.world = mul(unity_ObjectToWorld, pos).xyz;
				OUT.vertex = UnityObjectToClipPos(pos);
				OUT.texcoord = TRANSFORM_TEX(IN.texcoord, _MainTex);
				OUT.color = IN.color * _RendererColor;
				#ifdef PIXELSNAP_ON
				OUT.vertex = UnityPixelSnap(OUT.vertex);
				#endif
				return OUT;
			}

			fixed4 frag(v2f IN) : SV_Target {
				float2 uv = IN.texcoord;

				float2 duv = uv * (_ScrollSpeedXYMappingZW.zw + float2(step(abs(_ScrollSpeedXYMappingZW.z), 1e-5), step(abs(_ScrollSpeedXYMappingZW.w), 1e-5))) + _Time.y * _ScrollSpeedXYMappingZW.xy;
				float2 d = (tex2D(_DistortTex, duv).rg - 0.5) * 2.0 * _DistortStrength;
				fixed4 plain = tex2D(_MainTex, uv);
				fixed4 warped = tex2D(_MainTex, uv + d);
				fixed4 c = lerp(plain, warped, _BlendDistort) * IN.color;
				c.rgb *= c.a;
				return c;
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
