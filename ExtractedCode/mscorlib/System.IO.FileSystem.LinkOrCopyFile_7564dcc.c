// rea decompile_all
// name: System.IO.FileSystem$$LinkOrCopyFile
// address: 0x7564dcc
// body: available
// range: 0x7564dcc-0x7564f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7564ea8 to 0x75649f4 System.IO.FileSystem$$CopyFile (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7564f50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileSystem__LinkOrCopyFile(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  
  if ((DAT_095219d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_095219d5 = 1;
  }
  uVar4 = System_IO_FileSystem__CopyDanglingSymlink(param_1,param_2);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = Interop_Sys__Link(param_1,param_2,0);
  if (-1 < iVar3) {
    return;
  }
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = Interop_Sys__GetLastErrorInfo(0);
  iVar3 = (int)uVar5;
  uVar1 = iVar3 - 0x10022;
  if (uVar1 < 0x2e) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x200108200001U) != 0) goto LAB_07564e90;
    if ((ulong)uVar1 == 0xb) {
      lVar6 = thunk_FUN_03fc39d4(&DAT_09188f20);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_IO_Path__GetDirectoryName(param_2,0);
      bVar2 = System_IO_Directory__Exists(uVar7,0);
      bVar8 = bVar2 ^ 1;
      uVar7 = param_2;
      param_2 = param_1;
      goto LAB_07564f20;
    }
  }
  if (iVar3 != 0x10002) {
    uVar7 = 0;
    bVar8 = 0;
    bVar2 = iVar3 == 0x10014;
LAB_07564f20:
    if ((bVar2 & 1) == 0) {
      param_2 = uVar7;
    }
    uVar5 = Interop__GetExceptionForIoErrno(uVar5,param_2,bVar8 & 1,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091cc328);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
LAB_07564e90:
  System_IO_FileSystem__CopyFile(param_1,param_2,0);
  return;
}

