using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.IO.Compression;
using System.Text;
using System.Text.RegularExpressions;
using CookingGraph;

namespace CakeOrder.InGame
{

// Replacement for CustomerOrderTranslator.TryParse, IngredientQueueTranslator.TryParse and LevelStringCompression.Decode. The game's
// managed DLLs are metadata-only shells (IL2CPP build), so those methods do nothing; this rebuilds them from the decompiled code.
// The authoring-time validation passes of the original (group quantities, minimum quantities) are not reproduced.
//
// Customer order string:  customer|customer|...      customer = type;wait;weather;dish,dish,...[;staff[;characterIndex]]
//                         dish = {c<id>:member.member...}[#effect:param...]   member = <ingredient id> | {c...} | {g...}
// Ingredient queue string: columns$combinedGroups$linkedGroups
//                          columns = column%column...   column = item,item,...   item = <id>[:<amount>][#effect:param...]
//                          groups = group;group...      group = x-y,x-y,...
public static class LevelDataParser
{
	private const string CompressedPrefix = "z1_";

	private const int MaxDecodedBytes = 1048576;

	private class Cursor
	{
		public int pos;
	}

	public static string Decode(string text)
	{
		if (text == null)
		{
			throw new FormatException("Level string is null");
		}
		if (text.StartsWith(CompressedPrefix, StringComparison.Ordinal))
		{
			string body = text.Substring(CompressedPrefix.Length);
			if (Regex.IsMatch(body, "\\A[A-Za-z0-9_-]+\\z") && (body.Length & 0x80000003) != 1)
			{
				body = body.Replace('-', '+').Replace('_', '/');
				body = body.PadRight((body.Length + 3) / 4 * 4, '=');
				byte[] compressed = Convert.FromBase64String(body);
				using (MemoryStream input = new MemoryStream(compressed))
				using (DeflateStream deflate = new DeflateStream(input, CompressionMode.Decompress))
				using (MemoryStream output = new MemoryStream())
				{
					byte[] buffer = new byte[4096];
					int read;
					while ((read = deflate.Read(buffer, 0, buffer.Length)) > 0)
					{
						if (output.Length + read > MaxDecodedBytes)
						{
							throw new InvalidDataException("Decompressed level string is too large");
						}
						output.Write(buffer, 0, read);
					}
					return new UTF8Encoding(false, true).GetString(output.ToArray());
				}
			}
			throw new FormatException("Malformed compressed level string");
		}
		if (Regex.IsMatch(text, "^z\\d+_"))
		{
			throw new FormatException("Unsupported level compression version");
		}
		return text;
	}

	private static int ParseInt(string token, string context)
	{
		if (!string.IsNullOrEmpty(token) && int.TryParse(token, NumberStyles.Integer, CultureInfo.InvariantCulture, out var value))
		{
			return value;
		}
		throw new FormatException("Invalid integer \"" + token + "\" in \"" + context + "\"");
	}

	private static void Fail(string message, string context)
	{
		throw new FormatException(message + " (in \"" + context + "\")");
	}

	public static bool TryParseCustomerOrder(string text, CookingGraphAsset graph, IReadOnlyList<string> characterIds, out CustomerOrderData data, out string error)
	{
		data = null;
		error = null;
		try
		{
			if (graph == null)
			{
				throw new ArgumentNullException("graph");
			}
			data = ParseCustomerOrder(text, characterIds);
			foreach (CustomerData customer in data.customers)
			{
				foreach (DishOrderData dish in customer.dishes)
				{
					ResolveAssets(dish.root, graph, text);
				}
			}
			return true;
		}
		catch (Exception ex)
		{
			error = ex.Message;
			data = null;
			return false;
		}
	}

	private static CustomerOrderData ParseCustomerOrder(string raw, IReadOnlyList<string> characterIds)
	{
		string text = Decode(raw);
		CustomerOrderData data = new CustomerOrderData { customers = new List<CustomerData>() };
		if (string.IsNullOrWhiteSpace(text))
		{
			return data;
		}
		foreach (string customerText in text.Split('|'))
		{
			string[] fields = customerText.Split(';');
			if (fields.Length < 4 || fields.Length > 6)
			{
				Fail("Expected 4 to 6 fields per customer but found " + fields.Length, text);
			}
			CustomerData customer = new CustomerData
			{
				dishes = new List<DishOrderData>(),
				typeId = ParseInt(fields[0], text),
				waitTime = ParseInt(fields[1], text),
				weatherEffect = ParseInt(fields[2], text),
				customerId = string.Empty,
			};
			if (!string.IsNullOrEmpty(fields[3]))
			{
				foreach (string dishText in SplitDishes(fields[3], text))
				{
					customer.dishes.Add(ParseDish(dishText, text));
				}
			}
			if (fields.Length > 4 && !string.IsNullOrEmpty(fields[4]))
			{
				customer.hasStaffAmount = true;
				customer.staffAmount = ParseInt(fields[4], text);
			}
			if (fields.Length == 6 && !string.IsNullOrEmpty(fields[5]))
			{
				customer.hasCustomerIndex = true;
				customer.customerIndex = ParseInt(fields[5], text);
				if (characterIds != null && customer.customerIndex >= 0 && customer.customerIndex < characterIds.Count)
				{
					customer.customerId = characterIds[customer.customerIndex] ?? string.Empty;
				}
			}
			data.customers.Add(customer);
		}
		return data;
	}

