// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$LocalRect
// address: 0x422db9c
// body: available
// range: 0x422db9c-0x422dcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422dcd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422dcdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_OrderIngredientList__LocalRect(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09516d98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09516d98 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091807f8,4);
  if ((param_2 != 0) && (UnityEngine_RectTransform__GetWorldCorners(param_2,lVar1,0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      if (param_1 == 0) goto LAB_0422dcdc;
      fVar6 = *(float *)(lVar1 + 0x24);
      fVar4 = (float)UnityEngine_Transform__InverseTransformPoint
                               (*(undefined4 *)(lVar1 + 0x20),fVar6,*(undefined4 *)(lVar1 + 0x28),
                                param_1,0);
      uVar3 = 1;
      puVar2 = (undefined4 *)(lVar1 + 0x34);
      fVar8 = fVar4;
      fVar9 = fVar6;
      while (uVar3 < *(uint *)(lVar1 + 0x18)) {
        fVar7 = (float)puVar2[-1];
        fVar5 = (float)UnityEngine_Transform__InverseTransformPoint
                                 (puVar2[-2],fVar7,*puVar2,param_1,0);
        uVar3 = uVar3 + 1;
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        if (fVar8 <= fVar5) {
          fVar8 = fVar5;
        }
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        puVar2 = puVar2 + 3;
        if (uVar3 == 4) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          return fVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0422dcdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

