using UnityEngine;

namespace _GAME.Profile;

public class FrameItemUICtrl : MonoBehaviour
{
	public int index;

	public Transform itemPos;

	public GameObject iconNew;

	public GameObject iconLock;

	public GameObject iconCheck;

	public GameObject curItem;

	public virtual void SetNewIndex(int newIndex)
	{
	}

	public virtual void UpdateStatus(bool selected)
	{
	}

	public virtual void SelectItem()
	{
	}
}
