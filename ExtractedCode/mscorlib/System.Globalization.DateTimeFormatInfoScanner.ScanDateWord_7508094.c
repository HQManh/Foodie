// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$ScanDateWord
// address: 0x7508094
// body: available
// range: 0x7508094-0x75082c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75082c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfoScanner__ScanDateWord(long param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int local_44;
  
  if ((DAT_095216b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_092073e8);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095216b0 = 1;
  }
  local_44 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar3 = 0;
    do {
      uVar2 = System_String__get_Chars(param_2,iVar3,0);
      uVar5 = uVar2 & 0xffff;
      if (uVar5 < 0x4e) {
        if (uVar5 == 0x27) {
          iVar3 = System_Globalization_DateTimeFormatInfoScanner__AddDateWords
                            (param_1,param_2,iVar3 + 1,0);
        }
        else {
          if (uVar5 == 0x2e) {
            if (*(int *)(param_1 + 0x18) == 7) {
              System_Globalization_DateTimeFormatInfoScanner__AddIgnorableSymbols
                        (param_1,DAT_091f8f68);
LAB_0750823c:
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
          }
          else {
            if (uVar5 == 0x4d) {
              iVar3 = System_Globalization_DateTimeFormatInfoScanner__ScanRepeatChar
                                (param_2,0x4d,iVar3,&local_44);
              if (((3 < local_44) && (iVar3 < *(int *)(param_2 + 0x10))) &&
                 (sVar1 = System_String__get_Chars(param_2,iVar3,0), sVar1 == 0x27)) {
                iVar3 = System_Globalization_DateTimeFormatInfoScanner__AddDateWords
                                  (param_1,param_2,iVar3 + 1,DAT_092073e8);
              }
              uVar5 = *(uint *)(param_1 + 0x18) | 2;
              goto LAB_07508274;
            }
LAB_075081f4:
            if (*(int *)(param_1 + 0x18) == 7) {
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = System_Char__IsWhiteSpace(uVar2,0);
              if ((uVar4 & 1) == 0) goto LAB_0750823c;
            }
          }
          iVar3 = iVar3 + 1;
        }
      }
      else if (uVar5 == 0x5c) {
        iVar3 = iVar3 + 2;
      }
      else {
        if (uVar5 == 100) {
          iVar3 = System_Globalization_DateTimeFormatInfoScanner__ScanRepeatChar
                            (param_2,100,iVar3,&local_44);
          if (2 < local_44) goto LAB_0750829c;
          uVar5 = *(uint *)(param_1 + 0x18) | 4;
        }
        else {
          if (uVar5 != 0x79) goto LAB_075081f4;
          iVar3 = System_Globalization_DateTimeFormatInfoScanner__ScanRepeatChar
                            (param_2,0x79,iVar3,&local_44);
          uVar5 = *(uint *)(param_1 + 0x18) | 1;
        }
LAB_07508274:
        *(uint *)(param_1 + 0x18) = uVar5;
      }
LAB_0750829c:
    } while (iVar3 < *(int *)(param_2 + 0x10));
  }
  return;
}

