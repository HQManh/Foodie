using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

public class GlobalShaderControl : MonoSingleton<GlobalShaderControl>
{
	[Serializable]
	public abstract class ShaderProperty<T>
	{
		public string name;

		public T value;

		private int _id;

		public void Apply()
		{
		}

		protected abstract void Apply(int id, T value);
	}

	[Serializable]
	public class ShaderPropertyFloat : ShaderProperty<float>
	{
		protected override void Apply(int id, float value)
		{
		}
	}

	[Serializable]
	public class ShaderPropertyInt : ShaderProperty<int>
	{
		protected override void Apply(int id, int value)
		{
		}
	}

	[Serializable]
	public class ShaderPropertyColor : ShaderProperty<Color>
	{
		protected override void Apply(int id, Color value)
		{
		}
	}

	[Serializable]
	public class ShaderPropertyVector4 : ShaderProperty<Vector4>
	{
		protected override void Apply(int id, Vector4 value)
		{
		}
	}

	[Serializable]
	public class ShaderPropertyTexture : ShaderProperty<Texture>
	{
		protected override void Apply(int id, Texture value)
		{
		}
	}

	public const string PROP_NAME_GLOBAL_TIME = "_GTime";

	public const string PROP_NAME_WIND_STRENGTH = "_WindStrength";

	public const string PROP_NAME_WIND_SPEED_XY = "_WindTexScrollSpeedXY";

	[SerializeField]
	private bool _isUpdateGlobalTime;

	private int _propIDGlobalTime;

	public List<ShaderPropertyInt> propertyInts;

	public List<ShaderPropertyFloat> propertyFloats;

	public List<ShaderPropertyColor> propertyColors;

	public List<ShaderPropertyVector4> propertyVector4s;

	public List<ShaderPropertyTexture> propertyTextures;

	public void SetInt(string name, int value)
	{
	}

	public void SetFloat(string name, float value)
	{
	}

	public void SetColor(string name, Color value)
	{
	}

	public void SetVector4(string name, Vector4 value)
	{
	}

	public void SetTexture(string name, Texture value)
	{
	}

	public void Apply()
	{
	}

	protected override void Awake()
	{
	}

	private void Update()
	{
	}
}
