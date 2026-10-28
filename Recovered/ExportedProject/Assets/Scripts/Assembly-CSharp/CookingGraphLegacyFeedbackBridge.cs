using CookOrder.Cooking.Implement;
using UnityEngine;

internal sealed class CookingGraphLegacyFeedbackBridge : ICookingFeedback
{
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void Register()
	{
	}

	public void Particle(string type, Vector3 position, float scale, float volume, Color[] colors)
	{
	}

	public void Land(AudioClip clip)
	{
	}

	public void Jump()
	{
	}

	public void Tap()
	{
	}

	public void Served(Vector3 at)
	{
	}
}
