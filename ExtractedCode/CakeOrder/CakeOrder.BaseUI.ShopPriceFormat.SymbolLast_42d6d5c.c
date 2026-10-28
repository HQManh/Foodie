// rea decompile_all
// name: CakeOrder.BaseUI.ShopPriceFormat$$SymbolLast
// address: 0x42d6d5c
// body: available
// range: 0x42d6d5c-0x42d6ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d6eb4 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d6eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_BaseUI_ShopPriceFormat__SymbolLast(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar5 & 1) == 0) {
    if (param_1 == 0) {
LAB_042d6eb8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar10 = 0;
      iVar9 = -1;
      iVar11 = -1;
      do {
        uVar4 = System_String__get_Chars(param_1,iVar10,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        bVar3 = System_Char__IsDigit(uVar4,0);
        iVar1 = iVar10;
        if ((bVar3 & 1) == 0) {
          iVar1 = iVar11;
        }
        iVar2 = iVar10;
        if ((bVar3 & 1 & iVar9 < 0) == 0) {
          iVar2 = iVar9;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar2;
        iVar11 = iVar1;
      } while (iVar10 < *(int *)(param_1 + 0x10));
      if (-1 < iVar2) {
        lVar6 = System_String__Substring(param_1,0,iVar2,0);
        if (lVar6 != 0) {
          lVar6 = System_String__Trim(lVar6,0);
          lVar7 = System_String__Substring(param_1,iVar1 + 1,0);
          if ((lVar7 != 0) && (lVar7 = System_String__Trim(lVar7,0), lVar6 != 0)) {
            if (*(int *)(lVar6 + 0x10) == 0) {
              return param_1;
            }
            if (lVar7 != 0) {
              if (0 < *(int *)(lVar7 + 0x10)) {
                return param_1;
              }
              uVar8 = System_String__Substring(param_1,iVar2,(iVar1 + 1) - iVar2,0);
              lVar6 = System_String__Concat(uVar8,lVar6,0);
              return lVar6;
            }
          }
        }
        goto LAB_042d6eb8;
      }
    }
  }
  return param_1;
}

