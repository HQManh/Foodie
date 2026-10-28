// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$get_TintRenderers
// address: 0x40ed8e8
// body: available
// range: 0x40ed8e8-0x40edacf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40edac8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40edacc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientConveyorItem__get_TintRenderers(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((DAT_095160bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_091b0420);
    FUN_03f5c2a4(&DAT_091b03f0);
    FUN_03f5c2a4(&DAT_0917cc90);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160bb = 1;
  }
  plVar8 = (long *)(param_1 + 0xf0);
  if (*plVar8 != 0) {
    return *plVar8;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cc90);
  FUN_057e0400(lVar3,DAT_091b03f0);
  lVar4 = AnhPD_FoodOrder_IngredientConveyorItem__get_AllRenderers(param_1);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar11 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar9 = *(undefined8 *)(lVar4 + 0x20 + uVar11 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar6 & 1) != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x48);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar9,uVar10,0);
          lVar2 = DAT_091b0400;
          if ((uVar6 & 1) != 0) {
            if (lVar3 == 0) goto LAB_040edacc;
            lVar7 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_040edacc;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar5 = uVar9;
              thunk_FUN_03f5d7b8(puVar5,uVar9);
            }
            else {
              FUN_057e0c68(lVar3,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    if (lVar3 != 0) {
      lVar3 = FUN_057e28a4(lVar3,DAT_091b0420);
      *plVar8 = lVar3;
      thunk_FUN_03f5d7b8(plVar8,lVar3);
      return *plVar8;
    }
  }
LAB_040edacc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

