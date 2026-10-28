using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public abstract class FlexibleDragItem : DragItem
	{
		private bool _visualSuspended;

		private bool _visualDirty;

		public abstract PieceSet Pieces { get; }

		public abstract void CombineInit(string firstIngId, string secondIngId);

		public virtual void OpenInit(string ingId)
		{
		}

		public abstract void AddIng(string ingId);

		public abstract void Display(string longId);

		public abstract List<string> GetIngIds(string longId);

		public virtual PieceSet IconPiecesOf(string iconId, string longId)
		{
			return default;
		}

		public virtual string ReferenceIdOf(string longId)
		{
			return null;
		}

		public void SuspendVisual()
		{
		}

		public void ResumeVisual()
		{
		}

		protected void MarkVisualDirty()
		{
		}

		protected abstract void RefreshVisual();

		public override void InitForDrag()
		{
		}

		protected abstract void ResetItem();

		public virtual string BuildRandomId(int maxCount = 0)
		{
			return null;
		}

		public virtual PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return default;
		}

		public virtual PieceSet PredictOpenPieces(string ingId)
		{
			return default;
		}

		public override void Despawn()
		{
		}

		public static string ConvertIdToString(int ingId)
		{
			return null;
		}

		protected virtual bool TryGetIngIdOf<T>(T enumValue, out string id) where T : Enum
		{
			id = null;
			return false;
		}

		protected List<T> GetUnlockedEnums<T>() where T : Enum
		{
			return null;
		}
	}
}
