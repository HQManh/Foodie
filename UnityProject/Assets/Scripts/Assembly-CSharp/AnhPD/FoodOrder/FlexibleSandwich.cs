using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleSandwich : FlexibleDragItem, IFlexiblePieceItem, ISandwichPieceView
	{
		[SerializeField]
		private SandwichDish dish;

		[SerializeField]
		private SandwichDisplayBase display;

		private PieceSet _pieces;

		public override PieceSet Pieces => _pieces;

		public override float AssembleAnimDuration
		{
			get
			{
				if (display != null)
				{
					return display.AssembleDuration;
				}
				return 0f;
			}
		}

		private string PiecesDebug => _pieces.ToString((int k) => ((SandwichPiece)k).ToString());

		public override void PlayAssembleAnim()
		{
			if (display != null)
			{
				display.PlayAssembleAnim();
			}
		}

		public override bool TryGetVisualBounds(out Bounds bounds)
		{
			if (display != null && display.TryGetBounds(out bounds))
			{
				return true;
			}
			return base.TryGetVisualBounds(out bounds);
		}

		public override string GetId()
		{
			return FlexiblePieceId.Build(id, _pieces);
		}

		public override void Display(string longId)
		{
			_pieces = FlexiblePieceId.PiecesOf(id, longId);
			Redraw();
		}

		public override string ReferenceIdOf(string longId)
		{
			PieceSet keep = PieceSet.Empty;
			foreach (var (kind, count) in FlexiblePieceId.PiecesOf(id, longId))
			{
				if (SandwichPieceTable.LayerOf(dish, kind) < 2)
				{
					keep = keep.Add(kind, count);
				}
			}
			return FlexiblePieceId.Build(id, keep);
		}

		public override void CombineInit(string firstIngId, string secondIngId)
		{
			_pieces = PredictCombinePieces(firstIngId, secondIngId);
			MarkVisualDirty();
		}

		public override void OpenInit(string ingId)
		{
			_pieces = PredictOpenPieces(ingId);
			MarkVisualDirty();
		}

		public override PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return SandwichPieceTable.PredictStart(dish, firstIngId, secondIngId);
		}

		public override PieceSet PredictOpenPieces(string ingId)
		{
			return SandwichPieceTable.PredictOpen(dish, ingId);
		}

		public override void AddIng(string ingId)
		{
			if (SandwichPieceTable.CanDishAdd(dish, _pieces, ingId) && SandwichPieceTable.TryGetPiece(ingId, out var piece))
			{
				_pieces = _pieces.Add((int)piece, 1);
				MarkVisualDirty();
			}
		}

		protected override void RefreshVisual()
		{
			Redraw(playAssemble: true);
		}

		public override List<string> GetIngIds(string longId)
		{
			List<(int kind, int count)> items = new List<(int, int)>();
			foreach (var item in FlexiblePieceId.PiecesOf(id, longId))
			{
				items.Add(item);
			}
			items.Sort(delegate((int kind, int count) a, (int kind, int count) b)
			{
				int num = SandwichPieceTable.LayerOf(dish, a.kind).CompareTo(SandwichPieceTable.LayerOf(dish, b.kind));
				if (num == 0)
				{
					return a.kind.CompareTo(b.kind);
				}
				return num;
			});
			List<string> list = new List<string>();
			foreach (var (kind, count) in items)
			{
				if (SandwichPieceTable.TryGetFormOf(dish, (SandwichPiece)kind, out var ingId) && count > 0)
				{
					for (int i = 0; i < count; i++)
					{
						list.Add(ingId);
					}
				}
			}
			return list;
		}

		protected override void ResetItem()
		{
			_pieces = PieceSet.Empty;
			if (display != null)
			{
				display.Display(_pieces);
			}
		}

		public void Display(PieceSet pieces)
		{
			_pieces = pieces;
			Redraw();
		}

		private void Redraw(bool playAssemble = false)
		{
			if (display != null)
			{
				display.Display(_pieces);
			}
			if (playAssemble && display != null && display.AssembleDuration > 0f)
			{
				display.PlayAssembleAnim();
				return;
			}
			base.transform.DOComplete();
			base.transform.Appear(0.1f);
		}

		public bool CanShow(SandwichPiece piece)
		{
			if (display != null)
			{
				return display.CanShow(piece);
			}
			return false;
		}

		public override string BuildRandomId(int maxCount = 0)
		{
			return FlexiblePieceId.Build(id, SandwichPieceTable.Roll(dish, maxCount, CanShow));
		}
	}
}
