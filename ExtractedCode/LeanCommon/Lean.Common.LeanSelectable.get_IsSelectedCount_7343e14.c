// rea decompile_all
// name: Lean.Common.LeanSelectable$$get_IsSelectedCount
// address: 0x7343e14
// body: available
// range: 0x7343e14-0x7343f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7343f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7343f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Lean_Common_LeanSelectable__get_IsSelectedCount(void)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  
  if ((DAT_095206c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36e0);
    FUN_03f5c2a4(&DAT_091a36e8);
    FUN_03f5c2a4(&DAT_091a36f0);
    FUN_03f5c2a4(&DAT_09187710);
    FUN_03f5c2a4(&DAT_091a9f00);
    DAT_095206c7 = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  if (*(int *)(DAT_09187710 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187710 + 0xb8) != 0) {
    FUN_056326a0(&local_60,**(long **)(DAT_09187710 + 0xb8),DAT_091a9f00);
    iVar3 = 0;
    while( true ) {
      uVar2 = FUN_071bd040(&local_60,DAT_091a36e8);
      if ((uVar2 & 1) == 0) {
        FUN_071bd1e0(&local_60,DAT_091a36e0);
        return iVar3;
      }
      if (local_48 == 0) break;
      uVar1 = Lean_Common_LeanSelectable__get_IsSelected();
      iVar3 = iVar3 + (uVar1 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

