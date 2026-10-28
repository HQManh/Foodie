// rea decompile_all
// name: MessagePack.BufferWriter$$GetPointer
// address: 0x7381a00
// body: available
// range: 0x7381a00-0x7381b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7381b20 to 0x61083c4 FUN_061083c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7381b34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7381b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7381b3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_BufferWriter__GetPointer(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09520a0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_091c4250);
    FUN_03f5c2a4(&DAT_091ba908);
    DAT_09520a0f = 1;
  }
  if (DAT_0951cd1c == '\0') {
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_0951cd1c = '\x01';
  }
  if (*(int *)(param_1 + 0x10) < param_2) {
    MessagePack_BufferWriter__EnsureMore(param_1,param_2);
  }
  if (*(int *)(DAT_09175040 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = FUN_061083c4(param_1 + 8,DAT_091ba908);
    return lVar4;
  }
  if (*(int *)(DAT_09175040 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(param_1 + 0x18);
  }
  lVar2 = (long)*(int *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28);
  if (lVar2 != (int)lVar2) {
    uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,DAT_091c4250);
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    return lVar4 + (int)uVar1 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

