using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public class RandomPositionInSquare : MonoBehaviour
	{
		[SerializeField]
		private List<Transform> listChildren;

		[SerializeField]
		private Vector2 _size;

		[SerializeField]
		private Vector2 _cloneSize;

		[SerializeField]
		private bool _randomRotationY;

		private void Spawn()
		{
		}

		private void OnDrawGizmosSelected()
		{
		}
	}
}
