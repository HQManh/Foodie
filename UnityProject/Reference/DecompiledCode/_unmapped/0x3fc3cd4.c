// rea decompile_all
// name: FUN_03fc3cd4
// address: 0x3fc3cd4
// body: available
// range: 0x3fc3cd4-0x3fc3e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc3e00 to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc3e18 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc3cd4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *__s;
  undefined8 *__s_00;
  undefined1 auVar8 [16];
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  __s = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s >> 3) < param_2) {
    lVar1 = (long)__s - *param_1 >> 3;
    uVar5 = param_2 + lVar1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    uVar3 = param_1[2] - *param_1;
    uVar7 = (long)uVar3 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_03f695c0();
    }
    __s_00 = (undefined8 *)(auVar8._0_8_ + lVar1 * 8);
    puVar4 = __s_00;
    if ((param_2 & 0x1fffffffffffffff) != 0) {
      memset(__s_00,0,param_2 * 8);
      puVar4 = __s_00 + param_2;
    }
    puVar2 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    while (puVar6 != puVar2) {
      puVar6 = puVar6 + -1;
      __s_00 = __s_00 + -1;
      *__s_00 = *puVar6;
    }
    *param_1 = (long)__s_00;
    param_1[1] = (long)puVar4;
    param_1[2] = auVar8._0_8_ + auVar8._8_8_ * 8;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
      return;
    }
  }
  else {
    if ((param_2 & 0x1fffffffffffffff) != 0) {
      memset(__s,0,param_2 * 8);
      __s = (void *)((long)__s + param_2 * 8);
    }
    param_1[1] = (long)__s;
  }
  return;
}

