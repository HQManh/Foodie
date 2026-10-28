// rea decompile_all
// name: FUN_03fb6934
// address: 0x3fb6934
// body: available
// range: 0x3fb6934-0x3fb6a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb6a90 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb6934(long *param_1)

{
  ulong uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  wchar_t *pwVar9;
  undefined1 auVar10 [16];
  
  if (((char *)param_1[2] < (char *)param_1[3]) && (*(char *)param_1[2] == '&')) {
    pwVar2 = *(wchar_t **)(*param_1 + 0xa0);
    pwVar4 = *(wchar_t **)(*param_1 + 0xa8);
    pwVar2 = wmemchr(pwVar2,L'\0',(long)pwVar4 - (long)pwVar2 >> 2);
    lVar7 = *param_1;
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar4 = pwVar2;
    }
    if (pwVar4 != *(wchar_t **)(lVar7 + 0xa8)) {
      return 0;
    }
    pwVar2 = *(wchar_t **)(lVar7 + 0xb0);
    if (pwVar4 < pwVar2) {
      pwVar9 = pwVar4 + 1;
      *pwVar4 = L'\0';
      *(wchar_t **)(lVar7 + 0xa8) = pwVar9;
    }
    else {
      pwVar3 = *(wchar_t **)(lVar7 + 0xa0);
      lVar8 = (long)*(wchar_t **)(lVar7 + 0xa8) - (long)pwVar3 >> 2;
      uVar1 = lVar8 + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5fa4c(lVar7 + 0xa0);
      }
      uVar5 = (long)pwVar2 - (long)pwVar3;
      uVar6 = (long)uVar5 >> 1;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar5) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        auVar10 = ZEXT816(0);
      }
      else {
        auVar10 = FUN_03fb3f8c((undefined8 *)(lVar7 + 0xb0));
        pwVar3 = *(wchar_t **)(lVar7 + 0xa0);
        pwVar4 = *(wchar_t **)(lVar7 + 0xa8);
      }
      pwVar2 = (wchar_t *)(auVar10._0_8_ + lVar8 * 4);
      pwVar9 = pwVar2 + 1;
      *pwVar2 = L'\0';
      while (pwVar4 != pwVar3) {
        pwVar4 = pwVar4 + -1;
        pwVar2 = pwVar2 + -1;
        *pwVar2 = *pwVar4;
      }
      *(wchar_t **)(lVar7 + 0xa0) = pwVar2;
      *(wchar_t **)(lVar7 + 0xa8) = pwVar9;
      *(long *)(lVar7 + 0xb0) = auVar10._0_8_ + auVar10._8_8_ * 4;
      if (pwVar3 != (wchar_t *)0x0) {
        operator_delete(pwVar3);
      }
    }
    lVar8 = param_1[2];
    uVar6 = param_1[3];
    *(wchar_t **)(lVar7 + 0xa8) = pwVar9;
    uVar1 = lVar8 + 1;
    param_1[2] = uVar1;
    if (uVar1 < uVar6) {
      lVar7 = uVar6 - uVar1;
      lVar8 = lVar8 + 2;
      do {
        if ((*(char *)(lVar8 + -1) != ' ') && (*(char *)(lVar8 + -1) != '\t')) {
          return 1;
        }
        lVar7 = lVar7 + -1;
        param_1[2] = lVar8;
        lVar8 = lVar8 + 1;
      } while (lVar7 != 0);
    }
  }
  return 1;
}

