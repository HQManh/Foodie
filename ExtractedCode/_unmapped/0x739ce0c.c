// rea decompile_all
// name: FUN_0739ce0c
// address: 0x739ce0c
// body: available
// range: 0x739ce0c-0x739cf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739cf04 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739cf20 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_0739ce0c(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_5 + 0x38);
  if (lVar1 == 0) {
    FUN_03f95ac8(param_5);
    lVar1 = *(long *)(param_5 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_2 >> 0x20 < (long)(ulong)param_3) {
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = (ulong)param_4;
  if ((long)(int)((int)((ulong)param_2 >> 0x20) - param_3) < (long)uVar2) {
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0x1c,0);
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_3 = (int)param_2 + param_3;
  if (param_1 == 0) {
    if (param_3 != 0 || param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    uVar2 = 0;
    lVar1 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x18) < param_3) || (*(uint *)(param_1 + 0x18) - param_3 < param_4)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar1 = param_1 + (int)param_3 + 0x20;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}

