// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorColumn$$AppendPending
// address: 0x40dae30
// body: available
// range: 0x40dae30-0x40daf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40daf34 to 0x40e2b20 AnhPD.FoodOrder.ConveyorIngredientSource$$AppendIds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40daf38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40daf3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorColumn__AppendPending(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_09516030 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    DAT_09516030 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 != 0)) &&
     (0 < (int)*(ulong *)(lVar7 + 0x18))) {
    uVar8 = 0;
    uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      lVar2 = DAT_091b0570;
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar7 + 0x20 + uVar8 * 8);
      if (lVar6 != 0) {
        if (param_2 == 0) goto LAB_040daf38;
        lVar5 = *(long *)(param_2 + 0x10);
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_040daf38;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_2,uVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    AnhPD_FoodOrder_ConveyorIngredientSource__AppendIds
              (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
    return;
  }
LAB_040daf38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

