// rea decompile_all
// name: MessagePack.MessagePackWriter$$Advance
// address: 0x73a1c00
// body: available
// range: 0x73a1c00-0x73a1c77 inclusive
// range: 0x73a1c7c-0x73a1cc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a1c74 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a1cc4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackWriter__Advance(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (DAT_09516fa7 == '\0') {
    FUN_03f5c2a4(&DAT_091c4240);
    FUN_03f5c2a4(&DAT_091ba910);
    DAT_09516fa7 = '\x01';
  }
  lVar3 = (long)*(int *)(param_1 + 0x28) + (long)(int)param_2;
  if (lVar3 == (int)lVar3) {
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_2;
    if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar3 = *(long *)(param_1 + 8);
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    *(long *)(param_1 + 8) = lVar3 + (int)param_2;
    *(ulong *)(param_1 + 0x10) = (ulong)(uVar1 - param_2);
    return;
  }
  uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,DAT_091c4240);
}

