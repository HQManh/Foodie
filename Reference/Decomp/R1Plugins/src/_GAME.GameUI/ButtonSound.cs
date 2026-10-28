using UnityEngine;
using UnityEngine.UI;

namespace _GAME.GameUI;

[RequireComponent(typeof(Button))]
public class ButtonSound : MonoBehaviour
{
	[SerializeField]
	private Button button;

	private void Awake()
	{
	}
}
