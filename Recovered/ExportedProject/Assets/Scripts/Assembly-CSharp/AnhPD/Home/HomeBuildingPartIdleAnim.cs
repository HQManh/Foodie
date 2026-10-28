using DG.Tweening;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuildingPartIdleAnim : MonoBehaviour
	{
		[SerializeField]
		private LoopType loopType;

		[SerializeField]
		protected Ease ease;

		[SerializeField]
		protected Vector2 delayRange;

		[SerializeField]
		protected float duration;

		[SerializeField]
		protected float delayInterval;

		public bool isPlayOnAwake;

		protected Sequence Sequence;

		protected virtual void Awake()
		{
		}

		public virtual void Play()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
