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
			return PieceLookup.PiecesOfAnyRole(iconId);
		}

		public virtual string ReferenceIdOf(string longId)
		{
			return longId;
		}

		public void SuspendVisual()
		{
			_visualSuspended = true;
			_visualDirty = false;
		}

		public void ResumeVisual()
		{
			if (_visualSuspended)
			{
				_visualSuspended = false;
				if (_visualDirty)
				{
					_visualDirty = false;
					RefreshVisual();
				}
			}
		}

		protected void MarkVisualDirty()
		{
			if (_visualSuspended)
			{
				_visualDirty = true;
			}
			else
			{
				RefreshVisual();
			}
		}

		protected abstract void RefreshVisual();

		public override void InitForDrag()
		{
			_visualSuspended = false;
			_visualDirty = false;
			ResetItem();
			base.InitForDrag();
		}

		protected abstract void ResetItem();

		public virtual string BuildRandomId(int maxCount = 0)
		{
			return GetId();
		}

		public virtual PieceSet PredictCombinePieces(string firstIngId, string secondIngId)
		{
			return PieceSet.Empty;
		}

		public virtual PieceSet PredictOpenPieces(string ingId)
		{
			return PieceSet.Empty;
		}

		public override void Despawn()
		{
			ResetItem();
			base.Despawn();
		}

		public static string ConvertIdToString(int ingId)
		{
			return ingId.ToString("D2") /* literal recovered by guess */;
		}

		protected virtual bool TryGetIngIdOf<T>(T enumValue, out string id) where T : Enum
		{
			// TODO(unrecovered): generic method body is not present in the pseudocode batch
			id = null;
			return false;
		}

		protected List<T> GetUnlockedEnums<T>() where T : Enum
		{
			List<T> result = new List<T>();
			foreach (T value in Enum.GetValues(typeof(T)))
			{
				if (TryGetIngIdOf(value, out _))
				{
					result.Add(value);
				}
			}
			return result;
		}
	}
}