	private static IEnumerable<string> SplitDishes(string dishes, string context)
	{
		int depth = 0;
		int start = 0;
		for (int i = 0; i < dishes.Length; i++)
		{
			char c = dishes[i];
			if (c == '{')
			{
				depth++;
			}
			else if (c == '}')
			{
				depth--;
			}
			else if (c == ',' && depth == 0)
			{
				yield return dishes.Substring(start, i - start);
				start = i + 1;
				continue;
			}
			if (depth < 0)
			{
				Fail("Unexpected '}'", context);
			}
		}
		if (depth != 0)
		{
			Fail("Unbalanced dish brackets", context);
		}
		yield return dishes.Substring(start);
	}

	private static DishOrderData ParseDish(string dish, string context)
	{
		int hash = dish.IndexOf('#');
		string nodeText = hash < 0 ? dish : dish.Substring(0, hash);
		string effectsText = hash < 0 ? string.Empty : dish.Substring(hash);
		Cursor cursor = new Cursor();
		OrderMemberData root = ParseNode(nodeText, cursor, dish);
		if (cursor.pos != nodeText.Length)
		{
			Fail("Unexpected trailing \"" + nodeText.Substring(cursor.pos) + "\"", context);
		}
		if ((int)root.kind != 1)
		{
			Fail("A dish's outermost bracket must be a composite", context);
		}
		List<EffectData> effects = effectsText.Length == 0 ? new List<EffectData>() : ParseEffectToken("x" + effectsText, context).effects;
		return new DishOrderData { root = root, effects = effects };
	}

	private static int ReadDigits(string s, Cursor cursor, string context)
	{
		int start = cursor.pos;
		while (cursor.pos < s.Length && char.IsDigit(s[cursor.pos]))
		{
			cursor.pos++;
		}
		return cursor.pos == start ? -1 : ParseInt(s.Substring(start, cursor.pos - start), context);
	}

	private static OrderMemberData ParseNode(string s, Cursor cursor, string context)
	{
		if (cursor.pos >= s.Length || s[cursor.pos] != '{')
		{
			Fail("Expected '{'", context);
		}
		cursor.pos++;
		if (cursor.pos >= s.Length || (s[cursor.pos] != 'c' && s[cursor.pos] != 'g'))
		{
			Fail("Expected 'c' or 'g' after '{'", context);
		}
		int kind = s[cursor.pos] == 'c' ? 1 : 2;
		cursor.pos++;
		int id = ReadDigits(s, cursor, context);
		if (id < 0)
		{
			Fail("Expected an id after node kind", context);
		}
		if (cursor.pos >= s.Length || s[cursor.pos] != ':')
		{
			Fail("Expected ':' after node id", context);
		}
		cursor.pos++;
		OrderMemberData node = new OrderMemberData { kind = (OrderMemberKind)kind, id = id, index = id, members = new List<OrderMemberData>() };
		while (true)
		{
			if (cursor.pos >= s.Length)
			{
				Fail("Expected a member", context);
			}
			if (s[cursor.pos] == '{')
			{
				node.members.Add(ParseNode(s, cursor, context));
			}
			else
			{
				int leaf = ReadDigits(s, cursor, context);
				if (leaf < 0)
				{
					Fail("Expected an ingredient id or '{'", context);
				}
				node.members.Add(new OrderMemberData { kind = (OrderMemberKind)0, id = leaf, index = leaf, members = new List<OrderMemberData>() });
			}
			if (cursor.pos < s.Length && s[cursor.pos] == '.')
			{
				cursor.pos++;
				continue;
			}
			break;
		}
		if (cursor.pos >= s.Length || s[cursor.pos] != '}')
		{
			Fail("Expected '}' or '.'", context);
		}
		cursor.pos++;
		return node;
	}

	private static void ResolveAssets(OrderMemberData member, CookingGraphAsset graph, string context)
	{
		if (member == null)
		{
			return;
		}
		member.index = member.id;
		CookingNodeAsset asset = null;
		CookingIdTables tables = graph.idTable;
		if (tables != null)
		{
			switch ((int)member.kind)
			{
			case 0:
				asset = ElementAt(tables.ingredient, member.id);
				break;
			case 1:
				asset = ElementAt(tables.composite, member.id);
				break;
			case 2:
				asset = ElementAt(tables.group, member.id);
				break;
			}
		}
		member.asset = asset;
		if (asset == null)
		{
			Fail("Order member (kind " + (int)member.kind + ", id " + member.id + ") does not resolve to a node asset", context);
		}
		if (member.members != null)
		{
			foreach (OrderMemberData child in member.members)
			{
				ResolveAssets(child, graph, context);
			}
		}
	}

