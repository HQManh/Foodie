using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewIngredientIcons : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer[] icons;

		[SerializeField]
		private StationGroupView cookAnim;

		private int _count;

		private string _baseAwaitingSlot;

		private void Awake()
		{
			Clear();
		}

		public override void OnBaseTaken(string ingId)
		{
			Show(ingId);
			_baseAwaitingSlot = ingId;
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			if (ingId == _baseAwaitingSlot)
			{
				_baseAwaitingSlot = null;
			}
			else
			{
				Show(ingId);
			}
		}

		private void Show(string ingId)
		{
			if (icons == null || _count >= icons.Length)
			{
				return;
			}
			SpriteRenderer spriteRenderer = icons[_count++];
			RecipeConfigSO recipeConfigSO = (MessyController.Ins != null) ? MessyController.Ins.recipeConfig : null;
			if (spriteRenderer != null)
			{
				Sprite sprite = null;
				if (recipeConfigSO != null)
				{
					RcDisplayConfig ingredientDisplayConfig = recipeConfigSO.GetIngredientDisplayConfig(ingId);
					sprite = ingredientDisplayConfig?.sprite;
				}
				spriteRenderer.sprite = sprite;
				spriteRenderer.gameObject.SetActive(true);
			}
		}

		private void Clear()
		{
			_baseAwaitingSlot = null;
			_count = 0;
			if (icons == null)
			{
				return;
			}
			for (int i = 0; i < icons.Length; i++)
			{
				if (icons[i] != null)
				{
					icons[i].gameObject.SetActive(false);
				}
			}
		}

		public override void Play(float duration)
		{
			if (cookAnim != null)
			{
				cookAnim.Play(duration);
			}
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
			if (cookAnim != null)
			{
				if (ctx.playAnimation)
				{
					cookAnim.Play(ctx.duration);
				}
				else
				{
					cookAnim.gameObject.SetActive(true);
				}
			}
		}

		public override void Stop()
		{
			if (cookAnim != null)
			{
				cookAnim.Stop();
			}
		}

		public override void OnProcessComplete()
		{
			Stop();
			Clear();
		}

		public override void SetPaused(bool paused)
		{
			if (cookAnim != null)
			{
				cookAnim.SetPaused(paused);
			}
		}
	}
}
