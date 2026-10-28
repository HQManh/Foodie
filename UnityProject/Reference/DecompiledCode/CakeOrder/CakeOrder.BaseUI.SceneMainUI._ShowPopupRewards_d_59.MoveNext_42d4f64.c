// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI.<ShowPopupRewards>d__59$$MoveNext
// address: 0x42d4f64
// body: available
// range: 0x42d4f64-0x42d518f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d5180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d518c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI_<ShowPopupRewards>d__59__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_28;
  
  if ((DAT_095173c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1380);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8550);
    FUN_03f5c2a4(&DAT_091bc4d8);
    FUN_03f5c2a4(&DAT_091bc4e0);
    FUN_03f5c2a4(&DAT_091bcd88);
    DAT_095173c3 = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_042d50e0;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(long *)(param_1 + 10) == 0) || (*(char *)(*(long *)(param_1 + 10) + 0x28) == '\0')) {
LAB_042d5030:
    plVar5 = (long *)(lVar4 + 0x98);
  }
  else {
    plVar5 = (long *)(lVar4 + 0xa0);
    plVar1 = (long *)*plVar5;
    if ((plVar1 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250)),
       (uVar2 & 1) == 0)) goto LAB_042d5030;
  }
  lVar3 = FUN_04d44390(lVar4,*plVar5,0,0,DAT_091d8550);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = FUN_062ee710(lVar3,DAT_091bcd88);
  uVar2 = FUN_06209cac(&local_28,DAT_091bc4e0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04991ab4(param_1 + 2,&local_28,param_1,DAT_091c1380);
    return;
  }
LAB_042d50e0:
  lVar3 = FUN_06209cec(&local_28,DAT_091bc4d8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_UIPopupListRewardClaimed__SetReward(lVar3,*(undefined8 *)(param_1 + 10),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack
              (lVar4,lVar3,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe));
  }
  lVar4 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

