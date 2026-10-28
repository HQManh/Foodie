// rea decompile_all
// name: System.IO.TextReader.<>c$$<ReadAsyncInternal>b__17_0
// address: 0x7574388
// body: available
// range: 0x7574388-0x7574477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7574470 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7574474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_TextReader_<>c__<ReadAsyncInternal>b__17_0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long local_30;
  long lStack_28;
  
  if ((DAT_09521a56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4768);
    FUN_03f5c2a4(&DAT_091bd660);
    FUN_03f5c2a4(&DAT_091bd668);
    FUN_03f5c2a4(&DAT_0917efc0);
    DAT_09521a56 = 1;
  }
  local_30 = 0;
  lStack_28 = 0;
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0917efc0 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0917efc0 + 0x130) * 8 + -8) !=
        DAT_0917efc0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    lStack_28 = param_2[4];
    local_30 = param_2[3];
    plVar1 = (long *)param_2[2];
    auVar2 = FUN_05a50e74(&local_30,DAT_091b4768);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1f8))
                (plVar1,auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(*plVar1 + 0x200));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

