// rea decompile_all
// name: System.Globalization.GregorianCalendar$$GetDatePart
// address: 0x75308b8
// body: available
// range: 0x75308b8-0x7530abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7530a88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7530abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Globalization_GregorianCalendar__GetDatePart
               (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_0952185a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb0);
    DAT_0952185a = 1;
  }
  iVar10 = ((int)(param_2 / 864000000000) + (int)(param_2 >> 0x3f)) -
           (SUB164(SEXT816(param_2) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
  iVar6 = iVar10 % 0x23ab1;
  iVar2 = 3;
  if (0x8eab < iVar6 - 0x23ab0U) {
    iVar2 = iVar6 / 0x8eac;
  }
  iVar6 = iVar6 + iVar2 * -0x8eac;
  iVar7 = iVar6 % 0x5b5;
  iVar3 = 3;
  if (0x16c < iVar7 - 0x5b4U) {
    iVar3 = iVar7 / 0x16d;
  }
  if (param_3 == 0) {
    iVar7 = iVar3 + (iVar10 / 0x23ab1) * 400 + iVar2 * 100 + (iVar6 / 0x5b5) * 4;
  }
  else {
    iVar7 = iVar7 + iVar3 * -0x16d;
    if (param_3 != 1) {
      if ((iVar3 == 3) && ((iVar2 == 3 || (0x5b4 < iVar6 - 0x88f8U)))) {
        if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar8 = (long *)(*(long *)(DAT_09184eb0 + 0xb8) + 8);
      }
      else {
        if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar8 = *(long **)(DAT_09184eb0 + 0xb8);
      }
      lVar9 = *plVar8;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = iVar7 >> 6;
      uVar5 = *(uint *)(lVar9 + 0x18);
      uVar4 = uVar1;
      if (uVar1 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar1 < uVar5) {
        do {
          if (iVar7 < *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20)) {
            if (param_3 == 2) {
              return uVar1;
            }
            if (uVar1 - 1 < uVar5) {
              iVar7 = iVar7 - *(int *)(lVar9 + (long)(int)(uVar1 - 1) * 4 + 0x20);
              goto LAB_07530ab0;
            }
            break;
          }
          uVar1 = uVar1 + 1;
        } while (uVar4 != uVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07530ab0:
  return iVar7 + 1;
}

