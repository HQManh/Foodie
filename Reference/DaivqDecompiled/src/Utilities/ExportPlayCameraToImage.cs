using UnityEngine;

namespace Utilities;

public class ExportPlayCameraToImage : MonoBehaviour
{
	public string saveFolderPathFromAssets;

	public string filePrefix;

	public int fileCounter;

	public KeyCode screenshotKey;

	public Camera usedCamera;

	private void LateUpdate()
	{
	}

	public void Capture()
	{
	}
}
