using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewPouring : StationGroupView
	{
		[SerializeField]
		private Transform bottle;

		[SerializeField]
		private SpriteRenderer waterCup;

		[SerializeField]
		private SpriteRenderer waterPour;

		[SerializeField]
		private AudioSource sfxPouring;

		[SerializeField]
		private Vector3 offset = new Vector3(0f, 1f, 0f);

		[SerializeField]
		private float minHeight;

		[SerializeField]
		private float maxHeight;

		[SerializeField]
		private float angle;

		private Sequence _pourSeq;

		[SerializeField]
		private Vector3 startPos;

		[SerializeField]
		private Vector3 startRot;

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			waterCup.SetAlpha(0f);
			SetHeight(waterCup, minHeight);
			if (_pourSeq != null)
			{
				_pourSeq.Kill();
			}
			_pourSeq = DOTween.Sequence();
			_pourSeq.Append(GetMoveUpTween());
			_pourSeq.Append(GetPourTween(duration - 0.25f - 0.3f - 0.1f - 0.1f - 0.3f));
			_pourSeq.Append(GetMoveDownTween());
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_pourSeq, paused);
			SetAudioPaused(sfxPouring, paused);
		}

		private Tween GetMoveUpTween(float durationRate = 1f)
		{
			Sequence sequence = DOTween.Sequence();
			sequence.AppendInterval(durationRate * 0.25f);
			sequence.Append(bottle.DOLocalMove(startPos + offset, durationRate * 0.3f));
			// TODO(unrecovered): rotation target z component not visible in pseudocode; angle assumed
			Vector3 euler = bottle.localEulerAngles;
			sequence.Join(bottle.DOLocalRotate(new Vector3(euler.x, euler.y, angle), durationRate * 0.3f));
			return sequence;
		}

		private Tween GetMoveDownTween(float durationRate = 1f)
		{
			Sequence sequence = DOTween.Sequence();
			sequence.Append(bottle.DOLocalMove(startPos, durationRate * 0.3f));
			sequence.Join(bottle.DOLocalRotate(startRot, durationRate * 0.3f));
			return sequence;
		}

		private Tween GetPourTween(float duration)
		{
			Sequence sequence = DOTween.Sequence();
			sequence.Append(waterCup.DOFade(1f, 0.1f));
			Vector3 euler = bottle.localEulerAngles;
			sequence.Join(bottle.DOLocalRotate(new Vector3(euler.x, euler.y, angle), 0.1f));
			sequence.Append(DOVirtual.Float(minHeight, maxHeight, duration, delegate(float h)
			{
				SetHeight(waterCup, h);
			}).OnComplete(delegate
			{
				waterPour.enabled = false;
			}));
			sequence.OnStart(delegate
			{
				waterPour.enabled = true;
				sfxPouring.Play();
				PlayPouringTween();
			});
			return sequence;
		}

		private Tween PlayPouringTween()
		{
			Vector3 euler = bottle.localEulerAngles;
			return bottle.DOLocalRotate(new Vector3(euler.x, euler.y, angle), 0.1f);
		}

		public override void Stop()
		{
			sfxPouring.Stop();
			waterCup.SetAlpha(0f);
			SetHeight(waterCup, minHeight);
			gameObject.SetActive(false);
		}

		private void SetHeight(SpriteRenderer sr, float height)
		{
			sr.size = new Vector2(sr.size.x, height);
		}

		private void Init()
		{
			startPos = bottle.localPosition;
			startRot = bottle.localEulerAngles;
		}

		private void MoveToRoot()
		{
			waterPour.enabled = false;
			bottle.localPosition = startPos;
			bottle.localEulerAngles = startRot;
		}

		private void MoveToTarget()
		{
			waterPour.enabled = true;
			bottle.localPosition = startPos + offset;
			Vector3 euler = bottle.localEulerAngles;
			bottle.localEulerAngles = new Vector3(euler.x, euler.y, angle);
		}
	}
}
