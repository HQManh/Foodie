using System;
using UnityEngine;

namespace UniRx
{
	[AttributeUsage(AttributeTargets.Field, AllowMultiple = false, Inherited = false)]
	public class MultilineReactivePropertyAttribute : PropertyAttribute
	{
		public int Lines { get; private set; }

		public MultilineReactivePropertyAttribute()
		{
		}

		public MultilineReactivePropertyAttribute(int lines)
		{
		}
	}
}
