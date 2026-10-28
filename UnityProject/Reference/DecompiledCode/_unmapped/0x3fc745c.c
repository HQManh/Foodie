// rea decompile_all
// name: FUN_03fc745c
// address: 0x3fc745c
// body: available
// range: 0x3fc745c-0x3fc75f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fc745c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar9 = param_1[1];
  uVar6 = *param_1;
  uVar15 = param_1[3];
  uVar12 = param_1[2];
  uVar4 = param_1[6];
  uVar21 = param_1[5];
  uVar18 = param_1[4];
  uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,param_2[-1]);
  puVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    do {
      puVar5 = puVar2 + 7;
      if (param_2 <= puVar5) break;
      uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,puVar2[0xd]);
      puVar2 = puVar5;
    } while ((uVar1 & 1) == 0);
  }
  else {
    do {
      puVar5 = puVar2 + 7;
      uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,puVar2[0xd]);
      puVar2 = puVar5;
    } while ((uVar1 & 1) == 0);
  }
  if (puVar5 < param_2) {
    do {
      puVar2 = param_2 + -1;
      param_2 = param_2 + -7;
      uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,*puVar2);
    } while ((uVar1 & 1) != 0);
  }
  while (puVar5 < param_2) {
    uVar22 = puVar5[3];
    uVar19 = puVar5[2];
    uVar10 = puVar5[5];
    uVar7 = puVar5[4];
    uVar3 = puVar5[6];
    uVar16 = puVar5[1];
    uVar13 = *puVar5;
    uVar23 = param_2[3];
    uVar20 = param_2[2];
    uVar11 = param_2[5];
    uVar8 = param_2[4];
    uVar17 = param_2[1];
    uVar14 = *param_2;
    puVar5[6] = param_2[6];
    puVar5[3] = uVar23;
    puVar5[2] = uVar20;
    puVar5[5] = uVar11;
    puVar5[4] = uVar8;
    puVar5[1] = uVar17;
    *puVar5 = uVar14;
    param_2[6] = uVar3;
    param_2[3] = uVar22;
    param_2[2] = uVar19;
    param_2[5] = uVar10;
    param_2[4] = uVar7;
    param_2[1] = uVar16;
    *param_2 = uVar13;
    do {
      puVar2 = puVar5 + 0xd;
      puVar5 = puVar5 + 7;
      uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,*puVar2);
    } while ((uVar1 & 1) == 0);
    do {
      puVar2 = param_2 + -1;
      param_2 = param_2 + -7;
      uVar1 = FUN_03f7bacc(param_3 + 1,uVar4,*puVar2);
    } while ((uVar1 & 1) != 0);
  }
  puVar2 = puVar5 + -7;
  if (puVar2 != param_1) {
    uVar13 = puVar5[-4];
    uVar11 = puVar5[-5];
    uVar7 = puVar5[-2];
    uVar3 = puVar5[-3];
    uVar10 = puVar5[-6];
    uVar8 = *puVar2;
    param_1[6] = puVar5[-1];
    param_1[3] = uVar13;
    param_1[2] = uVar11;
    param_1[5] = uVar7;
    param_1[4] = uVar3;
    param_1[1] = uVar10;
    *param_1 = uVar8;
  }
  puVar5[-1] = uVar4;
  puVar5[-4] = uVar15;
  puVar5[-5] = uVar12;
  puVar5[-2] = uVar21;
  puVar5[-3] = uVar18;
  puVar5[-6] = uVar9;
  *puVar2 = uVar6;
  return puVar5;
}

