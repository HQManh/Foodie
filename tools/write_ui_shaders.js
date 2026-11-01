// Writes real replacements for the placeholder UI/sprite shaders extracted into Assets/Shader (each written over its placeholder file).
const fs = require('fs');
const dir = 'D:/Unity/Foodie/UnityProject/Assets/Shader/';

const STENCIL_PROPS = `		_StencilComp ("Stencil Comparison", Float) = 8
		_Stencil ("Stencil ID", Float) = 0
		_StencilOp ("Stencil Operation", Float) = 0
		_StencilWriteMask ("Stencil Write Mask", Float) = 255
		_StencilReadMask ("Stencil Read Mask", Float) = 255
		_ColorMask ("Color Mask", Float) = 15`;

// Standard UI sub-shader (stencil, clip rect, alpha clip) around a custom fragment body.
function uiShader({ name, comment, props, uniforms = '', blend = 'SrcAlpha OneMinusSrcAlpha', texcoordExtra = '', frag, extraInclude = '' }) {
  return `// ${comment}
Shader "${name}" {
	Properties {
${props}
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
		Blend ${blend}
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
${extraInclude}
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
${uniforms}
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
${frag}
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
`;
}

const files = {};

// Custom/UI/FillColor: the sprite's silhouette filled with one flat colour.
const fillColor = uiShader({
  name: 'Custom/UI/FillColor',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): fills the sprite silhouette with _ColorFill (alpha comes from the sprite and the vertex colour).',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_ColorFill ("Color Fill", Vector) = (1,1,1,1)
${STENCIL_PROPS}`,
  uniforms: '\t\t\tfixed4 _ColorFill;',
  frag: `				half4 tex = tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd;
				half4 color = half4(_ColorFill.rgb, tex.a * _ColorFill.a * IN.color.a);`,
});
files['Custom_UI_FillColor.shader'] = fillColor;
files['Custom_UI_FillColor_0.shader'] = fillColor;

// Custom/UI/UIScroll: scrolls the texture; zw > 0 makes the motion step in discrete jumps.
files['Custom_UI_UIScroll.shader'] = uiShader({
  name: 'Custom/UI/UIScroll',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): scrolls the texture over time (_ScrollSpeedXYStepZW: xy = speed in uv/s, zw = step size per axis, 0 = smooth). Needs a repeating texture.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Vector) = (1,1,1,1)
${STENCIL_PROPS}
		_ScrollSpeedXYStepZW ("Speed XY Step ZW", Vector) = (0,0,0,0)`,
  uniforms: '\t\t\tfixed4 _Color;\n\t\t\tfloat4 _ScrollSpeedXYStepZW;',
  frag: `				float2 offset = _Time.y * _ScrollSpeedXYStepZW.xy;
				float2 step = _ScrollSpeedXYStepZW.zw;
				offset.x = step.x > 0 ? floor(offset.x / step.x) * step.x : offset.x;
				offset.y = step.y > 0 ? floor(offset.y / step.y) * step.y : offset.y;
				half4 color = (tex2D(_MainTex, IN.texcoord + offset) + _TextureSampleAdd) * IN.color * _Color;`,
});

// UI Extensions/UIScreen: screen blend mode.
const screen = uiShader({
  name: 'UI Extensions/UIScreen',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): UI sprite composited with the screen blend mode.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Vector) = (1,1,1,1)
