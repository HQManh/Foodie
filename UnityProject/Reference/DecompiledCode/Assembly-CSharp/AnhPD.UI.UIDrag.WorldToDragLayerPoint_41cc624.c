// rea decompile_all
// name: AnhPD.UI.UIDrag$$WorldToDragLayerPoint
// address: 0x41cc624
// body: available
// range: 0x41cc624-0x41cc7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cc7b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_UI_UIDrag__WorldToDragLayerPoint
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  
  if ((DAT_09516a0c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516a0c = 1;
  }
  plVar4 = *(long **)(param_4 + 0x20);
  local_38 = 0;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else if (*plVar4 != DAT_09189c98) {
    plVar4 = (long *)0x0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(plVar4,0);
  lVar6 = 0;
  if ((uVar2 & 1) != 0) {
    if (plVar4 == (long *)0x0) goto LAB_041cc7b8;
    lVar6 = FUN_04a6a6d8(plVar4,DAT_091c5630);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  uVar5 = 0;
  if ((uVar2 & 1) != 0) {
    if (lVar6 == 0) {
LAB_041cc7b8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = UnityEngine_Canvas__get_renderMode(lVar6,0);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = UnityEngine_Canvas__get_worldCamera(lVar6,0);
    }
  }
  uVar3 = UnityEngine_Camera__get_main(0);
  if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ca0);
  }
  UnityEngine_RectTransformUtility__WorldToScreenPoint(param_1,param_2,param_3,uVar3,0);
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle(plVar4,uVar5,&local_38,0);
  return (undefined4)local_38;
}

