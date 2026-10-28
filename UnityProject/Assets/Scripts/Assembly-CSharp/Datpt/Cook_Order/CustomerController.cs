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
		private float waitTimeConfig = 60f;

		private void Start()
		{
			GenerateNewCustomers();
		}

		public void GenerateNewCustomers()
		{
			// TODO(unrecovered): the pseudocode first checks a LevelControlCookOrder count field that is not in the stubs; the loop below runs without that gate.
			for (int i = 0; i < lstCustomerTrack.Count; i++)
			{
				GenerateNewCustomerOnTrack(i);
			}
		}

		public void GenerateNewCustomerOnTrack(int TrackIndex)
		{
			LevelControlCookOrder ins = LevelControlCookOrder.Ins;
			if (ins != null)
			{
				ins.AddCustomerNum(-1);
			}

			// TODO(unrecovered): the pseudocode gates on a LevelControlCookOrder count field that is not in the stubs, and copies the track's order list into the customer through an unnamed collection helper.
			CustomerTrack track = lstCustomerTrack[TrackIndex];
			Customer customer = OnGenerateNewCustomer(track.startSnapTf.position, track.targetSnapTf.position);
			if (customer != null)
			{
				customer.TrackIndex = TrackIndex;
			}
		}

		public Customer OnGenerateNewCustomer(Vector3 startPos, Vector3 endPos)
		{
			// TODO(unrecovered): the pseudocode instantiates a random prefab from lstCustomerPrefabs through an unnamed instantiate helper and subscribes unnamed delegates to OnCustomerServiced and OnMissedCustomer; the helper and delegate targets are not in the stubs.
			return null;
		}
	}
}
