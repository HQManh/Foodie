// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$get_MapTransitionProgress
// address: 0x431a434
// body: available
// range: 0x431a434-0x431a527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431a524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CakeOrder_Home_HomeRestaurantsBuildingControl__get_MapTransitionProgress(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09517624 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517624 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x6c)) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        fVar6 = *(float *)(param_1 + 0x38);
        fVar7 = *(float *)(param_1 + 0x7c);
        fVar4 = *(float *)(param_1 + 0x70);
        fVar5 = *(float *)(param_1 + 0x68);
        lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
        if (lVar2 != 0) {
          fVar6 = fVar6 + fVar7;
          fVar7 = (float)UnityEngine_Transform__get_position(lVar2,0);
          fVar4 = fVar4 + fVar6;
          fVar6 = fVar6 + fVar5;
          if (fVar4 == fVar6) {
            return 0.0;
          }
          fVar6 = (fVar7 - fVar4) / (fVar6 - fVar4);
          fVar4 = 1.0;
          if (fVar6 <= 1.0) {
            fVar4 = fVar6;
          }
          if (fVar6 < 0.0) {
            return 0.0;
          }
          return fVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0.0;
}

