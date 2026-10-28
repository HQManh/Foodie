// rea decompile_all
// name: MessagePack.Internal.FarmHash$$HashLen65to96
// address: 0x73b9700
// body: available
// range: 0x73b9700-0x73b987f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__HashLen65to96(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  lVar3 = param_1[3];
  if ((DAT_09520c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  uVar4 = lVar2 + 0x9ae16a3b2f90404f;
  uVar7 = lVar3 * -0x651e95c4d06fc023;
  lVar3 = (ulong)(param_2 << 1) + 0x9ae16a3b2f903fdd;
  uVar9 = lVar2 + lVar1 * -0x4b6d499041670d8d;
  uVar4 = (uVar4 >> 0x12 | uVar4 << 0x2e) + lVar1 * -0x4b6d499041670d8d + uVar7;
  uVar10 = param_1[7] * lVar3;
  uVar6 = param_1[5] + param_1[4] * -0x4b6d499041670d8d;
  uVar8 = param_1[5] + 0x9ae16a3b2f90404f;
  uVar8 = (uVar8 >> 0x12 | uVar8 << 0x2e) + param_1[4] * -0x4b6d499041670d8d + uVar10;
  uVar7 = ((uVar7 >> 0x1e | uVar7 << 0x22) + (uVar9 >> 0x2b | uVar9 * 0x200000) +
           lVar5 * -0x651e95c4d06fbfb1 ^ uVar4) * -0x651e95c4d06fc023;
  lVar5 = *(long *)((long)param_1 + ((ulong)param_2 - 0x20)) * -0x4b6d499041670d8d;
  uVar9 = ((uVar10 >> 0x1e | uVar10 << 0x22) + (uVar6 >> 0x2b | uVar6 * 0x200000) +
           param_1[6] * -0x651e95c4d06fbfb1 ^ uVar8) * lVar3;
  uVar10 = *(long *)((long)param_1 + ((ulong)param_2 - 8)) * lVar3;
  uVar6 = (uVar4 ^ uVar7 >> 0x2f ^ uVar7) * -0x651e95c4d06fc023;
  lVar1 = *(long *)((long)param_1 + ((ulong)param_2 - 0x18));
  uVar4 = lVar1 + lVar5;
  uVar8 = (uVar8 ^ uVar9 >> 0x2f ^ uVar9) * lVar3;
  uVar9 = lVar1 + 0x9ae16a3b2f90404f;
  uVar9 = lVar5 + (uVar9 >> 0x12 | uVar9 << 0x2e) + uVar10 + (uVar8 ^ uVar8 >> 0x2f);
  uVar4 = ((uVar4 >> 0x2b | uVar4 * 0x200000) + (uVar10 >> 0x1e | uVar10 << 0x22) +
           (uVar6 ^ uVar6 >> 0x2f) +
           *(long *)((long)param_1 + ((ulong)param_2 - 0x10)) * -0x651e95c4d06fbfb1 ^ uVar9) * lVar3
  ;
  uVar4 = (uVar9 ^ uVar4 >> 0x2f ^ uVar4) * lVar3;
  return ((uVar8 >> 0x15) + (uVar6 >> 0x11) + (uVar4 ^ uVar4 >> 0x2f) * 9) * lVar3;
}

