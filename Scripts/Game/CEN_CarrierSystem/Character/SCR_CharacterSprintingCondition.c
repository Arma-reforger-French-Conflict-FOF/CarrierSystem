
modded class SCR_CharacterSprintingCondition : SCR_AvailableActionCondition
{

	//------------------------------------------------------------------------------------------------
	override bool IsAvailable(SCR_AvailableActionsConditionData data)
	{		
		if (!data)
			return false;
		
		ChimeraCharacter char = data.GetCharacter();
		Print("Check if sprint is available");
		Print(CEN_CarrierSystem_Helper.IsCarrier(char));
		if (CEN_CarrierSystem_Helper.IsCarrier(char)) {
			return false;
		}
		return super.IsAvailable(data);
	}
};