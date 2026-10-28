namespace CookingGraph.Execution;

public readonly struct CookingTransferRequest
{
	public CookingEndpoint Source { get; }

	public CookingEndpoint Target { get; }

	public long UnitId { get; }

	public CookingTransferRequest(CookingEndpoint source, CookingEndpoint target, long unitId)
	{
		Source = default(CookingEndpoint);
		Target = default(CookingEndpoint);
		UnitId = 0L;
	}
}
