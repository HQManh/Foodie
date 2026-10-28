using System;

namespace CookingGraph.Execution;

public interface ICookingFlightPresentation
{
	bool TryStart(CookingTransferSnapshot flight, Action arrived, out ICookingFlightMotion motion, out string error);
}
