using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class CompositeProcessData
{
	public string id;

	public string kind;

	public string mode;

	public CompositeNodeAsset input;

	public CompositeNodeAsset output;

	public CompositeNodeAsset recipeSource;

	public ToolNodeAsset tool;

	public bool assemblyOnly;

	public List<CompositeVariantData> variants;
}
