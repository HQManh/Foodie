using UnityEngine;

namespace TrungKienPack
{
	public interface IPoolingElement
	{
		Transform TF { get; }

		int InstanceID { get; set; }

		void PoolSetup();
	}
}
