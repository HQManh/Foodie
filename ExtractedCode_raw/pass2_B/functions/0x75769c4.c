// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$ReadByte
// address: 0x75769c4
// body: available
// range: 0x75769c4-0x7576acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7576ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7576ac8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7576acc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07576a94) */
/* WARNING: Removing unreachable block (ram,0x07576ac4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong System_IO_UnmanagedMemoryStream__ReadByte(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_38;
  
  local_38 = 0;
  System_IO_UnmanagedMemoryStream__EnsureNotClosed();
  System_IO_UnmanagedMemoryStream__EnsureReadable(param_1);
  lVar1 = System_Threading_Interlocked__Read(param_1 + 0x48,0);
  lVar2 = System_Threading_Interlocked__Read(param_1 + 0x38,0);
  if (lVar1 < lVar2) {
    thunk_FUN_03f957a4(param_1 + 0x48,lVar1 + 1,0);
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar3 = (ulong)*(byte *)(lVar1 + *(long *)(param_1 + 0x30));
    }
    else {
      local_38 = 0;
      System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_InteropServices_SafeBuffer__AcquirePointer
                (*(long *)(param_1 + 0x28),&local_38,0);
      uVar3 = (ulong)*(byte *)(lVar1 + local_38 + *(long *)(param_1 + 0x50));
      if (local_38 != 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Runtime_InteropServices_SafeBuffer__ReleasePointer(*(long *)(param_1 + 0x28),0);
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

