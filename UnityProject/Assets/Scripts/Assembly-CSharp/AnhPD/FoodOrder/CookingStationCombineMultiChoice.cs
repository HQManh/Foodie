using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CookingStationCombineMultiChoice : CookingStation
	{
		[SerializeField]
		private GameObject baseIng;

		private const int NoGroup = -1;

		private string _baseIngId;

		private string _baseIngError;

		private bool _resolved;

		private bool _hasBase;

		private int _baseGroup = -1;

		public string BaseIngId
		{
			get
			{
				EnsureResolved();
				return _baseIngId;
			}
		}

		private string BaseIngError
		{
			get
			{
				EnsureResolved();
				return _baseIngError;
			}
		}

		private bool HasBaseIngError
		{
			get
			{
				EnsureResolved();
				return !string.IsNullOrEmpty(_baseIngError);
			}
		}

		private InteractVector BaseVector => new InteractVector(groups.Length, 0);

		private void EnsureResolved()
		{
			if (!_resolved || !Application.isPlaying)
			{
				ResolveBaseIng();
				_resolved = true;
			}
		}

		private void ResolveBaseIng()
		{
			_baseIngId = null;
			_baseIngError = null;
			if (groups == null || groups.Length < 2)
			{
				/* literal recovered by guess */
				_baseIngError = "needs at least 2 groups";
				return;
			}
			List<string> list = new List<string>();
			foreach (StationSlot item in SlotsOf(0))
			{
				if (!string.IsNullOrEmpty(item.ingId) && !list.Contains(item.ingId) && IsInEveryGroup(item.ingId))
				{
					list.Add(item.ingId);
				}
			}
			if (list.Count == 0)
			{
				/* literal recovered by guess */
				_baseIngError = "no ingredient shared by every group";
				return;
			}
			_baseIngId = list[0];
			if (list.Count >= 2)
			{
				/* literal recovered by guess */
				_baseIngError = string.Format("{0} shared ingredients: {1}", list.Count, string.Join(", ", list)) + " (using " + list[0] + ")";
			}
		}

		private bool IsInEveryGroup(string ingId)
		{
			for (int i = 1; i < groups.Length; i++)
			{
				bool flag = false;
				foreach (StationSlot item in SlotsOf(i))
				{
					if (item.ingId == ingId)
					{
						flag = true;
						break;
					}
				}
				if (!flag)
				{
					return false;
				}
			}
			return true;
		}

		private IEnumerable<StationSlot> SlotsOf(int groupIndex)
		{
			StationSlot[] slots = groups[groupIndex].slots;
			if (slots == null)
			{
				yield break;
			}
			for (int i = 0; i < slots.Length; i++)
			{
				if (slots[i] != null)
				{
					yield return slots[i];
				}
			}
		}

		protected override void Awake()
		{
			base.Awake();
			EnsureResolved();
			if (!string.IsNullOrEmpty(BaseIngError))
			{
				/* literal recovered by guess */
				UnityEngine.Debug.LogError("[" + base.name + "] " + BaseIngError, this);
			}
			ClearBase();
		}

		private bool IsBaseVector(InteractVector vector)
		{
			return vector.groupIndex >= groups.Length;
		}

		protected override string ResolveResultId(int groupIndex)
		{
			if (groupIndex < groups.Length)
			{
				return base.ResolveResultId(groupIndex);
			}
			for (int i = 0; i < groups.Length; i++)
			{
				if (groups[i].IsInteracting)
				{
					return base.ResolveResultId(i);
				}
			}
			return null;
		}

		public override InteractVector GetInteractVector(string ingId)
		{
			EnsureResolved();
			if (!string.IsNullOrEmpty(_baseIngId))
			{
				EnsureResolved();
				if (!(ingId != _baseIngId))
				{
					if (!_hasBase)
					{
						return BaseVector;
					}
					return InteractVector.Invalid;
				}
			}
			return base.GetInteractVector(ingId);
		}

		public override int CountFreeSlots(string ingId)
		{
			EnsureResolved();
			if (!string.IsNullOrEmpty(_baseIngId))
			{
				EnsureResolved();
				if (!(ingId != _baseIngId))
				{
					return GetInteractVector(ingId).IsValid ? 1 : 0;
				}
			}
			return base.CountFreeSlots(ingId);
		}

		public override int CountHeldInputs(string ingId, string forResultId)
		{
			int num = base.CountHeldInputs(ingId, forResultId);
			int num2 = 0;
			if (_hasBase)
			{
				if (_baseGroup == -1)
				{
					EnsureResolved();
					if (ingId == _baseIngId && WorkingResultId == null)
					{
						num2 = ((forResultId == null) ? 1 : (AnyGroupMakes(forResultId) ? 1 : 0));
					}
				}
			}
			return num2 + num;
		}

		public override bool AcceptsId(string ingId)
		{
			EnsureResolved();
			if (!string.IsNullOrEmpty(_baseIngId))
			{
				EnsureResolved();
				if (ingId == _baseIngId)
				{
					return true;
				}
			}
			int groupIndex;
			return TryGetAcceptingGroup(ingId, out groupIndex);
		}

		public override void PutInIngredient(InteractVector vector)
		{
			if (vector.groupIndex < groups.Length)
			{
				base.PutInIngredient(vector);
				if (_hasBase && _baseGroup == -1 && vector.IsValid)
				{
					InjectBase(vector.groupIndex);
				}
			}
			else
			{
				TakeBase();
			}
		}

		protected override void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
			base.HandleComplete(groupIndex, isResultSpawned, num);
			ClearBase();
		}

		private void TakeBase()
		{
			_hasBase = true;
			if ((bool)baseIng)
			{
				baseIng.SetActive(true);
			}
			NotifyBaseTaken();
			int num = ChosenGroup();
			if (num != -1)
			{
				InjectBase(num);
			}
		}

		private void NotifyBaseTaken()
		{
			for (int i = 0; i < groups.Length; i++)
			{
				StationGroupView stationGroupView = ((groups[i] == null) ? null : groups[i].View);
				if (!stationGroupView)
				{
					continue;
				}
				bool flag = false;
				for (int j = 0; j < i; j++)
				{
					StationGroupView stationGroupView2 = ((groups[j] == null) ? null : groups[j].View);
					if (stationGroupView2 == stationGroupView)
					{
						flag = true;
						break;
					}
				}
				if (!flag)
				{
					EnsureResolved();
					stationGroupView.OnBaseTaken(_baseIngId);
				}
			}
		}

		private void InjectBase(int groupIndex)
		{
			if (groupIndex >= 0 && groupIndex < groups.Length)
			{
				StationInteractGroup stationInteractGroup = groups[groupIndex];
				EnsureResolved();
				int interactIndex = stationInteractGroup.GetInteractIndex(_baseIngId);
				if (interactIndex >= 0)
				{
					_baseGroup = groupIndex;
					base.PutInIngredient(new InteractVector(groupIndex, interactIndex));
				}
			}
		}

		private void ClearBase()
		{
			_hasBase = false;
			_baseGroup = -1;
			if ((bool)baseIng)
			{
				baseIng.SetActive(false);
			}
		}

		private int ChosenGroup()
		{
			for (int i = 0; i < groups.Length; i++)
			{
				if (groups[i].IsInteracting)
				{
					return i;
				}
			}
			return -1;
		}
	}
}
