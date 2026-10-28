// rea decompile_all
// name: CakeOrder.PopupMinigame.UIZoneMinigameInputSimulator$$CalculateViewWorldCorners
// address: 0x437a60c
// body: available
// range: 0x437a60c-0x437a71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437a718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437a71c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_UIZoneMinigameInputSimulator__CalculateViewWorldCorners(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_0951793a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_0951793a = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091807f8,4);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (UnityEngine_RectTransform__GetWorldCorners(*(long *)(param_1 + 0x20),lVar1,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    uVar5 = *(undefined4 *)(lVar1 + 0x20);
    uVar6 = *(undefined4 *)(lVar1 + 0x24);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined4 *)(lVar1 + 0x28);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar5,uVar6,uVar7,uVar2,0);
    *(undefined4 *)(param_1 + 0x44) = uVar5;
    *(undefined4 *)(param_1 + 0x48) = uVar6;
    if (2 < *(uint *)(lVar1 + 0x18)) {
      fVar4 = *(float *)(lVar1 + 0x3c);
      fVar3 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint
                               (*(undefined4 *)(lVar1 + 0x38),fVar4,*(undefined4 *)(lVar1 + 0x40),
                                *(undefined8 *)(param_1 + 0x28),0);
      *(float *)(param_1 + 0x4c) = fVar3;
      *(float *)(param_1 + 0x50) = fVar4;
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(ulong *)(param_1 + 0x54) =
           CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20),
                    fVar3 - (float)*(undefined8 *)(param_1 + 0x44));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

