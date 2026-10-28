// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<ShowTutorialUpgrade>d__138$$MoveNext
// address: 0x430d988
// body: available
// range: 0x430d988-0x430dd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430dcf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dcf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dcfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dd00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dd04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dd08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430dd0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<ShowTutorialUpgrade>d__138__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_38;
  
  if ((DAT_095175b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c1f10);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d84f8);
    FUN_03f5c2a4(&DAT_091bc318);
    FUN_03f5c2a4(&DAT_091bc320);
    FUN_03f5c2a4(&DAT_091bcc10);
    FUN_03f5c2a4(&DAT_091eb1b8);
    FUN_03f5c2a4(&DAT_09191318);
    DAT_095175b3 = 1;
  }
  lVar7 = *(long *)(param_1 + 8);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar1 = thunk_FUN_03f9944c(DAT_09191318);
    CakeOrder_Home_HomeControllerCookOrder_<>c__DisplayClass138_0___ctor(lVar1,0);
    plVar6 = (long *)(param_1 + 10);
    *plVar6 = lVar1;
    thunk_FUN_03f5d7b8(plVar6,lVar1);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar6 + 0x10) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_03f5d7b8();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = FUN_04d44390(lVar7,*(undefined8 *)(lVar7 + 0x180),0,0,DAT_091d84f8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar1,DAT_091bcc10);
    uVar2 = FUN_06209cac(&local_38,DAT_091bc320);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_04323790(param_1 + 2,&local_38,param_1,DAT_091c1f10);
      return;
    }
  }
  lVar1 = FUN_06209cec(&local_38,DAT_091bc318);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 10) + 0x10);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    }
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *(long *)(lVar7 + 0x188);
    lVar3 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar9 = (undefined8 *)(lVar8 + 0x18);
    *puVar9 = **(undefined8 **)(lVar3 + 0xb8);
    thunk_FUN_03f5d7b8(puVar9);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_HomeUITutorialControl__SetData(lVar1,*(undefined8 *)(lVar7 + 0x188),param_1[0xc],0)
    ;
    uVar10 = *(undefined8 *)(param_1 + 10);
    uVar4 = thunk_FUN_03f9944c(DAT_09174a48);
    FUN_070a8c30(uVar4,uVar10,DAT_091eb1b8,0);
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar7,lVar1,uVar4,0,0);
  }
  *param_1 = -2;
  piVar5 = param_1 + 10;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar6 = *(long **)(param_1 + 2);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0430dcd4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_0430dcd4:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  return;
}