${STENCIL_PROPS}`,
  uniforms: '\t\t\tfixed4 _Color;',
  blend: 'One OneMinusSrcColor',
  frag: `				half4 color = (tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd) * IN.color * _Color;
				color.rgb *= color.a;`,
});
files['UI Extensions_UIScreen.shader'] = screen;
files['UI Extensions_UIScreen_0.shader'] = screen;

// Shader Graphs/UI_ShinyButton_Shader: a diagonal shine sweeping over the sprite.
files['Shader Graphs_UI_ShinyButton_Shader.shader'] = uiShader({
  name: 'Shader Graphs/UI_ShinyButton_Shader',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder; the original is a Shader Graph): the sprite with a bright diagonal wave passing over it. _WaveRotation = stripe angle, _WaveCycle = stripes per sprite, _WaveSpeed = speed, _FlashTime = seconds per flash, _Offset = phase.',
  props: `		[NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		_WaveAlpha ("WaveAlpha", Range(0, 1)) = 1
		_WaveRotation ("WaveRotation", Range(0, 360)) = 9
		_WaveCycle ("WaveCycle", Float) = 3
		_WaveSpeed ("WaveSpeed", Float) = 1
		_Offset ("Offset", Float) = 0
		_FlashTime ("FlashTime", Float) = 1
${STENCIL_PROPS}`,
  uniforms: '\t\t\tfloat _WaveAlpha;\n\t\t\tfloat _WaveRotation;\n\t\t\tfloat _WaveCycle;\n\t\t\tfloat _WaveSpeed;\n\t\t\tfloat _Offset;\n\t\t\tfloat _FlashTime;',
  frag: `				half4 tex = (tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd) * IN.color;
				float a = radians(_WaveRotation);
				float2 p = IN.texcoord - 0.5;
				float x = p.x * cos(a) - p.y * sin(a);
				float t = _Time.y * _WaveSpeed + _Offset;
				float phase = frac(x * _WaveCycle * 0.5 - t);
				float wave = saturate(1.0 - abs(phase - 0.5) * 6.0);
				float flash = _FlashTime > 0.0001 ? saturate(sin(frac(_Time.y / max(_FlashTime, 0.0001)) * 3.14159)) : 1.0;
				half4 color = tex;
				color.rgb += wave * flash * _WaveAlpha * tex.a;`,
});

// Custom/UI/MapTransitionFog: a soft noisy band of fog sweeping across the screen while _Progress goes 0..1.
files['Custom_UI_MapTransitionFog.shader'] = uiShader({
  name: 'Custom/UI/MapTransitionFog',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder): a fog band that sweeps across the rect as _Progress goes 0..1 (_Direction = +1 pans right), tinted from the From to the To theme colours (bottom to top gradient), with noise-modulated edges.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
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
${STENCIL_PROPS}
		_ClipRect ("Clip Rect", Vector) = (-32767,-32767,32767,32767)`,
  uniforms: `			float _Progress, _Direction, _Aspect, _MaxAlpha, _BandWidth, _EdgeSoftness, _EdgeNoise, _NoiseScale, _NoiseStrength, _NoiseScroll, _ThemeBrighten;
			float4 _FromBottom, _FromTop, _ToBottom, _ToTop;
			sampler2D _NoiseTex;`,
  frag: `				// x runs along the sweep direction in "screens" (the rect is one screen wide), y is the vertical position.
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
				half4 color = half4(fog.rgb, band * lerp(1.0, n, _NoiseStrength) * _MaxAlpha * fog.a * IN.color.a);`,
});
fs.writeFileSync; // (kept for clarity)

for (const [file, text] of Object.entries(files)) fs.writeFileSync(dir + file, text);

// Sprite shaders (non-UI): plain sprite quad shaders drawn by the sprite renderer.
function spriteShader({ name, comment, props, uniforms, vertexOffset = '', fragBody }) {
  return `// ${comment}
Shader "${name}" {
	Properties {
${props}
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
			fixed4 _RendererColor;
${uniforms}
			v2f vert(appdata_t IN) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(IN);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				float4 pos = IN.vertex;
${vertexOffset}
				OUT.vertex = UnityObjectToClipPos(pos);
				OUT.texcoord = TRANSFORM_TEX(IN.texcoord, _MainTex);
				OUT.color = IN.color * _Color * _RendererColor;
				#ifdef PIXELSNAP_ON
				OUT.vertex = UnityPixelSnap(OUT.vertex);
				#endif
				return OUT;
			}

			fixed4 frag(v2f IN) : SV_Target {
${fragBody}
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
`;
}

fs.writeFileSync(dir + 'Custom_SpriteWhiteFade.shader', spriteShader({
  name: 'Custom/SpriteWhiteFade',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): sprite whose colour is faded towards white by _Fade (alpha is kept).',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Fade ("White Fade", Range(0, 1)) = 1
		_Color ("Tint", Vector) = (1,1,1,1)
		[HideInInspector] _RendererColor ("RendererColor", Vector) = (1,1,1,1)`,
  uniforms: '\t\t\tfloat _Fade;',
  fragBody: `				fixed4 c = tex2D(_MainTex, IN.texcoord) * IN.color;
				c.rgb = lerp(c.rgb, 1.0.xxx, _Fade);
				c.rgb *= c.a;
				return c;`,
}));

fs.writeFileSync(dir + 'Custom_WavingFoliageShader.shader', spriteShader({
  name: 'Custom/WavingFoliageShader',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): sprite whose upper part sways sideways like wind-blown foliage (_WaveSpeed, _WaveAmp, _WindSkewness bias, _WindTex adds variation across the world).',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
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
		_WindTexStrength ("Wind Tex Strength", Float) = 1`,
  uniforms: '\t\t\tfloat _WaveSpeed, _WaveAmp, _WindSkewness, _WindTexStrength;\n\t\t\tsampler2D _WindTex;',
  vertexOffset: `				// Height inside the sprite (uv.y: 0 = root, 1 = tip) scales the sway so the base stays planted.
				float3 world = mul(unity_ObjectToWorld, pos).xyz;
				float wind = tex2Dlod(_WindTex, float4(world.x * 0.05 + _Time.y * 0.02, world.y * 0.05, 0, 0)).r;
				float sway = sin(_Time.y * _WaveSpeed + world.x * 0.7 + wind * 6.2831 * _WindTexStrength) + _WindSkewness * 0.5;
				pos.x += sway * _WaveAmp * 0.05 * IN.texcoord.y;`,
  fragBody: `				fixed4 c = tex2D(_MainTex, IN.texcoord) * IN.color;
				c.rgb *= c.a;
				return c;`,
}));
console.log('written');
