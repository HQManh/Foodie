// rea decompile_all
// name: MessagePack.Internal.FarmHash$$HashLen17to32
// address: 0x73b9450
// body: available
// range: 0x73b9450-0x73b9513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__HashLen17to32(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar3 = *(long *)((long)param_1 + ((ulong)param_2 - 0x10));
  lVar5 = *(long *)((long)param_1 + ((ulong)param_2 - 8));
  if ((DAT_09520c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  lVar1 = (ulong)(param_2 << 1) + 0x9ae16a3b2f90404f;
  uVar6 = lVar4 + 0x9ae16a3b2f90404f;
  uVar8 = lVar5 * lVar1;
  uVar7 = lVar4 + lVar2 * -0x4b6d499041670d8d;
  uVar6 = (uVar6 >> 0x12 | uVar6 << 0x2e) + lVar2 * -0x4b6d499041670d8d + uVar8;
  uVar7 = ((uVar8 >> 0x1e | uVar8 << 0x22) + (uVar7 >> 0x2b | uVar7 * 0x200000) +
           lVar3 * -0x651e95c4d06fbfb1 ^ uVar6) * lVar1;
  uVar6 = (uVar6 ^ uVar7 >> 0x2f ^ uVar7) * lVar1;
  return (uVar6 ^ uVar6 >> 0x2f) * lVar1;
}

