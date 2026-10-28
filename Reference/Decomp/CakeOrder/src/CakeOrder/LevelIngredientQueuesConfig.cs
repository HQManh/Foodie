using System;
using UnityEngine;

namespace CakeOrder;

[Obsolete("Use graph system instead")]
public class LevelIngredientQueuesConfig : MonoBehaviour
{
	[SerializeField]
	private IngredientQueueInLevel _ingredientQueuesConfig;

	public IngredientQueueInLevel IngredientQueuesConfig => null;

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
	}

	private IngredientQueueInLevel ParseLevel(ReadOnlySpan<char> levelStr)
	{
		return null;
	}

	private SingleIngredientQueueInLevel[] ParseQueues(ReadOnlySpan<char> queuesStr)
	{
		return null;
	}

	private IngredientSlotGroup[] ParseSlotGroup(ReadOnlySpan<char> listStr)
	{
		return null;
	}

	private static bool TryParseItem(ReadOnlySpan<char> itemStr, out IngredientData item)
	{
		item = default(IngredientData);
		return false;
	}

	private static bool TryParseStatus(ReadOnlySpan<char> statusStr, out int status, out int param)
	{
		status = default(int);
		param = default(int);
		return false;
	}
}
