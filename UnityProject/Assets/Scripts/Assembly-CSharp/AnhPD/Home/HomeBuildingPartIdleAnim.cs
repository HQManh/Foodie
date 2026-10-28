using DG.Tweening;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuildingPartIdleAnim : MonoBehaviour
	{
		[SerializeField]
		private LoopType loopType = LoopType.Incremental;

		[SerializeField]
		protected Ease ease = Ease.Linear;

		[SerializeField]
		protected Vector2 delayRange = new Vector2(0f, 1f);

		[SerializeField]
		protected float duration = 1f;

		[SerializeField]
		protected float delayInterval;

		public bool isPlayOnAwake;

		protected Sequence Sequence;

		protected virtual void Awake()
		{
			Sequence = DOTween.Sequence();
			Sequence.AppendInterval(Random.Range(delayRange.x, delayRange.y));
			Sequence.SetLoops(-1, loopType);
			if (!isPlayOnAwake)
			{
				Sequence.Pause();
			}
		}

		public virtual void Play()
		{
			Sequence.Play();
		}

		private void OnDestroy()
		{
			if (Sequence != null)
			{
				Sequence.Kill();
			}
		}
	}
}
