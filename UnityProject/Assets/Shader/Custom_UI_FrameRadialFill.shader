// Rebuilt shader (the extracted copy was an empty placeholder). UI frame that is revealed along its perimeter:
// _Fill = fraction of the perimeter still visible, starting at the top centre (shifted by _OriginOffset), running clockwise or counter-clockwise.
Shader "Custom/UI/FrameRadialFill" {
	Properties {
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Vector) = (1,1,1,1)
		_Fill ("Fill", Range(0, 1)) = 1
		[Toggle] _Clockwise ("Clockwise", Float) = 0
		_OriginOffset ("Origin offset (0 = top center, fraction of perimeter)", Range(0, 1)) = 0
		_Feather ("Edge feather (fraction of perimeter)", Range(0, 0.05)) = 0.003
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
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			struct appdata_t {
				float4 vertex : POSITION;
				float4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				float2 uv1 : TEXCOORD1;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f {
				float4 vertex : SV_POSITION;
				fixed4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				float2 pos : TEXCOORD1; // position inside the whole frame, 0..1, independent of the 9-slice uv mapping
				UNITY_VERTEX_OUTPUT_STEREO
			};

			sampler2D _MainTex;
			fixed4 _Color;
			float _Fill;
			float _Clockwise;
			float _OriginOffset;
			float _Feather;
			float4 _MainTex_ST;

			v2f vert(appdata_t v) {
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
				o.color = v.color * _Color;
				// Without an extra uv channel the object-space xy is used: the Image rect is centred on the pivot in most frames; the
				// fraction is later normalised by the rect through the interpolated position (see frag).
				o.pos = v.vertex.xy;
				return o;
			}

			// Perimeter position (0..1) of the boundary point seen from the centre, starting at the top centre and going clockwise.
			float PerimeterPos(float2 d) {
				float m = max(abs(d.x), abs(d.y));
				float2 b = m > 1e-5 ? d * (0.5 / m) : float2(0, 0.5);
				float s;
				if (abs(b.y - 0.5) < 1e-4 && b.x >= 0) s = b.x;
				else if (abs(b.x - 0.5) < 1e-4) s = 0.5 + (0.5 - b.y);
				else if (abs(b.y + 0.5) < 1e-4) s = 1.5 + (0.5 - b.x);
				else if (abs(b.x + 0.5) < 1e-4) s = 2.5 + (b.y + 0.5);
				else s = 3.5 + (b.x + 0.5);
				return s * 0.25;
			}

			fixed4 frag(v2f i) : SV_Target {
				fixed4 col = tex2D(_MainTex, i.texcoord) * i.color;
				if (_Fill >= 0.999) return col;
				// Position relative to the rect centre (pivot at the centre); only the direction from the centre matters.
				float2 d = i.pos;
				float s = PerimeterPos(d);
				if (_Clockwise < 0.5) s = 1.0 - s;
				s = frac(s - _OriginOffset + 1.0);
				float f = max(_Feather, 1e-4);
				col.a *= saturate((_Fill - s) / f + 0.5);
				return col;
			}
			ENDCG
		}
	}
	Fallback "UI/Default"
}
