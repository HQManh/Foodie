// rea decompile_all
// name: Lean.Common.LeanSelectable$$DeselectAll
// address: 0x7344104
// body: available
// range: 0x7344104-0x73442ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73442f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73442f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73442fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanSelectable__DeselectAll(void)

{
  ulong uVar1;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  if ((DAT_095206c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36e0);
    FUN_03f5c2a4(&DAT_091a36c8);
    FUN_03f5c2a4(&DAT_091a36e8);
    FUN_03f5c2a4(&DAT_091a36d0);
    FUN_03f5c2a4(&DAT_091a36f0);
    FUN_03f5c2a4(&DAT_091a36d8);
    FUN_03f5c2a4(&DAT_09187700);
    FUN_03f5c2a4(&DAT_09187710);
    FUN_03f5c2a4(&DAT_091a9f00);
    FUN_03f5c2a4(&DAT_091a9ee0);
    DAT_095206c9 = 1;
  }
  local_50 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(int *)(DAT_09187700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187700 + 0xb8) != 0) {
    FUN_056326a0(&local_c8,**(long **)(DAT_09187700 + 0xb8),DAT_091a9ee0);
    local_50 = local_a8;
    puStack_68 = puStack_c0;
    local_70 = local_c8;
    local_58 = lStack_b0;
    uStack_60 = local_b8;
    local_c8 = 0;
    puStack_c0 = &local_70;
    while (uVar1 = FUN_071bd040(&local_70,DAT_091a36d0), (uVar1 & 1) != 0) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Lean_Common_LeanSelect__DeselectAll();
    }
    FUN_071bd1e0(&local_70,DAT_091a36c8);
    if (*(int *)(DAT_09187710 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09187710 + 0xb8) != 0) {
      FUN_056326a0(&local_a0,**(long **)(DAT_09187710 + 0xb8),DAT_091a9f00);
      local_c8 = 0;
      puStack_c0 = &local_a0;
      while( true ) {
        uVar1 = FUN_071bd040(&local_a0,DAT_091a36e8);
        if ((uVar1 & 1) == 0) {
          FUN_071bd1e0(&local_a0,DAT_091a36e0);
          return;
        }
        if (local_88 == 0) break;
        if (*(char *)(local_88 + 0x28) != '\0') {
          *(undefined1 *)(local_88 + 0x28) = 0;
          Lean_Common_LeanSelectable__InvokeOnDeslected(local_88,0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

