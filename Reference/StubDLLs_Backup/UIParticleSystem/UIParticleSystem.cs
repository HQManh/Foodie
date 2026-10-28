namespace UnityEngine.UI.Extensions
{
	[ExecuteInEditMode]
	[RequireComponent(typeof(CanvasRenderer), typeof(ParticleSystem))]
	[AddComponentMenu("UI/Effects/Extensions/UIParticleSystem")]
	public class UIParticleSystem : MaskableGraphic
	{
		[Tooltip("Having this enabled run the system in LateUpdate rather than in Update making it faster but less precise (more clunky)")]
		public bool fixedTime = true;

		[Tooltip("Enables 3d rotation for the particles")]
		public bool use3dRotation;

		private Transform _transform;

		private ParticleSystem pSystem;

		private ParticleSystem.Particle[] particles;

		private UIVertex[] _quad = new UIVertex[4];

		private Vector4 imageUV;

		private ParticleSystem.TextureSheetAnimationModule textureSheetAnimation;

		private int textureSheetAnimationFrames;

		private Vector2 textureSheetAnimationFrameSize;

		private ParticleSystemRenderer pRenderer;

		private bool isInitialised;

		private Material currentMaterial;

		private Texture currentTexture;

		private ParticleSystem.MainModule mainModule;

		public override Texture mainTexture => currentTexture;

		protected bool Initialize()
		{
			if (_transform == null)
			{
				_transform = transform;
			}

			if (pSystem == null)
			{
				pSystem = GetComponent<ParticleSystem>();
				if (pSystem == null)
				{
					return false;
				}

				mainModule = pSystem.main;
				if (pSystem.main.maxParticles > 14000)
				{
					mainModule.maxParticles = 14000;
				}

				pRenderer = pSystem.GetComponent<ParticleSystemRenderer>();
				if (pRenderer != null)
				{
					pRenderer.enabled = false;
				}

				if (material == null)
				{
					Shader shader = ShaderLibrary.GetShaderInstance("UI/Particles/Additive" /* literal recovered by guess */);
					if (shader != null)
					{
						material = new Material(shader);
					}
				}

				currentMaterial = material;
				if (currentMaterial != null && currentMaterial.HasProperty("_MainTex"))
				{
					currentTexture = currentMaterial.mainTexture;
					if (currentTexture == null)
					{
						currentTexture = Texture2D.whiteTexture;
					}
				}

				material = currentMaterial;
				mainModule.scalingMode = ParticleSystemScalingMode.Hierarchy;
				particles = null;
			}

			if (particles == null)
			{
				particles = new ParticleSystem.Particle[pSystem.main.maxParticles];
			}

			imageUV = new Vector4(0f, 0f, 1f, 1f);

			textureSheetAnimation = pSystem.textureSheetAnimation;
			textureSheetAnimationFrames = 0;
			textureSheetAnimationFrameSize = Vector2.zero;
			if (textureSheetAnimation.enabled)
			{
				textureSheetAnimationFrames = textureSheetAnimation.numTilesY * textureSheetAnimation.numTilesX;
				textureSheetAnimationFrameSize.x = 1f / textureSheetAnimation.numTilesX;
				textureSheetAnimationFrameSize.y = 1f / textureSheetAnimation.numTilesY;
			}

			return true;
		}

		protected override void Awake()
		{
			base.Awake();
			if (!Initialize())
			{
				enabled = false;
			}
		}

		protected override void OnPopulateMesh(VertexHelper vh)
		{
			// TODO(unrecovered): per-particle vertex generation (particle size/rotation/colour, texture sheet frame math with curve evaluation, and vh.AddUIVertexQuad) relies on many IL2CPP ParticleSystem.Particle and MinMaxCurve accessors that have no stub equivalents; body not written.
		}

		private void Update()
		{
			if (fixedTime)
			{
				return;
			}

			if (!Application.isPlaying)
			{
				return;
			}

			if (pSystem != null)
			{
				pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
				SetAllDirty();

				bool reinit = currentMaterial != null && currentTexture != currentMaterial.mainTexture;
				if (!reinit && material != null && currentMaterial != null)
				{
					reinit = material.shader != currentMaterial.shader;
				}

				if (reinit)
				{
					pSystem = null;
					Initialize();
				}
			}
		}

		private void LateUpdate()
		{
			if (!Application.isPlaying)
			{
				SetAllDirty();
			}
			else if (fixedTime && pSystem != null)
			{
				pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
				SetAllDirty();

				bool reinit = currentMaterial != null && currentTexture != currentMaterial.mainTexture;
				if (!reinit && material != null && currentMaterial != null)
				{
					reinit = material.shader != currentMaterial.shader;
				}

				if (reinit)
				{
					pSystem = null;
					Initialize();
				}
			}

			if (material != currentMaterial)
			{
				pSystem = null;
				Initialize();
			}
		}

		protected override void OnDestroy()
		{
			currentMaterial = null;
			currentTexture = null;
		}

		public void StartParticleEmission()
		{
			pSystem.time = 0f;
			pSystem.Play();
		}

		public void StopParticleEmission()
		{
			pSystem.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
		}

		public void PauseParticleEmission()
		{
			pSystem.Stop(false, ParticleSystemStopBehavior.StopEmitting);
		}
	}
}
