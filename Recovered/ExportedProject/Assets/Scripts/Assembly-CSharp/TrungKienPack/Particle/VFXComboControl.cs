using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public class VFXComboControl : MonoBehaviour
	{
		[Header("Main")]
		[SerializeField]
		private ParticleSystem psMain;

		[SerializeField]
		private float baseScaleText;

		[SerializeField]
		public LevelConfig[] levelConfigs;

		[SerializeField]
		private int currentLevel;

		[Header("Text")]
		[SerializeField]
		private ParticleSystem psText;

		private ParticleSystemRenderer psRenderText;

		private MaterialPropertyBlock mpb;

		[SerializeField]
		private SimpleCurveScale textScale;

		[SerializeField]
		private TextMeshPro textMesh;

		[SerializeField]
		private string additionalText;

		[Header("Glow")]
		[SerializeField]
		private List<ParticleSystem> listColorPs;

		private static readonly int MainTexID;

		private static readonly string[] LocLevelTexts;

		private void Play()
		{
		}

		public void Play(float volume = 1f)
		{
		}

		private string LevelText(int level)
		{
			return null;
		}

		public void Reset()
		{
		}

		public void SetTexture(Texture texture)
		{
		}
	}
}
