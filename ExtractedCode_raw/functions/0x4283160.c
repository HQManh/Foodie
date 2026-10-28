// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess$$CheatWinToLevel
// address: 0x4283160
// body: available
// range: 0x4283160-0x428325f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4283258 to 0x6077998 FUN_06077998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x428325c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__CheatWinToLevel
               (long param_1,undefined8 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if ((DAT_0951710a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9d50);
    FUN_03f5c2a4(&DAT_091b9d80);
    DAT_0951710a = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *param_5 = 0;
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
    lVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_RuntimeData__GetOrCreateMapData
                      (lVar3,param_2);
    if (-1 < param_3) {
      if (lVar3 == 0) goto LAB_0428325c;
      iVar4 = 0;
      do {
        lVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataManager_MapData__GetOrCreateLevelData
                          (lVar3,iVar4);
        if (lVar2 == 0) goto LAB_0428325c;
        if (*(int *)(lVar2 + 0x14) < 3) {
          *(undefined4 *)(lVar2 + 0x14) = 3;
        }
        iVar1 = param_4 - *(int *)(lVar2 + 0x18);
        if (iVar1 != 0 && *(int *)(lVar2 + 0x18) <= param_4) {
          *param_5 = iVar1 + *param_5;
          *(int *)(lVar2 + 0x18) = param_4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_3);
    }
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__ValidateAllLevelUnlockStatus(param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_06077998(*(long *)(param_1 + 0x20),0,DAT_091b9d50);
      return;
    }
  }
LAB_0428325c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

