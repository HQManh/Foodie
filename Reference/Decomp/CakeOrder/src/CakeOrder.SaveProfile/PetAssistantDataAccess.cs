using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.SaveProfile;

public class PetAssistantDataAccess : MonoSingleton<PetAssistantDataAccess>
{
	private static readonly R1Logger LocalLogger;

	[SerializeField]
	private PlayerMapLevelProgressDataManager _dataManager;

	public bool IsDataAvailable => false;

	public event Action<string> onOwnPet
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<string, PetAssistantPositionType, int> onUpgradePetSkill
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<string, PetAssignData> onAssignPet
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<string, int> onChangeRemainingUses
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public bool IsOwnedPet(string petId)
	{
		return false;
	}

	public Dictionary<PetAssistantPositionType, int> GetPetSkillLevels(string petId)
	{
		return null;
	}

	public int GetPetSkillLevel(string petId, PetAssistantPositionType type)
	{
		return 0;
	}

	public Dictionary<string, List<string>> GetAssignedPetsEachMap()
	{
		return null;
	}

	public List<string> GetAssignedPets(string mapId)
	{
		return null;
	}

	public int GetRemainingUses(string petId)
	{
		return 0;
	}

	public PetAssignData GetPetAssignData(string petId)
	{
		return null;
	}

	public void SetOwnPet(string petId)
	{
	}

	public void UpgradePetSkill(string petId, PetAssistantPositionType type)
	{
	}

	public void SetRemainingUses(string petId, int uses)
	{
	}

	public int ConsumeUse(string petId, int amount = 1)
	{
		return 0;
	}

	public void AssignPet(string petId, string mapId, PetAssistantPositionType type, string assignPos)
	{
	}

	public void CheatOwnPet(string petId)
	{
	}

	public void CheatSetPetSkillLevel(string petId, PetAssistantPositionType type, int level)
	{
	}

	public void SaveData()
	{
	}

	public void ResetData()
	{
	}
}
