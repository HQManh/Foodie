// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$get_HasLastSpawnedLeft
// address: 0x420f154
// body: available
// range: 0x420f154-0x420f233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420f230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CustomerSpawner__get_HasLastSpawnedLeft(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09516c64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acac0);
    FUN_03f5c2a4(&DAT_091b2670);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c64 = 1;
  }
  uVar2 = AnhPD_FoodOrder_CustomerSpawner__get_IsAllSpawned(param_1);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x98) == 0) {
LAB_0420f230:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (((*(int *)(*(long *)(param_1 + 0x98) + 0x18) == 0) && (*(long *)(param_1 + 0xa0) == 0)) &&
       (*(long *)(param_1 + 0xa8) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar2 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0420f230;
        uVar1 = FUN_057e1004(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xb8),DAT_091acac0)
        ;
        uVar1 = uVar1 ^ 1;
      }
      goto LAB_0420f1c8;
    }
  }
  uVar1 = 0;
LAB_0420f1c8:
  return uVar1 & 1;
}

