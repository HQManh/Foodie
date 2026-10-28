// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$ClearBuffer
// address: 0x7419344
// body: available
// range: 0x7419344-0x74195a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator__ClearBuffer
               (undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    uVar4 = 0xf;
    uVar3 = 0xe;
    uVar6 = 0xd;
    uVar5 = 0xc;
    uVar8 = 0xb;
    uVar7 = 10;
    uVar10 = 9;
    uVar9 = 8;
    uVar2 = (ulong)param_3 - 1;
    uVar12 = 7;
    uVar11 = 6;
    uVar14 = 5;
    uVar13 = 4;
    uVar16 = 3;
    uVar15 = 2;
    uVar18 = 1;
    uVar17 = 0;
    do {
      if (uVar17 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1) = 0;
      }
      if (uVar18 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 1) = 0;
      }
      if (uVar15 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 2) = 0;
      }
      if (uVar16 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 3) = 0;
      }
      if (uVar13 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 4) = 0;
      }
      if (uVar14 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 5) = 0;
      }
      if (uVar11 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 6) = 0;
      }
      if (uVar12 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 7) = 0;
      }
      if (uVar9 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 8) = 0;
      }
      if (uVar10 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 9) = 0;
      }
      if (uVar7 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 10) = 0;
      }
      if (uVar8 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 0xb) = 0;
      }
      if (uVar5 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 0xc) = 0;
      }
      if (uVar6 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 0xd) = 0;
      }
      if (uVar3 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 0xe) = 0;
      }
      if (uVar4 <= uVar2) {
        *(undefined1 *)(param_2 + uVar1 + 0xf) = 0;
      }
      uVar13 = uVar13 + 0x10;
      uVar14 = uVar14 + 0x10;
      uVar15 = uVar15 + 0x10;
      uVar16 = uVar16 + 0x10;
      uVar1 = uVar1 + 0x10;
      uVar17 = uVar17 + 0x10;
      uVar18 = uVar18 + 0x10;
      uVar11 = uVar11 + 0x10;
      uVar12 = uVar12 + 0x10;
      uVar9 = uVar9 + 0x10;
      uVar10 = uVar10 + 0x10;
      uVar7 = uVar7 + 0x10;
      uVar8 = uVar8 + 0x10;
      uVar5 = uVar5 + 0x10;
      uVar6 = uVar6 + 0x10;
      uVar3 = uVar3 + 0x10;
      uVar4 = uVar4 + 0x10;
    } while (((ulong)(param_3 + 0xf) & 0xfffffff0) != uVar1);
  }
  return;
}

