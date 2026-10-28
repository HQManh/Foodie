// rea decompile_all
// name: FUN_03f94260
// address: 0x3f94260
// body: available
// range: 0x3f94260-0x3f943bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f943b8 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f94260(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(uint *)((long)param_1 + 0x14) != 0xffffffff) {
    puVar8 = (undefined8 *)(DAT_09534ee8 + (ulong)*(uint *)((long)param_1 + 0x14) * 0x18);
    uStack_58 = puVar8[1];
    local_60 = *puVar8;
    local_50 = puVar8[2];
    FUN_03f94260(&local_60,param_2);
  }
  uVar5 = FUN_03faa85c(*(undefined4 *)(param_1 + 1));
  uVar3 = *(undefined4 *)(param_1 + 2);
  puVar8 = (undefined8 *)param_2[1];
  uVar13 = *param_1;
  lVar2 = DAT_09534ef0 + (ulong)*(uint *)((long)param_1 + 0xc);
  if (puVar8 < (undefined8 *)param_2[2]) {
    *puVar8 = uVar5;
    puVar8[1] = uVar13;
    puVar12 = puVar8 + 4;
    *(undefined4 *)(puVar8 + 2) = uVar3;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    puVar8[3] = lVar2;
    param_2[1] = (long)puVar12;
  }
  else {
    lVar14 = (long)puVar8 - *param_2 >> 5;
    uVar1 = lVar14 + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_2);
    }
    uVar9 = param_2[2] - *param_2;
    uVar11 = (long)uVar9 >> 4;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (uVar11 == 0) {
      auVar16 = ZEXT816(0);
    }
    else {
      auVar16 = FUN_03f87218();
    }
    puVar8 = (undefined8 *)(auVar16._0_8_ + lVar14 * 0x20);
    *puVar8 = uVar5;
    puVar8[1] = uVar13;
    puVar12 = puVar8 + 4;
    *(undefined4 *)(puVar8 + 2) = uVar3;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    puVar8[3] = lVar2;
    puVar4 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)param_2[1];
    puVar10 = puVar8;
    if (puVar7 != puVar4) {
      do {
        puVar6 = puVar7 + -4;
        uVar15 = *puVar6;
        uVar13 = puVar7[-1];
        uVar5 = puVar7[-2];
        puVar8 = puVar10 + -4;
        puVar10[-3] = puVar7[-3];
        *puVar8 = uVar15;
        puVar10[-1] = uVar13;
        puVar10[-2] = uVar5;
        puVar7 = puVar6;
        puVar10 = puVar8;
      } while (puVar6 != puVar4);
      puVar7 = (undefined8 *)*param_2;
    }
    *param_2 = (long)puVar8;
    param_2[1] = (long)puVar12;
    param_2[2] = auVar16._0_8_ + auVar16._8_8_ * 0x20;
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
  }
  param_2[1] = (long)puVar12;
  return;
}

