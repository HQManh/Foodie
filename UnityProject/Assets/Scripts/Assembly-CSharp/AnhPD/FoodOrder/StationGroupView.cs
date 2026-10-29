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
			// Rebuilt from the decompiled code: play the view for the process duration when asked to; otherwise just show it.
			// (The decompile calls the virtual at vtable +0x178, taken to be Play(float), with the context's duration.)
			if (ctx.playAnimation)
			{
				Play(ctx.duration);
			}
			else
			{
				gameObject.SetActive(true);
			}
		}

		public virtual void OnProcessComplete()
		{
			// The decompile calls the virtual at vtable +0x188, the slot after Play, taken to be Stop().
			Stop();
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
