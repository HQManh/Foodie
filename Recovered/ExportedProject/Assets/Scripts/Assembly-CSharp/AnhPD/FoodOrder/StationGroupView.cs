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
			return 0f;
		}

		public virtual float GetProcessDuration(float fallbackDuration)
		{
			return 0f;
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
		}

		public virtual void OnProcessComplete()
		{
		}

		protected static void SetTweenPaused(Tween tween, bool paused)
		{
		}

		protected static void SetTargetTweensPaused(Component target, bool paused)
		{
		}

		protected static void SetAudioPaused(AudioSource audio, bool paused)
		{
		}
	}
}
