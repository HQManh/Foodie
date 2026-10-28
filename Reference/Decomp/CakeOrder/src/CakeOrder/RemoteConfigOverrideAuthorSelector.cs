using System;
using UnityEngine;

namespace CakeOrder;

public class RemoteConfigOverrideAuthorSelector : MonoBehaviour
{
	[Serializable]
	public class AuthorOverrideTestInput
	{
		public string authorId;

		public string mapId;

		[TextArea(8, 24)]
		public string value;
	}

	[SerializeField]
	private AuthorOverrideTestInput[] _authorOverrideTestInputs;

	private bool _isSelecting;

	private Vector2 _scrollPosition;

	public bool HasSelection { get; private set; }

	public void BeginSelection()
	{
	}

	private void OnGUI()
	{
	}

	public void SelectAuthor(string authorId)
	{
	}

	public void SelectDefault()
	{
	}

	public static bool ChangeSelectionAtRuntime(string overrideId)
	{
		return false;
	}
}
