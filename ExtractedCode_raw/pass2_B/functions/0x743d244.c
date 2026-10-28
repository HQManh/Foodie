// rea decompile_all
// name: System.Text.StringBuilder$$ToString
// address: 0x743d244
// body: available
// range: 0x743d244-0x743d357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743d350 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743d354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Text_StringBuilder__ToString(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    lVar3 = **(long **)(DAT_09535468 + 0xb8);
  }
  else {
    lVar3 = System_String__FastAllocateString(iVar2,0);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      iVar2 = thunk_FUN_03f68190(0);
      lVar8 = lVar3 + iVar2;
    }
    do {
      uVar1 = *(uint *)(param_1 + 0x20);
      if (0 < (int)uVar1) {
        if (lVar3 == 0) {
LAB_0743d354:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar3 + 0x10) < *(int *)(param_1 + 0x24) + uVar1) {
LAB_0743d2f8:
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar4 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_09218cb0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_092049a8);
          System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
          uVar5 = thunk_FUN_03fc39d4(&DAT_091da480);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar5);
        }
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) goto LAB_0743d354;
        if (*(uint *)(lVar7 + 0x18) < uVar1) goto LAB_0743d2f8;
        System_String__wstrcpy(lVar8 + (long)*(int *)(param_1 + 0x24) * 2,lVar7 + 0x20,uVar1,0);
      }
      param_1 = *(long *)(param_1 + 0x18);
    } while (param_1 != 0);
  }
  return lVar3;
}

