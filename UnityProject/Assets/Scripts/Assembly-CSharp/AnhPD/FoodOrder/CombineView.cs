using DG.Tweening;
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
			HideAllSlots();
		}

		private void HideAllSlots()
		{
			if (ingredientVisuals == null)
			{
				return;
			}
			GameObject[] array = ingredientVisuals;
			foreach (GameObject gameObject in array)
			{
				if ((bool)gameObject)
				{
					gameObject.SetActive(false);
				}
			}
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			base.gameObject.SetActive(true);
			if (slotIndex >= 0 && ingredientVisuals != null && slotIndex < ingredientVisuals.Length && (bool)ingredientVisuals[slotIndex])
			{
				ingredientVisuals[slotIndex].SetActive(true);
			}
		}

		public override void Play(float duration)
		{
			if ((bool)combineAnim)
			{
				combineAnim.Play(duration);
			}
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
			if ((bool)combineAnim)
			{
				if (!ctx.playAnimation)
				{
					combineAnim.gameObject.SetActive(true);
				}
				else
				{
					combineAnim.Play(ctx.duration);
				}
			}
		}

		public override void Stop()
		{
			if ((bool)combineAnim)
			{
				combineAnim.Stop();
			}
		}

		public override void OnProcessComplete()
		{
			Stop();
			if (ingredientVisuals != null)
			{
				GameObject[] array = ingredientVisuals;
				foreach (GameObject gameObject in array)
				{
					if ((bool)gameObject)
					{
						gameObject.transform.DOComplete();
						gameObject.SetActive(false);
					}
				}
			}
			base.gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
			if ((bool)combineAnim)
			{
				combineAnim.SetPaused(paused);
			}
		}
	}
}
