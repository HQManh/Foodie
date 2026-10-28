using UnityEngine;
using UnityEngine.Events;

namespace Datpt.Cook_Order
{
	public abstract class ActionBase : MonoBehaviour
	{
		public string note;

		public UnityEvent doneEvent;

		[SerializeField]
		protected bool startActive;

		[SerializeField]
		protected bool doneActive;

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
		}

		public void SetDelayTime(float time)
		{
		}

		protected virtual void Setup()
		{
		}

		protected void PlayFx()
		{
		}
	}
}
