using UnityEngine;
using UnityEngine.Events;

namespace Datpt.Cook_Order
{
	public abstract class ActionBase : MonoBehaviour
	{
		public string note;

		public UnityEvent doneEvent;

		[SerializeField]
		protected bool startActive = true;

		[SerializeField]
		protected bool doneActive = true;

		[SerializeField]
		public float delay;

		[SerializeField]
		protected AudioClip clip;

		public virtual void OnActive()
		{
		}

		public virtual void OnStop()
		{
		}

		protected virtual void OnDone()
		{
			gameObject.SetActive(doneActive);
			doneEvent?.Invoke();
		}

		public void SetDelayTime(float time)
		{
			// TODO(unrecovered): delay assignment goes through unnamed container helpers and a debug log; the target container is not identifiable from the stubs.
		}

		protected virtual void Setup()
		{
		}

		protected void PlayFx()
		{
			if (clip != null)
			{
				SoundControl.Ins.PlayFX(clip, false);
			}
		}
	}
}
