using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CombineView : StationGroupView
	{
		[SerializeField]
		private GameObject[] ingredientVisuals;

		[SerializeField]
		private StationGroupView combineAnim;

		private void Awake()
		{
		}

		private void HideAllSlots()
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		public override void Play(float duration)
		{
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
		}

		public override void Stop()
		{
		}

		public override void OnProcessComplete()
		{
		}

		public override void SetPaused(bool paused)
		{
		}
	}
}
