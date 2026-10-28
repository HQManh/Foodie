// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCupDisplay$$CanShow
// address: 0x414c22c
// body: available
// range: 0x414c22c-0x414c337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414c330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c334 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IceCreamCupDisplay__CanShow(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0951644a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951644a = 1;
  }
  uVar3 = AnhPD_FoodOrder_IceCreamScoopDisplay__CanShow(param_1,param_2);
  if ((uVar3 & 1) != 0) {
    return true;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar7 = 4;
    do {
      uVar2 = *(uint *)(lVar5 + 0x18);
      uVar3 = lVar7 - 4;
      lVar1 = (long)(int)uVar2;
      if (lVar1 <= (long)uVar3) {
        return (long)uVar3 < lVar1;
      }
      if (uVar2 <= uVar3) {
LAB_0414c334:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + lVar7 * 8);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar5 + 0x20);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0414c334;
        lVar5 = *(long *)(lVar5 + lVar7 * 8);
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) break;
        uVar4 = AnhPD_FoodOrder_IceCreamDecorLayout__CanShow(lVar5,param_2);
        if ((uVar4 & 1) != 0) {
          return (long)uVar3 < lVar1;
        }
      }
      lVar5 = *(long *)(param_1 + 0x38);
      lVar7 = lVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

