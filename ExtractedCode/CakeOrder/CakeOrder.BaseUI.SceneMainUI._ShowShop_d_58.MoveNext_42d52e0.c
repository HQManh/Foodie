// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI.<ShowShop>d__58$$MoveNext
// address: 0x42d52e0
// body: available
// range: 0x42d52e0-0x42d5553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d5544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d554c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI_<ShowShop>d__58__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((DAT_095173c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1360);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8518);
    FUN_03f5c2a4(&DAT_091bc468);
    FUN_03f5c2a4(&DAT_091bc470);
    FUN_03f5c2a4(&DAT_091bcd50);
    FUN_03f5c2a4(&DAT_091f9ff0);
    DAT_095173c5 = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar1 = *(long **)(lVar5 + 0x88);
    if ((plVar1 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250)),
       (uVar2 & 1) == 0)) {
      uVar4 = UnityEngine_Object__GetName(lVar5,0);
      uVar4 = System_String__Concat(uVar4,DAT_091f9ff0,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(uVar4,0);
      goto LAB_042d550c;
    }
    lVar3 = FUN_04d44390(lVar5,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90),0,
                         DAT_091d8518);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = FUN_062ee710(lVar3,DAT_091bcd50);
    uVar2 = FUN_06209cac(&local_28,DAT_091bc470);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04991b30(param_1 + 2,&local_28,param_1,DAT_091c1360);
      return;
    }
  }
  lVar3 = FUN_06209cec(&local_28,DAT_091bc468);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar2 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar3 + 0x188) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8(lVar3 + 0x188);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack
              (lVar5,lVar3,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe));
  }
LAB_042d550c:
  lVar5 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

