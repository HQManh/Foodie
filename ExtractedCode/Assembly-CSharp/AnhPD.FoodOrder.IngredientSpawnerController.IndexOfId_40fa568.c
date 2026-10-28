// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$IndexOfId
// address: 0x40fa568
// body: available
// range: 0x40fa568-0x40fa6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fa6b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_IngredientSpawnerController__IndexOfId(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  
  if ((DAT_09516123 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b360);
    FUN_03f5c2a4(&DAT_0917b4f8);
    DAT_09516123 = 1;
  }
  if ((param_1 != 0) && (plVar8 = *(long **)(param_1 + 0x90), plVar8 != (long *)0x0)) {
    iVar7 = 0;
    do {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b360) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040fa618;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b360,0);
LAB_040fa618:
      iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (iVar1 <= iVar7) {
        return -1;
      }
      plVar8 = *(long **)(param_1 + 0x90);
      if (plVar8 == (long *)0x0) break;
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b4f8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040fa680;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b4f8,0);
LAB_040fa680:
      lVar4 = (*(code *)*puVar2)(plVar8,iVar7,puVar2[1]);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
      }
      uVar5 = System_String__op_Equality(uVar3,param_2,0);
      if ((uVar5 & 1) != 0) {
        return iVar7;
      }
      plVar8 = *(long **)(param_1 + 0x90);
      iVar7 = iVar7 + 1;
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

