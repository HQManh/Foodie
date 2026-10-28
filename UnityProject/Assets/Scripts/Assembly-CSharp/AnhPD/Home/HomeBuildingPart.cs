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
		private float duration = 0.2f;

		[SerializeField]
		private bool isUseFade = true;

		[SerializeField]
		private bool isUseFall = true;

		[SerializeField]
		private bool isPunch = true;

		public bool isSubPart;

		private ParticleSystem _particleAppear;

		public void SetParticleAppear(ParticleSystem particleAppear)
		{
			_particleAppear = particleAppear;
			if (subParts != null)
			{
				foreach (HomeBuildingPart subPart in subParts)
				{
					if (subPart == null)
					{
						break;
					}
					subPart.SetParticleAppear(particleAppear);
				}
			}
		}

		public Tween TweenAnim(Material appearMat, Material defaultMat, float delay = 0f, float speed = 1f)
		{
			// TODO(unrecovered): builds the Sequence from closure callbacks whose target methods (DAT_091eb188 / DAT_091eb190 / DAT_091eb198 / DAT_091ce900) and the material float property (DAT_092153a0) are unresolved; the sub-part recursion relies on the same unresolved fields.
			return null;
		}

		private void SetMaterial(Material mat)
		{
			if (renderers != null)
			{
				foreach (SpriteRenderer renderer in renderers)
				{
					renderer.material = mat;
				}
				gameObject.SetActive(true);
			}
		}

		private void PlayAppearFeedback()
		{
			if (_particleAppear != null)
			{
				_particleAppear.transform.position = transform.position;
				_particleAppear.Play();
			}
			// TODO(unrecovered): the trailing haptic call (MoreMountains.NiceVibrations MMVibrationManager.Haptic, type 4) is not in the stubs.
		}

		public void ResetPart()
		{
			gameObject.SetActive(false);
		}
	}
}
