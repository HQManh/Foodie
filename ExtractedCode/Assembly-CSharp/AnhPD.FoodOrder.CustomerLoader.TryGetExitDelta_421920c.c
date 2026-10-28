// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$TryGetExitDelta
// address: 0x421920c
// body: available
// range: 0x421920c-0x42193df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42193dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CustomerLoader__TryGetExitDelta
               (long param_1,long param_2,float *param_3,float *param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09516ce6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b7400);
    FUN_03f5c2a4(&DAT_091b7408);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213c30);
    DAT_09516ce6 = 1;
  }
  *param_4 = 0.0;
  cVar1 = *(char *)(param_1 + 0x84);
  *param_3 = 0.0;
  if (cVar1 == '\0') {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09213c30,param_1,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    fVar5 = 1.0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_042193dc;
      fVar5 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0xa8),0);
    }
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar6 = ABS(fVar5);
    if (ABS(fVar5) <= 0.0) {
      fVar6 = 0.0;
    }
    fVar8 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar7 = fVar6 * 1e-06;
    if (fVar6 * 1e-06 <= fVar8) {
      fVar7 = fVar8;
    }
    fVar6 = 1.0;
    if (fVar7 <= ABS(0.0 - fVar5)) {
      fVar6 = fVar5;
    }
    fVar5 = (float)FUN_05c375a8((char *)(param_1 + 0x84),DAT_091b7408);
    if ((param_2 == 0) || (lVar3 = UnityEngine_Component__get_transform(param_2,0), lVar3 == 0)) {
LAB_042193dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar7 = (float)UnityEngine_Transform__get_position(lVar3,0);
    *param_4 = fVar5 - fVar7;
    *param_3 = (fVar5 - fVar7) / fVar6;
  }
  return cVar1 != '\0';
}

