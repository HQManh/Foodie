// rea decompile_all
// name: System.Number$$NegativeInt64ToDecStr
// address: 0x75bca24
// body: available
// range: 0x75bca24-0x75bcd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bcd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Number__NegativeInt64ToDecStr(long param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  
  if ((DAT_09521d4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d4e = 1;
  }
  uVar11 = -param_1;
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (uVar11 < 10000000) {
    iVar5 = 1;
    uVar12 = uVar11;
  }
  else if (uVar11 < 100000000000000) {
    iVar5 = 8;
    uVar12 = uVar11 / 10000000;
  }
  else {
    iVar5 = 0xf;
    uVar12 = uVar11 / 100000000000000;
  }
  uVar8 = (uint)uVar12;
  if (9 < uVar8) {
    if (uVar8 < 100) {
      iVar5 = iVar5 + 1;
    }
    else if (uVar8 < 1000) {
      iVar5 = iVar5 + 2;
    }
    else if (uVar8 >> 4 < 0x271) {
      iVar5 = iVar5 + 3;
    }
    else if (uVar8 >> 5 < 0xc35) {
      iVar5 = iVar5 + 4;
    }
    else if (uVar8 < 1000000) {
      iVar5 = iVar5 + 5;
    }
    else {
      iVar5 = iVar5 + 6;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar10 = param_2;
  if (param_2 <= iVar5) {
    iVar10 = iVar5;
  }
  iVar10 = *(int *)(param_3 + 0x10) + iVar10;
  lVar6 = System_String__FastAllocateString(iVar10,0);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    iVar5 = thunk_FUN_03f68190(0);
    lVar7 = lVar6 + iVar5;
  }
  psVar13 = (short *)(lVar7 + (long)iVar10 * 2);
  iVar5 = param_2 + -2;
  lVar7 = DAT_09188a70;
  while( true ) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar10 = (int)uVar11;
    if (uVar11 >> 0x20 == 0) break;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = DAT_09188a70;
    uVar11 = uVar11 / 1000000000;
    psVar3 = psVar13 + -1;
    uVar12 = (ulong)(uint)(iVar10 + (int)uVar11 * -1000000000);
    iVar10 = 7;
    do {
      do {
        psVar13 = psVar3;
        uVar9 = uVar12 / 10;
        uVar8 = (uint)uVar12;
        *psVar13 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
        iVar2 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar3 = psVar13 + -1;
        uVar12 = uVar9;
        iVar10 = iVar2;
      } while (bVar1);
    } while (9 < uVar8);
    param_2 = param_2 + -9;
    iVar5 = iVar5 + -9;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((iVar10 != 0) || (-1 < param_2 + -1)) {
    psVar3 = psVar13 + -1;
    do {
      do {
        psVar13 = psVar3;
        uVar8 = (uint)uVar11;
        iVar10 = iVar5 + -1;
        uVar12 = (uVar11 & 0xffffffff) / 10;
        *psVar13 = (short)uVar11 + (short)((uVar11 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < iVar5;
        psVar3 = psVar13 + -1;
        uVar11 = uVar12;
        iVar5 = iVar10;
      } while (bVar1);
    } while (9 < uVar8);
  }
  iVar5 = *(int *)(param_3 + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      psVar13 = psVar13 + -1;
      sVar4 = System_String__get_Chars(param_3,iVar5,0);
      iVar5 = iVar5 + -1;
      *psVar13 = sVar4;
    } while (iVar5 != -1);
  }
  return lVar6;
}

