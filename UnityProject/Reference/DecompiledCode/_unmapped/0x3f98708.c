// rea decompile_all
// name: FUN_03f98708
// address: 0x3f98708
// body: available
// range: 0x3f98708-0x3f98817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f98814 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f98708(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar9 = 0;
    do {
      lVar4 = FUN_03fc39c0(param_1,iVar9);
      plVar8 = (long *)param_2[1];
      if (plVar8 < (long *)param_2[2]) {
        plVar11 = plVar8 + 1;
        *plVar8 = lVar4 + 0x18;
        param_2[1] = (long)plVar11;
      }
      else {
        lVar10 = (long)plVar8 - *param_2 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5fa4c(param_2);
        }
        uVar5 = param_2[2] - *param_2;
        uVar7 = (long)uVar5 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          auVar12 = ZEXT816(0);
        }
        else {
          auVar12 = FUN_03f695c0(param_2 + 2);
        }
        plVar8 = (long *)(auVar12._0_8_ + lVar10 * 8);
        plVar11 = plVar8 + 1;
        *plVar8 = lVar4 + 0x18;
        plVar2 = (long *)*param_2;
        plVar6 = (long *)param_2[1];
        if (plVar6 != plVar2) {
          do {
            plVar6 = plVar6 + -1;
            plVar8 = plVar8 + -1;
            *plVar8 = *plVar6;
          } while (plVar6 != plVar2);
          plVar6 = (long *)*param_2;
        }
        *param_2 = (long)plVar8;
        param_2[1] = (long)plVar11;
        param_2[2] = auVar12._0_8_ + auVar12._8_8_ * 8;
        if (plVar6 != (long *)0x0) {
          operator_delete(plVar6);
        }
      }
      iVar3 = *(int *)(param_1 + 0x10);
      iVar9 = iVar9 + 1;
      param_2[1] = (long)plVar11;
    } while (iVar9 < iVar3);
  }
  return;
}

