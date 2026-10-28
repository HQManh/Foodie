using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ServeService
	{
		private readonly List<ServeTicket> _tickets;

		public bool TryReserve(object owner, FCustomerLine line, DragItem item, out ServeTicket ticket)
		{
			ticket = null;
			return false;
		}

		public bool TryReserveOrder(object owner, FCustomerLine line, int orderIndex, out ServeTicket ticket)
		{
			ticket = null;
			return false;
		}

		public bool CanReserve(FCustomerLine line, DragItem item)
		{
			return false;
		}

		public bool CanDeliver(ServeTicket ticket, DragItem item)
		{
			return false;
		}

		public bool Deliver(ServeTicket ticket, DragItem item, Action onCorrect = null)
		{
			return false;
		}

		public bool CanDeliverOrder(ServeTicket ticket)
		{
			return false;
		}

		public bool DeliverOrder(ServeTicket ticket)
		{
			return false;
		}

		public void Release(ServeTicket ticket)
		{
		}

		public bool IsReserved(FCustomerLine line, int orderIndex)
		{
			return false;
		}

		public bool HasReservation(FCustomerLine line)
		{
			return false;
		}

		public string BuildReport()
		{
			return null;
		}

		private ServeTicket Open(object owner, FCustomerLine line, List<int> indices)
		{
			return null;
		}

		private HashSet<int> BlockedFor(FCustomerLine line, ServeTicket except)
		{
			return null;
		}

		private void Prune()
		{
		}
	}
}
