// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$SetLength
// address: 0x7576c14
// body: available
// range: 0x7576c14-0x7576d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7576cac to 0x7629f00 thunk_FUN_03f957a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7576d7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_UnmanagedMemoryStream__SetLength(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09225370);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    System_IO_UnmanagedMemoryStream__EnsureNotClosed(param_1);
    System_IO_UnmanagedMemoryStream__EnsureWriteable(param_1);
    if (param_2 <= *(long *)(param_1 + 0x40)) {
      lVar1 = System_Threading_Interlocked__Read(param_1 + 0x48,0);
      lVar2 = System_Threading_Interlocked__Read(param_1 + 0x38,0);
      if (param_2 - lVar2 != 0 && lVar2 <= param_2) {
        System_Buffer__ZeroMemory(lVar2 + *(long *)(param_1 + 0x30),param_2 - lVar2,0);
      }
      thunk_FUN_03f957a4(param_1 + 0x38,param_2,0);
      if (param_2 < lVar1) {
        thunk_FUN_03f957a4(param_1 + 0x48,param_2,0);
        return;
      }
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092119b0);
    System_IO_IOException___ctor(uVar4,uVar5,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09210770);
    System_NotSupportedException___ctor(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ddff0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

