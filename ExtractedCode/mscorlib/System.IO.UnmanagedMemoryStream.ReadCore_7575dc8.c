// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$ReadCore
// address: 0x7575dc8
// body: available
// range: 0x7575dc8-0x7575f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7575f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7575f98 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7575f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07575f40) */
/* WARNING: Removing unreachable block (ram,0x07575f3c) */
/* WARNING: Removing unreachable block (ram,0x07575f94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong System_IO_UnmanagedMemoryStream__ReadCore(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_09521a74 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09521a74 = 1;
  }
  local_40 = 0;
  System_IO_UnmanagedMemoryStream__EnsureNotClosed(param_1);
  System_IO_UnmanagedMemoryStream__EnsureReadable(param_1);
  lVar1 = System_Threading_Interlocked__Read(param_1 + 0x48,0);
  lVar2 = System_Threading_Interlocked__Read(param_1 + 0x38,0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e80);
  }
  uVar3 = System_Math__Min(lVar2 - lVar1,(long)(int)param_3,0);
  if (((long)uVar3 < 1) || ((int)uVar3 < 0)) {
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_04c072b0(param_2,param_3,DAT_091d3028);
    if (*(long *)(param_1 + 0x28) == 0) {
      System_Buffer__Memcpy(uVar4,lVar1 + *(long *)(param_1 + 0x30),uVar3 & 0xffffffff,0);
    }
    else {
      local_40 = 0;
      System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_InteropServices_SafeBuffer__AcquirePointer
                (*(long *)(param_1 + 0x28),&local_40,0);
      System_Buffer__Memcpy
                (uVar4,lVar1 + local_40 + *(long *)(local_38 + 0x50),uVar3 & 0xffffffff,0);
      if (local_40 != 0) {
        if (*(long *)(local_38 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Runtime_InteropServices_SafeBuffer__ReleasePointer(*(long *)(local_38 + 0x28),0);
      }
    }
    thunk_FUN_03f957a4(local_38 + 0x48,uVar3 + lVar1,0);
  }
  return uVar3 & 0xffffffff;
}

