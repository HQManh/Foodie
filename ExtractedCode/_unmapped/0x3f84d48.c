// rea decompile_all
// name: FUN_03f84d48
// address: 0x3f84d48
// body: available
// range: 0x3f84d48-0x3f84e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f84e5c to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f84e74 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f84d48(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar3 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar3 >> 4) < param_2) {
    lVar5 = (long)puVar3 - *param_1 >> 4;
    uVar1 = param_2 + lVar5;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      auVar11 = ZEXT816(0);
    }
    else {
      auVar11 = FUN_03f71f50();
    }
    puVar3 = (undefined8 *)(auVar11._0_8_ + lVar5 * 0x10);
    puVar4 = puVar3;
    if ((param_2 & 0xfffffffffffffff) != 0) {
      puVar4 = puVar3 + param_2 * 2;
      lVar5 = param_2 << 4;
      puVar9 = puVar3;
      do {
        uVar10 = *param_3;
        lVar5 = lVar5 + -0x10;
        puVar9[1] = param_3[1];
        *puVar9 = uVar10;
        puVar9 = puVar9 + 2;
      } while (lVar5 != 0);
    }
    pvVar2 = (void *)*param_1;
    pvVar6 = (void *)param_1[1];
    if (pvVar6 != pvVar2) {
      do {
        puVar9 = (undefined8 *)((long)pvVar6 + -8);
        uVar10 = *(undefined8 *)((long)pvVar6 + -0x10);
        pvVar6 = (void *)((long)pvVar6 + -0x10);
        puVar3[-1] = *puVar9;
        puVar3[-2] = uVar10;
        puVar3 = puVar3 + -2;
      } while (pvVar6 != pvVar2);
      pvVar6 = (void *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)puVar4;
    param_1[2] = auVar11._0_8_ + auVar11._8_8_ * 0x10;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  else {
    puVar4 = puVar3;
    if ((param_2 & 0xfffffffffffffff) != 0) {
      puVar4 = puVar3 + param_2 * 2;
      lVar5 = param_2 << 4;
      do {
        uVar10 = *param_3;
        lVar5 = lVar5 + -0x10;
        puVar3[1] = param_3[1];
        *puVar3 = uVar10;
        puVar3 = puVar3 + 2;
      } while (lVar5 != 0);
    }
    param_1[1] = (long)puVar4;
  }
  return;
}

