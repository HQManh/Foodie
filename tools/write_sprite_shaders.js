// Rewrites the placeholder sprite/background shaders that live in the project's own shader folders (Codebase/Shaders, KienVFXPack).
// They are approximations of the effects, based on each shader's property list.
const fs = require('fs');
const root = 'D:/Unity/Foodie/UnityProject/Assets/_Production/Codebase/';

function sprite({ name, comment, props, uniforms = '', vertex = '', uv = '', frag, extraTags = '' }) {
  return `// ${comment}
Shader "${name}" {
	Properties {
${props}
	}
	SubShader {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" "CanUseSpriteAtlas"="True" ${extraTags}}
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
			fixed4 _RendererColor;
${uniforms}
			v2f vert(appdata_t IN) {
				v2f OUT;
				UNITY_SETUP_INSTANCE_ID(IN);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
				float4 pos = IN.vertex;
${vertex}
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
${uv}
${frag}
			}
			ENDCG
		}
	}
	Fallback "Sprites/Default"
}
`;
}
const RC = '		[HideInInspector] _RendererColor ("RendererColor", Vector) = (1,1,1,1)';
const premult = '				c.rgb *= c.a;\n				return c;';

const out = {};

// Sprite with the background colour tint; the tint arrives through the sprite colour (vertex colour) set by the background control.
out['Shaders/SpriteBackgroundColorGrading.shader'] = sprite({
  name: 'Custom/Sprite-Background-ColorGrading',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder): sprite drawn with premultiplied alpha, tinted by the sprite colour. The shared background grading is applied through the sprite colour by InGameSingleBackground.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
		[HideInInspector] _Color ("Tint", Vector) = (1,1,1,1)
		[HideInInspector] PixelSnap ("Pixel snap", Float) = 0
${RC}
		[HideInInspector] _AlphaTex ("External Alpha", 2D) = "white" {}
		[HideInInspector] _EnableExternalAlpha ("Enable External Alpha", Float) = 0`,
  frag: `				fixed4 c = tex2D(_MainTex, uv) * IN.color;
${premult}`,
});

// Tiling / scrolling sprite (rain, snow...). _Tiling.xy = repeat, _Tiling.zw = scroll speed (uv per second); _Offset.xy = static offset.
out['Scripts/KienVFXPack/Shader/SpriteTilingLoop.shader'] = sprite({
  name: 'Custom/SpriteTilingLoop',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder): sprite whose texture is repeated by _Tiling.xy and scrolls with _Tiling.zw (uv/s) plus _Offset.xy. Use with a repeating (wrap = Repeat) texture.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Vector) = (1,1,1,1)
		_Tiling ("Tiling", Vector) = (1,1,0,0)
		_Offset ("Offset", Vector) = (0,0,0,0)
		[MaterialToggle] PixelSnap ("Pixel Snap", Float) = 0
		[Toggle(_BG_GRADING_RECEIVE)] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
${RC}`,
  uniforms: '\t\t\tfixed4 _Color;\n\t\t\tfloat4 _Tiling;\n\t\t\tfloat4 _Offset;',
  uv: '\t\t\t\tuv = uv * _Tiling.xy + _Offset.xy + _Time.y * _Tiling.zw;',
  frag: `				fixed4 c = tex2D(_MainTex, uv) * IN.color * _Color;
${premult}`,
});

// Cloud: distorted by a scrolling distortion texture.
out['Shaders/CloudDistort.shader'] = sprite({
  name: 'Custom/TestVisual/CloudDistort',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder): sprite whose lookup is wobbled by a scrolling distortion texture (_ScrollSpeedXYMappingZW: xy = scroll speed, zw = distortion texture tiling), mixed by _BlendDistort.',
  props: `		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		[MaterialToggle] PixelSnap ("Pixel snap", Float) = 0
${RC}
		[HideInInspector] _Flip ("Flip", Vector) = (1,1,1,1)
		_DistortTex ("Distortion (RGB)", 2D) = "white" {}
		_DistortStrength ("Distortion Strength", Range(0, 1)) = 0.1
		_ScrollSpeedXYMappingZW ("ScrollSpeedXYMappingZW", Vector) = (0,0,0,0)
		_BlendDistort ("Blend Distort", Range(0, 1)) = 0.5
		[Toggle(_BG_GRADING_RECEIVE)] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1`,
  uniforms: '\t\t\tsampler2D _DistortTex;\n\t\t\tfloat _DistortStrength;\n\t\t\tfloat4 _ScrollSpeedXYMappingZW;\n\t\t\tfloat _BlendDistort;',
  frag: `				float2 duv = uv * (_ScrollSpeedXYMappingZW.zw + float2(step(abs(_ScrollSpeedXYMappingZW.z), 1e-5), step(abs(_ScrollSpeedXYMappingZW.w), 1e-5))) + _Time.y * _ScrollSpeedXYMappingZW.xy;
				float2 d = (tex2D(_DistortTex, duv).rg - 0.5) * 2.0 * _DistortStrength;
				fixed4 plain = tex2D(_MainTex, uv);
				fixed4 warped = tex2D(_MainTex, uv + d);
				fixed4 c = lerp(plain, warped, _BlendDistort) * IN.color;
${premult}`,
});

