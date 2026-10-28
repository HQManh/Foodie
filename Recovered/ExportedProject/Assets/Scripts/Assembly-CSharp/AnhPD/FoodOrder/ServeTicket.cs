using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public sealed class ServeTicket
	{
		public readonly object Owner;

		public readonly FCustomerLine Line;

		public readonly List<int> Indices;

		private readonly int _session;

		public bool IsClosed { get; internal set; }

		public bool IsValid => false;

		internal ServeTicket(object owner, FCustomerLine line, List<int> indices)
		{
		}
	}
}
