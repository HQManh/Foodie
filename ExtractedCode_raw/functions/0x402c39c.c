// rea decompile_all
// name: FUN_0402c39c
// address: 0x402c39c
// body: available
// range: 0x402c39c-0x402c57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402c550 to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x402c57c to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402c39c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *__s;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  void *__s_00;
  long lVar13;
  long lVar14;
  
  __s_00 = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s_00 >> 3)) {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = (long)__s_00;
    return;
  }
  lVar13 = (long)__s_00 - *param_1;
  lVar12 = lVar13 >> 3;
  uVar8 = lVar12 + param_2;
  if (uVar8 >> 0x3d != 0) {
    FUN_0402c214(param_1);
LAB_0402c57c:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar6) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    plVar4 = (long *)0x0;
  }
  else if (uVar7 < 0x1f && (char)param_1[0x21] == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 1;
    plVar4 = param_1 + 3;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_0402c57c;
    plVar4 = operator_new(uVar7 << 3);
  }
  __s = plVar4 + lVar12;
  memset(__s,0,param_2 * 8);
  plVar2 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  plVar1 = __s + param_2;
  lVar12 = (long)plVar5 - (long)plVar2;
  if (lVar12 == 0) goto LAB_0402c524;
  uVar8 = lVar12 - 8;
  if ((uVar8 < 0x38) || ((ulong)((long)plVar5 + (-lVar13 - (long)plVar4)) < 0x20)) {
LAB_0402c50c:
    do {
      plVar5 = plVar5 + -1;
      __s = __s + -1;
      *__s = *plVar5;
    } while (plVar5 != plVar2);
  }
  else {
    plVar10 = __s + -2;
    plVar11 = plVar5 + -2;
    uVar8 = (uVar8 >> 3) + 1;
    uVar9 = uVar8 & 0x3ffffffffffffffc;
    plVar5 = plVar5 + -uVar9;
    __s = __s + -uVar9;
    uVar6 = uVar9;
    do {
      plVar3 = plVar11 + -1;
      lVar14 = plVar11[-2];
      lVar13 = plVar11[1];
      lVar12 = *plVar11;
      uVar6 = uVar6 - 4;
      plVar11 = plVar11 + -4;
      plVar10[-1] = *plVar3;
      plVar10[-2] = lVar14;
      plVar10[1] = lVar13;
      *plVar10 = lVar12;
      plVar10 = plVar10 + -4;
    } while (uVar6 != 0);
    if (uVar8 != uVar9) goto LAB_0402c50c;
  }
  plVar5 = (long *)*param_1;
LAB_0402c524:
  *param_1 = (long)__s;
  param_1[1] = (long)plVar1;
  param_1[2] = (long)(plVar4 + uVar7);
  if (plVar5 != (long *)0x0) {
    if (plVar5 != param_1 + 3) {
      operator_delete(plVar5);
      return;
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return;
}

