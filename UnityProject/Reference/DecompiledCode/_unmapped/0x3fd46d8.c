// rea decompile_all
// name: FUN_03fd46d8
// address: 0x3fd46d8
// body: available
// range: 0x3fd46d8-0x3fd489b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd46d8(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar5 = DAT_097485f8;
  uVar4 = DAT_09535c68;
  uVar3 = DAT_09515698;
  uVar7 = DAT_09535c70;
  if (param_1 < 0xfffffffffffff000) {
    uVar2 = param_1 + 0x1000;
    puVar9 = (ulong *)(param_1 + 0x20);
    puVar8 = (ulong *)(param_2 + 0x40);
    do {
      uVar10 = *puVar8;
      puVar11 = puVar9;
      if (uVar10 != 0) {
        do {
          if ((uVar10 & 1) != 0) {
            uVar6 = puVar11[-4];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[-3];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[-2];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[-1];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = *puVar11;
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[1];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[2];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
            uVar6 = puVar11[3];
            if ((uVar3 <= uVar6) && (uVar6 < uVar5)) {
              uVar7 = FUN_03fd1e4c(uVar6,uVar7,uVar4);
            }
          }
          bVar1 = 0xf < uVar10;
          uVar10 = uVar10 >> 4;
          puVar11 = puVar11 + 8;
        } while (bVar1);
      }
      param_1 = param_1 + 0x400;
      puVar9 = puVar9 + 0x80;
      puVar8 = puVar8 + 1;
    } while (param_1 < uVar2);
  }
  DAT_09535c70 = uVar7;
  return;
}

