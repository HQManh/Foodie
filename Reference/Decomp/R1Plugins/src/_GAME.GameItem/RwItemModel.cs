using System;

namespace _GAME.GameItem;

[Serializable]
public class RwItemModel
{
	[Serializable]
	public class JsonModel
	{
		public int t;

		public int v;

		public RwItemModel ToModel(RwItemModel model = null)
		{
			return null;
		}
	}

	public RwItemType type;

	public int value;

	public RwItemModel()
	{
	}

	public RwItemModel(RwItemType type, int value)
	{
	}

	public RwItemModel Copy(RwItemModel copy = null)
	{
		return null;
	}

	public void CopyFrom(RwItemModel other)
	{
	}

	public void FromJson(JsonModel json)
	{
	}

	public JsonModel ToJson(JsonModel json = null)
	{
		return null;
	}
}
