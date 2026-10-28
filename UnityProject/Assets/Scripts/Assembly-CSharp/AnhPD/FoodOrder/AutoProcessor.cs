using System;

namespace AnhPD.FoodOrder
{
	public class AutoProcessor
	{
		private float _duration;

		public AutoProcessor(float duration)
		{
			_duration = duration;
		}

		public void SetDuration(float duration)
		{
			_duration = duration;
		}

		public void StartProcess(ProgressDriver progress, Action onComplete)
		{
			progress.RunProgress(new ProgressDriverContext
			{
				duration = _duration,
				onComplete = onComplete
			});
		}

		public ExecutionContext GetExecutionContext()
		{
			ExecutionContext result = default(ExecutionContext);
			result.playAnimation = true;
			result.duration = _duration;
			return result;
		}
	}
}
