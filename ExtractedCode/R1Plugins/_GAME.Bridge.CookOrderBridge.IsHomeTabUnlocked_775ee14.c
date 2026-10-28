// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$IsHomeTabUnlocked
// address: 0x775ee14
// body: available
// range: 0x775ee14-0x775ef97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775ef5c to 0x42f8258 CakeOrder.CakeOrderSubsystem.GameProgressScenario$$IsMechanicAvailable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775ef94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GAME_Bridge_CookOrderBridge__IsHomeTabUnlocked(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((DAT_09522c1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091b4b68);
    DAT_09522c1d = 1;
  }
  uVar3 = FUN_05a8eda4(DAT_091b4950);
  if ((((uVar3 & 1) != 0) && (uVar3 = FUN_05a8f088(DAT_091b4b68), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_05a8eda4(DAT_091b4a60), (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_IsDataAvailable
                        (**(long **)(lVar4 + 0xb8),0);
      if ((uVar3 & 1) == 0) goto LAB_0775ef60;
      uVar5 = 8;
      if (param_1 != 0) {
        uVar5 = 9;
      }
      lVar4 = *(long *)(DAT_091b4948 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        uVar3 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IsMechanicAvailable
                          (**(long **)(lVar4 + 0xb8),uVar5,0);
        return uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0775ef60:
  iVar1 = _GAME_Bridge_CookOrderBridge__get_LevelsCompleted();
  if (param_1 == 0) {
    iVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__get_RankUnlockLevel(0);
  }
  else {
    iVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__get_TeamUnlockLevel();
  }
  return (ulong)(iVar2 + -1 <= iVar1);
}

