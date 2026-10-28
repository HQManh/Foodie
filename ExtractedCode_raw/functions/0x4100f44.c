// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$CountSwapHomes
// address: 0x4100f44
// body: available
// range: 0x4100f44-0x4100ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4100ff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4100ff8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CookingStation__CountSwapHomes(long param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_28;
  
  local_28 = 0;
  if (((*(char *)(param_1 + 0x90) == '\0') && (*(char *)(param_1 + 0x91) == '\0')) &&
     (uVar3 = AnhPD_FoodOrder_CookingStation__get_IsViewIntakeBusy(param_1), (uVar3 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 == 0) goto LAB_04100ff4;
    if (*(char *)(lVar4 + 0x50) == '\0') {
      lVar4 = *(long *)(param_1 + 0x58);
      if (lVar4 == 0) {
LAB_04100ff4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_04100ff4;
      iVar1 = *(int *)(lVar4 + 0x28);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x58);
    }
    if (iVar1 <= param_3 + 1) {
      uVar2 = AnhPD_FoodOrder_CookingStation__TryPickSwapRaw(param_1,&local_28);
      return uVar2 & 1;
    }
  }
  return 0;
}

