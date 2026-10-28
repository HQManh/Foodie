// rea decompile_all
// name: AnhPD.FoodOrder.BoosterService$$CanAutoMakeOrder
// address: 0x41e6940
// body: available
// range: 0x41e6940-0x41e6a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e6a14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte AnhPD_FoodOrder_BoosterService__CanAutoMakeOrder(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((DAT_09516b07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b07 = 1;
  }
  fVar5 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (0.2 <= fVar5 - *(float *)(param_1 + 0x38)) {
    uVar6 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_1 + 0x38) = uVar6;
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_041e6a14:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 == 0)) goto LAB_041e6a14;
      bVar1 = AnhPD_FoodOrder_FCustomerLineHandle__get_HasAutoCompletableOrder(lVar3,0);
    }
    *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x3c) != '\0';
  }
  return bVar1 & 1;
}

