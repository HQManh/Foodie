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

		public bool IsValid
		{
			get
			{
				if (!IsClosed && Line != null)
				{
					return Line.CustomerSession == _session;
				}
				return false;
			}
		}

		internal ServeTicket(object owner, FCustomerLine line, List<int> indices)
		{
			Owner = owner;
			Line = line;
			Indices = indices;
			_session = line.CustomerSession;
		}
	}
}
