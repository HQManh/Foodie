using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleBurger : FlexibleDragItem
	{
		public enum FillingType
		{
			Bun = 0,
			Lettuce = 1,
			BeefPatty = 2,
			RedOnion = 3,
			Tomato = 4,
			Cheese = 5,
			Egg = 6
		}

		[SerializeField]
		private List<FillingType> fillings;

		[Tooltip("Số lớp TỐI ĐA của cùng một loại nhân khi random ra order. 1 = không cho trùng (luật cũ). Chỉ chặn phía SINH order — người chơi ghép tay thì order tự chặn qua luật offer.")]
		[SerializeField]
		private int maxSameFilling;

		[SerializeField]
		private FlexibleBurgerDisplay display;

		private List<FillingType> _unlockedFillings;

		public List<FillingType> Fillings => null;

		public override float AssembleAnimDuration => 0f;

		public override PieceSet Pieces => default;

		protected override bool TryGetIngIdOf<T>(T enumValue, out string id)
		{
			id = null;
			return false;
		}

		public override string GetId()
		{
			return null;
		}

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}

		private string BuildId(List<FillingType> list)
		{
			return null;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
		}

		public override void AddIng(string ingId)
		{
		}

		protected override void RefreshVisual()
		{
		}

		public override List<string> GetIngIds(string longId)
		{
			return null;
		}

		protected override void ResetItem()
		{
		}

		private List<FillingType> PickRandomFillings(int maxCount)
		{
			return null;
		}

		public override void Display(string longId)
		{
		}

		public override void PlayAssembleAnim()
		{
		}

		public override bool TryGetVisualBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}

		public void Display(PieceSet pieces)
		{
		}

		private void DisplayFilling(bool playAssemble = false)
		{
		}
	}
}
