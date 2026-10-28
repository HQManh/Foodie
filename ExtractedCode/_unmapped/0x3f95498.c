// rea decompile_all
// name: FUN_03f95498
// address: 0x3f95498
// body: available
// range: 0x3f95498-0x3f95567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f95498(long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (1 < param_3) {
    uVar2 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar2) {
      lVar3 = (long)param_4 - param_1 >> 3;
      uVar7 = lVar3 + 1;
      uVar6 = lVar3 + 2;
      puVar4 = (ulong *)(param_1 + uVar7 * 0x10);
      if ((long)uVar6 < param_3) {
        uVar8 = puVar4[2];
        puVar5 = puVar4 + 2;
        if (uVar8 <= *puVar4) {
          puVar5 = puVar4;
          uVar6 = uVar7;
          uVar8 = *puVar4;
        }
      }
      else {
        puVar5 = puVar4;
        uVar6 = uVar7;
        uVar8 = *puVar4;
      }
      uVar7 = *param_4;
      if (uVar7 <= uVar8) {
        uVar8 = param_4[1];
        do {
          puVar4 = puVar5;
          uVar10 = *puVar4;
          param_4[1] = puVar4[1];
          *param_4 = uVar10;
          if ((long)uVar2 < (long)uVar6) break;
          uVar10 = uVar6 << 1 | 1;
          uVar6 = uVar6 * 2 + 2;
          puVar1 = (ulong *)(param_1 + uVar10 * 0x10);
          if ((long)uVar6 < param_3) {
            uVar9 = puVar1[2];
            puVar5 = puVar1 + 2;
            if (uVar9 <= *puVar1) {
              puVar5 = puVar1;
              uVar6 = uVar10;
              uVar9 = *puVar1;
            }
          }
          else {
            puVar5 = puVar1;
            uVar6 = uVar10;
            uVar9 = *puVar1;
          }
          param_4 = puVar4;
        } while (uVar7 <= uVar9);
        *puVar4 = uVar7;
        puVar4[1] = uVar8;
      }
    }
  }
  return;
}

