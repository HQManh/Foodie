// rea decompile_all
// name: AnhPD.FoodOrder.TutorialStepCallCustomer.<>c__DisplayClass1_0$$<Run>b__0
// address: 0x4119b8c
// body: available
// range: 0x4119b8c-0x4119c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4119c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_TutorialStepCallCustomer_<>c__DisplayClass1_0__<Run>b__0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  if ((DAT_09516256 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516256 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveCustomerTransform
                      (*(long *)(param_1 + 0x10),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar3 & 1) == 0) {
      fVar4 = (float)UnityEngine_Time__get_unscaledTime(0);
      bVar1 = *(float *)(param_1 + 0x18) <= fVar4;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

