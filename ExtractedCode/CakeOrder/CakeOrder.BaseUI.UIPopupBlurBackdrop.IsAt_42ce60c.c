// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$IsAt
// address: 0x42ce60c
// body: available
// range: 0x42ce60c-0x42ce767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ce764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_BaseUI_UIPopupBlurBackdrop__IsAt
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_2;
  fVar8 = param_3;
  fVar9 = param_4;
  if ((DAT_09517383 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517383 = 1;
  }
  plVar2 = *(long **)(param_9 + 0x88);
  if (plVar2 != (long *)0x0) {
    fVar5 = (float)(**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    fVar8 = fVar8 - param_3;
    fVar9 = fVar9 - param_4;
    fVar7 = fVar9 * fVar9;
    if (9.9999994e-11 <=
        fVar7 + fVar8 * fVar8 +
                (fVar5 - param_1) * (fVar5 - param_1) + (fVar6 - param_2) * (fVar6 - param_2)) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_9 + 0x50);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        plVar2 = *(long **)(param_9 + 0x50);
        if (plVar2 == (long *)0x0) goto LAB_042ce764;
        fVar6 = (float)(**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
        bVar1 = (fVar9 - param_8) * (fVar9 - param_8) +
                (fVar8 - param_7) * (fVar8 - param_7) +
                (fVar6 - param_5) * (fVar6 - param_5) + (fVar7 - param_6) * (fVar7 - param_6) <
                9.9999994e-11;
      }
      else {
        bVar1 = true;
      }
    }
    return bVar1;
  }
LAB_042ce764:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

