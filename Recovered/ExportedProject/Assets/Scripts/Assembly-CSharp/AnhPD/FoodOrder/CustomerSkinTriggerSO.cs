using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class CustomerSkinTriggerSO : ScriptableObject
	{
		[Tooltip("When several triggers are active, the highest wins. Events sit above weather.")]
		[SerializeField]
		private int priority;

		public int Priority => 0;

		public abstract bool IsActive(in SkinContext context);
	}
}
