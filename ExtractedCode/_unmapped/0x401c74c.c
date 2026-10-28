// rea decompile_all
// name: std::__ndk1::locale::use_facet
// address: 0x401c74c
// body: available
// range: 0x401c74c-0x401c7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::locale::use_facet(std::__ndk1::locale::id&) const */

ulong __thiscall std::__ndk1::locale::use_facet(locale *this,id *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  id *local_38;
  id ***local_30;
  id **local_28;
  
  lVar11 = *(long *)this;
  local_38 = param_1;
  if (*(long *)param_1 != -1) {
    local_28 = &local_38;
    local_30 = &local_28;
    __call_once((ulong *)param_1,&local_30,FUN_0402d4a0);
  }
  lVar10 = *(long *)(lVar11 + 0x10);
  if (((long)*(int *)(param_1 + 8) - 1U < (ulong)(*(long *)(lVar11 + 0x18) - lVar10 >> 3)) &&
     (uVar6 = *(ulong *)(lVar10 + ((long)*(int *)(param_1 + 8) - 1U) * 8), uVar6 != 0)) {
    return uVar6;
  }
  auVar12 = FUN_03ff9c28();
  lVar11 = *auVar12._0_8_;
  lVar10 = *auVar12._8_8_;
  if (lVar11 == lVar10) {
    return 1;
  }
  bVar3 = *(byte *)(lVar11 + 0x120);
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar11 + 0x128);
  }
  if (sVar1 == 1) {
    pcVar8 = (char *)(lVar11 + 0x121);
    if ((bVar3 & 1) != 0) {
      pcVar8 = *(char **)(lVar11 + 0x130);
    }
    if (*pcVar8 == '*') {
      return 0;
    }
  }
  bVar4 = *(byte *)(lVar10 + 0x120);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar10 + 0x128);
  }
  if (sVar1 != sVar2) {
    return 0;
  }
  pcVar8 = (char *)(lVar10 + 0x121);
  if ((bVar4 & 1) != 0) {
    pcVar8 = *(char **)(lVar10 + 0x130);
  }
  if ((bVar3 & 1) == 0) {
    if (bVar3 < 2) {
      return 1;
    }
    pcVar9 = (char *)(lVar11 + 0x121);
    do {
      uVar6 = uVar6 - 1;
      uVar7 = (ulong)(*pcVar9 == *pcVar8);
      if (*pcVar9 != *pcVar8) {
        return uVar7;
      }
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    } while (uVar6 != 0);
    return uVar7;
  }
  iVar5 = memcmp(*(void **)(lVar11 + 0x130),pcVar8,*(size_t *)(lVar11 + 0x128));
  return (ulong)(iVar5 == 0);
}

