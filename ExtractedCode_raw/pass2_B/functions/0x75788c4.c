// rea decompile_all
// name: System.IO.DirectoryInfo$$Init
// address: 0x75788c4
// body: available
// range: 0x75788c4-0x7578b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7578b64 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7578b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_DirectoryInfo__Init(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09521a89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091b97f0);
    DAT_09521a89 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09220b48);
    System_ArgumentNullException___ctor(uVar1,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c8610);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar1,uVar3);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(param_1 + 0x98) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x98),param_2);
  if (param_3 != 0) {
    param_2 = param_3;
  }
  if ((param_5 & 1) == 0) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = System_IO_Path__GetFullPath(param_2,0);
  }
  if (param_4 != 0) goto LAB_07578ae8;
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (param_2 == 0) goto LAB_075789b8;
LAB_07578988:
    uVar1 = System_String__GetRawStringData(param_2,0);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    if (param_2 != 0) goto LAB_07578988;
LAB_075789b8:
    uVar1 = 0;
    uVar4 = 0;
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_IO_PathInternal__IsRoot(uVar1,uVar4,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_09515cf2 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09515cf2 = '\x01';
      if (param_2 == 0) goto LAB_07578a70;
LAB_07578a1c:
      uVar1 = System_String__GetRawStringData(param_2,0);
      uVar4 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      if (param_2 != 0) goto LAB_07578a1c;
LAB_07578a70:
      uVar1 = 0;
      uVar4 = 0;
    }
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar5 = System_IO_PathInternal__TrimEndingDirectorySeparator(uVar1,uVar4,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = System_IO_Path__GetFileName(auVar5._0_8_,auVar5._8_8_,0);
  }
  else {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (param_2 == 0) {
      local_50 = ZEXT816(0);
    }
    else {
      uVar1 = System_String__GetRawStringData(param_2,0);
      local_50._8_4_ = *(undefined4 *)(param_2 + 0x10);
      local_50._0_8_ = uVar1;
      local_50._12_4_ = 0;
    }
  }
  param_4 = FUN_05ff6c30(local_50,DAT_091b97f0);
LAB_07578ae8:
  *(long *)(param_1 + 0xa0) = param_4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xa0),param_4);
  *(long *)(param_1 + 0x90) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),param_2);
  return;
}

