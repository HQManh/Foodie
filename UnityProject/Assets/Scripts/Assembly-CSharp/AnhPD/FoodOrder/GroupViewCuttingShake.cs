using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCuttingShake : StationGroupView
	{
		[SerializeField]
		private Transform knife;

		[SerializeField]
		private AudioClip sfxCut;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private int cutNumber;

		private Sequence _chopSeq;

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			int count = cutNumber;
			if (_chopSeq != null)
			{
				_chopSeq.Kill();
			}
			_chopSeq = DOTween.Sequence();
			_chopSeq.Append(knife.DOLocalRotate(new Vector3(0f, 0f, -10f), 0.1f));
			for (int i = 0; i < cutNumber; i++)
			{
				_chopSeq.Append(knife.DOPunchPosition(Vector3.down * 1.5f, (duration - 0.2f) / (float)count, 1, 1f).OnComplete(delegate
				{
					transform.DOShakeRotation(0.3f, 5f, 10, 90f, true);
					AudioManagerCakeOrder.Instance.PlaySfx(sfxCut, 0.3f, (AudioManagerCakeOrder.AudioTrack)5);
					if (vfx != null)
					{
						vfx.Play();
					}
				}));
			}
			_chopSeq.Append(knife.DOLocalRotate(new Vector3(0f, 0f, -30f), 0.1f));
		}

		public override void Stop()
		{
			gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_chopSeq, paused);
			SetTargetTweensPaused(transform, paused);
		}
	}
}
