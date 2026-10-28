// rea decompile_all
// name: FUN_03fc8de4
// address: 0x3fc8de4
// body: available
// range: 0x3fc8de4-0x3fc8f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc8de4(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (1 < param_3) {
    uVar6 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar6) {
      lVar5 = (long)param_4 - param_1 >> 3;
      uVar4 = lVar5 + 1;
      uVar1 = lVar5 + 2;
      puVar7 = (undefined8 *)(param_1 + uVar4 * 0x10);
      puVar8 = puVar7;
      uVar9 = uVar4;
      if ((long)uVar1 < param_3) {
        uVar3 = FUN_03f7bacc(param_2 + 1,*puVar7,puVar7[2]);
        puVar8 = puVar7 + 2;
        uVar9 = uVar1;
        if ((uVar3 & 1) == 0) {
          puVar8 = puVar7;
          uVar9 = uVar4;
        }
      }
      uVar4 = FUN_03f7bacc(param_2 + 1,*puVar8,*param_4);
      if ((uVar4 & 1) == 0) {
        uVar12 = param_4[1];
        uVar10 = *param_4;
        do {
          puVar7 = puVar8;
          uVar11 = *puVar7;
          param_4[1] = puVar7[1];
          *param_4 = uVar11;
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          uVar4 = uVar9 * 2 + 2;
          puVar2 = (undefined8 *)(param_1 + uVar1 * 0x10);
          puVar8 = puVar2;
          uVar9 = uVar1;
          if ((long)uVar4 < param_3) {
            uVar3 = FUN_03f7bacc(param_2 + 1,*puVar2,puVar2[2]);
            puVar8 = puVar2 + 2;
            uVar9 = uVar4;
            if ((uVar3 & 1) == 0) {
              puVar8 = puVar2;
              uVar9 = uVar1;
            }
          }
          uVar4 = FUN_03f7bacc(param_2 + 1,*puVar8,uVar10);
          param_4 = puVar7;
        } while ((uVar4 & 1) == 0);
        puVar7[1] = uVar12;
        *puVar7 = uVar10;
      }
    }
  }
  return;
}

