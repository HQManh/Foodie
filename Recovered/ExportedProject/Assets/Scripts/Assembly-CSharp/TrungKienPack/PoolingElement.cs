using UnityEngine;

namespace TrungKienPack
{
	public class PoolingElement : MonoBehaviour, IPoolingElement
	{
		private Transform tf;

		public Transform TF => null;

		public int InstanceID { get; set; }

		public virtual void PoolSetup()
		{
		}
	}
}
