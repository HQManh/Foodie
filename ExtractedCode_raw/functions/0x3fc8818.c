// rea decompile_all
// name: FUN_03fc8818
// address: 0x3fc8818
// body: available
// range: 0x3fc8818-0x3fc893f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fc8818(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar9 = param_1[1];
  uVar6 = *param_1;
  lVar3 = 0;
  do {
    uVar2 = FUN_03f7bacc(param_3 + 1,*(undefined8 *)((long)param_1 + lVar3 + 0x10),uVar6);
    lVar3 = lVar3 + 0x10;
  } while ((uVar2 & 1) != 0);
  puVar1 = (undefined8 *)((long)param_1 + lVar3);
  if (lVar3 == 0x10) {
    do {
      if (param_2 <= puVar1) break;
      param_2 = param_2 + -2;
      uVar2 = FUN_03f7bacc(param_3 + 1,*param_2,uVar6);
    } while ((uVar2 & 1) == 0);
  }
  else {
    do {
      param_2 = param_2 + -2;
      uVar2 = FUN_03f7bacc(param_3 + 1,*param_2,uVar6);
    } while ((uVar2 & 1) == 0);
  }
  puVar4 = puVar1;
  puVar5 = param_2;
  if (puVar1 < param_2) {
    do {
      uVar10 = puVar4[1];
      uVar7 = *puVar4;
      uVar8 = *puVar5;
      puVar4[1] = puVar5[1];
      *puVar4 = uVar8;
      puVar5[1] = uVar10;
      *puVar5 = uVar7;
      do {
        puVar4 = puVar4 + 2;
        uVar2 = FUN_03f7bacc(param_3 + 1,*puVar4,uVar6);
      } while ((uVar2 & 1) != 0);
      do {
        puVar5 = puVar5 + -2;
        uVar2 = FUN_03f7bacc(param_3 + 1,*puVar5,uVar6);
      } while ((uVar2 & 1) == 0);
    } while (puVar4 < puVar5);
  }
  puVar5 = puVar4 + -2;
  if (puVar5 != param_1) {
    uVar7 = *puVar5;
    param_1[1] = puVar4[-1];
    *param_1 = uVar7;
  }
  puVar4[-1] = uVar9;
  *puVar5 = uVar6;
  auVar11[8] = param_2 <= puVar1;
  auVar11._0_8_ = puVar5;
  auVar11._9_7_ = 0;
  return auVar11;
}

