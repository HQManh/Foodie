// rea decompile_all
// name: Lean.Common.LeanSelectable$$OnDestroy
// address: 0x7344560
// body: available
// range: 0x7344560-0x7344563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanSelectable__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if ((DAT_095206c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36c8);
    FUN_03f5c2a4(&DAT_091a36d0);
    FUN_03f5c2a4(&DAT_091a36d8);
    FUN_03f5c2a4(&DAT_09187700);
    FUN_03f5c2a4(&DAT_091a9ee0);
    DAT_095206c8 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    Lean_Common_LeanSelectable__InvokeOnDeslected(param_1,0);
  }
  if (*(int *)(DAT_09187700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09187700 + 0xb8) != 0) {
    FUN_056326a0(&uStack_60,**(long **)(DAT_09187700 + 0xb8),DAT_091a9ee0);
    while( true ) {
      uVar1 = FUN_071bd040(&uStack_60,DAT_091a36d0);
      if ((uVar1 & 1) == 0) {
        FUN_071bd1e0(&uStack_60,DAT_091a36c8);
        return;
      }
      if (lStack_48 == 0) break;
      Lean_Common_LeanSelect__Deselect(lStack_48,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

