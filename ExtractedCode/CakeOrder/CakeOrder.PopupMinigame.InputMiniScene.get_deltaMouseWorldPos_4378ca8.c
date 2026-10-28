// rea decompile_all
// name: CakeOrder.PopupMinigame.InputMiniScene$$get_deltaMouseWorldPos
// address: 0x4378ca8
// body: available
// range: 0x4378ca8-0x4378e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4378e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_PopupMinigame_InputMiniScene__get_deltaMouseWorldPos
          (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar11;
  undefined1 auVar10 [16];
  
  if ((DAT_09517920 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091856f0);
    FUN_03f5c2a4(&DAT_09186df8);
    DAT_09517920 = 1;
  }
  uVar1 = CakeOrder_PopupMinigame_InputMiniScene__get_IsSimulateInput();
  if ((uVar1 & 1) == 0) {
    lVar3 = UnityEngine_Camera__get_main(0);
    UnityEngine_Input__get_mousePosition(0);
    if (lVar3 != 0) {
      fVar6 = (float)UnityEngine_Camera__ScreenToWorldPoint(lVar3,0);
      lVar3 = UnityEngine_Camera__get_main(0);
      fVar7 = (float)UnityEngine_Input__get_mousePosition(0);
      fVar9 = param_2;
      fVar11 = param_3;
      fVar8 = (float)UnityEngine_Input__get_mousePositionDelta(0);
      if (lVar3 != 0) {
        fVar9 = (float)UnityEngine_Camera__ScreenToWorldPoint
                                 (fVar7 - fVar8,param_2 - fVar9,param_3 - fVar11,lVar3,0);
        return ZEXT416((uint)(fVar6 - fVar9));
      }
    }
  }
  else if ((**(long **)(DAT_09186df8 + 0xb8) != 0) &&
          (plVar5 = *(long **)(**(long **)(DAT_09186df8 + 0xb8) + 0x20), plVar5 != (long *)0x0)) {
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_091856f0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_04378df8;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091856f0,3);
LAB_04378df8:
                    /* WARNING: Could not recover jumptable at 0x04378e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar5,puVar2[1]);
    auVar10._4_4_ = extraout_var;
    auVar10._0_4_ = extraout_s0;
    auVar10._8_8_ = extraout_var_00;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

