using System;

namespace CookingGraph;

[Serializable]
public sealed class CustomerOrderValidationIssue
{
	public string code;

	public int customerIndex;

	public int dishIndex;

	public int groupId;

	public int minimum;

	public int maximum;

	public int actual;

	public string message;
}
