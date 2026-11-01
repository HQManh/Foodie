using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ServeService
	{
		private readonly List<ServeTicket> _tickets = new List<ServeTicket>();

		public bool TryReserve(object owner, FCustomerLine line, DragItem item, out ServeTicket ticket)
		{
			ticket = null;
			if (line == null || item == null)
			{
				return false;
			}
			HashSet<int> blocked = BlockedFor(line, null);
			List<int> indices = line.GetMatchingIndices(item, blocked);
			if (indices == null || indices.Count == 0)
			{
				return false;
			}
			ticket = Open(owner, line, indices);
			return true;
		}

		public bool TryReserveOrder(object owner, FCustomerLine line, int orderIndex, out ServeTicket ticket)
		{
			ticket = null;
			if (line == null)
			{
				return false;
			}
			List<int> open = line.GetOpenOrderIndices();
			if (open == null || !open.Contains(orderIndex))
			{
				return false;
			}
			if (IsReserved(line, orderIndex))
			{
				return false;
			}
			List<int> indices = new List<int> { orderIndex };
			ticket = Open(owner, line, indices);
			return true;
		}

		public bool CanReserve(FCustomerLine line, DragItem item)
		{
			if (line == null || item == null)
			{
				return false;
			}
			HashSet<int> blocked = BlockedFor(line, null);
			return line.CanAccept(item, blocked);
		}

		public bool CanDeliver(ServeTicket ticket, DragItem item)
		{
			if (ticket == null || !ticket.IsValid)
			{
				return false;
			}
			FCustomerLine line = ticket.Line;
			if (line == null)
			{
				return false;
			}
			HashSet<int> blocked = BlockedFor(line, ticket);
			return line.CanAccept(item, blocked);
		}

		public bool Deliver(ServeTicket ticket, DragItem item, Action onCorrect = null)
		{
			if (!CanDeliver(ticket, item))
			{
				Release(ticket);
				return false;
			}
			FCustomerLine line = ticket.Line;
			HashSet<int> blocked = BlockedFor(line, ticket);
			Release(ticket);
			bool correct = false;
			line.CompareData(item, () =>
			{
				correct = true;
				onCorrect?.Invoke();
			}, null, blocked);
			return correct;
		}

		public bool CanDeliverOrder(ServeTicket ticket)
		{
			if (ticket == null || !ticket.IsValid)
			{
				return false;
			}
			if (ticket.Indices == null || ticket.Indices.Count < 1)
			{
				return false;
			}
			FCustomerLine line = ticket.Line;
			if (line == null || !line.IsCustomerReady)
			{
				return false;
			}
			List<int> open = line.GetOpenOrderIndices();
			if (open == null)
			{
				return false;
			}
			return open.Contains(ticket.Indices[0]);
		}

		public bool DeliverOrder(ServeTicket ticket)
		{
			bool completed = false;
			if (ticket != null && ticket.IsValid && ticket.Indices != null && ticket.Indices.Count > 0 && ticket.Line != null)
			{
				completed = ticket.Line.CompleteOrderAt(ticket.Indices[0]);
			}
			Release(ticket);
			if (completed) CustomerLineController.NotifyDishAccepted();
			return completed;
		}

		public void Release(ServeTicket ticket)
		{
			if (ticket == null || ticket.IsClosed)
			{
				return;
			}
			ticket.IsClosed = true;
			_tickets.Remove(ticket);
		}

		public bool IsReserved(FCustomerLine line, int orderIndex)
		{
			Prune();
			foreach (ServeTicket ticket in _tickets)
			{
				if (ticket.Line == line && ticket.Indices.Contains(orderIndex))
				{
					return true;
				}
			}
			return false;
		}

		public bool HasReservation(FCustomerLine line)
		{
			Prune();
			foreach (ServeTicket ticket in _tickets)
			{
				if (ticket.Line == line)
				{
					return true;
				}
			}
			return false;
		}

		public string BuildReport()
		{
			// TODO(unrecovered): the report line formats and separators are string constants that are not recovered
			return null;
		}

		private ServeTicket Open(object owner, FCustomerLine line, List<int> indices)
		{
			ServeTicket ticket = new ServeTicket(owner, line, indices);
			_tickets.Add(ticket);
			return ticket;
		}

		private HashSet<int> BlockedFor(FCustomerLine line, ServeTicket except)
		{
			Prune();
			HashSet<int> blocked = null;
			foreach (ServeTicket ticket in _tickets)
			{
				if (ticket == except || ticket.Line != line)
				{
					continue;
				}
				if (blocked == null)
				{
					blocked = new HashSet<int>();
				}
				blocked.UnionWith(ticket.Indices);
			}
			return blocked;
		}

		private void Prune()
		{
			for (int i = _tickets.Count - 1; i >= 0; i--)
			{
				ServeTicket ticket = _tickets[i];
				if (!ticket.IsValid)
				{
					ticket.IsClosed = true;
					_tickets.RemoveAt(i);
				}
			}
		}
	}
}
