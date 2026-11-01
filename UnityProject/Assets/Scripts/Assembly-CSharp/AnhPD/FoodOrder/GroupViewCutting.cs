using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCutting : StationGroupView
	{
		[SerializeField]
		private Transform knife;

		[SerializeField]
		private AudioClip sfxCut;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private GameObject[] cutState;

		[SerializeField]
		private float knifeStartAngle = -10f;

		[SerializeField]
		private float knifeEndAngle = -30f;

		[SerializeField]
		private float cutInterval = 0.15f;

		private int _count;

		private Sequence _chopSeq;

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			knife.gameObject.SetActive(true);
			ResetState();
			int last = cutState.Length - 1;
			float total = Mathf.Max(0.05f, duration - 0.2f);
			int rounded = Mathf.RoundToInt(total / Mathf.Max(0.01f, cutInterval));
			int n = Mathf.Max(1, Mathf.Max(last, rounded));
			if (_chopSeq != null)
			{
				_chopSeq.Kill();
			}
			_chopSeq = DOTween.Sequence();
			_chopSeq.Append(knife.DOLocalRotate(new Vector3(0f, 0f, knifeStartAngle), 0.1f));
			for (int i = 1; i <= n; i++)
			{
				int index = i * last / n;
				_chopSeq.Append(knife.DOPunchPosition(Vector3.down * 1.5f, total / n, 1, 1f).OnComplete(delegate
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfxCut, 0.3f, (AudioManagerCakeOrder.AudioTrack)5);
					if (vfx != null)
					{
						vfx.Play();
					}
					ShowState(index);
				}));
			}
			_chopSeq.Append(knife.DOLocalRotate(new Vector3(0f, 0f, knifeEndAngle), 0.1f));
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_chopSeq, paused);
			SetTargetTweensPaused(knife, paused);
		}

		private void ResetState()
		{
			_count = 0;
			for (int i = 0; i < cutState.Length; i++)
			{
				cutState[i].SetActive(i == 0);
			}
		}

		private void ShowState(int index)
		{
			cutState[index].transform.DOComplete();
			cutState[index].transform.Appear(0.1f);
			if (_count != index)
			{
				cutState[_count].SetActive(false);
				_count = index;
				cutState[index].SetActive(true);
			}
		}

		public override void Stop()
		{
			GameObject lastState = cutState[cutState.Length - 1];
			lastState.transform.DOComplete();
			lastState.SetActive(false);
			gameObject.SetActive(false);
			knife.gameObject.SetActive(false);
		}
	}
}
