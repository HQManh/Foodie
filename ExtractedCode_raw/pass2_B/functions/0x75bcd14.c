// rea decompile_all
// name: System.Number$$Int64ToHexStr
// address: 0x75bcd14
// body: available
// range: 0x75bcd14-0x75bcf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Number__Int64ToHexStr(ulong param_1,short param_2,uint param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  if ((DAT_09521d50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d50 = 1;
  }
  uVar17 = param_1 >> 0x20;
  uVar5 = uVar17;
  if (uVar17 == 0) {
    uVar5 = param_1;
  }
  uVar15 = 9;
  if (uVar17 == 0) {
    uVar15 = 1;
  }
  uVar12 = uVar5 >> 0x10;
  uVar4 = uVar12;
  if (uVar12 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar15 | 4;
  if (uVar12 == 0) {
    uVar3 = uVar15;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar15 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar15 = uVar3;
  }
  if (0xf < uVar5) {
    uVar15 = uVar15 + 1;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar15) {
    uVar3 = uVar15;
  }
  lVar11 = System_String__FastAllocateString((ulong)uVar3,0);
  if (lVar11 == 0) {
    lVar18 = 0;
  }
  else {
    iVar10 = thunk_FUN_03f68190(0);
    lVar18 = lVar11 + iVar10;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = (ulong)uVar3 * 2;
  iVar10 = (int)(param_1 >> 0x20);
  lVar6 = lVar11;
  lVar16 = 0;
  if (iVar10 != 0) {
    lVar6 = 0;
    lVar16 = lVar11;
  }
  if (iVar10 == 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((int)param_3 < 2) {
      param_3 = 1;
    }
    psVar14 = (short *)(lVar18 + lVar8 + -2);
    iVar10 = param_3 - 2;
    do {
      uVar15 = (uint)param_1;
      uVar9 = (ushort)param_1;
      param_1 = (ulong)(uVar15 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar2 = param_2;
      }
      psVar13 = psVar14 + -1;
      *psVar14 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar10 + -1;
      bVar1 = -1 < iVar10;
      psVar14 = psVar13;
      iVar10 = iVar7;
    } while ((bVar1) || (lVar16 = lVar6, 0xf < uVar15));
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    psVar14 = (short *)(lVar18 + lVar8 + -2);
    iVar10 = 6;
    do {
      uVar15 = (uint)param_1;
      uVar9 = (ushort)param_1;
      param_1 = (ulong)(uVar15 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar2 = param_2;
      }
      psVar13 = psVar14 + -1;
      *psVar14 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar10 + -1;
      bVar1 = -1 < iVar10;
      psVar14 = psVar13;
      iVar10 = iVar7;
    } while ((bVar1) || (0xf < uVar15));
    iVar10 = param_3 - 10;
    do {
      uVar15 = (uint)uVar17;
      uVar9 = (ushort)uVar17;
      uVar17 = (ulong)(uVar15 >> 4);
      sVar2 = 0x30;
      if (9 < (uVar15 & 0xe)) {
        sVar2 = param_2;
      }
      psVar14 = psVar13 + -1;
      *psVar13 = sVar2 + (uVar9 & 0xf);
      iVar7 = iVar10 + -1;
      bVar1 = -1 < iVar10;
      psVar13 = psVar14;
      iVar10 = iVar7;
    } while ((bVar1) || (0xf < uVar15));
  }
  return lVar16;
}

