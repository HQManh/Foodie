// rea decompile_all
// name: FUN_03fb4854
// address: 0x3fb4854
// body: available
// range: 0x3fb4854-0x3fb494f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb4854(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar4 = FUN_03fc3840(**(undefined8 **)(param_1 + 0x60));
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x126);
  if (uVar9 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_03fa7f34(uVar9,0x38);
    lVar10 = 0;
    do {
      lVar12 = *(long *)(lVar4 + 0x88);
      lVar11 = *(long *)(param_1 + 0x60);
      puVar1 = (undefined8 *)(lVar5 + lVar10);
      puVar2 = (undefined8 *)(lVar12 + lVar10);
      uVar6 = FUN_03f76ed4(puVar2[1],lVar11 + 8,0);
      uVar8 = *puVar2;
      uVar3 = *(undefined4 *)(puVar2 + 6);
      lVar7 = puVar2[3];
      puVar1[2] = param_1;
      *puVar1 = uVar8;
      puVar1[1] = uVar6;
      *(undefined4 *)(puVar1 + 6) = uVar3;
      if (lVar7 != 0) {
        uVar6 = FUN_03f773c4(lVar7,lVar11 + 8);
        puVar1[3] = uVar6;
      }
      if (puVar2[5] != 0) {
        uVar6 = FUN_03f773c4(puVar2[5],lVar11 + 8);
        *(undefined8 *)(lVar5 + lVar10 + 0x28) = uVar6;
      }
      lVar7 = *(long *)(lVar12 + lVar10 + 0x20);
      if (lVar7 != 0) {
        uVar6 = FUN_03f773c4(lVar7,lVar11 + 8);
        *(undefined8 *)(lVar5 + lVar10 + 0x20) = uVar6;
      }
      lVar10 = lVar10 + 0x38;
    } while (uVar9 * 0x38 != lVar10);
  }
  *(long *)(param_1 + 0x88) = lVar5;
  return;
}

