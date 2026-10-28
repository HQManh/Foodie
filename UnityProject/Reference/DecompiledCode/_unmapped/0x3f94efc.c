// rea decompile_all
// name: FUN_03f94efc
// address: 0x3f94efc
// body: available
// range: 0x3f94efc-0x3f94fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f94efc(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar8 = param_1[1];
  uVar7 = *param_1;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 0x10;
    lVar3 = lVar4 + 0x10;
    lVar4 = lVar1;
  } while (*(ulong *)((long)param_1 + lVar3) < uVar7);
  puVar2 = (ulong *)((long)param_1 + lVar1);
  if (lVar1 == 0x10) {
    do {
      if (param_2 <= puVar2) break;
      param_2 = param_2 + -2;
    } while (uVar7 <= *param_2);
  }
  else {
    do {
      param_2 = param_2 + -2;
    } while (uVar7 <= *param_2);
  }
  puVar5 = puVar2;
  puVar6 = param_2;
  if (puVar2 < param_2) {
    do {
      uVar11 = puVar5[1];
      uVar9 = *puVar5;
      uVar10 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar10;
      puVar6[1] = uVar11;
      *puVar6 = uVar9;
      do {
        puVar5 = puVar5 + 2;
      } while (*puVar5 < uVar7);
      do {
        puVar6 = puVar6 + -2;
      } while (uVar7 <= *puVar6);
    } while (puVar5 < puVar6);
  }
  puVar6 = puVar5 + -2;
  if (puVar6 != param_1) {
    uVar9 = *puVar6;
    param_1[1] = puVar5[-1];
    *param_1 = uVar9;
  }
  puVar5[-1] = uVar8;
  *puVar6 = uVar7;
  auVar12[8] = param_2 <= puVar2;
  auVar12._0_8_ = puVar6;
  auVar12._9_7_ = 0;
  return auVar12;
}

