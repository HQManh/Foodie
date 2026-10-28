using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleKFCCombo : FlexibleDragItem
	{
		[SerializeField]
		private KFCDisplay[] displays;

		private const string SubSeparator = "~KFC2~";

		private readonly string[] _subIds;

		public override PieceSet Pieces => default;

		public List<string> GetSubOrderIds()
		{
			return null;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
		}

		public override string GetId()
		{
			return null;
		}

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		public override void Display(string longId)
		{
		}

		private void DisplayCombo()
		{
		}

		protected override void ResetItem()
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
	}
}
