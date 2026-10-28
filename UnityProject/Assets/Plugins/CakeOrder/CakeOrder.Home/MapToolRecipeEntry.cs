using CakeOrder.DataSO;

namespace CakeOrder.Home
{

public readonly struct MapToolRecipeEntry
{
	public readonly MapToolRecipeEntryKind kind;

	public readonly string id;

	public readonly CakeToolSO toolSO;

	public MapToolRecipeEntry(MapToolRecipeEntryKind kind, string id, CakeToolSO toolSO = null)
	{
		this.kind = MapToolRecipeEntryKind.Tool;
		this.id = null;
		this.toolSO = null;
	}
}
}
