// rea decompile_all
// name: MessagePack.Internal.FarmHash$$HashLen33to64
// address: 0x73b95e4
// body: available
// range: 0x73b95e4-0x73b96ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Internal_FarmHash__HashLen33to64(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  lVar4 = param_1[2];
  lVar6 = param_1[3];
  if ((DAT_09520c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc160);
    DAT_09520c20 = 1;
  }
  lVar7 = *(long *)((long)param_1 + ((ulong)param_2 - 0x18));
  lVar9 = *(long *)((long)param_1 + ((ulong)param_2 - 0x20)) * -0x4b6d499041670d8d;
  lVar1 = (ulong)(param_2 << 1) + 0x9ae16a3b2f904031;
  uVar11 = *(long *)((long)param_1 + ((ulong)param_2 - 8)) * lVar1;
  uVar10 = lVar7 + lVar9;
  uVar13 = lVar6 * -0x651e95c4d06fbfcf;
  uVar8 = lVar5 + lVar3 * -0x4b6d499041670d8d;
  uVar2 = lVar7 + 0x9ae16a3b2f90404f;
  uVar12 = lVar5 + 0x9ae16a3b2f90404f;
  uVar2 = (uVar2 >> 0x12 | uVar2 << 0x2e) + lVar9 + uVar11;
  uVar11 = ((uVar11 >> 0x1e | uVar11 << 0x22) + (uVar10 >> 0x2b | uVar10 * 0x200000) +
            *(long *)((long)param_1 + ((ulong)param_2 - 0x10)) * -0x651e95c4d06fbfb1 ^ uVar2) *
           lVar1;
  uVar10 = (uVar12 >> 0x12 | uVar12 << 0x2e) + lVar3 * -0x4b6d499041670d8d + uVar13;
  uVar12 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar8 >> 0x2b | uVar8 * 0x200000) +
            lVar4 * -0x651e95c4d06fbfb1 ^ uVar10) * -0x651e95c4d06fbfcf;
  uVar8 = (uVar2 ^ uVar11 >> 0x2f ^ uVar11) * lVar1;
  uVar10 = (uVar10 ^ uVar12 >> 0x2f ^ uVar12) * -0x651e95c4d06fbfcf;
  return ((uVar10 ^ uVar10 >> 0x2f) + (uVar8 ^ uVar8 >> 0x2f) * lVar1) * lVar1;
}

