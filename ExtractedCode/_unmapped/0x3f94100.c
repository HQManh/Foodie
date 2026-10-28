// rea decompile_all
// name: FUN_03f94100
// address: 0x3f94100
// body: available
// range: 0x3f94100-0x3f9420f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f94100(long param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  bVar2 = false;
  if ((param_1 != 0) && (DAT_09534ee0 != 0)) {
    lVar3 = FUN_03f8ee94(0);
    uVar5 = param_1 - lVar3;
    bVar2 = false;
    if ((DAT_09534f58 <= uVar5) && (uVar5 <= DAT_09534f60)) {
      uVar6 = 0;
      uVar9 = DAT_09534f00 - 1;
      if (uVar9 != 0) {
        do {
          uVar7 = uVar6 + uVar9 + 1 >> 1;
          uVar1 = uVar7 - 1;
          if (*(ulong *)(DAT_09534ee8 + (ulong)uVar7 * 0x18) <= uVar5) {
            uVar6 = uVar7;
            uVar1 = uVar9;
          }
          uVar9 = uVar1;
        } while (uVar6 < uVar9);
      }
      uVar9 = DAT_09534f00;
      if (DAT_09534f00 <= uVar6 + 1) {
        uVar9 = uVar6 + 1;
      }
      uVar7 = uVar6 - 1;
      do {
        uVar1 = uVar7 + 2;
        uVar8 = uVar9 - 1;
        if (DAT_09534f00 <= uVar1) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while (*(long *)(DAT_09534ee8 + (ulong)uVar1 * 0x18) ==
               *(long *)(DAT_09534ee8 + (ulong)uVar6 * 0x18));
      puVar4 = (undefined8 *)(DAT_09534ee8 + (ulong)uVar8 * 0x18);
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      bVar2 = (int)puVar4[2] != -1;
      param_2[2] = puVar4[2];
      param_2[1] = uVar11;
      *param_2 = uVar10;
    }
  }
  return bVar2;
}

