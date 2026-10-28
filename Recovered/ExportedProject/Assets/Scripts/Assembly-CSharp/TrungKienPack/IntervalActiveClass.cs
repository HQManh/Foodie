using UnityEngine;
using UnityEngine.Events;

namespace TrungKienPack
{
	public class IntervalActiveClass : MonoBehaviour
	{
		[SerializeField]
		private Vector2 intervalTime;

		private float timer;

		[SerializeField]
		private bool isActive;

		[SerializeField]
		private bool isActiveAtBegin;

		[SerializeField]
		private UnityEvent eventActive;

		private float cacheInterval;

		public void SetActive(bool status)
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}
	}
}
