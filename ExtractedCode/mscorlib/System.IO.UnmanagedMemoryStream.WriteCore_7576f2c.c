// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$WriteCore
// address: 0x7576f2c
// body: available
// range: 0x7576f2c-0x75771c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75771b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75771b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75771c0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75771c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075770c0) */
/* WARNING: Removing unreachable block (ram,0x075770bc) */
/* WARNING: Removing unreachable block (ram,0x075771bc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_IO_UnmanagedMemoryStream__WriteCore(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_09521a79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3020);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09521a79 = 1;
  }
  local_50 = 0;
  System_IO_UnmanagedMemoryStream__EnsureNotClosed(param_1);
  System_IO_UnmanagedMemoryStream__EnsureWriteable(param_1);
  lVar2 = System_Threading_Interlocked__Read(param_1 + 0x48,0);
  lVar3 = System_Threading_Interlocked__Read(param_1 + 0x38,0);
  lVar1 = lVar2 + (int)param_3;
  if (lVar1 < 0) {
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbf0);
    System_IO_IOException___ctor(uVar5,uVar4,0);
  }
  else {
    if (lVar1 <= *(long *)(param_1 + 0x40)) {
      if (*(long *)(param_1 + 0x28) == 0) {
        if (lVar2 - lVar3 != 0 && lVar3 <= lVar2) {
          System_Buffer__ZeroMemory(lVar3 + *(long *)(param_1 + 0x30),lVar2 - lVar3,0);
        }
        if (lVar3 < lVar1) {
          thunk_FUN_03f957a4(param_1 + 0x38,lVar1,0);
        }
      }
      uVar4 = FUN_04c072ac(param_2,param_3,DAT_091d3020);
      if (*(long *)(param_1 + 0x28) == 0) {
        System_Buffer__Memcpy(lVar2 + *(long *)(param_1 + 0x30),uVar4,param_3 & 0xffffffff,0);
      }
      else {
        if (*(long *)(param_1 + 0x40) - lVar2 < (long)(int)param_3) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          uVar4 = thunk_FUN_03fc39d4(&DAT_09208fa0);
          System_ArgumentException___ctor(uVar5,uVar4,0);
          goto LAB_075771a0;
        }
        local_50 = 0;
        System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Runtime_InteropServices_SafeBuffer__AcquirePointer
                  (*(long *)(param_1 + 0x28),&local_50,0);
        System_Buffer__Memcpy
                  (lVar2 + local_50 + *(long *)(local_48 + 0x50),uVar4,param_3 & 0xffffffff,0);
        if (local_50 != 0) {
          if (*(long *)(local_48 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_Runtime_InteropServices_SafeBuffer__ReleasePointer(*(long *)(local_48 + 0x28),0);
        }
      }
      thunk_FUN_03f957a4(local_48 + 0x48,lVar1,0);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092119b0);
    System_NotSupportedException___ctor(uVar5,uVar4,0);
  }
LAB_075771a0:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091de010);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

