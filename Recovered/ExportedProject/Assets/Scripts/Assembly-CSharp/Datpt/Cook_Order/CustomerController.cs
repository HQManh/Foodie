using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace Datpt.Cook_Order
{
	public class CustomerController : MonoSingleton<CustomerController>
	{
		[SerializeField]
		private List<Customer> lstCustomerPrefabs;

		[SerializeField]
		private List<CustomerTrack> lstCustomerTrack;

		[SerializeField]
		private Transform parentTf;

		[SerializeField]
		private float waitTimeConfig;

		private void Start()
		{
		}

		public void GenerateNewCustomers()
		{
		}

		public void GenerateNewCustomerOnTrack(int TrackIndex)
		{
		}

		public Customer OnGenerateNewCustomer(Vector3 startPos, Vector3 endPos)
		{
			return null;
		}
	}
}
