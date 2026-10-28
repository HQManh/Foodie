using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RecipeComponent
	{
		public string id;

		[Header("Display")]
		public RcDisplayConfig displayConfig;

		private string SyncButtonLabel => null;

		protected virtual bool HasSourceSO => false;

		public void SyncOrCreate()
		{
		}

		protected virtual void CreateSourceSO()
		{
		}

		public virtual void Sync()
		{
		}

		protected static void PushToSourceSO(ScriptableObject asset, string id, Sprite icon)
		{
		}

		protected T CreateSourceAsset<T>() where T : ScriptableObject
		{
			return null;
		}
	}
}