// Water: gently rippling sprite.
out['Scripts/KienVFXPack/Shader/ShaderGraph/Water2D.shader'] = sprite({
  name: 'Shader Graphs/Water2D',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite with a travelling ripple distortion (_Speed, _Strength, _NoiseScale, _NoiseTiling).',
  props: `		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		[ToggleUI] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
		_Speed ("Speed", Float) = 1
		_Strength ("Strength", Float) = 1
		_NoiseScale ("NoiseScale", Float) = 5
		_NoiseTiling ("NoiseTiling", Vector) = (1,1,0,0)
		[HideInInspector] White ("Color", Vector) = (1,1,1,1)
${RC}`,
  uniforms: '\t\t\tfloat _Speed, _Strength, _NoiseScale;\n\t\t\tfloat4 _NoiseTiling;',
  frag: `				float2 p = uv * _NoiseTiling.xy * _NoiseScale;
				float t = _Time.y * _Speed;
				float2 d = float2(sin(p.y * 2.0 + t) + sin(p.y * 3.7 - t * 1.3), cos(p.x * 2.3 + t * 0.8)) * 0.004 * _Strength;
				fixed4 c = tex2D(_MainTex, uv + d) * IN.color;
${premult}`,
});

// Diamond: sheared sprite.
out['Scripts/KienVFXPack/Shader/ShaderGraph/Diamond_Shader.shader'] = sprite({
  name: 'Shader Graphs/Diamond_Shader',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite sheared sideways by _Shear (x offset proportional to height).',
  props: `		_Shear ("Shear", Float) = 0
		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		[ToggleUI] _BgGradingReceive ("Receive Background Grading", Float) = 0
		_BgGradingStrength ("Background Grading Strength", Range(0, 1)) = 1
		[HideInInspector] White ("Color", Vector) = (1,1,1,1)
${RC}`,
  uniforms: '\t\t\tfloat _Shear;',
  vertex: '\t\t\t\tpos.x += pos.y * _Shear;',
  frag: `				fixed4 c = tex2D(_MainTex, uv) * IN.color;
${premult}`,
});

// Sea wave: sprite with an animated bright wave pattern on top.
out['Scripts/KienVFXPack/Shader/ShaderGraph/SeaWaveShader.shader'] = sprite({
  name: 'Shader Graphs/SeaWaveShader',
  comment: 'Rebuilt approximation (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite with drifting wave highlights (_WaveColor, _WaveSpeed, _WaveScale, _WaveTiling, _WavePower sharpness, _WaveAlpha strength).',
  props: `		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		_WaveSpeed ("WaveSpeed", Float) = 1
		_WaveScale ("WaveScale", Float) = 5
		_WaveTiling ("WaveTiling", Vector) = (1,1,0,0)
		_WaveColor ("WaveColor", Vector) = (0.4009434,1,0.7561779,1)
		_WavePower ("WavePower", Float) = 0
		_WaveAlpha ("WaveAlpha", Range(0, 1)) = 1
		[HideInInspector] White ("Color", Vector) = (1,1,1,1)
${RC}`,
  uniforms: '\t\t\tfloat _WaveSpeed, _WaveScale, _WavePower, _WaveAlpha;\n\t\t\tfloat4 _WaveTiling;\n\t\t\tfloat4 _WaveColor;',
  frag: `				fixed4 c = tex2D(_MainTex, uv) * IN.color;
				float2 p = uv * _WaveTiling.xy * _WaveScale;
				float t = _Time.y * _WaveSpeed;
				float w = sin(p.x * 3.0 + t) * sin(p.y * 4.0 - t * 0.7) + 0.5 * sin((p.x + p.y) * 2.0 + t * 1.3);
				w = pow(saturate(w * 0.5 + 0.5), 2.0 + max(_WavePower, 0.0));
				c.rgb += _WaveColor.rgb * w * _WaveAlpha * c.a;
${premult}`,
});

// HDR colour sprite.
out['Scripts/KienVFXPack/Shader/ShaderGraph/SpriteHDRColor.shader'] = sprite({
  name: 'Shader Graphs/SpriteHDRColor',
  comment: 'Rebuilt shader (the extracted copy was an empty placeholder; the original is a Shader Graph): sprite multiplied by an HDR colour (values above 1 glow when bloom is on).',
  props: `		[HideInInspector] [NoScaleOffset] _MainTex ("MainTex", 2D) = "white" {}
		[HDR] _Color ("Color", Vector) = (1,1,1,1)
		[HideInInspector] White ("Color", Vector) = (1,1,1,1)
${RC}`,
  uniforms: '\t\t\tfixed4 _Color;',
  frag: `				fixed4 c = tex2D(_MainTex, uv) * IN.color;
				c.rgb *= _Color.rgb;
				c.a *= _Color.a;
${premult}`,
});

for (const [rel, text] of Object.entries(out)) fs.writeFileSync(root + rel, text);

// Duplicates of shaders already rebuilt in Assets/Shader: copy those versions over the placeholder files.
const shaderDir = 'D:/Unity/Foodie/UnityProject/Assets/Shader/';
fs.copyFileSync(shaderDir + 'UI_Additive.shader', root + 'Shaders/UIAdditive.shader');
fs.copyFileSync(shaderDir + 'Shader Graphs_UI_ShinyButton_Shader.shader', root + 'Scripts/KienVFXPack/Shader/ShaderGraph/UI_ShinyButton_Shader.shader');
console.log('written', Object.keys(out).length + 2, 'shaders');
