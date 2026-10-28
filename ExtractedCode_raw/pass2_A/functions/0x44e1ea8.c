// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$HidesHeldIngredient
// address: 0x44e1ea8
// body: available
// range: 0x44e1ea8-0x44e1fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e1fbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookOrder_Cooking_Implement_CookingToolPresentation__HidesHeldIngredient
               (long param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  if ((DAT_0951836b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e020);
    FUN_03f5c2a4(&DAT_0919d680);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951836b = 1;
  }
  local_30 = 0;
  local_28 = 0;
  uVar2 = CookOrder_Cooking_Implement_CookingToolPresentation__get_RepresentsIngredient(param_1);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_044e1fbc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06ef1fe8(*(long *)(param_1 + 0x68),param_2,&local_28,DAT_0919d680);
    if ((uVar2 & 1) != 0) {
      if (local_28 == 0) goto LAB_044e1fbc;
      if (*(char *)(local_28 + 0x19) != '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x88);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) != 0) goto LAB_044e1f04;
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_044e1fbc;
        uVar2 = FUN_06ef1fe8(*(long *)(param_1 + 0x78),param_2,&local_30,DAT_0919e020);
        if (((uVar2 & 1) != 0) && (local_30 != 0)) {
          return *(char *)(local_30 + 0x49) != '\0';
        }
      }
    }
    bVar1 = false;
  }
  else {
LAB_044e1f04:
    bVar1 = true;
  }
  return bVar1;
}

