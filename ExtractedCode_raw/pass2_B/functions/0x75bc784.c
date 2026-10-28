// rea decompile_all
// name: System.Number$$UInt64ToDecStr
// address: 0x75bc784
// body: available
// range: 0x75bc784-0x75bca23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Number__UInt64ToDecStr(ulong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  if ((DAT_09521d53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d53 = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_1 < 10000000) {
    iVar3 = 1;
    uVar11 = param_1;
  }
  else if (param_1 < 100000000000000) {
    iVar3 = 8;
    uVar11 = param_1 / 10000000;
  }
  else {
    iVar3 = 0xf;
    uVar11 = param_1 / 100000000000000;
  }
  uVar9 = (uint)uVar11;
  if (9 < uVar9) {
    if (uVar9 < 100) {
      iVar3 = iVar3 + 1;
    }
    else if (uVar9 < 1000) {
      iVar3 = iVar3 + 2;
    }
    else if (uVar9 >> 4 < 0x271) {
      iVar3 = iVar3 + 3;
    }
    else if (uVar9 >> 5 < 0xc35) {
      iVar3 = iVar3 + 4;
    }
    else if (uVar9 < 1000000) {
      iVar3 = iVar3 + 5;
    }
    else {
      iVar3 = iVar3 + 6;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar10 = param_2;
  if (param_2 <= iVar3) {
    iVar10 = iVar3;
  }
  lVar4 = System_String__FastAllocateString(iVar10,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_03f68190(0);
    lVar5 = lVar4 + iVar3;
  }
  iVar3 = param_2 + -2;
  psVar7 = (short *)(lVar5 + (ulong)(uint)(iVar10 << 1));
  lVar5 = DAT_09188a70;
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar10 = (int)param_1;
    if (param_1 >> 0x20 == 0) break;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_09188a70;
    param_1 = param_1 / 1000000000;
    uVar11 = (ulong)(uint)(iVar10 + (int)param_1 * -1000000000);
    iVar10 = 7;
    do {
      do {
        uVar6 = uVar11 / 10;
        uVar9 = (uint)uVar11;
        psVar7 = psVar7 + -1;
        *psVar7 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar2 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar11 = uVar6;
        iVar10 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
    param_2 = param_2 + -9;
    iVar3 = iVar3 + -9;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((iVar10 != 0) || (-1 < param_2 + -1)) {
    psVar7 = psVar7 + -1;
    do {
      do {
        uVar9 = (uint)param_1;
        iVar10 = iVar3 + -1;
        uVar11 = (param_1 & 0xffffffff) / 10;
        psVar8 = psVar7 + -1;
        *psVar7 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar3;
        psVar7 = psVar8;
        param_1 = uVar11;
        iVar3 = iVar10;
      } while (bVar1);
    } while (9 < uVar9);
  }
  return lVar4;
}

