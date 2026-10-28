using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleKFCCombo : FlexibleDragItem
	{
		[SerializeField]
		private KFCDisplay[] displays;

		private const string SubSeparator = "~KFC2~";

		private readonly string[] _subIds = new string[2];

		public override PieceSet Pieces => PieceSet.Empty;

		public List<string> GetSubOrderIds()
		{
			List<string> list = new List<string>();
			list.Add(_subIds[0]);
			list.Add(_subIds[1]);
			return list;
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			_subIds[0] = firstIngId;
			_subIds[1] = secondIngId;
			MarkVisualDirty();
		}

		public override string GetId()
		{
			return _subIds[0] + SubSeparator + _subIds[1];
		}

		public override string ReferenceIdOf(string longId)
		{
			string[] array = (longId ?? string.Empty).Split(new string[1] { SubSeparator }, StringSplitOptions.None);
			if (array.Length < 2)
			{
				return longId;
			}
			return FlexibleKFC.BareIdOf(array[0]) + SubSeparator + FlexibleKFC.BareIdOf(array[1]);
		}

		public override void Display(string longId)
		{
			string[] array = (longId ?? string.Empty).Split(new string[1] { SubSeparator }, StringSplitOptions.None);
			if (array.Length >= 2)
			{
				_subIds[0] = array[0];
				_subIds[1] = array[1];
			}
			DisplayCombo();
		}

		private void DisplayCombo()
		{
			for (int i = 0; i < displays.Length && i < _subIds.Length; i++)
			{
				if (BurgerPieceTable.TryGetChickenState(BurgerPieceTable.ChickenPiecesOfId(_subIds[i]), out var typeCode, out var spicy, out var cheese, out var chives))
				{
					displays[i].Display(typeCode, spicy ? 1 : 0, cheese, chives);
				}
			}
			base.transform.DOComplete();
			base.transform.Appear(0.1f);
		}

		protected override void ResetItem()
		{
			_subIds[0] = null;
			_subIds[1] = null;
		}

		public override void AddIng(string ingId)
		{
		}

		protected override void RefreshVisual()
		{
			DisplayCombo();
		}

		public override List<string> GetIngIds(string longId)
		{
			return new List<string>();
		}
	}
}
