using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack
{
	public class PoolCtrlObject
	{
		private IPoolingElement prefab;

		private Queue<IPoolingElement> queueInActive;

		private List<IPoolingElement> lstActive;

		public PoolCtrlObject(IPoolingElement prefab)
		{
			queueInActive = new Queue<IPoolingElement>();
			lstActive = new List<IPoolingElement>();
			this.prefab = prefab;
		}

		private IPoolingElement Spawn()
		{
			IPoolingElement element;
			if (queueInActive.Count < 1)
			{
				if (prefab == null)
				{
					return null;
				}
				GameObject go = Object.Instantiate(prefab.TF.gameObject);
				element = go.GetComponent<IPoolingElement>();
				if (element == null)
				{
					return null;
				}
			}
			else
			{
				element = queueInActive.Dequeue();
			}
			element.InstanceID = prefab.TF.GetInstanceID();
			element.TF.gameObject.SetActive(true);
			lstActive.Add(element);
			element.PoolSetup();
			return element;
		}

		public T Spawn<T>(Vector3 position, Quaternion rotation) where T : IPoolingElement
		{
			// TODO(unrecovered): no pseudocode for this overload in batch027.
			return default;
		}

		public T Spawn<T>(Vector3 position, Quaternion rotation, Transform parent, bool isWorldSpace) where T : IPoolingElement
		{
			// TODO(unrecovered): no pseudocode for this overload in batch027.
			return default;
		}

		public T Spawn<T>(Transform parent) where T : IPoolingElement
		{
			// TODO(unrecovered): no pseudocode for this overload in batch027.
			return default;
		}

		public void DeSpawn(IPoolingElement element)
		{
			if (element == null || element.TF == null)
			{
				return;
			}
			if (!element.TF.gameObject.activeSelf)
			{
				return;
			}
			if (prefab == null || element.GetType() != prefab.GetType())
			{
				return;
			}
			if (lstActive != null)
			{
				lstActive.Remove(element);
			}
			if (queueInActive != null)
			{
				queueInActive.Enqueue(element);
				element.TF.gameObject.SetActive(false);
				element.TF.SetParent(null, false);
			}
		}

		public void Collect()
		{
			for (int i = lstActive.Count - 1; i >= 0; i--)
			{
				DeSpawn(lstActive[i]);
			}
		}

		public void Release()
		{
			Collect();
			while (queueInActive.Count > 0)
			{
				IPoolingElement element = queueInActive.Dequeue();
				if (element == null || element.TF == null)
				{
					break;
				}
				Object.Destroy(element.TF.gameObject);
			}
		}
	}
}
