// rea decompile_all
// name: FUN_03f8cfec
// address: 0x3f8cfec
// body: available
// range: 0x3f8cfec-0x3f8d053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f8cfec(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte *__s1;
  bool bVar3;
  int iVar4;
  
  __s2 = *(byte **)(param_3 + 0x10);
  bVar3 = (*param_3 & 1) == 0;
  if (bVar3) {
    __s2 = param_3 + 1;
  }
  uVar1 = (ulong)(*param_3 >> 1);
  if (!bVar3) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar2 = *(ulong *)(param_2 + 8);
  __s1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s1 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  iVar4 = memcmp(__s1,__s2,__n);
  bVar3 = uVar2 < uVar1;
  if (iVar4 != 0) {
    bVar3 = iVar4 < 0;
  }
  return bVar3;
}

