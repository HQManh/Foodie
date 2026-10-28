using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorColumn
	{
		public readonly ConveyorIngredientSource Source = new ConveyorIngredientSource();

		public float CenterX;

		private ConveyorBundle _peeked;

		public bool HasPendingSpawn
		{
			get
			{
				if (_peeked == null)
				{
					return Source.HasNext;
				}
				return true;
			}
		}

		public void AppendPending(List<string> result)
		{
			if (_peeked != null && _peeked.Items != null)
			{
				IngredientState[] items = _peeked.Items;
				foreach (IngredientState ingredientState in items)
				{
					if (ingredientState != null)
					{
						result.Add(ingredientState.id);
					}
				}
			}
			Source.AppendPending(result);
		}

		public void AppendPendingBundles(List<ConveyorBundle> result)
		{
			if (_peeked != null)
			{
				result.Add(_peeked);
			}
			Source.AppendPendingBundles(result);
		}

		public ConveyorBundle Peek(int randomSlotSize)
		{
			if (_peeked == null)
			{
				if (Source.UsesBundles)
				{
					return Source.PeekNext();
				}
				if (Source.HasNext)
				{
					List<IngredientState> list = Source.TakeNext(randomSlotSize);
					if (list.Count != 0)
					{
						_peeked = new ConveyorBundle
						{
							Items = list.ToArray(),
							Width = 1,
							Height = list.Count
						};
						return _peeked;
					}
				}
				return null;
			}
			return _peeked;
		}

		public ConveyorBundle Take()
		{
			if (_peeked == null)
			{
				if (Source.UsesBundles)
				{
					return Source.TakeNextBundle();
				}
				return null;
			}
			ConveyorBundle peeked = _peeked;
			_peeked = null;
			return peeked;
		}

		public void PushFront(ConveyorBundle bundle)
		{
			FlushPeeked();
			Source.PushFrontBundles(new ConveyorBundle[1] { bundle });
		}

		public void FlushPeeked()
		{
			if (_peeked != null)
			{
				ConveyorBundle peeked = _peeked;
				_peeked = null;
				Source.PushFrontBundles(new ConveyorBundle[1] { peeked });
			}
		}

		public bool DemoteNextWidth(int randomSlotSize)
		{
			ConveyorBundle conveyorBundle = Peek(randomSlotSize);
			if (conveyorBundle == null)
			{
				return false;
			}
			if (conveyorBundle.Width < 2)
			{
				return false;
			}
			conveyorBundle.Width = 1;
			int num = 1;
			if (conveyorBundle.Items != null)
			{
				num = conveyorBundle.Items.Length;
			}
			if (num < 2)
			{
				num = 1;
			}
			conveyorBundle.Height = num;
			return true;
		}

		public void SetCenterX(float x)
		{
			CenterX = x;
		}
	}
}
