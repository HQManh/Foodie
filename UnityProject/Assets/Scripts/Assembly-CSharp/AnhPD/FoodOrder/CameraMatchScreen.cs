using UnityEngine;

namespace AnhPD.FoodOrder
{
	[ExecuteAlways]
	[RequireComponent(typeof(Camera))]
	public class CameraMatchScreen : MonoBehaviour
	{
		[Header("Safe zone: đáy = tâm hàng belt, đỉnh = vùng lineHandle, tâm X = lineHandle")]
		[Tooltip("Bề rộng (world) của vùng phải nhìn thấy trọn.")]
		[SerializeField]
		[Min(0.01f)]
		private float zoneWidth = 6.4f;

		[Header("Canvas HUD (khớp CanvasScaler của GameplayHUD)")]
		[SerializeField]
		private Vector2 canvasReferenceResolution = new Vector2(1080f, 2160f);

		[Range(0f, 1f)]
		[SerializeField]
		private float canvasMatchWidthOrHeight = 0.7f;

		private float paddingTop = 175f;

		private float paddingBottom = 300f;

		private const float MinUsableFraction = 0.05f;

		private Camera _camera;

		private Vector2Int _lastScreen;

		private Rect _lastSafeArea;

		private bool _framedLevel;

		private float CanvasHeight
		{
			get
			{
				int pixelWidth = _camera.pixelWidth;
				int pixelHeight = _camera.pixelHeight;
				float num = (float)System.Math.Log(pixelWidth / canvasReferenceResolution.x, 2.0);
				float num2 = (float)System.Math.Log(pixelHeight / canvasReferenceResolution.y, 2.0);
				float t = Mathf.Clamp01(canvasMatchWidthOrHeight);
				float num3 = Mathf.Pow(2f, Mathf.Lerp(num, num2, t));
				return (float)pixelHeight / num3;
			}
		}

		private float NotchTopFraction
		{
			get
			{
				if (Screen.height < 1)
				{
					return 0f;
				}
				Rect safeArea = Screen.safeArea;
				return Mathf.Clamp01(((float)Screen.height - (safeArea.y + safeArea.height)) / (float)Screen.height);
			}
		}

		private float NotchBottomFraction
		{
			get
			{
				if (Screen.height < 1)
				{
					return 0f;
				}
				return Mathf.Clamp01(Screen.safeArea.y / (float)Screen.height);
			}
		}

		private float PaddingTopFraction => paddingTop / CanvasHeight;

		private float PaddingBottomFraction => paddingBottom / CanvasHeight;

		private static bool IsLevelReady
		{
			get
			{
				MessyController ins = MessyController.Ins;
				if (ins)
				{
					if (!ins.Spawner)
					{
						return false;
					}
					ConveyorGrid grid = ins.Spawner.Grid;
					if (grid != null)
					{
						return grid.ColumnCount > 0;
					}
					return false;
				}
				return false;
			}
		}

		private void OnEnable()
		{
			_framedLevel = false;
			Apply();
		}

		private void Update()
		{
			if (Application.isPlaying)
			{
				if (!_framedLevel && IsLevelReady)
				{
					_framedLevel = true;
				}
				else if (_lastScreen.x == Screen.width && _lastScreen.y == Screen.height && _lastSafeArea == Screen.safeArea)
				{
					return;
				}
			}
			Apply();
		}

		private bool EnsureCamera()
		{
			if (!_camera)
			{
				_camera = GetComponent<Camera>();
			}
			if (!_camera)
			{
				return false;
			}
			if (_camera.pixelWidth < 1)
			{
				return false;
			}
			return _camera.pixelHeight > 0;
		}

		private bool TryGetZone(out float centerX, out float bottom, out float top)
		{
			bottom = 0f;
			top = 0f;
			centerX = 0f;
			MessyController ins = MessyController.Ins;
			FCustomerLineHandle fCustomerLineHandle = null;
			if (ins)
			{
				fCustomerLineHandle = ins.LineHandle;
			}
			if (!fCustomerLineHandle)
			{
				return false;
			}
			if (!ins.TryGetBeltBottomWorldY(out bottom))
			{
				return false;
			}
			centerX = fCustomerLineHandle.transform.position.x;
			top = fCustomerLineHandle.RegionTopWorldY;
			return bottom < top;
		}

		public void Apply()
		{
			if (!EnsureCamera() || !TryGetZone(out var centerX, out var bottom, out var top))
			{
				return;
			}
			_camera.orthographic = true;
			float zoneWidth = this.zoneWidth;
			float notchTopFraction = NotchTopFraction;
			float notchBottomFraction = NotchBottomFraction;
			float num = paddingTop / CanvasHeight;
			float num2 = paddingBottom / CanvasHeight;
			float[] array = new float[3];
			float num3 = (top - bottom) * 0.5f;
			float num4 = Mathf.Max(0.05f, 1f - notchTopFraction - notchBottomFraction - num - num2);
			array[0] = num3 / num4;
			array[1] = zoneWidth * 0.5f / _camera.aspect;
			array[2] = 0.0001f;
			float num5 = array[0];
			for (int i = 1; i < array.Length; i++)
			{
				num5 = Mathf.Max(num5, array[i]);
			}
			_camera.orthographicSize = num5;
			Vector3 position = base.transform.position;
			position.x = centerX;
			position.y = (top + num * (num5 + num5) + (bottom - num2 * (num5 + num5))) * 0.5f - (notchBottomFraction - notchTopFraction) * num5;
			base.transform.position = position;
			_lastScreen = new Vector2Int(Screen.width, Screen.height);
			_lastSafeArea = Screen.safeArea;
		}
	}
}
