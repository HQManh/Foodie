// rea decompile_all
// name: System.Number$$TryNegativeInt64ToDecStr
// address: 0x75bd3d4
// body: available
// range: 0x75bd3d4-0x75bd6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bd6f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Number__TryNegativeInt64ToDecStr
               (long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
               int *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((DAT_09521d4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d4f = 1;
  }
  uVar12 = -param_1;
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (uVar12 < 10000000) {
    iVar10 = 1;
    uVar13 = uVar12;
  }
  else if (uVar12 < 100000000000000) {
    iVar10 = 8;
    uVar13 = uVar12 / 10000000;
  }
  else {
    iVar10 = 0xf;
    uVar13 = uVar12 / 100000000000000;
  }
  uVar7 = (uint)uVar13;
  if (9 < uVar7) {
    if (uVar7 < 100) {
      iVar10 = iVar10 + 1;
    }
    else if (uVar7 < 1000) {
      iVar10 = iVar10 + 2;
    }
    else if (uVar7 >> 4 < 0x271) {
      iVar10 = iVar10 + 3;
    }
    else if (uVar7 >> 5 < 0xc35) {
      iVar10 = iVar10 + 4;
    }
    else if (uVar7 < 1000000) {
      iVar10 = iVar10 + 5;
    }
    else {
      iVar10 = iVar10 + 6;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = param_2;
  if (param_2 <= iVar10) {
    iVar1 = iVar10;
  }
  iVar1 = *(int *)(param_3 + 0x10) + iVar1;
  if ((int)param_5 < iVar1) {
    *param_6 = 0;
  }
  else {
    *param_6 = iVar1;
    lVar6 = FUN_04c072b8(param_4,param_5,DAT_091d3038);
    psVar11 = (short *)(lVar6 + (long)iVar1 * 2);
    iVar10 = param_2 + -2;
    lVar6 = DAT_09188a70;
    while( true ) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar9 = (int)uVar12;
      if (uVar12 >> 0x20 == 0) break;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = DAT_09188a70;
      uVar12 = uVar12 / 1000000000;
      psVar4 = psVar11 + -1;
      uVar13 = (ulong)(uint)(iVar9 + (int)uVar12 * -1000000000);
      iVar9 = 7;
      do {
        do {
          psVar11 = psVar4;
          uVar8 = uVar13 / 10;
          uVar7 = (uint)uVar13;
          *psVar11 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
          iVar3 = iVar9 + -1;
          bVar2 = -1 < iVar9;
          psVar4 = psVar11 + -1;
          uVar13 = uVar8;
          iVar9 = iVar3;
        } while (bVar2);
      } while (9 < uVar7);
      param_2 = param_2 + -9;
      iVar10 = iVar10 + -9;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((iVar9 != 0) || (-1 < param_2 + -1)) {
      psVar4 = psVar11 + -1;
      do {
        do {
          psVar11 = psVar4;
          uVar7 = (uint)uVar12;
          iVar9 = iVar10 + -1;
          uVar13 = (uVar12 & 0xffffffff) / 10;
          *psVar11 = (short)uVar12 + (short)((uVar12 & 0xffffffff) / 10) * -10 + 0x30;
          bVar2 = -1 < iVar10;
          psVar4 = psVar11 + -1;
          uVar12 = uVar13;
          iVar10 = iVar9;
        } while (bVar2);
      } while (9 < uVar7);
    }
    iVar10 = *(int *)(param_3 + 0x10) + -1;
    if (-1 < iVar10) {
      do {
        psVar11 = psVar11 + -1;
        sVar5 = System_String__get_Chars(param_3,iVar10,0);
        iVar10 = iVar10 + -1;
        *psVar11 = sVar5;
      } while (iVar10 != -1);
    }
  }
  return iVar1 <= (int)param_5;
}

