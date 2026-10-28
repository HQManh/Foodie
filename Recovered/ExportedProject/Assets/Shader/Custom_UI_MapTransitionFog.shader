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
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType"="Opaque" }
		LOD 200

		Pass
		{
			HLSLPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			float4x4 unity_ObjectToWorld;
			float4x4 unity_MatrixVP;
			float4 _MainTex_ST;

			struct Vertex_Stage_Input
			{
				float4 pos : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct Vertex_Stage_Output
			{
				float2 uv : TEXCOORD0;
				float4 pos : SV_POSITION;
			};

			Vertex_Stage_Output vert(Vertex_Stage_Input input)
			{
				Vertex_Stage_Output output;
				output.uv = (input.uv.xy * _MainTex_ST.xy) + _MainTex_ST.zw;
				output.pos = mul(unity_MatrixVP, mul(unity_ObjectToWorld, input.pos));
				return output;
			}

			Texture2D<float4> _MainTex;
			SamplerState sampler_MainTex;

			struct Fragment_Stage_Input
			{
				float2 uv : TEXCOORD0;
			};

			float4 frag(Fragment_Stage_Input input) : SV_TARGET
			{
				return _MainTex.Sample(sampler_MainTex, input.uv.xy);
			}

			ENDHLSL
		}
	}
}