// rea decompile_all
// name: System.OperatingSystem$$get_VersionString
// address: 0x75d8e88
// body: available
// range: 0x75d8e88-0x75d9097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d9094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_OperatingSystem__get_VersionString(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_09521e93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091faca8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09207570);
    FUN_03f5c2a4(&DAT_09207d78);
    FUN_03f5c2a4(&DAT_09207d80);
    FUN_03f5c2a4(&DAT_09207d68);
    FUN_03f5c2a4(&DAT_092136e0);
    FUN_03f5c2a4(&DAT_092122f8);
    FUN_03f5c2a4(&DAT_09207d70);
    FUN_03f5c2a4(&DAT_09207d60);
    DAT_09521e93 = 1;
  }
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 != 0) {
    return *plVar7;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      puVar6 = &DAT_09207d60;
    }
    else if (iVar1 == 1) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_075d9094;
      if ((*(int *)(lVar5 + 0x10) < 5) &&
         ((*(int *)(lVar5 + 0x10) != 4 || (*(int *)(lVar5 + 0x14) < 1)))) {
        puVar6 = &DAT_09207d68;
      }
      else {
        puVar6 = &DAT_09207d70;
      }
    }
    else {
      if (iVar1 != 2) goto LAB_075d8fa4;
      puVar6 = &DAT_09207d80;
    }
  }
  else if (iVar1 < 5) {
    if (iVar1 == 3) {
      puVar6 = &DAT_09207d78;
    }
    else if (iVar1 == 4) {
      puVar6 = &DAT_092122f8;
    }
    else {
LAB_075d8fa4:
      puVar6 = &DAT_091faca8;
    }
  }
  else if (iVar1 == 5) {
    puVar6 = &DAT_092136e0;
  }
  else {
    if (iVar1 != 6) goto LAB_075d8fa4;
    puVar6 = &DAT_09207570;
  }
  uVar8 = *puVar6;
  uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x20),0);
  plVar3 = *(long **)(param_1 + 0x10);
  if ((uVar2 & 1) == 0) {
    if (plVar3 == (long *)0x0) goto LAB_075d9094;
    uVar4 = System_Version__ToCachedStringBuilder(plVar3,3);
    uVar4 = System_Text_StringBuilderCache__GetStringAndRelease(uVar4,0);
    lVar5 = System_String__Concat(uVar8,uVar4,DAT_091f5a98,*(undefined8 *)(param_1 + 0x20),0);
  }
  else {
    if (plVar3 == (long *)0x0) {
LAB_075d9094:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    lVar5 = System_String__Concat(uVar8,uVar4,0);
  }
  *plVar7 = lVar5;
  thunk_FUN_03f5d7b8(plVar7,lVar5);
  return *plVar7;
}

