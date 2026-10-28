namespace AnhPD.FoodOrder
{
	public class GroupViewJustActive : StationGroupView
	{
		public override void Play(float duration)
		{
			gameObject.SetActive(true);
		}

		public override void Stop()
		{
			gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
		}
	}
}
