// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress$$UpdateVisualImmediate
// address: 0x42c03bc
// body: available
// range: 0x42c03bc-0x42c04e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c04e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIMapBuildingProgress__UpdateVisualImmediate(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  unkbyte10 Var6;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0xa8),0,0);
  }
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar4,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xb0),0);
  }
  Var6 = CakeOrder_UI_UIMapBuildingProgress__ComputeState(param_1);
  *(byte *)(param_1 + 200) = (byte)((unkuint10)Var6 >> 0x48) & 1;
  *(byte *)(param_1 + 0xc9) = (byte)((unkuint10)Var6 >> 0x40) & 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar5 = (int)((unkuint10)Var6 >> 0x20);
    UnityEngine_UI_Slider__set_maxValue((float)iVar5,*(long *)(param_1 + 0x20),0);
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x428))((float)(int)Var6,plVar2,*(undefined8 *)(*plVar2 + 0x430));
      uVar1 = (int)Var6 - 1;
      plVar2 = *(long **)(param_1 + 0x28);
      uVar3 = CakeOrder_UI_UIMapBuildingProgress__GetProgressText
                        (param_1,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),iVar5 + -1);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
        Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(param_1 + 0x28),0);
        CakeOrder_UI_UIMapBuildingProgress__RememberProgressValue(param_1,(ulong)Var6 & 0xffffffff);
        CakeOrder_UI_UIMapBuildingProgress__UpdateChestState(param_1);
        lVar4 = *(long *)(param_1 + 0xd0);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042c04d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

