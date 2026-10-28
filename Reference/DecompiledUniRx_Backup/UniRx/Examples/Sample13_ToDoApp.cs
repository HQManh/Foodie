using UnityEngine;
using UnityEngine.UI;

namespace UniRx.Examples
{
	public class Sample13_ToDoApp : MonoBehaviour
	{
		public Text Title;

		public InputField ToDoInput;

		public Button AddButton;

		public Button ClearButton;

		public GameObject TodoList;

		public GameObject SampleItemPrefab;

		private ReactiveCollection<GameObject> toDos = new ReactiveCollection<GameObject>();

		private void Start()
		{
			// TODO(unrecovered): wires the add/clear buttons, the input field and the ToDo list through UnityUIComponentExtensions (OnClickAsObservable, OnEndEditAsObservable), ReactiveCollection observers and Observable combinators (FUN_04c43ba8, FUN_04c49080, FUN_04c3fd2c, FUN_05e43934 and related) that are not in the stubs.
		}
	}
}
