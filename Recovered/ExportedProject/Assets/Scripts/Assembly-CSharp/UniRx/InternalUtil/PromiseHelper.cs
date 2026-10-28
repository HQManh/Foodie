using System.Collections.Generic;
using System.Threading.Tasks;

namespace UniRx.InternalUtil
{
	internal static class PromiseHelper
	{
		internal static void TrySetResultAll<T>(IEnumerable<TaskCompletionSource<T>> source, T value)
		{
		}
	}
}
