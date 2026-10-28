// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$AddDateWords
// address: 0x7507e38
// body: available
// range: 0x7507e38-0x750800f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750800c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_DateTimeFormatInfoScanner__AddDateWords
              (undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((DAT_095216ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095216ae = 1;
  }
  iVar1 = System_Globalization_DateTimeFormatInfoScanner__SkipWhiteSpacesAndNonLetter
                    (param_2,param_3);
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,0);
  if (param_2 == 0) {
LAB_0750800c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar1 < *(int *)(param_2 + 0x10)) {
    if (iVar1 != param_3) {
      param_4 = 0;
    }
    do {
      while( true ) {
        uVar2 = System_String__get_Chars(param_2,iVar1,0);
        if ((uVar2 & 0xffff) != 0x5c) break;
        iVar6 = iVar1 + 1;
        if (iVar6 < *(int *)(param_2 + 0x10)) {
          uVar2 = System_String__get_Chars(param_2,iVar6,0);
          if (plVar3 == (long *)0x0) goto LAB_0750800c;
          iVar6 = 2;
LAB_07507f48:
          System_Text_StringBuilder__Append(plVar3,uVar2,0);
          iVar6 = iVar1 + iVar6;
        }
        iVar1 = iVar6;
        if (*(int *)(param_2 + 0x10) <= iVar1) {
          return iVar1;
        }
      }
      if ((uVar2 & 0xffff) == 0x27) {
        if (plVar3 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix
                    (param_1,param_4,uVar5);
          return iVar1 + 1;
        }
        goto LAB_0750800c;
      }
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Char__IsWhiteSpace(uVar2,0);
      if ((uVar4 & 1) == 0) {
        if (plVar3 != (long *)0x0) {
          iVar6 = 1;
          goto LAB_07507f48;
        }
        goto LAB_0750800c;
      }
      if (plVar3 == (long *)0x0) goto LAB_0750800c;
      uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix(param_1,param_4,uVar5);
      System_Text_StringBuilder__set_Length(plVar3,0,0);
      iVar1 = iVar1 + 1;
      param_4 = 0;
    } while (iVar1 < *(int *)(param_2 + 0x10));
  }
  return iVar1;
}

