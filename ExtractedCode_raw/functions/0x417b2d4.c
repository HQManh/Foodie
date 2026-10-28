// rea decompile_all
// name: UniRx.Triggers.ObservableAnimatorTrigger$$OnAnimatorMove
// address: 0x417b2d4
// body: available
// range: 0x417b2d4-0x417b38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417b380 to 0x61eb1fc FUN_061eb1fc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Triggers_ObservableAnimatorTrigger__OnAnimatorMove(long param_1)

{
  long lVar1;
  
  if ((DAT_0951662b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bbf20);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_0951662b = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ed7 == '\0') {
      FUN_03f5c2a4(&DAT_0918c670);
      DAT_09515ed7 = '\x01';
    }
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_061eb1fc(lVar1,**(undefined1 **)(DAT_0918c670 + 0xb8),DAT_091bbf20);
    return;
  }
  return;
}

