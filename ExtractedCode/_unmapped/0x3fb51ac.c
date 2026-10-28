// rea decompile_all
// name: FUN_03fb51ac
// address: 0x3fb51ac
// body: available
// range: 0x3fb51ac-0x3fb5317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb5314 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb51ac(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  iVar4 = *(int *)(param_1 + 0x18);
  FUN_03fb5318(param_3,iVar4);
  if (iVar4 != 0) {
    iVar11 = 0;
    do {
      thunk_FUN_03fab57c(param_1,iVar11);
      lVar6 = FUN_03fc384c();
      iVar5 = strcmp(*(char **)(lVar6 + 0x10),"<Module>");
      if (iVar5 != 0) {
        lVar12 = lVar6;
        if ((param_2 & 1) != 0) {
          for (; uVar2 = *(uint *)(lVar12 + 0x118) & 7, uVar2 == 2;
              lVar12 = *(long *)(lVar12 + 0x50)) {
          }
          if (uVar2 != 1) goto LAB_03fb52e8;
        }
        plVar10 = (long *)param_3[1];
        if (plVar10 < (long *)param_3[2]) {
          plVar13 = plVar10 + 1;
          *plVar10 = lVar6;
          param_3[1] = (long)plVar13;
        }
        else {
          lVar12 = (long)plVar10 - *param_3 >> 3;
          uVar1 = lVar12 + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5fa4c(param_3);
          }
          uVar7 = param_3[2] - *param_3;
          uVar9 = (long)uVar7 >> 2;
          if (uVar9 <= uVar1) {
            uVar9 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            auVar14 = ZEXT816(0);
          }
          else {
            auVar14 = FUN_03f695c0(param_3 + 2);
          }
          plVar10 = (long *)(auVar14._0_8_ + lVar12 * 8);
          plVar13 = plVar10 + 1;
          *plVar10 = lVar6;
          plVar3 = (long *)*param_3;
          plVar8 = (long *)param_3[1];
          if (plVar8 != plVar3) {
            do {
              plVar8 = plVar8 + -1;
              plVar10 = plVar10 + -1;
              *plVar10 = *plVar8;
            } while (plVar8 != plVar3);
            plVar8 = (long *)*param_3;
          }
          *param_3 = (long)plVar10;
          param_3[1] = (long)plVar13;
          param_3[2] = auVar14._0_8_ + auVar14._8_8_ * 8;
          if (plVar8 != (long *)0x0) {
            operator_delete(plVar8);
          }
        }
        param_3[1] = (long)plVar13;
      }
LAB_03fb52e8:
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
  }
  return;
}

