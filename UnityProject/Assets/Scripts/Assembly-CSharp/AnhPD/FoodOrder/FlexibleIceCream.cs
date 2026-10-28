using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using DG.Tweening;
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

		private readonly List<int> _scoops = new List<int>();

		public override PieceSet Pieces => _pieces;

		private string PiecesDebug => _pieces.ToString((int k) => ((IceCreamPiece)k).ToString());

		public override void InitForDisplay(Transform root, float scaleRation)
		{
			base.InitForDisplay(root, scaleRation);
			SetOrderView(on: true);
		}

		public override void InitForDrag()
		{
			SetOrderView(on: false);
			base.InitForDrag();
		}

		private void SetOrderView(bool on)
		{
			if (orderDisplay != null)
			{
				orderDisplay.gameObject.SetActive(on);
				if (mainView != null)
				{
					mainView.SetActive(!on);
				}
			}
		}

		public override string GetId()
		{
			if (dish == IceCreamDish.Cone)
			{
				return IceCreamScoopOrder.BuildId(id, _pieces, _scoops);
			}
			return FlexiblePieceId.Build(id, _pieces);
		}

		public override void Display(string longId)
		{
			_scoops.Clear();
			IceCreamScoopOrder.ReadOrder(longId, _scoops);
			_pieces = FlexiblePieceId.PiecesOf(id, longId);
			Redraw();
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			_pieces = PredictCombinePieces(firstIngId, secondIngId);
			_scoops.Clear();
			IceCreamScoopOrder.ReadOrder(firstIngId, _scoops);
			IceCreamScoopOrder.ReadOrder(secondIngId, _scoops);
			MarkVisualDirty();
		}

		public override void OpenInit(string ingId)
		{
			_pieces = PredictOpenPieces(ingId);
			_scoops.Clear();
			IceCreamScoopOrder.ReadOrder(ingId, _scoops);
			MarkVisualDirty();
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return IceCreamPieceTable.PredictStart(dish, firstIngId, secondIngId);
		}

		public override PieceSet PredictOpenPieces(string ingId)
		{
			return IceCreamPieceTable.PredictOpen(dish, ingId);
		}

		public override void AddIng(string ingId)
		{
			if (IceCreamPieceTable.CanDishAdd(dish, _pieces, ingId) && IceCreamPieceTable.TryGetPiece(ingId, out var piece))
			{
				_pieces = _pieces.Add((int)piece, 1);
				if (IceCreamPieceTable.IsFlavor(piece))
				{
					_scoops.Add((int)piece);
				}
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			Redraw();
		}

		public override List<string> GetIngIds(string longId)
		{
			List<string> list = PieceLookup.PreparedIdsOf(FlexiblePieceId.PiecesOf(id, longId), IceCreamPieceTable.LayerOf);
			if (dish == IceCreamDish.Milkshake)
			{
				for (int i = 0; i < list.Count; i++)
				{
					if (IceCreamPieceTable.TryGetPiece(list[i], out var piece) && IceCreamPieceTable.IsFlavor(piece) && IceCreamPieceTable.TryGetRefinedOf(piece, out var refinedId))
					{
						list[i] = refinedId;
					}
				}
			}
			return list;
		}

		public override string ReferenceIdOf(string longId)
		{
			PieceSet kept = PieceSet.Empty;
			foreach (var (kind, count) in FlexiblePieceId.PiecesOf(id, longId))
			{
				if (IceCreamPieceTable.LayerOf(kind) < 2)
				{
					kept = kept.Add(kind, count);
				}
			}
			if (dish == IceCreamDish.Cone)
			{
				List<int> order = new List<int>();
				IceCreamScoopOrder.ReadOrder(longId, order);
				return IceCreamScoopOrder.BuildId(id, kept, order);
			}
			return FlexiblePieceId.Build(id, kept);
		}

		protected override void ResetItem()
		{
			_pieces = PieceSet.Empty;
			_scoops.Clear();
			DrawViews();
		}

		public void Display(PieceSet pieces)
		{
			_scoops.Clear();
			Show(pieces);
		}

		private void Show(PieceSet pieces)
		{
			_pieces = pieces;
			Redraw();
		}

		private void Redraw()
		{
			DrawViews();
			base.transform.DOComplete();
			base.transform.Appear(0.1f);
		}

		private void DrawViews()
		{
			if (display != null)
			{
				display.Display(_pieces, _scoops);
			}
			if (orderDisplay != null)
			{
				orderDisplay.Display(_pieces, _scoops);
			}
		}

		public bool CanShow(IceCreamPiece piece)
		{
			if (display == null)
			{
				return false;
			}
			if (!display.CanShow(piece))
			{
				return false;
			}
			if (orderDisplay == null)
			{
				return true;
			}
			return orderDisplay.CanShow(piece);
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, IceCreamPieceTable.Roll(dish, maxCount, CanShow));
		}
	}
}
