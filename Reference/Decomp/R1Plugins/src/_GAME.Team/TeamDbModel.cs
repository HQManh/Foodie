using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.Team;

[Serializable]
public class TeamDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public bool pt;

		public long tal;

		public long tlt;

		public SaveGameModel()
		{
		}

		public SaveGameModel(TeamDbModel model)
		{
		}
	}

	public bool playTutorial;

	public long lastTimeAskLife;

	public long lastTimeLeaveTeam;

	[NonSerialized]
	[Header("RUNTIME")]
	public List<TeamInfoModel> ListTeamRandom;

	[NonSerialized]
	public List<TeamInfoModel> ListTeamSearch;

	[NonSerialized]
	public TeamInfoModel TeamInfo;

	[NonSerialized]
	public TeamMemberModel SelfInfo;

	[NonSerialized]
	public long LastFetchChat;

	[NonSerialized]
	public long LastSendChat;

	[NonSerialized]
	public List<TeamChatModel> ListChat;

	[NonSerialized]
	public List<TeamLifeRequestModel> ListLifeReq;

	[NonSerialized]
	public List<TeamLifeHelpModel> ListLifeHelp;

	public List<TeamMemberModel> ListMember => null;

	public int LifeHelpCount => 0;

	public static TeamDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public void FromSaveGameModel(SaveGameModel cloudModel)
	{
	}
}
