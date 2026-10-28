using UnityEngine;

public class ShowFPS : MonoBehaviour
{
	private void Start()
	{
		Application.targetFrameRate = 120;
		DontDestroyOnLoad(gameObject);
	}

	public void OnGUI()
	{
		int width = Screen.width;
		int height = Screen.height;
		GUIStyle style = new GUIStyle();
		style.alignment = TextAnchor.UpperLeft;
		style.fontSize = (height * 2) / 150;
		style.normal.textColor = new Color(0f, 0f, 0f, 1f);
		float deltaTime = Time.deltaTime;
		int fps = int.MinValue;
		if (1f / deltaTime != float.PositiveInfinity)
		{
			fps = (int)(1f / deltaTime);
		}
		string text = string.Format("FPS: {0}" /* literal recovered by guess */, fps);
		GUI.Label(new Rect(0f, 0f, width, (height * 2) / 100), text, style);
	}
}
