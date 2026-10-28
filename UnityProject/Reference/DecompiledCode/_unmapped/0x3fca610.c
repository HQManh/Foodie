// rea decompile_all
// name: FUN_03fca610
// address: 0x3fca610
// body: available
// range: 0x3fca610-0x3fca823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_03fca610(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar1 = (long)param_2 - (long)param_1;
  puVar7 = param_2;
  if (lVar1 != 0) {
    puVar5 = param_2;
    param_2 = param_1;
    uVar4 = (lVar1 >> 3) * -0x5555555555555555;
    do {
      uVar8 = uVar4 >> 1;
      uStack_98 = param_3[1];
      local_a0 = *param_3;
      local_90 = param_3[2];
      puVar6 = param_2 + uVar8 * 3;
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      local_70 = puVar6[2];
      uVar3 = (*(code *)*param_4)(&local_80,&local_a0);
      if ((uVar3 & 1) == 0) {
        uStack_78 = param_3[1];
        local_80 = *param_3;
        local_70 = param_3[2];
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        local_90 = puVar6[2];
        uVar4 = (*(code *)*param_4)(&local_80,&local_a0);
        if ((uVar4 & 1) == 0) {
          puVar7 = puVar6;
          if (uVar8 * 0x18 != 0) {
            uVar4 = ((long)(uVar8 * 0x18) >> 3) * -0x5555555555555555;
            do {
              uVar3 = uVar4 >> 1;
              uStack_98 = param_3[1];
              local_a0 = *param_3;
              local_90 = param_3[2];
              puVar7 = param_2 + uVar3 * 3;
              uStack_78 = puVar7[1];
              local_80 = *puVar7;
              local_70 = puVar7[2];
              uVar8 = (*(code *)*param_4)(&local_80,&local_a0);
              bVar2 = (uVar8 & 1) == 0;
              puVar7 = puVar7 + 3;
              if (bVar2) {
                puVar7 = param_2;
              }
              uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
              if (bVar2) {
                uVar4 = uVar3;
              }
              param_2 = puVar7;
            } while (uVar4 != 0);
          }
          param_2 = puVar7;
          puVar6 = puVar6 + 3;
          puVar7 = puVar5;
          if ((long)puVar5 - (long)puVar6 != 0) {
            uVar4 = ((long)puVar5 - (long)puVar6 >> 3) * -0x5555555555555555;
            do {
              uStack_78 = param_3[1];
              local_80 = *param_3;
              local_70 = param_3[2];
              puVar7 = puVar6 + (uVar4 >> 1) * 3;
              uStack_98 = puVar7[1];
              local_a0 = *puVar7;
              local_90 = puVar7[2];
              uVar8 = (*(code *)*param_4)(&local_80,&local_a0);
              bVar2 = (uVar8 & 1) == 0;
              if (bVar2) {
                puVar6 = puVar7 + 3;
              }
              uVar8 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
              uVar4 = uVar4 >> 1;
              if (bVar2) {
                uVar4 = uVar8;
              }
              puVar7 = puVar6;
            } while (uVar4 != 0);
          }
          break;
        }
      }
      else {
        param_2 = puVar6 + 3;
        uVar8 = uVar4 + ~uVar8;
        puVar6 = puVar5;
      }
      puVar5 = puVar6;
      puVar7 = param_2;
      uVar4 = uVar8;
    } while (uVar8 != 0);
  }
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = param_2;
  return auVar9;
}

