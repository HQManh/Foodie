using UnityEngine;

namespace _GAME.Profile;

public class NameFxItemUICtrl : MonoBehaviour
{
	public int index;

	public Transform itemPos;

	public GameObject iconNew;

	public GameObject iconLock;

	public GameObject iconCheck;

	public NameFxCtrl curItem;

	protected string _txtName;

	public virtual void SetNewIndex(int newIndex)
	{
	}

	public virtual void SetTextName(string value, bool alignmentCenter = false)
	{
	}

	public virtual void UpdateStatus(bool selected)
	{
	}

	public virtual void SelectItem()
	{
	}
}
