// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster$$GetLastTouchWorldPosition
// address: 0x428e20c
// body: available
// range: 0x428e20c-0x428e3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428e3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
CakeOrder_InGame_InGameUITutorialProcessBooster__GetLastTouchWorldPosition
          (undefined4 param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_09517188 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09517188 = 1;
  }
  local_48 = 0;
  local_50 = 0;
  if (param_3 == (long *)0x0) {
LAB_0428e3b4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = FUN_04a6a6d8(param_3,DAT_091c5630);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar2 == 0) || (lVar2 = UnityEngine_Canvas__get_rootCanvas(lVar2,0), lVar2 == 0))
    goto LAB_0428e3b4;
    iVar1 = UnityEngine_Canvas__get_renderMode(lVar2,0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = UnityEngine_Canvas__get_worldCamera(lVar2,0);
    }
    plVar5 = (long *)UnityEngine_Transform__GetParent(param_3,0);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else if (*plVar5 != DAT_09189c98) {
      plVar5 = (long *)0x0;
    }
    if (plVar5 != (long *)0x0) {
      param_3 = plVar5;
    }
    uVar6 = UnityEngine_Input__get_mousePosition(0);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle
                      (uVar6,param_2,param_3,uVar4,&local_50,0);
    if ((uVar3 & 1) != 0) {
      param_1 = (undefined4)local_50;
    }
  }
  return param_1;
}

