// rea decompile_all
// name: Lean.Common.LeanSelectable$$get_IsSelected
// address: 0x7343c8c
// body: available
// range: 0x7343c8c-0x7343dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7343da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7343da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Lean_Common_LeanSelectable__get_IsSelected(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 local_30;
  
  if ((DAT_095206c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36c8);
    FUN_03f5c2a4(&DAT_091a36d0);
    FUN_03f5c2a4(&DAT_091a36d8);
    FUN_03f5c2a4(&DAT_09187700);
    FUN_03f5c2a4(&DAT_091a9ee0);
    DAT_095206c6 = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(int *)(DAT_09187700 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09187700 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_056326a0(&local_50,**(long **)(DAT_09187700 + 0xb8),DAT_091a9ee0);
    do {
      uVar1 = FUN_071bd040(&local_50,DAT_091a36d0);
      if ((uVar1 & 1) == 0) break;
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = Lean_Common_LeanSelect__IsSelected(local_38,param_1);
    } while ((uVar2 & 1) == 0);
    FUN_071bd1e0(&local_50,DAT_091a36c8);
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

