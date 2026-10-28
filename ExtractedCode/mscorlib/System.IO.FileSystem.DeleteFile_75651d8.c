// rea decompile_all
// name: System.IO.FileSystem$$DeleteFile
// address: 0x75651d8
// body: available
// range: 0x75651d8-0x756537f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756537c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileSystem__DeleteFile(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_28;
  
  if ((DAT_095219d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_095219d8 = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = Interop_Sys__Unlink(param_1,0);
  if (-1 < iVar1) {
    return;
  }
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Interop_Sys__GetLastErrorInfo(0);
  iVar1 = (int)uVar2;
  if (iVar1 == 0x1002d) {
    return;
  }
  if (iVar1 != 0x10048) {
    uVar6 = uVar2;
    if (iVar1 == 0x1001f) {
      uVar6 = InteropErrorExtensions__Info(0x10002,0);
      uVar2 = uVar6;
    }
    goto LAB_0756534c;
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_IO_PathInternal__TrimEndingDirectorySeparator(param_1);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (lVar3 != 0) goto LAB_075652ac;
LAB_075652d8:
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_075652d8;
LAB_075652ac:
    uVar4 = System_String__GetRawStringData(lVar3,0);
    uVar8 = *(undefined4 *)(lVar3 + 0x10);
  }
  uVar5 = System_IO_FileSystem__FileExists(uVar4,uVar8,0x8000,&local_28);
  uVar6 = 0x10048;
  if (((uVar5 & 1) == 0) && ((int)local_28 == 0x1002d)) {
    return;
  }
LAB_0756534c:
  uVar4 = Interop__GetExceptionForIoErrno
                    (uVar2 & 0xffffffff00000000 | uVar6 & 0xffffffff,param_1,0,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091cc320);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar7);
}

