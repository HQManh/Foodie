// rea decompile_all
// name: System.IO.FileStream$$get_Length
// address: 0x7587098
// body: available
// range: 0x7587098-0x75871fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7587140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75871f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__get_Length(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int local_14;
  
  if ((DAT_09521b11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    DAT_09521b11 = 1;
  }
  local_14 = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar4 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920ff70);
      System_NotSupportedException___ctor(uVar4,uVar3,0);
    }
    else {
      if ((char)param_1[0xb] != '\0') {
        System_IO_FileStream__FlushBuffer(param_1);
      }
      lVar5 = param_1[7];
      if (*(int *)(DAT_09188380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_IO_MonoIO__GetLength(lVar5,&local_14,0);
      if (local_14 == 0) {
        return;
      }
      uVar3 = System_IO_FileStream__GetSecureFileName(param_1,param_1[6]);
      iVar1 = local_14;
      thunk_FUN_03fc39d4(&DAT_09188380);
      FUN_039afb80();
      uVar4 = System_IO_MonoIO__GetException(uVar3,iVar1,0);
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar4 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0920dbb8);
    System_ObjectDisposedException___ctor(uVar4,uVar3,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091cc2e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

