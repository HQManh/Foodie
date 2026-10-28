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

		private string SyncButtonLabel => HasSourceSO ? "Sync" /* literal recovered by guess */ : "Create" /* literal recovered by guess */;

		protected virtual bool HasSourceSO => false;

		public void SyncOrCreate()
		{
			if (HasSourceSO)
			{
				Sync();
			}
			else
			{
				CreateSourceSO();
			}
		}

		protected virtual void CreateSourceSO()
		{
		}

		public virtual void Sync()
		{
			if (displayConfig != null)
			{
				displayConfig.id = id;
			}
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
