using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class StationGroupView : MonoBehaviour
	{
		public virtual bool IsIntakeBusy => false;

		public abstract void Play(float duration);

		public abstract void Stop();

		public virtual float GetPlayDuration(float duration)
		{
			return duration >= 0f ? duration : 0f;
		}

		public virtual float GetProcessDuration(float fallbackDuration)
		{
			return fallbackDuration >= 0f ? fallbackDuration : 0f;
		}

		public virtual void PlayStep(float rate)
		{
		}

		public virtual Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			return null;
		}

		public abstract void SetPaused(bool paused);

		public virtual void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		public virtual void OnBaseTaken(string ingId)
		{
		}

		public virtual void OnProcessStart(ExecutionContext ctx)
		{
			// TODO(unrecovered): one branch dispatches a virtual call through an unmapped vtable slot; the other activates gameObject. Not guessed.
		}

		public virtual void OnProcessComplete()
		{
			// TODO(unrecovered): dispatches a virtual call through an unmapped vtable slot (+0x188); target not identifiable.
		}

		protected static void SetTweenPaused(Tween tween, bool paused)
		{
			if (tween != null && tween.IsActive())
			{
				if (paused)
				{
					tween.Pause();
				}
				else
				{
					tween.Play();
				}
			}
		}

		protected static void SetTargetTweensPaused(Component target, bool paused)
		{
			if (target)
			{
				if (paused)
				{
					DOTween.Pause(target);
				}
				else
				{
					DOTween.Play(target);
				}
			}
		}

		protected static void SetAudioPaused(AudioSource audio, bool paused)
		{
			if (!audio)
			{
				return;
			}
			if (!paused)
			{
				audio.UnPause();
			}
			else if (audio.isPlaying)
			{
				audio.Pause();
			}
		}
	}
}
