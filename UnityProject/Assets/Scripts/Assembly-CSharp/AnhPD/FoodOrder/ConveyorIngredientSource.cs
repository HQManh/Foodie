using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorIngredientSource
	{
		private Queue<ConveyorBundle> _bundles;

		public bool UsesBundles => _bundles != null;

		public bool HasNext
		{
			get
			{
				if (_bundles != null)
				{
					return _bundles.Count > 0;
				}
				return false;
			}
		}

		public void SetBundleStack(IEnumerable<ConveyorBundle> bundles)
		{
			_bundles = new Queue<ConveyorBundle>(bundles);
		}

		public void AddToStack(IEnumerable<IngredientState> items)
		{
			if (items == null)
			{
				return;
			}
			if (_bundles == null)
			{
				_bundles = new Queue<ConveyorBundle>();
			}
			foreach (IngredientState item in items)
			{
				if (item != null)
				{
					_bundles.Enqueue(SingleBundle(item));
				}
			}
		}

		public ConveyorBundle PeekNext()
		{
			if (_bundles != null && _bundles.Count > 0)
			{
				return _bundles.Peek();
			}
			return null;
		}

		public ConveyorBundle TakeNextBundle()
		{
			if (_bundles != null && _bundles.Count > 0)
			{
				return _bundles.Dequeue();
			}
			return null;
		}

		public List<IngredientState> TakeNext(int want)
		{
			List<IngredientState> result = new List<IngredientState>(want);
			for (int i = 0; i < want; i++)
			{
				IngredientState item = TakeFirstItem(_bundles);
				if (item == null)
				{
					return result;
				}
				result.Add(item);
			}
			return result;
		}

		public void AppendPending(List<string> result)
		{
			AppendIds(_bundles, result);
		}

		public bool ContainsPending(string id)
		{
			return Contains(_bundles, id);
		}

		public void AppendPendingBundles(List<ConveyorBundle> result)
		{
			AppendBundles(_bundles, result);
		}

		public void PushFront(IReadOnlyList<string> ids)
		{
			if (ids == null || ids.Count == 0)
			{
				return;
			}
			List<ConveyorBundle> list = new List<ConveyorBundle>(ids.Count);
			foreach (string id in ids)
			{
				list.Add(SingleBundle(new IngredientState(id)));
			}
			PushFrontBundles(list);
		}

		public void PushFrontBundles(IReadOnlyList<ConveyorBundle> bundles)
		{
			if (bundles != null && bundles.Count > 0)
			{
				List<ConveyorBundle> list = new List<ConveyorBundle>(bundles);
				if (_bundles != null)
				{
					list.AddRange(_bundles);
				}
				_bundles = new Queue<ConveyorBundle>(list);
			}
		}

		public int PromoteToFront(IReadOnlyList<string> ids)
		{
			if (ids == null || ids.Count == 0)
			{
				return 0;
			}
			int missing = 0;
			foreach (string id in ids)
			{
				if (!TryConsumePending(id))
				{
					missing++;
				}
			}
			PushFront(ids);
			return missing;
		}

		public bool TryPromotePending(string id)
		{
			ConveyorBundle bundle = RemoveContaining(ref _bundles, id);
			if (bundle != null)
			{
				bundle.DataRow = -1;
				PushFrontBundles(new ConveyorBundle[1] { bundle });
			}
			return bundle != null;
		}

		public void ReturnAfterPromoted(ConveyorBundle bundle)
		{
			if (bundle == null || bundle.Items == null || bundle.Items.Length == 0)
			{
				return;
			}
			List<ConveyorBundle> list = ((_bundles == null) ? new List<ConveyorBundle>() : new List<ConveyorBundle>(_bundles));
			list.Insert((list.Count > 0) ? 1 : 0, bundle);
			_bundles = new Queue<ConveyorBundle>(list);
		}

		public bool RotateFrontForPromote(int row)
		{
			if (row > 0 && _bundles != null && row + 1 <= _bundles.Count)
			{
				List<ConveyorBundle> list = new List<ConveyorBundle>(_bundles);
				ConveyorBundle bundle = list[row];
				bundle.DataRow = -1;
				list.RemoveAt(row);
				list.Insert(0, bundle);
				_bundles = new Queue<ConveyorBundle>(list);
				return true;
			}
			return false;
		}

		public bool TryConsumePending(string id)
		{
			return RemoveFirst((ConveyorBundle b) => IsSingle(b) && b.Items[0].id == id) != null;
		}

		public void AppendPendingSingles(List<IngredientState> result)
		{
			if (_bundles == null)
			{
				return;
			}
			foreach (ConveyorBundle bundle in _bundles)
			{
				if (IsTakableSingle(bundle))
				{
					result.Add(bundle.Items[0]);
				}
			}
		}

		public IngredientState TakePendingSingle(string id, out int keyColor)
		{
			ConveyorBundle bundle = RemoveFirst((ConveyorBundle b) => IsTakableSingle(b) && b.Items[0].id == id);
			if (bundle == null)
			{
				keyColor = -1;
				return null;
			}
			keyColor = bundle.KeyColor;
			return bundle.Items[0];
		}

		public void AppendPendingHard(List<IngredientState> result)
		{
			if (_bundles == null)
			{
				return;
			}
			foreach (ConveyorBundle bundle in _bundles)
			{
				if (bundle != null && bundle.Items != null && !IsTakableSingle(bundle))
				{
					IngredientState[] items = bundle.Items;
					for (int i = 0; i < items.Length; i++)
					{
						if (items[i] != null)
						{
							result.Add(items[i]);
						}
					}
				}
			}
		}

		public IngredientState TakePendingFromBundle(string id, out int brokenChainId, out int keyColor)
		{
			brokenChainId = 0;
			keyColor = -1;
			ConveyorBundle found = FindFirst((ConveyorBundle b) => !IsTakableSingle(b) && IndexOfId(b, id) >= 0);
			if (found == null)
			{
				return null;
			}
			int index = IndexOfId(found, id);
			IngredientState taken = found.Items[index];
			found.Items = WithoutAt(found.Items, index);
			if (found.Items.Length == 0)
			{
				RemoveFirst((ConveyorBundle b) => b == found);
				brokenChainId = found.ChainId;
				keyColor = found.KeyColor;
			}
			else
			{
				found.Width = 1;
				found.Height = found.Items.Length;
			}
			return taken;
		}

		private ConveyorBundle FindFirst(Predicate<ConveyorBundle> match)
		{
			if (_bundles == null)
			{
				return null;
			}
			foreach (ConveyorBundle bundle in _bundles)
			{
				if (match(bundle))
				{
					return bundle;
				}
			}
			return null;
		}

		private static IngredientState[] WithoutAt(IngredientState[] items, int index)
		{
			IngredientState[] result = new IngredientState[items.Length - 1];
			int count = 0;
			for (int i = 0; i < items.Length; i++)
			{
				if (i != index)
				{
					result[count++] = items[i];
				}
			}
			return result;
		}

		private ConveyorBundle RemoveFirst(Predicate<ConveyorBundle> match)
		{
			if (_bundles != null && _bundles.Count != 0)
			{
				List<ConveyorBundle> list = new List<ConveyorBundle>(_bundles);
				int index = list.FindIndex(match);
				if (index >= 0)
				{
					ConveyorBundle result = list[index];
					list.RemoveAt(index);
					_bundles = new Queue<ConveyorBundle>(list);
					return result;
				}
			}
			return null;
		}

		private static bool IsSingle(ConveyorBundle bundle)
		{
			if (bundle != null && bundle.Items != null && bundle.Items.Length == 1)
			{
				return bundle.Items[0] != null;
			}
			return false;
		}

		private static bool IsTakableSingle(ConveyorBundle bundle)
		{
			if (bundle != null && bundle.Items != null && bundle.Items.Length == 1 && bundle.Items[0] != null && bundle.Status != ConveyorBundleStatus.Freeze)
			{
				return bundle.ChainId == 0;
			}
			return false;
		}

		private IngredientState Next()
		{
			return TakeFirstItem(_bundles);
		}

		private static IngredientState TakeFirstItem(Queue<ConveyorBundle> queue)
		{
			if (queue != null)
			{
				while (queue.Count > 0)
				{
					ConveyorBundle bundle = queue.Peek();
					if (bundle != null && bundle.Items != null && bundle.Items.Length != 0)
					{
						IngredientState first = bundle.Items[0];
						if (bundle.Items.Length == 1)
						{
							queue.Dequeue();
							return first;
						}
						bundle.Items = Tail(bundle.Items);
						return first;
					}
					queue.Dequeue();
				}
			}
			return null;
		}

		private static IngredientState[] Tail(IngredientState[] items)
		{
			IngredientState[] result = new IngredientState[items.Length - 1];
			Array.Copy(items, 1, result, 0, result.Length);
			return result;
		}

		private ConveyorBundle TakeBundleContaining(string id)
		{
			return RemoveContaining(ref _bundles, id);
		}

		private static ConveyorBundle RemoveContaining(ref Queue<ConveyorBundle> queue, string id)
		{
			if (queue != null && queue.Count != 0)
			{
				List<ConveyorBundle> list = new List<ConveyorBundle>(queue);
				int index = list.FindIndex((ConveyorBundle b) => IndexOfId(b, id) >= 0);
				if (index >= 0)
				{
					ConveyorBundle result = list[index];
					list.RemoveAt(index);
					queue = new Queue<ConveyorBundle>(list);
					return result;
				}
			}
			return null;
		}

		private static ConveyorBundle SingleBundle(IngredientState item)
		{
			return new ConveyorBundle
			{
				Items = new IngredientState[1] { item },
				Status = ConveyorBundleStatus.None,
				Width = 1,
				Height = 1,
				KeyColor = -1,
				DataRow = -1
			};
		}

		private static int IndexOfId(ConveyorBundle bundle, string id)
		{
			if (bundle != null && bundle.Items != null)
			{
				for (int i = 0; i < bundle.Items.Length; i++)
				{
					if (((bundle.Items[i] == null) ? null : bundle.Items[i].id) == id)
					{
						return i;
					}
				}
			}
			return -1;
		}

		private static void AppendBundles(Queue<ConveyorBundle> queue, List<ConveyorBundle> result)
		{
			if (queue == null)
			{
				return;
			}
			foreach (ConveyorBundle bundle in queue)
			{
				if (bundle != null)
				{
					result.Add(bundle);
				}
			}
		}

		private static void AppendIds(Queue<ConveyorBundle> queue, List<string> result)
		{
			if (queue == null)
			{
				return;
			}
			foreach (ConveyorBundle bundle in queue)
			{
				if (bundle != null && bundle.Items != null)
				{
					IngredientState[] items = bundle.Items;
					for (int i = 0; i < items.Length; i++)
					{
						if (items[i] != null)
						{
							result.Add(items[i].id);
						}
					}
				}
			}
		}

		private static bool Contains(Queue<ConveyorBundle> queue, string id)
		{
			if (queue == null)
			{
				return false;
			}
			foreach (ConveyorBundle bundle in queue)
			{
				if (IndexOfId(bundle, id) >= 0)
				{
					return true;
				}
			}
			return false;
		}
	}
}
