using System;
using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

[Obsolete("Use graph system instead")]
public class LevelIngredientQueuesConfig : MonoBehaviour
{
	[SerializeField]
	private IngredientQueueInLevel _ingredientQueuesConfig;

	public IngredientQueueInLevel IngredientQueuesConfig => _ingredientQueuesConfig;

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
		if (!config.IsEmpty)
		{
			IngredientQueueInLevel level = ParseLevel(config);
			if (level == null)
			{
				Debug.LogWarning("[LevelIngredientQueuesConfig] queue data could not be parsed"); // literal recovered by guess
			}
			else
			{
				_ingredientQueuesConfig = level;
			}
		}
	}

	// "<queues>$<combined slot groups>$<linked slot groups>"
	private IngredientQueueInLevel ParseLevel(ReadOnlySpan<char> levelStr)
	{
		IngredientQueueInLevel level = new IngredientQueueInLevel();
		int part = 0;
		foreach (StringExtension.StringSplitEntry entry in levelStr.SplitNonAlloc('$'))
		{
			switch (part)
			{
			case 0:
				level.encodedQueues = ParseQueues(entry);
				break;
			case 1:
				level.combinedSlotGroups = ParseSlotGroup(entry);
				break;
			case 2:
				level.linkedSlotGroups = ParseSlotGroup(entry);
				break;
			}
			part++;
		}
		return level;
	}

	// queues are separated by '%', the items of one queue by ','
	private SingleIngredientQueueInLevel[] ParseQueues(ReadOnlySpan<char> queuesStr)
	{
		List<SingleIngredientQueueInLevel> queues = new List<SingleIngredientQueueInLevel>();
		foreach (StringExtension.StringSplitEntry queueEntry in queuesStr.SplitNonAlloc('%'))
		{
			List<IngredientData> items = new List<IngredientData>();
			foreach (StringExtension.StringSplitEntry itemEntry in queueEntry.SplitNonAlloc(','))
			{
				if (TryParseItem(itemEntry, out IngredientData item))
				{
					items.Add(item);
				}
			}
			if (items.Count > 0)
			{
				queues.Add(new SingleIngredientQueueInLevel
				{
					encodedQueue = items.ToArray()
				});
			}
		}
		return queues.Count < 1 ? null : queues.ToArray();
	}

	// groups are separated by ';', slots by ',', and a slot reads "x-y"
	private IngredientSlotGroup[] ParseSlotGroup(ReadOnlySpan<char> listStr)
	{
		List<IngredientSlotGroup> groups = new List<IngredientSlotGroup>();
		foreach (StringExtension.StringSplitEntry groupEntry in listStr.SplitNonAlloc(';'))
		{
			List<Vector2Int> slots = new List<Vector2Int>();
			foreach (StringExtension.StringSplitEntry slotEntry in groupEntry.SplitNonAlloc(','))
			{
				int x = -1;
				int y = -1;
				int part = 0;
				foreach (StringExtension.StringSplitEntry coordinate in slotEntry.SplitNonAlloc('-'))
				{
					if (part == 0)
					{
						x = coordinate.TryParseInt(out int parsedX) ? parsedX : -1;
					}
					else if (part == 1)
					{
						y = coordinate.TryParseInt(out int parsedY) ? parsedY : -1;
					}
					else
					{
						break;
					}
					part++;
				}
				if (x > -1 && y > -1)
				{
					slots.Add(new Vector2Int(x, y));
				}
			}
			if (slots.Count > 0)
			{
				groups.Add(new IngredientSlotGroup
				{
					slots = slots.ToArray()
				});
			}
		}
		return groups.ToArray();
	}

	// an item reads "<id>#<status>:<param>#<status>:<param>..."
	private static bool TryParseItem(ReadOnlySpan<char> itemStr, out IngredientData item)
	{
		item = default(IngredientData);
		int id = 0;
		bool hasId = false;
		List<int> statuses = null;
		List<int> statusParams = null;
		int part = 0;
		foreach (StringExtension.StringSplitEntry token in itemStr.SplitNonAlloc('#'))
		{
			part++;
			if (part == 1)
			{
				if (!token.TryParseInt(out id) || (id < 0 && !IngredientData.IsToolId(id)))
				{
					Debug.LogWarning("[LevelIngredientQueuesConfig] invalid ingredient id in '" + itemStr.ToString() + "'"); // literal recovered by guess
					return false;
				}
				hasId = true;
			}
			else if (TryParseStatus(token, out int status, out int param))
			{
				if (statuses == null)
				{
					statuses = new List<int>();
				}
				statuses.Add(status);
				if (statusParams == null)
				{
					statusParams = new List<int>();
				}
				statusParams.Add(param);
			}
		}
		if (!hasId)
		{
			return false;
		}
		item = new IngredientData
		{
			id = id,
			amount = 0,
			statuses = statuses != null ? statuses.ToArray() : null,
			statusParams = statusParams != null ? statusParams.ToArray() : null
		};
		return true;
	}

	// a status reads "<status>:<param>"
	private static bool TryParseStatus(ReadOnlySpan<char> statusStr, out int status, out int param)
	{
		status = -1;
		param = -1;
		int part = 0;
		foreach (StringExtension.StringSplitEntry token in statusStr.SplitNonAlloc(':'))
		{
			if (part == 0)
			{
				if (!token.TryParseInt(out status))
				{
					return false;
				}
			}
			else if (part == 1)
			{
				token.TryParseInt(out param);
			}
			else
			{
				break;
			}
			part++;
		}
		return status >= 0;
	}
}
}
