// rea decompile_all
// name: FUN_03fb478c
// address: 0x3fb478c
// body: available
// range: 0x3fb478c-0x3fb4853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb478c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = FUN_03fc3840(**(undefined8 **)(param_1 + 0x60));
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x122);
  if (uVar8 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_03fa7f34(uVar8,0x28);
    lVar9 = 0;
    do {
      lVar7 = *(long *)(lVar3 + 0x90);
      lVar10 = *(long *)(param_1 + 0x60);
      plVar1 = (long *)(lVar4 + lVar9);
      *plVar1 = param_1;
      lVar7 = lVar7 + lVar9;
      lVar5 = *(long *)(lVar7 + 8);
      lVar2 = *(long *)(lVar7 + 0x10);
      plVar1[4] = *(long *)(lVar7 + 0x20);
      plVar1[1] = lVar5;
      if (lVar2 != 0) {
        lVar5 = FUN_03f773c4(lVar2,lVar10 + 8);
        plVar1[2] = lVar5;
      }
      if (*(long *)(lVar7 + 0x18) != 0) {
        uVar6 = FUN_03f773c4(*(long *)(lVar7 + 0x18),lVar10 + 8);
        *(undefined8 *)(lVar4 + lVar9 + 0x18) = uVar6;
      }
      lVar9 = lVar9 + 0x28;
    } while (uVar8 * 0x28 - lVar9 != 0);
  }
  *(long *)(param_1 + 0x90) = lVar4;
  return;
}

