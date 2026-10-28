// rea decompile_all
// name: System.Guid$$ToString
// address: 0x75af65c
// body: available
// range: 0x75af65c-0x75af853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75af78c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75af7e8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75af850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Guid__ToString(undefined8 param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_34;
  
  if ((DAT_09521ca7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ffb80);
    DAT_09521ca7 = 1;
  }
  local_34 = 0;
  if ((param_2 == 0) || (iVar1 = *(int *)(param_2 + 0x10), iVar1 == 0)) {
    if (DAT_091ffb80 == 0) goto LAB_075af850;
    iVar1 = *(int *)(DAT_091ffb80 + 0x10);
    param_2 = DAT_091ffb80;
  }
  if (iVar1 != 1) {
LAB_075af748:
    thunk_FUN_03fc39d4(&DAT_09184908);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09202d70);
    System_FormatException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091ce4b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  uVar2 = System_String__get_Chars(param_2,0,0);
  if (uVar2 < 0x59) {
    if (uVar2 < 0x45) {
      if (uVar2 == 0x42) goto LAB_075af7b4;
      if (uVar2 != 0x44) goto LAB_075af748;
LAB_075af724:
      uVar4 = 0x24;
    }
    else if (uVar2 == 0x4e) {
LAB_075af7bc:
      uVar4 = 0x20;
    }
    else {
      if (uVar2 == 0x50) goto LAB_075af7b4;
      if (uVar2 != 0x58) goto LAB_075af748;
LAB_075af7ac:
      uVar4 = 0x44;
    }
  }
  else {
    if (uVar2 < 0x65) {
      if (uVar2 != 0x62) {
        if (uVar2 != 100) goto LAB_075af748;
        goto LAB_075af724;
      }
    }
    else {
      if (uVar2 == 0x6e) goto LAB_075af7bc;
      if (uVar2 != 0x70) {
        if (uVar2 != 0x78) goto LAB_075af748;
        goto LAB_075af7ac;
      }
    }
LAB_075af7b4:
    uVar4 = 0x26;
  }
  lVar6 = System_String__FastAllocateString(uVar4,0);
  if (lVar6 != 0) {
    iVar3 = thunk_FUN_03f68190(0);
    iVar1 = *(int *)(lVar6 + 0x10);
    if (-1 < iVar1) {
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
      }
      uVar4 = System_String__GetRawStringData(param_2,0);
      System_Guid__TryFormat
                (param_1,lVar6 + iVar3,iVar1,&local_34,uVar4,*(undefined4 *)(param_2 + 0x10));
      return lVar6;
    }
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
LAB_075af850:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

