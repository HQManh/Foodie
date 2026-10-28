// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<TryShowRateGameAtHome>d__139$$MoveNext
// address: 0x430e9c0
// body: available
// range: 0x430e9c0-0x430ebbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430ebb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ebb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ebbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<TryShowRateGameAtHome>d__139__MoveNext(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  if ((DAT_095175b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f00);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bc2c0);
    FUN_03f5c2a4(&DAT_091bcba8);
    DAT_095175b7 = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 6);
    uVar3 = CakeOrder_UI_HomeUITutorialControl__IsDoneTut(1,0);
    if ((uVar3 & 1) == 0) goto LAB_0430eb10;
    lVar4 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(long *)(lVar4 + 0x38) == 0) || (*(int *)(*(long *)(lVar4 + 0x38) + 0x20) != 2))
    goto LAB_0430eb10;
    uVar2 = CakeOrder_RateGame_RateGamePromptState__GetCurrentGlobalLevel(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = CakeOrder_BaseUI_SceneMainUI__TryShowRateGamePopup(lVar8,2,uVar2,1,0,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = FUN_062e8294(lVar8,DAT_091bcba8);
    uVar3 = FUN_062098a0(&local_28,DAT_091bc2c0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_04323be8(param_1 + 2,&local_28,param_1,DAT_091c1f00);
      return;
    }
  }
  FUN_062098e0(&local_28,DAT_091bc2b8);
LAB_0430eb10:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0430eb98;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0430eb98:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}

