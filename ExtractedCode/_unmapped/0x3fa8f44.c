// rea decompile_all
// name: FUN_03fa8f44
// address: 0x3fa8f44
// body: available
// range: 0x3fa8f44-0x3fa906f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa8f44(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  
  FUN_03fbea4c();
  uVar1 = *(ushort *)(param_1 + 0x12a);
  if (*(long *)(param_2 + 0x60) == 0) {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      puVar5 = (ushort *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if ((*(long *)(puVar5 + -4) == param_2) &&
           (((uint)*puVar5 + param_3 & 0xffff) < (uint)uVar1)) {
          uVar1 = (ushort)((uint)*puVar5 + param_3);
          goto LAB_03fa9068;
        }
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 8;
      } while (uVar2 != 0);
    }
  }
  else {
    if (param_2 == param_1) {
      return 0;
    }
    uVar2 = FUN_03f95b78(param_2,param_1,DAT_09535620);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      puVar5 = (ushort *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (((*(long *)(puVar5 + -4) == param_2) ||
            (uVar3 = FUN_03f95b78(param_2,*(long *)(puVar5 + -4),DAT_09535620), (uVar3 & 1) != 0))
           && (((uint)*puVar5 + param_3 & 0xffff) < (uint)uVar1)) {
          uVar1 = (ushort)((uint)*puVar5 + param_3);
LAB_03fa9068:
          return param_1 + (ulong)uVar1 * 0x10 + 0x138;
        }
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 8;
      } while (uVar2 != 0);
    }
  }
  uVar2 = (ulong)*(ushort *)(param_1 + 300);
  if (uVar2 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0xa8);
    do {
      lVar4 = FUN_03fa8f44(*puVar6,param_2,param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      uVar2 = uVar2 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 != 0);
  }
  return 0;
}

