// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$Seek
// address: 0x7576b20
// body: available
// range: 0x7576b20-0x7576c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7576b94 to 0x7629f0c System.Threading.Interlocked$$Read (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7576c10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_UnmanagedMemoryStream__Seek(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x1;
  
  System_IO_UnmanagedMemoryStream__EnsureNotClosed();
  if (param_3 == 2) {
    lVar1 = param_1 + 0x38;
LAB_07576b68:
    lVar1 = System_Threading_Interlocked__Read(lVar1,0);
    lVar1 = lVar1 + param_2;
    param_2 = lVar1;
  }
  else {
    if (param_3 == 1) {
      lVar1 = param_1 + 0x48;
      goto LAB_07576b68;
    }
    lVar1 = extraout_x1;
    if (param_3 != 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09205a60);
      System_ArgumentException___ctor(uVar2,uVar3,0);
      goto LAB_07576bfc;
    }
  }
  if (-1 < param_2) {
    thunk_FUN_03f957a4(param_1 + 0x48,param_2,0);
    System_Threading_Interlocked__Read(param_1 + 0x48,0);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09186188,lVar1);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_091fb8d0);
  System_IO_IOException___ctor(uVar2,uVar3,0);
LAB_07576bfc:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ddfe8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

