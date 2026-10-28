// rea decompile_all
// name: System.Globalization.IdnMapping$$VerifyStd3AsciiRules
// address: 0x754cf78
// body: available
// range: 0x754cf78-0x754d147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754d0dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754d0e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_IdnMapping__VerifyStd3AsciiRules
               (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int local_34;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    sVar2 = System_String__get_Chars(param_2,0,0);
    if (sVar2 == 0x2d) {
      local_34 = param_3;
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
      puVar5 = &DAT_091f7b40;
LAB_0754d094:
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      uVar4 = System_String__Format(uVar6,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar6,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091cfae8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar4);
    }
    if (0 < *(int *)(param_2 + 0x10)) {
      sVar2 = System_String__get_Chars(param_2,*(int *)(param_2 + 0x10) + -1,0);
      if (sVar2 == 0x2d) {
        FUN_039b1d98(param_2);
        local_38 = param_3 + *(int *)(param_2 + 0x10) + -1;
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
        puVar5 = &DAT_091f7b48;
        goto LAB_0754d094;
      }
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar7 = 0;
        do {
          uVar3 = System_String__get_Chars(param_2,iVar7,0);
          if (uVar3 != 0x2d) {
            if (0x2f < uVar3) {
              uVar1 = uVar3 - 0x5b;
              if (((0x24 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x1f0000003fU) == 0)) &&
                 (6 < uVar3 - 0x3a)) goto LAB_0754d048;
            }
            local_3c = param_3 + iVar7;
            uVar4 = FUN_03f5c42c(DAT_09535420,&local_3c);
            puVar5 = &DAT_09208ef8;
            goto LAB_0754d094;
          }
LAB_0754d048:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 0x10));
      }
    }
  }
  return;
}

