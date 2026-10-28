using DG.Tweening;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuildingPart : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer[] renderers;

		[SerializeField]
		private HomeBuildingPart[] subParts;

		[SerializeField]
		private Vector3 startLocalPos;

		[SerializeField]
		private Vector3 offset;

		[SerializeField]
		private float duration;

		[SerializeField]
		private bool isUseFade;

		[SerializeField]
		private bool isUseFall;

		[SerializeField]
		private bool isPunch;

		public bool isSubPart;

		private ParticleSystem _particleAppear;

		public void SetParticleAppear(ParticleSystem particleAppear)
		{
		}

		public Tween TweenAnim(Material appearMat, Material defaultMat, float delay = 0f, float speed = 1f)
		{
			return null;
		}

		private void SetMaterial(Material mat)
		{
		}

		private void PlayAppearFeedback()
		{
		}

		public void ResetPart()
		{
		}
	}
}
