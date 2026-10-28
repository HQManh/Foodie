// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceFinishChestReward$$Init
// address: 0x77f14ec
// body: available
// range: 0x77f14ec-0x77f166f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f164c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f166c to 0x7740ec8 _GAME.Utils.HelperAnimation$$ResetAndSetTrigger (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceFinishChestReward__Init(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
  if ((DAT_095230f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afaa0);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_09204810);
    DAT_095230f4 = 1;
  }
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = param_2;
  thunk_FUN_03f5d7b8(plVar6,param_2);
  if (((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x108), lVar4 != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar5 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                  (*(undefined8 *)(param_1 + 0x10),DAT_09204810,0);
        return;
      }
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x18);
      lVar2 = FUN_057e0998(lVar2,iVar5,DAT_091afaa0);
      if (iVar5 < iVar1) {
        if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
        break;
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        if (*(long *)(param_1 + 0x18) == 0) break;
        lVar2 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar5,DAT_091afaa0);
        uVar3 = FUN_057e0998(lVar4,iVar5,DAT_091afa68);
        if (lVar2 == 0) break;
        _GAME_GameUI_RwItemUICtrl__SetData(lVar2,uVar3,0);
      }
      else {
        if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
        break;
        UnityEngine_GameObject__SetActive(lVar2,0,0);
      }
      lVar2 = *(long *)(param_1 + 0x18);
      iVar5 = iVar5 + 1;
      if (lVar2 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

