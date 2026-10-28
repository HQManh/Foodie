using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public class RandomPositionInSquare : MonoBehaviour
	{
		[SerializeField]
		private List<Transform> listChildren;

		[SerializeField]
		private Vector2 _size = new Vector2(10f, 10f);

		[SerializeField]
		private Vector2 _cloneSize = new Vector2(1f, 1f);

		[SerializeField]
		private bool _randomRotationY = true;

		private void Spawn()
		{
			if (listChildren == null)
			{
				return;
			}
			for (int i = 0; i < listChildren.Count; i++)
			{
				Transform child = listChildren[i];
				float x = Random.Range(_size.x * -0.5f, _size.x * 0.5f);
				float y = Random.Range(_size.y * -0.5f, _size.y * 0.5f);
				if (child == null)
				{
					break;
				}
				child.localPosition = new Vector3(x, y, 0f);
				float factor = Random.Range(_cloneSize.x, _cloneSize.y);
				// TODO(unrecovered): the child localScale is factor times a base Vector3 read from an unnamed static block (DAT_0918cbd0 + 0xb8); base not recoverable, so scale is not set.
				if (_randomRotationY)
				{
					// the pseudocode writes the random angle into the Z component of the euler vector, so the rotation is about Z despite the field name
					float angle = Random.Range(0f, 360f);
					child.localRotation = Quaternion.Euler(0f, 0f, angle);
				}
			}
		}

		private void OnDrawGizmosSelected()
		{
			// TODO(unrecovered): DrawWireCube center is an unnamed static Vector3 (DAT_0918cbd0 + 0xb8); not recoverable.
		}
	}
}
