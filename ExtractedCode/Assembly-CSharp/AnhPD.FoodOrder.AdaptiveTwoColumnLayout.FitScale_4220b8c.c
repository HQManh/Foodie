// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$FitScale
// address: 0x4220b8c
// body: available
// range: 0x4220b8c-0x4220d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4220d60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4220d64 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_AdaptiveTwoColumnLayout__FitScale(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09516d21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d21 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_54 = 0;
  AnhPD_FoodOrder_AdaptiveTwoColumnLayout__CollectChildren(param_1);
  if (*(long *)(param_1 + 0x40) == 0) {
LAB_04220d60:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
  if (iVar1 != 0) {
    AnhPD_FoodOrder_AdaptiveTwoColumnLayout__Measure
              (0x3f800000,param_1,iVar1,param_2,(long)&local_48 + 4,&local_48,(long)&local_50 + 4,
               &local_50,&local_54);
    if (local_54 < 1) {
      if ((int)local_50 < 1) {
        return 1.0;
      }
      fVar6 = 0.0;
    }
    else {
      if ((int)local_50 < 1) {
        return 1.0;
      }
      fVar6 = local_48._4_4_ * (float)local_54 + local_50._4_4_ * (float)(local_54 + -1);
    }
    if (0.0 < fVar6) {
      fVar4 = (float)((int)local_50 + -1);
      fVar7 = local_48._4_4_ * (float)(int)local_50 + (float)local_48 * fVar4;
      if (0.0 < fVar7) {
        fVar5 = (float)local_48;
        plVar2 = (long *)UnityEngine_Component__get_transform(param_1,0);
        if (plVar2 != (long *)0x0) {
          if (*plVar2 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          UnityEngine_RectTransform__get_rect(plVar2,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            iVar1 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_1 + 0x20),0);
            fVar3 = (float)AnhPD_FoodOrder_AdaptiveTwoColumnLayout__get_PadVertical(param_1);
            fVar7 = (fVar5 - fVar3) / fVar7;
            fVar6 = (fVar4 - (float)iVar1) / fVar6;
            if (fVar7 <= fVar6) {
              fVar6 = fVar7;
            }
            fVar7 = 1.0;
            if (fVar6 <= 1.0) {
              fVar7 = fVar6;
            }
            if (0.0 <= fVar6) {
              return fVar7;
            }
            return 0.0;
          }
        }
        goto LAB_04220d60;
      }
    }
  }
  return 1.0;
}

