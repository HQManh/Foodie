// rea decompile_all
// name: FUN_03fb01b8
// address: 0x3fb01b8
// body: available
// range: 0x3fb01b8-0x3fb028f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb028c to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb01b8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  puVar3 = (undefined8 *)param_2[2];
  puVar6 = (undefined8 *)param_2[1];
  if (puVar6 < puVar3) {
    puVar8 = puVar6 + 1;
    *puVar6 = param_1;
    param_2[1] = (long)puVar8;
  }
  else {
    lVar7 = (long)puVar6 - *param_2 >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_2);
    }
    uVar4 = (long)puVar3 - *param_2;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      auVar9 = ZEXT816(0);
    }
    else {
      auVar9 = FUN_03f695c0(param_2 + 2);
    }
    puVar3 = (undefined8 *)(auVar9._0_8_ + lVar7 * 8);
    puVar8 = puVar3 + 1;
    *puVar3 = param_1;
    puVar6 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    if (puVar2 != puVar6) {
      do {
        puVar2 = puVar2 + -1;
        puVar3 = puVar3 + -1;
        *puVar3 = *puVar2;
      } while (puVar2 != puVar6);
      puVar2 = (undefined8 *)*param_2;
    }
    *param_2 = (long)puVar3;
    param_2[1] = (long)puVar8;
    param_2[2] = auVar9._0_8_ + auVar9._8_8_ * 8;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2);
    }
  }
  param_2[1] = (long)puVar8;
  return;
}

