using UnityEngine;

namespace Utilities
{

[ExecuteInEditMode]
public class DemoParticleGroup : MonoBehaviour
{
	private static bool _isShowName;

	[SerializeField]
	private bool _isUseCustomLayout;

	[SerializeField]
	private int _numColsCustom;

	[SerializeField]
	private Vector2 _spacing;

	[SerializeField]
	private bool _isAutoUpdateLayoutOnValidate;

	[SerializeField]
	private Vector3 _nameOffset;

	private DemoParticleOnStartEditor[] demoParticles;

	private void OnEnable()
	{
	}

	private void UpdateLayout()
	{
	}

	private void OnValidate()
	{
	}

	private void ShowName()
	{
	}

	private void HideName()
	{
	}
}
}
