using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class IItem : MonoBehaviour
	{
		public interface IItemBase
		{
			bool IsDone { get; }

			Transform OnTakeTF { get; }

			int OrderLayer { get; set; }

			bool IsState<T>(T t) where T : Enum;

			void ChangeState<T>(T t) where T : Enum;

			void IfChangeState<T>(T i, T c) where T : Enum;

			bool OnTake(IItemMoving item);

			bool CheckCanTake(IItemMoving item);

			void OnClickDown();

			void OnDone();

			void OnSliceVertical();
		}

		public interface IItemIdle : IItemBase
		{
		}

		public interface IItemMoving : IItemBase
		{
			Transform TF { get; }

			bool IsCanMove { get; }

			void SetOrder(int order);

			void OnBack();

			void OnClickTake();

			void OnDrop();

			void OnSavePoint();

			void OnSavePointAt(Vector3 pos, Quaternion rot);

			void OnSave(float delayTime);

			void OnMove(Vector3 pos, Quaternion rot, float time);
		}
	}
}
