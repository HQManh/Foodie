// rea decompile_all
// name: System.Number$$Int32ToHexStr
// address: 0x75bc0f4
// body: available
// range: 0x75bc0f4-0x75bc23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Number__Int32ToHexStr(uint param_1,short param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  long lVar12;
  
  if ((DAT_09521d48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d48 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  bVar5 = param_1 >> 0x10 == 0;
  uVar11 = param_1 >> 0x10;
  if (bVar5) {
    uVar11 = param_1;
  }
  uVar8 = 5;
  if (bVar5) {
    uVar8 = 1;
  }
  uVar1 = uVar8 | 2;
  uVar3 = uVar11 >> 8;
  if (uVar11 < 0x100) {
    uVar1 = uVar8;
    uVar3 = uVar11;
  }
  if (0xf < uVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = param_3;
  if ((int)param_3 <= (int)uVar1) {
    uVar11 = uVar1;
  }
  lVar7 = System_String__FastAllocateString(uVar11,0);
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  else {
    iVar6 = thunk_FUN_03f68190(0);
    lVar12 = lVar7 + iVar6;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  psVar9 = (short *)(lVar12 + (ulong)(uVar11 << 1) + -2);
  iVar6 = param_3 - 2;
  do {
    uVar11 = param_1;
    sVar2 = 0x30;
    if (9 < (uVar11 & 0xe)) {
      sVar2 = param_2;
    }
    psVar10 = psVar9 + -1;
    *psVar9 = sVar2 + ((ushort)uVar11 & 0xf);
    iVar4 = iVar6 + -1;
    bVar5 = -1 < iVar6;
    psVar9 = psVar10;
    param_1 = uVar11 >> 4;
    iVar6 = iVar4;
  } while ((bVar5) || (0xf < uVar11));
  return lVar7;
}

