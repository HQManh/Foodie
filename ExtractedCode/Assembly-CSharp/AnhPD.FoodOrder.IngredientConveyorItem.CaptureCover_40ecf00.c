// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$CaptureCover
// address: 0x40ecf00
// body: available
// range: 0x40ecf00-0x40ed14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ed124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ed148 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__CaptureCover
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_095160cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce0);
    FUN_03f5c2a4(&DAT_091cdbe8);
    FUN_03f5c2a4(&DAT_091a8650);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160cb = 1;
  }
  if (*(char *)(param_5 + 0x200) == '\0') {
    uVar5 = *(undefined8 *)(param_5 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_5 + 0x38) != 0) &&
         (lVar2 = UnityEngine_GameObject__get_transform(*(long *)(param_5 + 0x38),0), lVar2 != 0)) {
        uVar8 = UnityEngine_Transform__get_localPosition(lVar2,0);
        *(undefined4 *)(param_5 + 0x1d8) = uVar8;
        *(undefined4 *)(param_5 + 0x1dc) = param_2;
        *(undefined4 *)(param_5 + 0x1e0) = param_3;
        uVar8 = UnityEngine_Transform__get_localScale(lVar2,0);
        *(undefined4 *)(param_5 + 0x1e4) = uVar8;
        *(undefined4 *)(param_5 + 0x1e8) = param_2;
        *(undefined4 *)(param_5 + 0x1ec) = param_3;
        if (*(long *)(param_5 + 0x38) != 0) {
          uVar5 = FUN_04b7ceb4(*(long *)(param_5 + 0x38),1,DAT_091cdbe8);
          *(undefined8 *)(param_5 + 0x1f0) = uVar5;
          thunk_FUN_03f5d7b8(param_5 + 0x1f0,uVar5);
          if (*(long *)(param_5 + 0x1f0) != 0) {
            uVar5 = FUN_03f5c394(DAT_0917fce0,*(undefined4 *)(*(long *)(param_5 + 0x1f0) + 0x18));
            *(undefined8 *)(param_5 + 0x1f8) = uVar5;
            thunk_FUN_03f5d7b8(param_5 + 0x1f8,uVar5);
            lVar2 = *(long *)(param_5 + 0x1f0);
            if (lVar2 != 0) {
              auVar9 = NEON_fmov(0x3f800000,4);
              lVar6 = 0;
              lVar7 = 4;
              do {
                uVar1 = lVar7 - 4;
                if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar1) {
                  *(undefined1 *)(param_5 + 0x200) = 1;
                  return;
                }
                if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040ed148;
                uVar5 = *(undefined8 *)(lVar2 + lVar7 * 8);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
                lVar2 = *(long *)(param_5 + 0x1f8);
                if ((uVar3 & 1) == 0) {
                  if (lVar2 == 0) break;
                  if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040ed148;
                  *(long *)(lVar2 + lVar6 + 0x28) = auVar9._8_8_;
                  *(long *)(lVar2 + lVar6 + 0x20) = auVar9._0_8_;
                }
                else {
                  lVar4 = *(long *)(param_5 + 0x1f0);
                  if (lVar4 == 0) break;
                  if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_040ed148:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar4 = *(long *)(lVar4 + lVar7 * 8);
                  if ((lVar4 == 0) ||
                     (uVar8 = UnityEngine_SpriteRenderer__get_color(lVar4,0), lVar2 == 0)) break;
                  if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040ed148;
                  lVar2 = lVar2 + lVar6;
                  *(undefined4 *)(lVar2 + 0x20) = uVar8;
                  *(undefined4 *)(lVar2 + 0x24) = param_2;
                  *(undefined4 *)(lVar2 + 0x28) = param_3;
                  *(undefined4 *)(lVar2 + 0x2c) = param_4;
                  lVar2 = *(long *)(param_5 + 0x1f0);
                  if (lVar2 == 0) break;
                  if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_040ed148;
                  if (*(long *)(param_5 + 0x208) == 0) break;
                  FUN_053ec72c(*(long *)(param_5 + 0x208),*(undefined8 *)(lVar2 + lVar7 * 8),
                               DAT_091a8650);
                }
                lVar2 = *(long *)(param_5 + 0x1f0);
                lVar7 = lVar7 + 1;
                lVar6 = lVar6 + 0x10;
              } while (lVar2 != 0);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

