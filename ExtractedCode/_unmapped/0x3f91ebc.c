// rea decompile_all
// name: FUN_03f91ebc
// address: 0x3f91ebc
// body: available
// range: 0x3f91ebc-0x3f91f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f91ebc(long *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  bVar4 = *pbVar5;
  *param_1 = (long)(pbVar5 + 1);
  uVar1 = (uint)bVar4;
  if (-1 < (char)bVar4) {
    return uVar1;
  }
  if ((uVar1 & 0xc0) == 0x80) {
    bVar4 = pbVar5[1];
    *param_1 = (long)(pbVar5 + 2);
    return (uint)bVar4 | (uVar1 & 0x3f) << 8;
  }
  if ((uVar1 & 0xe0) == 0xc0) {
    bVar4 = pbVar5[1];
    *param_1 = (long)(pbVar5 + 2);
    bVar2 = pbVar5[2];
    *param_1 = (long)(pbVar5 + 3);
    bVar3 = pbVar5[3];
    *param_1 = (long)(pbVar5 + 4);
    return (uVar1 & 0x1f) << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
  }
  if (uVar1 != 0xff) {
    if (uVar1 == 0xfe) {
      return 0xfffffffe;
    }
    if (uVar1 == 0xf0) {
      uVar1 = *(uint *)(pbVar5 + 1);
      *param_1 = (long)(pbVar5 + 5);
      return uVar1;
    }
    return 0;
  }
  return 0xffffffff;
}