	private static T ElementAt<T>(List<T> list, int index) where T : class
	{
		return list != null && index >= 0 && index < list.Count ? list[index] : null;
	}

	private static (string head, List<EffectData> effects) ParseEffectToken(string token, string context)
	{
		string[] parts = token.Split('#');
		List<EffectData> effects = new List<EffectData>();
		for (int i = 1; i < parts.Length; i++)
		{
			string[] sub = parts[i].Split(':');
			if (sub.Length == 0 || string.IsNullOrEmpty(sub[0]))
			{
				Fail("Effect id is empty", context);
			}
			EffectData effect = new EffectData { effectId = ParseInt(sub[0], context), parameters = new List<int>() };
			for (int k = 1; k < sub.Length; k++)
			{
				effect.parameters.Add(ParseInt(sub[k], context));
			}
			effects.Add(effect);
		}
		return (parts[0], effects);
	}

	public static bool TryParseIngredientQueue(string text, CookingGraphAsset graph, out IngredientQueueData data, out string error)
	{
		data = null;
		error = null;
		try
		{
			if (graph == null)
			{
				throw new ArgumentNullException("graph");
			}
			data = ParseIngredientQueue(text);
			foreach (IngredientQueueColumnData column in data.columns)
			{
				foreach (QueueItemData item in column.items)
				{
					if ((int)item.kind == 0)
					{
						int index = item.id;
						item.index = index;
						IngredientNodeAsset ingredient = graph.idTable != null ? ElementAt(graph.idTable.ingredient, index) : null;
						if (index < 0 || ingredient == null)
						{
							Fail("Ingredient index " + index + " does not resolve to an IngredientNodeAsset", text);
						}
						item.ingredient = ingredient;
					}
					else
					{
						item.ingredient = null;
						item.index = -1;
					}
				}
			}
			return true;
		}
		catch (Exception ex)
		{
			error = ex.Message;
			data = null;
			return false;
		}
	}

	private static IngredientQueueData ParseIngredientQueue(string raw)
	{
		string text = Decode(raw);
		string[] sections = text.Split('$');
		if (sections.Length > 3)
		{
			Fail("Queue string has more than two group sections", text);
		}
		IngredientQueueData data = new IngredientQueueData { columns = new List<IngredientQueueColumnData>(), groups = new List<QueueGroupData>() };
		string columnsText = sections[0];
		if (!string.IsNullOrWhiteSpace(columnsText))
		{
			foreach (string columnText in columnsText.Split('%'))
			{
				IngredientQueueColumnData column = new IngredientQueueColumnData { items = new List<QueueItemData>() };
				if (columnText.Length != 0)
				{
					foreach (string token in columnText.Split(','))
					{
						(string head, List<EffectData> effects) parsed = ParseEffectToken(token, text);
						string[] idAndAmount = parsed.head.Split(':');
						if (idAndAmount.Length > 2)
						{
							Fail("Queue item \"" + token + "\" has too many fields", text);
						}
						int id = ParseInt(idAndAmount[0], text);
						int amount = idAndAmount.Length == 2 && idAndAmount[1].Length > 0 ? ParseInt(idAndAmount[1], text) : 1;
						QueueItemData item = new QueueItemData { id = id };
						if (id == -2)
						{
							item.kind = (QueueItemKind)2;
							item.amount = 0;
							item.index = -1;
							item.effects = new List<EffectData>();
						}
						else
						{
							int kind = 0;
							if (id < 0)
							{
								id = -1;
								amount = 1;
								kind = 1;
							}
							else
							{
								amount = Math.Max(1, amount);
							}
							item.kind = (QueueItemKind)kind;
							item.amount = amount;
							item.index = id;
							item.effects = parsed.effects;
						}
						column.items.Add(item);
					}
				}
				data.columns.Add(column);
			}
		}
		if (sections.Length >= 2)
		{
			data.groups.AddRange(ParseGroups(sections[1], QueueGroupKind.Combined, text));
			if (sections.Length > 2)
			{
				data.groups.AddRange(ParseGroups(sections[2], QueueGroupKind.Linked, text));
			}
		}
		return data;
	}

	private static List<QueueGroupData> ParseGroups(string text, QueueGroupKind kind, string context)
	{
		List<QueueGroupData> groups = new List<QueueGroupData>();
		if (string.IsNullOrWhiteSpace(text))
		{
			return groups;
		}
		foreach (string groupText in text.Split(';'))
		{
			QueueGroupData group = new QueueGroupData { kind = kind, cells = new List<QueueCellData>() };
			foreach (string cellText in groupText.Split(','))
			{
				string[] xy = cellText.Split('-');
				if (xy.Length != 2 || xy[0].Length == 0 || xy[1].Length == 0)
				{
					Fail("Queue group cell \"" + cellText + "\" must look like x-y", context);
				}
				int x = ParseInt(xy[0], context);
				int y = ParseInt(xy[1], context);
				if (x < 0 || y < 0)
				{
					Fail("Queue group cell coordinates must not be negative", context);
				}
				group.cells.Add(new QueueCellData { x = x, y = y });
			}
			groups.Add(group);
		}
		return groups;
	}
}
}
