// rea decompile_all
// name: System.IO.StreamReader$$Peek
// address: 0x756b7f8
// body: available
// range: 0x756b7f8-0x756b8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756b8b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756b8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756b8b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_StreamReader__Peek(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1[3] == 0) {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fe0f8);
    System_ObjectDisposedException___ctor(uVar3,0,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091da110);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  System_IO_StreamReader__CheckAsyncTaskInProgress();
  if ((int)param_1[8] == *(int *)((long)param_1 + 0x44)) {
    if (*(char *)((long)param_1 + 0x56) == '\0') {
      iVar1 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      if (iVar1 != 0) goto LAB_0756b840;
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_0756b840:
    lVar5 = param_1[7];
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = (ulong)*(ushort *)(lVar5 + (long)(int)*(uint *)(param_1 + 8) * 2 + 0x20);
  }
  return uVar2;
}

