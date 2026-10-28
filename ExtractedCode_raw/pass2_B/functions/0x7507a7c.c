// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$AddDateWordOrPostfix
// address: 0x7507a7c
// body: available
// range: 0x7507a7c-0x7507cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7507b4c to 0x7507cc4 System.Globalization.DateTimeFormatInfoScanner$$AddIgnorableSymbols (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7507cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix
               (long param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_28;
  
  if ((DAT_095216ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fee0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09227248);
    FUN_03f5c2a4(&DAT_092073e8);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095216ad = 1;
  }
  local_28 = 0;
  if (param_3 == 0) {
LAB_07507cc0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_3 + 0x10)) {
    uVar2 = System_String__Equals(param_3,DAT_091f8f68,0);
    if ((uVar2 & 1) != 0) {
      System_Globalization_DateTimeFormatInfoScanner__AddIgnorableSymbols(param_1,DAT_091f8f68);
      return;
    }
    lVar3 = System_Globalization_DateTimeFormatInfoScanner__get_KnownWords();
    if (lVar3 == 0) goto LAB_07507cc0;
    uVar2 = FUN_06fd9fbc(lVar3,param_3,&local_28,DAT_0919fee0);
    if ((uVar2 & 1) == 0) {
      plVar5 = (long *)(param_1 + 0x10);
      if (*plVar5 == 0) {
        lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar3,DAT_091b0558);
        *plVar5 = lVar3;
        thunk_FUN_03f5d7b8(plVar5,lVar3);
      }
      uVar2 = System_String__op_Equality(param_2,DAT_092073e8,0);
      if ((uVar2 & 1) == 0) {
        if (*plVar5 == 0) goto LAB_07507cc0;
        uVar2 = FUN_057e1004(*plVar5,param_3,DAT_091b0590);
        if ((uVar2 & 1) == 0) {
          if (*plVar5 == 0) goto LAB_07507cc0;
          FUN_039b0ea8(*plVar5,param_3,DAT_091b0570);
        }
        sVar1 = System_String__get_Chars(param_3,*(int *)(param_3 + 0x10) + -1,0);
        if (sVar1 != 0x2e) {
          return;
        }
        uVar4 = System_String__Substring(param_3,0,*(int *)(param_3 + 0x10) + -1,0);
        lVar3 = *plVar5;
      }
      else {
        uVar4 = System_String__Concat(DAT_09227248,param_3,0);
        lVar3 = *plVar5;
      }
      if (lVar3 == 0) goto LAB_07507cc0;
      uVar2 = FUN_057e1004(lVar3,uVar4,DAT_091b0590);
      if ((uVar2 & 1) == 0) {
        if (*plVar5 == 0) goto LAB_07507cc0;
        FUN_039b0ea8(*plVar5,uVar4,DAT_091b0570);
      }
    }
  }
  return;
}

