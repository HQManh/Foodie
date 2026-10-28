using UnityEngine;
using UnityEngine.Events;

namespace TrungKienPack
{
	public class IntervalActiveClass : MonoBehaviour
	{
		[SerializeField]
		private Vector2 intervalTime = new Vector2(3f, 5f);

		private float timer;

		[SerializeField]
		private bool isActive = true;

		[SerializeField]
		private bool isActiveAtBegin = true;

		[SerializeField]
		private UnityEvent eventActive;

		private float cacheInterval;

		public void SetActive(bool status)
		{
			isActive = status;
		}

		private void Start()
		{
			cacheInterval = Random.Range(intervalTime.x, intervalTime.y);
			if (isActiveAtBegin && isActive)
			{
				eventActive.Invoke();
			}
		}

		private void Update()
		{
			if (!isActive)
			{
				return;
			}
			if (isActiveAtBegin)
			{
				eventActive.Invoke();
				isActiveAtBegin = false;
			}
			timer += Time.deltaTime;
			if (cacheInterval <= timer)
			{
				timer = 0f;
				eventActive.Invoke();
				cacheInterval = Random.Range(intervalTime.x, intervalTime.y);
			}
		}
	}
}
