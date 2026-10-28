// rea decompile_all
// name: FUN_03fadcc4
// address: 0x3fadcc4
// body: available
// range: 0x3fadc14-0x3fadd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fadcc4(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar5 = *(byte *)(lVar4 + 0x52) - 1;
  }
  else {
    uVar5 = (uint)*(byte *)(lVar4 + 0x52);
  }
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    uVar7 = *(byte *)(lVar6 + 0x52) - 1;
  }
  else {
    uVar7 = (uint)*(byte *)(lVar6 + 0x52);
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != (uVar7 & 0xff)) {
    return false;
  }
  plVar2 = *(long **)(lVar4 + 0x30);
  plVar3 = *(long **)(lVar6 + 0x30);
  if (uVar5 == 0) {
    bVar1 = true;
  }
  else {
    lVar4 = *plVar2;
    lVar6 = *plVar3;
    bVar1 = false;
    if (((*(uint *)(lVar6 + 8) ^ *(uint *)(lVar4 + 8)) >> 0x1d & 1) == 0) {
      uVar8 = 1;
      do {
        lVar4 = FUN_03fbe574(lVar4,1);
        lVar6 = FUN_03fbe574(lVar6,1);
        if (lVar4 != lVar6) {
          return bVar1;
        }
        bVar1 = uVar5 <= uVar8;
        if (uVar5 == uVar8) {
          return bVar1;
        }
        lVar4 = plVar2[uVar8];
        lVar6 = plVar3[uVar8];
        uVar8 = uVar8 + 1;
      } while (((*(uint *)(lVar6 + 8) ^ *(uint *)(lVar4 + 8)) >> 0x1d & 1) == 0);
    }
  }
  return bVar1;
}

