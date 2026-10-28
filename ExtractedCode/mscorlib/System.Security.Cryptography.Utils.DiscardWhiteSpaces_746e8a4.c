// rea decompile_all
// name: System.Security.Cryptography.Utils$$DiscardWhiteSpaces
// address: 0x746e8a4
// body: available
// range: 0x746e8a4-0x746ea1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746ea14 to 0x742cd54 System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x746ea18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746ea1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_Utils__DiscardWhiteSpaces(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((DAT_095211f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_095211f2 = 1;
  }
  if (param_3 < 1) {
    lVar5 = FUN_03f5c394(DAT_0917fcc8,param_3);
  }
  else {
    if (param_1 == 0) {
LAB_0746ea18:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar8 = 0;
    iVar9 = param_3;
    iVar7 = param_2;
    do {
      uVar3 = System_String__get_Chars(param_1,iVar7,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar4 = System_Char__IsWhiteSpace(uVar3,0);
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + (uVar4 & 1);
    } while (iVar9 != 0);
    lVar5 = FUN_03f5c394(DAT_0917fcc8,param_3 - iVar8);
    if (0 < param_3) {
      uVar4 = 0;
      do {
        uVar3 = System_String__get_Chars(param_1,param_2,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar6 = System_Char__IsWhiteSpace(uVar3,0);
        if ((uVar6 & 1) == 0) {
          uVar2 = System_String__get_Chars(param_1,param_2,0);
          if (lVar5 == 0) goto LAB_0746ea18;
          if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar1 = (long)(int)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined2 *)(lVar5 + lVar1 * 2 + 0x20) = uVar2;
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  System_String__CreateString(0,lVar5,0);
  return;
}

