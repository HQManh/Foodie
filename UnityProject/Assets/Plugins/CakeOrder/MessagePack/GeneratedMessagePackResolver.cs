using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using MessagePack.Formatters;

namespace MessagePack
{

internal class GeneratedMessagePackResolver : IFormatterResolver
{
	private static class FormatterCache<T>
	{
		internal static readonly IMessagePackFormatter<T> Formatter;

		static FormatterCache()
		{
		}
	}

	private static class GeneratedMessagePackResolverGetFormatterHelper
	{
		private static readonly Dictionary<Type, int> closedTypeLookup = new Dictionary<Type, int>();

		internal static object GetFormatter(Type t)
		{
			return null;
		}
	}

	internal class CakeOrder
	{
		internal class SaveProfile
		{
			internal class PlayerMapLevelProgressDataManager
			{
				internal sealed class DayResultFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.DayResult>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.DayResult value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.DayResult Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class MapDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class MapLevelDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapLevelData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapLevelData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.MapLevelData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class PetAssistantDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.PetAssistantData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.PetAssistantData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.PetAssistantData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class RawDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.RawData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.RawData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.RawData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class ToolDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.ToolData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.ToolData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerMapLevelProgressDataManager.ToolData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}
			}

			internal class PlayerProfileDataManager
			{
				internal sealed class RawDataFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerProfileDataManager.RawData>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerProfileDataManager.RawData value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerProfileDataManager.RawData Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}

				internal sealed class SaveDataPackFormatter : IMessagePackFormatter<global::CakeOrder.SaveProfile.PlayerProfileDataManager.SaveDataPack>, IMessagePackFormatter
				{
					public void Serialize(ref MessagePackWriter writer, global::CakeOrder.SaveProfile.PlayerProfileDataManager.SaveDataPack value, MessagePackSerializerOptions options)
					{
					}

					public global::CakeOrder.SaveProfile.PlayerProfileDataManager.SaveDataPack Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
					{
						return null;
					}
				}
			}

			internal sealed class LevelStateFormatter : IMessagePackFormatter<LevelState>, IMessagePackFormatter
			{
				public void Serialize(ref MessagePackWriter writer, LevelState value, MessagePackSerializerOptions options)
				{
				}

				public LevelState Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
				{
					return LevelState.Locked;
				}
			}

			internal sealed class MapStateFormatter : IMessagePackFormatter<MapState>, IMessagePackFormatter
			{
				public void Serialize(ref MessagePackWriter writer, MapState value, MessagePackSerializerOptions options)
				{
				}

				public MapState Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
				{
					return MapState.Hidden;
				}
			}
		}

		internal class DataSO
		{
			internal sealed class PetAssistantPositionTypeFormatter : IMessagePackFormatter<PetAssistantPositionType>, IMessagePackFormatter
			{
				public void Serialize(ref MessagePackWriter writer, PetAssistantPositionType value, MessagePackSerializerOptions options)
				{
				}

				public PetAssistantPositionType Deserialize(ref MessagePackReader reader, MessagePackSerializerOptions options)
				{
					return (PetAssistantPositionType)0;
				}
			}
		}
	}

	public static readonly IFormatterResolver Instance;

	private GeneratedMessagePackResolver()
	{
	}

	public IMessagePackFormatter<T> GetFormatter<T>()
	{
		return null;
	}
}
}
