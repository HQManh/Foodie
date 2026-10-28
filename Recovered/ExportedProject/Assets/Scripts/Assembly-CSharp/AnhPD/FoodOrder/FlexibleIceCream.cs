using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleIceCream : FlexibleDragItem, IFlexiblePieceItem, IIceCreamPieceView
	{
		[SerializeField]
		private IceCreamDish dish;

		[SerializeField]
		private IceCreamPieceDisplay display;

		[Tooltip("Góc nhìn chéo, thấp hơn cho ảnh order: bật thay mainView khi InitForDisplay. Trống = order dùng hình gameplay.")]
		[SerializeField]
		private IceCreamPieceDisplay orderDisplay;

		[Tooltip("Gốc chứa hình gameplay, tắt khi đang ở góc nhìn order.")]
		[SerializeField]
		private GameObject mainView;

		private PieceSet _pieces;

		private readonly List<int> _scoops;

		public override PieceSet Pieces => default;

		private string PiecesDebug => null;

		public override void InitForDisplay(Transform root, float scaleRation)
		{
		}

		public override void InitForDrag()
		{
		}

		private void SetOrderView(bool on)
		{
		}

		public override string GetId()
		{
			return null;
		}

		public override void Display(string longId)
		{
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
		}

		public override void OpenInit(string ingId)
		{
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return default;
		}

		public override PieceSet PredictOpenPieces(string ingId)
		{
			return default;
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

		public override string ReferenceIdOf(string longId)
		{
			return null;
		}

		protected override void ResetItem()
		{
		}

		public void Display(PieceSet pieces)
		{
		}

		private void Show(PieceSet pieces)
		{
		}

		private void Redraw()
		{
		}

		private void DrawViews()
		{
		}

		public bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return null;
		}
	}
}
