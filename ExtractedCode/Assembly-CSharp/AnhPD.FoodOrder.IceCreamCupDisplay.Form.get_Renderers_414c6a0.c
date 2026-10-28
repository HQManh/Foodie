// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCupDisplay.Form$$get_Renderers
// address: 0x414c6a0
// body: available
// range: 0x414c6a0-0x414c7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414c79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c7a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamCupDisplay_Form__get_Renderers(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_0951644f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180560);
    DAT_0951644f = 1;
  }
  plVar5 = (long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  if (*plVar5 == 0) {
    if (lVar3 == 0) goto LAB_0414c79c;
  }
  else {
    if (lVar3 == 0) goto LAB_0414c79c;
    if (*(int *)(*plVar5 + 0x18) == *(int *)(lVar3 + 0x18)) {
      return;
    }
  }
  uVar1 = FUN_03f5c394(DAT_09180560,*(undefined4 *)(lVar3 + 0x18));
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8(plVar5,uVar1);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar6 = 4;
    lVar7 = 0x20;
    do {
      uVar4 = lVar6 - 4;
      lVar2 = *plVar5;
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_0414c7a0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(lVar3 + lVar6 * 8);
      if (lVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar3 + 0x10);
      }
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0414c7a0;
      *(undefined8 *)(lVar2 + lVar6 * 8) = uVar1;
      thunk_FUN_03f5d7b8(lVar2 + lVar7);
      lVar3 = *(long *)(param_1 + 0x18);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar3 != 0);
  }
LAB_0414c79c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

