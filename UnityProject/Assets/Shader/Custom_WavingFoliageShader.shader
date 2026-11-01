// Rebuilt shader (the extracted copy was an empty placeholder): sprite whose upper part sways sideways like wind-blown foliage (_WaveSpeed, _WaveAmp, _WindSkewness bias, _WindTex adds variation across the world).
Shader "Custom/WavingFoliageShader" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		[MaterialToggle] PixelSnap ("Pixel snap", Float) = 0
		[HideInInspector] _RendererColor ("RendererColor", Vector) = (1,1,1,1)
		[HideInInspector] _Flip ("Flip", Vector) = (1,1,1,1)
		[PerRendererData] _AlphaTex ("External Alpha", 2D) = "white" {}
		[PerRendererData] _EnableExternalAlpha ("Enable External Alpha", Float) = 0
		[PerRendererData] _Color ("Tint", Vector) = (1,1,1,1)
		[PerRendererData] _InstanceData ("Instance Data", Vector) = (0,0,0,0)
		_WaveSpeed ("Wave Speed", Float) = 1
		_WaveAmp ("Wave Amp", Float) = 1
		_WindSkewness ("Wind Skewness", Float) = 1
		_WindTex ("Wind Tex", 2D) = "white" {}
		_WindTexStrength ("Wind Tex Strength", Float) = 1
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
				UNITY_VERTEX_OUTPUT_STEREO
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			fixed4 _Color;
			// SpriteRenderer colour: batched (instanced) sprites get it through a per-instance array, others through a plain uniform (as in UnitySprites.cginc).
			#ifdef UNITY_INSTANCING_ENABLED
				UNITY_INSTANCING_BUFFER_START(PerDrawSprite)
					UNITY_DEFINE_INSTANCED_PROP(fixed4, unity_SpriteRendererColorArray)
				UNITY_INSTANCING_BUFFER_END(PerDrawSprite)
				#define _RendererColor UNITY_ACCESS_INSTANCED_PROP(PerDrawSprite, unity_SpriteRendererColorArray)
			#else
				fixed4 _RendererColor;
			#endif
			float _WaveSpeed, _WaveAmp, _WindSkewness, _WindTexStrength;
			sampler2D _WindTex;
			v2f vert(appdata_t IN) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(IN);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				float4 pos = IN.vertex;
				// Height inside the sprite (uv.y: 0 = root, 1 = tip) scales the sway so the base stays planted.
				float3 world = mul(unity_ObjectToWorld, pos).xyz;
				float wind = tex2Dlod(_WindTex, float4(world.x * 0.05 + _Time.y * 0.02, world.y * 0.05, 0, 0)).r;
				float sway = sin(_Time.y * _WaveSpeed + world.x * 0.7 + wind * 6.2831 * _WindTexStrength) + _WindSkewness * 0.5;
				pos.x += sway * _WaveAmp * 0.05 * IN.texcoord.y;
				OUT.vertex = UnityObjectToClipPos(pos);
				OUT.texcoord = TRANSFORM_TEX(IN.texcoord, _MainTex);
				OUT.color = IN.color * _Color * _RendererColor;
				#ifdef PIXELSNAP_ON
				OUT.vertex = UnityPixelSnap(OUT.vertex);
				#endif
				return OUT;
			}

			fixed4 frag(v2f IN) : SV_Target {
				fixed4 c = tex2D(_MainTex, IN.texcoord) * IN.color;
				c.rgb *= c.a;
				return c;
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
