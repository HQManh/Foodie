// rea decompile_all
// name: FUN_03fc9b7c
// address: 0x3fc9b7c
// body: available
// range: 0x3fc9b7c-0x3fc9c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc9b7c(long param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 4 <= (long)uVar3) {
      lVar4 = (long)param_4 - param_1 >> 3;
      uVar8 = lVar4 + 1;
      uVar7 = lVar4 + 2;
      puVar5 = (ulong *)(param_1 + uVar8 * 0x10);
      if ((long)uVar7 < param_3) {
        uVar10 = puVar5[2];
        puVar6 = puVar5 + 2;
        if (uVar10 <= *puVar5) {
          puVar6 = puVar5;
          uVar7 = uVar8;
          uVar10 = *puVar5;
        }
      }
      else {
        puVar6 = puVar5;
        uVar7 = uVar8;
        uVar10 = *puVar5;
      }
      uVar8 = *param_4;
      if (uVar8 <= uVar10) {
        uVar9 = param_4[1];
        do {
          puVar5 = puVar6;
          *param_4 = uVar10;
          param_4[1] = puVar5[1];
          if ((long)uVar3 < (long)uVar7) break;
          uVar2 = uVar7 << 1 | 1;
          uVar7 = uVar7 * 2 + 2;
          puVar1 = (ulong *)(param_1 + uVar2 * 0x10);
          if ((long)uVar7 < param_3) {
            uVar10 = puVar1[2];
            puVar6 = puVar1 + 2;
            if (uVar10 <= *puVar1) {
              puVar6 = puVar1;
              uVar7 = uVar2;
              uVar10 = *puVar1;
            }
          }
          else {
            puVar6 = puVar1;
            uVar7 = uVar2;
            uVar10 = *puVar1;
          }
          param_4 = puVar5;
        } while (uVar8 <= uVar10);
        *puVar5 = uVar8;
        puVar5[1] = uVar9;
      }
    }
  }
  return;
}

