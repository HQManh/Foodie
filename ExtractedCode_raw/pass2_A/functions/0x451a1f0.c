// rea decompile_all
// name: Utilities.StringConverters$$ToKebabCase
// address: 0x451a1f0
// body: available
// range: 0x451a1f0-0x451a48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451a48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_StringConverters__ToKebabCase(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if ((DAT_09518582 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09518582 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) != 0) {
    return param_1;
  }
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = 0;
      bVar1 = true;
      do {
        uVar2 = System_String__get_Chars(param_1,iVar7,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar4 = System_Char__IsUpper(uVar2,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Char__IsDigit(uVar2,0);
          if ((uVar4 & 1) != 0) goto LAB_0451a308;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Char__IsLower(uVar2,0);
          if ((uVar4 & 1) != 0) {
            if (plVar5 != (long *)0x0) goto LAB_0451a408;
            goto LAB_0451a48c;
          }
          uVar2 = (uVar2 & 0xffff) - 0x20;
          if ((uVar2 < 0x40) && ((1L << ((ulong)uVar2 & 0x3f) & 0x8000000000002001U) != 0)) {
            if (!bVar1) {
              if (plVar5 == (long *)0x0) goto LAB_0451a48c;
              System_Text_StringBuilder__Append(plVar5,DAT_091f8a38,0);
            }
            bVar1 = true;
          }
        }
        else {
LAB_0451a308:
          if (!bVar1 && iVar7 != 0) {
            uVar3 = System_String__get_Chars(param_1,iVar7 + -1,0);
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09535460);
            }
            uVar4 = System_Char__IsLower(uVar3,0);
            if ((uVar4 & 1) == 0) {
              if (iVar7 < *(int *)(param_1 + 0x10) + -1) {
                uVar3 = System_String__get_Chars(param_1,iVar7 + 1,0);
                if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09535460);
                }
                uVar4 = System_Char__IsLower(uVar3,0);
                if ((uVar4 & 1) != 0) goto LAB_0451a350;
              }
            }
            else {
LAB_0451a350:
              if (plVar5 == (long *)0x0) goto LAB_0451a48c;
              System_Text_StringBuilder__Append(plVar5,DAT_091f8a38,0);
            }
          }
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Char__ToLowerInvariant(uVar2,0);
          if (plVar5 == (long *)0x0) goto LAB_0451a48c;
LAB_0451a408:
          System_Text_StringBuilder__Append(plVar5,uVar2,0);
          bVar1 = false;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0451a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return lVar6;
    }
  }
LAB_0451a48c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

