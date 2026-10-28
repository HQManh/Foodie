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
		private float baseScaleText = 3f;

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

		// The constructor sets this to the literal "!" (DAT_091f6cf8, decoded from the metadata).
		[SerializeField]
		private string additionalText = "!";

		[Header("Glow")]
		[SerializeField]
		private List<ParticleSystem> listColorPs;

		private static readonly int MainTexID = Shader.PropertyToID("_MainTex" /* literal recovered by guess */);

		// The ten localization keys are literals set in the static constructor (decoded from the metadata, in index order).
		private static readonly string[] LocLevelTexts = new string[10]
		{
			"combo_nice",
			"combo_good",
			"combo_great",
			"combo_wow",
			"combo_amazing",
			"combo_perfect",
			"combo_beautiful",
			"combo_bravo",
			"combo_excellent",
			"combo_unbelievable"
		};

		private void Play()
		{
			Play(1f);
		}

		public void Play(float volume = 1f)
		{
			LevelConfig config = levelConfigs[currentLevel];
			SetTexture(config.sp);
			if (psText == null)
			{
				return;
			}
			ParticleSystem.MainModule textMain = psText.main;
			textMain.startSize = baseScaleText * config.multiScaleText;
			if (listColorPs == null)
			{
				return;
			}
			foreach (ParticleSystem ps in listColorPs)
			{
				ParticleSystem.MainModule main = ps.main;
				main.startColor = config.color;
			}
			if (psMain == null)
			{
				return;
			}
			psMain.Play();
			string text = LevelText(currentLevel) + additionalText;
			if (textMesh == null)
			{
				return;
			}
			textMesh.SetText(text);
			textMesh.color = config.colorText;
			if (textScale == null)
			{
				return;
			}
			textScale.Play();
			currentLevel++;
			if (levelConfigs != null && currentLevel >= levelConfigs.Length)
			{
				currentLevel = levelConfigs.Length - 1;
			}
		}

		private string LevelText(int level)
		{
			// Rebuilt from the decompiled code: the fallback is the level config's desc; the table literal is "UI_Common" (decoded from the metadata).
			string fallback = levelConfigs[level].desc;
			if (level >= LocLevelTexts.Length)
			{
				return fallback;
			}
			return CakeOrder.Localization.CakeLocalization.Get("UI_Common", LocLevelTexts[level], fallback);
		}

		public void Reset()
		{
			currentLevel = 0;
		}

		public void SetTexture(Texture texture)
		{
			if (psRenderText == null && psText != null)
			{
				psRenderText = psText.GetComponent<ParticleSystemRenderer>();
			}
			if (mpb == null)
			{
				mpb = new MaterialPropertyBlock();
			}
			mpb.SetTexture(MainTexID, texture);
			if (psRenderText != null)
			{
				psRenderText.SetPropertyBlock(mpb);
			}
		}
	}
}
