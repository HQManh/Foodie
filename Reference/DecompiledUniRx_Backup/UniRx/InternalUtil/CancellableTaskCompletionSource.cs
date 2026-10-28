using System;
using System.Threading.Tasks;

namespace UniRx.InternalUtil
{
	internal class CancellableTaskCompletionSource<T> : TaskCompletionSource<T>, ICancellableTaskCompletionSource
	{
		bool ICancellableTaskCompletionSource.TrySetException(Exception exception)
		{
			return false;
		}

		bool ICancellableTaskCompletionSource.TrySetCanceled()
		{
			return false;
		}
	}
}
