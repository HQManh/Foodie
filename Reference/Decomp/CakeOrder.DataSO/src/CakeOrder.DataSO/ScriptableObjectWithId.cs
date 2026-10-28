using UnityEngine;

namespace CakeOrder.DataSO;

public class ScriptableObjectWithId : ScriptableObject
{
	[SerializeField]
	private string _id;

	[SerializeField]
	private string _tempNameAlias;

	[SerializeField]
	[TextArea]
	private string _tempDescription;

	[SerializeField]
	private string _locTable;

	public string Id => null;

	public string NameLocalizeKey => null;

	public string DescLocalizeKey => null;

	public string LocalizedName => null;

	public string LocalizedDesc => null;

	public string SourceName => null;

	public string SourceDescription => null;

	public string LocTable => null;

	protected void SetIdOnCreate(string id)
	{
	}

	internal void SetTempNameAndDescription(string name, string description)
	{
	}
}
