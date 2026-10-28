// rea decompile_all
// name: System.Version$$ToCachedStringBuilder
// address: 0x75d61c8
// body: available
// range: 0x75d61c8-0x75d640f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d6324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d640c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Version__ToCachedStringBuilder(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_2 == 2) {
    lVar1 = System_Text_StringBuilderCache__Acquire(0x10,0);
    if (lVar1 == 0) {
LAB_075d6324:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x10),0);
    System_Text_StringBuilder__Append(lVar1,0x2e,0);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
LAB_075d6308:
    System_Text_StringBuilder__Append(lVar1,uVar6,0);
    return lVar1;
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fbe08);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091f95f0);
    puVar4 = &DAT_091f9be0;
  }
  else {
    if (param_2 == 3) {
      lVar1 = System_Text_StringBuilderCache__Acquire(0x10,0);
      if (lVar1 == 0) goto LAB_075d6324;
      System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x10),0);
      System_Text_StringBuilder__Append(lVar1,0x2e,0);
      System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x14),0);
      System_Text_StringBuilder__Append(lVar1,0x2e,0);
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      goto LAB_075d6308;
    }
    if (*(int *)(param_1 + 0x1c) == -1) {
      uVar2 = thunk_FUN_03fc39d4(&DAT_091fbe08);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091f95f0);
      puVar4 = &DAT_091f9dc0;
    }
    else {
      if (param_2 == 4) {
        lVar1 = System_Text_StringBuilderCache__Acquire(0x10,0);
        if (lVar1 == 0) goto LAB_075d6324;
        System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x10),0);
        System_Text_StringBuilder__Append(lVar1,0x2e,0);
        System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x14),0);
        System_Text_StringBuilder__Append(lVar1,0x2e,0);
        System_Text_StringBuilder__Append(lVar1,*(undefined4 *)(param_1 + 0x18),0);
        System_Text_StringBuilder__Append(lVar1,0x2e,0);
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        goto LAB_075d6308;
      }
      uVar2 = thunk_FUN_03fc39d4(&DAT_091fbe08);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091f95f0);
      puVar4 = &DAT_091f9e28;
    }
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  uVar2 = SR__Format(uVar2,uVar3,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar3 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_0921b620);
  System_ArgumentException___ctor(uVar3,uVar2,uVar5,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091dec58);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

