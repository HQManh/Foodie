using UnityEngine;

namespace TrungKienPack
{
	public class PoolingElement : MonoBehaviour, IPoolingElement
	{
		private Transform tf;

		public Transform TF
		{
			get
			{
				if (tf == null)
				{
					tf = transform;
				}
				return tf;
			}
		}

		public int InstanceID { get; set; }

		public virtual void PoolSetup()
		{
		}
	}
}
