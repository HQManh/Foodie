// Rebuilt approximation (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite with a travelling ripple distortion (_Speed, _Strength, _NoiseScale, _NoiseTiling).
Shader "Shader Graphs/Water2D" {
	Properties {
		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		[ToggleUI] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
		_Speed ("Speed", Float) = 1
		_Strength ("Strength", Float) = 1
		_NoiseScale ("NoiseScale", Float) = 5
		_NoiseTiling ("NoiseTiling", Vector) = (1,1,0,0)
		[HideInInspector] White ("Color", Vector) = (1,1,1,1)
		[HideInInspector] _RendererColor ("RendererColor", Vector) = (1,1,1,1)
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
			float _Speed, _Strength, _NoiseScale;
			float4 _NoiseTiling;
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

				float2 p = uv * _NoiseTiling.xy * _NoiseScale;
				float t = _Time.y * _Speed;
				float2 d = float2(sin(p.y * 2.0 + t) + sin(p.y * 3.7 - t * 1.3), cos(p.x * 2.3 + t * 0.8)) * 0.004 * _Strength;
				fixed4 c = tex2D(_MainTex, uv + d) * IN.color;
				c.rgb *= c.a;
				return c;
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
