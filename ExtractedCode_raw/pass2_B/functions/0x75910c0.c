// rea decompile_all
// name: System.IO.Enumeration.FileSystemEnumerableFactory$$NormalizeInputs
// address: 0x75910c0
// body: available
// range: 0x75910c0-0x7591583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7591364 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75914f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7591580 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Enumeration_FileSystemEnumerableFactory__NormalizeInputs
               (ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09521b63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184590);
    FUN_03f5c2a4(&DAT_09184598);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_092145e0);
    FUN_03f5c2a4(&DAT_09214618);
    FUN_03f5c2a4(&DAT_09214610);
    FUN_03f5c2a4(&DAT_091fa158);
    FUN_03f5c2a4(&DAT_092145e8);
    FUN_03f5c2a4(&DAT_091f8660);
    FUN_03f5c2a4(&DAT_091f6d50);
    FUN_03f5c2a4(&DAT_091f8568);
    FUN_03f5c2a4(&DAT_091fad68);
    FUN_03f5c2a4(&DAT_09214658);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521b63 = 1;
  }
  uVar6 = *param_2;
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_IO_Path__IsPathRooted(uVar6);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920c9a8);
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921b348);
    System_ArgumentException___ctor(uVar5,uVar2,uVar4,0);
    goto LAB_0759156c;
  }
  uVar6 = *param_2;
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (uVar6 != 0) goto LAB_075911e4;
LAB_07591214:
    uVar2 = 0;
  }
  else {
    if (uVar6 == 0) goto LAB_07591214;
LAB_075911e4:
    uVar2 = System_String__GetRawStringData(uVar6,0);
    uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar7 = System_IO_Path__GetDirectoryName(uVar2,uVar6);
  if (auVar7._8_4_ != 0) {
    uVar6 = *param_1;
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
      if (uVar6 != 0) goto LAB_07591254;
LAB_07591284:
      uVar2 = 0;
    }
    else {
      if (uVar6 == 0) goto LAB_07591284;
LAB_07591254:
      uVar2 = System_String__GetRawStringData(uVar6,0);
      uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_IO_Path__Join(uVar2,uVar6,auVar7._0_8_,auVar7._8_8_);
    *param_1 = uVar6;
    thunk_FUN_03f5d7b8(param_1,uVar6);
    if (*param_2 == 0) goto LAB_075914f0;
    uVar6 = System_String__Substring(*param_2,auVar7._8_4_ + 1,0);
    *param_2 = uVar6;
    thunk_FUN_03f5d7b8(param_2,uVar6);
  }
  if (param_3 == 0) goto LAB_075914f0;
  if (*(int *)(param_3 + 0x18) == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x18) != 1) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_092206f0);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar2,0);
LAB_0759156c:
    uVar2 = thunk_FUN_03fc39d4(&DAT_091cc350);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar2);
  }
  uVar3 = System_String__IsNullOrEmpty(*param_2,0);
  uVar6 = DAT_091f8568;
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = System_String__op_Equality(*param_2,DAT_091f8f68,0), uVar6 = DAT_091f8568,
      (uVar3 & 1) == 0)) &&
     (uVar3 = System_String__op_Equality(*param_2,DAT_091f8660,0), uVar6 = DAT_091f8568,
     (uVar3 & 1) == 0)) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) != 0x5c) {
      uVar6 = *param_2;
      if (*(int *)(DAT_09184590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (uVar6 == 0) goto LAB_075914f0;
      iVar1 = System_String__IndexOfAny(uVar6,**(undefined8 **)(DAT_09184590 + 0xb8),0);
      if (iVar1 != -1) {
        if (*param_2 == 0) {
LAB_075914f0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = System_String__Replace(*param_2,DAT_092145e0,DAT_09214658,0);
        *param_2 = uVar6;
        thunk_FUN_03f5d7b8(param_2,uVar6);
        if (*param_2 == 0) goto LAB_075914f0;
        uVar6 = System_String__Replace(*param_2,DAT_091f6d50,DAT_092145e8,0);
        *param_2 = uVar6;
        thunk_FUN_03f5d7b8(param_2,uVar6);
        if (*param_2 == 0) goto LAB_075914f0;
        uVar6 = System_String__Replace(*param_2,DAT_091fad68,DAT_09214618,0);
        *param_2 = uVar6;
        thunk_FUN_03f5d7b8(param_2,uVar6);
        if (*param_2 == 0) goto LAB_075914f0;
        uVar6 = System_String__Replace(*param_2,DAT_091fa158,DAT_09214610,0);
        *param_2 = uVar6;
        thunk_FUN_03f5d7b8(param_2,uVar6);
      }
    }
    uVar6 = *param_2;
    if (*(int *)(DAT_09184598 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_IO_Enumeration_FileSystemName__TranslateWin32Expression(uVar6);
  }
  *param_2 = uVar6;
  thunk_FUN_03f5d7b8(param_2);
  return;
}

