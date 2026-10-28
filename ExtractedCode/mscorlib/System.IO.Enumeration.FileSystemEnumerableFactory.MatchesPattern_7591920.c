// rea decompile_all
// name: System.IO.Enumeration.FileSystemEnumerableFactory$$MatchesPattern
// address: 0x7591920
// body: available
// range: 0x7591920-0x7591b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7591a94 to 0x7591bd0 System.IO.Enumeration.FileSystemName$$MatchesWin32Expression (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7591af0 to 0x7591b48 System.IO.Enumeration.FileSystemName$$MatchesSimpleExpression (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7591afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7591b44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Enumeration_FileSystemEnumerableFactory__MatchesPattern
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((DAT_09521b64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184598);
    FUN_03f5c2a4(&DAT_09188f58);
    DAT_09521b64 = 1;
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = *(int *)(param_4 + 0x1c);
  if (iVar4 == 0) {
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09521b72 == '\0') {
      FUN_03f5c2a4(&DAT_09188f58);
      DAT_09521b72 = '\x01';
    }
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(char **)(DAT_09188f58 + 0xb8) == '\0') {
      bVar1 = true;
      goto LAB_075919dc;
    }
    iVar4 = *(int *)(param_4 + 0x1c);
  }
  bVar1 = iVar4 == 2;
LAB_075919dc:
  if (*(int *)(param_4 + 0x18) == 1) {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (param_1 == 0) {
      uVar2 = 0;
      uVar5 = 0;
    }
    else {
      uVar2 = System_String__GetRawStringData(param_1,0);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
    }
    if (*(int *)(DAT_09184598 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_IO_Enumeration_FileSystemName__MatchesWin32Expression(uVar2,uVar5,param_2,param_3,bVar1);
    return;
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092206f0);
    System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091cc348);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (param_1 == 0) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = System_String__GetRawStringData(param_1,0);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(DAT_09184598 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_IO_Enumeration_FileSystemName__MatchesSimpleExpression(uVar2,uVar5,param_2,param_3,bVar1);
  return;
}

