// Rebuilt approximation (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite with drifting wave highlights (_WaveColor, _WaveSpeed, _WaveScale, _WaveTiling, _WavePower sharpness, _WaveAlpha strength).
Shader "Shader Graphs/SeaWaveShader" {
	Properties {
		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		_WaveSpeed ("WaveSpeed", Float) = 1
		_WaveScale ("WaveScale", Float) = 5
		_WaveTiling ("WaveTiling", Vector) = (1,1,0,0)
		_WaveColor ("WaveColor", Vector) = (0.4009434,1,0.7561779,1)
		_WavePower ("WavePower", Float) = 0
		_WaveAlpha ("WaveAlpha", Range(0, 1)) = 1
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
			float _WaveSpeed, _WaveScale, _WavePower, _WaveAlpha;
			float4 _WaveTiling;
			float4 _WaveColor;
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

				fixed4 c = tex2D(_MainTex, uv) * IN.color;
				float2 p = uv * _WaveTiling.xy * _WaveScale;
				float t = _Time.y * _WaveSpeed;
				float w = sin(p.x * 3.0 + t) * sin(p.y * 4.0 - t * 0.7) + 0.5 * sin((p.x + p.y) * 2.0 + t * 1.3);
				w = pow(saturate(w * 0.5 + 0.5), 2.0 + max(_WavePower, 0.0));
				c.rgb += _WaveColor.rgb * w * _WaveAlpha * c.a;
				c.rgb *= c.a;
				return c;
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
