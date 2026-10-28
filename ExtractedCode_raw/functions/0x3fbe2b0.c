// rea decompile_all
// name: FUN_03fbe2b0
// address: 0x3fbe2b0
// body: available
// range: 0x3fbe2b0-0x3fbe3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbe3c0 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbe2b0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar2 = FUN_03f944f8();
  if ((lVar2 != 0) && (uVar3 = FUN_03f94210(param_1,param_2), (uVar3 & 1) == 0)) {
    lVar4 = FUN_03f8ee94();
    plVar9 = (long *)param_2[1];
    if (plVar9 < (long *)param_2[2]) {
      *plVar9 = lVar2;
      plVar9[1] = param_1 - lVar4;
      plVar11 = plVar9 + 4;
      plVar9[2] = 0;
      plVar9[3] = 0;
      param_2[1] = (long)plVar11;
    }
    else {
      lVar12 = (long)plVar9 - *param_2 >> 5;
      uVar3 = lVar12 + 1;
      if (uVar3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5fa4c(param_2);
      }
      uVar7 = param_2[2] - *param_2;
      uVar10 = (long)uVar7 >> 4;
      if (uVar10 <= uVar3) {
        uVar10 = uVar3;
      }
      if (0x7fffffffffffffdf < uVar7) {
        uVar10 = 0x7ffffffffffffff;
      }
      if (uVar10 == 0) {
        auVar13 = ZEXT816(0);
      }
      else {
        auVar13 = FUN_03f87218();
      }
      plVar9 = (long *)(auVar13._0_8_ + lVar12 * 0x20);
      *plVar9 = lVar2;
      plVar9[1] = param_1 - lVar4;
      plVar11 = plVar9 + 4;
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar1 = (long *)*param_2;
      plVar6 = (long *)param_2[1];
      plVar8 = plVar9;
      if (plVar6 != plVar1) {
        do {
          plVar5 = plVar6 + -4;
          lVar12 = *plVar5;
          lVar4 = plVar6[-1];
          lVar2 = plVar6[-2];
          plVar9 = plVar8 + -4;
          plVar8[-3] = plVar6[-3];
          *plVar9 = lVar12;
          plVar8[-1] = lVar4;
          plVar8[-2] = lVar2;
          plVar6 = plVar5;
          plVar8 = plVar9;
        } while (plVar5 != plVar1);
        plVar6 = (long *)*param_2;
      }
      *param_2 = (long)plVar9;
      param_2[1] = (long)plVar11;
      param_2[2] = auVar13._0_8_ + auVar13._8_8_ * 0x20;
      if (plVar6 != (long *)0x0) {
        operator_delete(plVar6);
      }
    }
    param_2[1] = (long)plVar11;
  }
  return 1;
}

