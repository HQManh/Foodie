// rea decompile_all
// name: System.Number$$NegativeInt32ToDecStr
// address: 0x75bbf44
// body: available
// range: 0x75bbf44-0x75bc0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bc0f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Number__NegativeInt32ToDecStr(int param_1,int param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  short *psVar11;
  long lVar12;
  
  if ((DAT_09521d46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d46 = 1;
  }
  uVar7 = (uint)-param_1 >> 5;
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar6 = uVar7 / 0xc35;
  if (uVar7 < 0xc35) {
    uVar6 = -param_1;
  }
  iVar4 = 6;
  if (uVar7 < 0xc35) {
    iVar4 = 1;
  }
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar4 = iVar4 + 1;
    }
    else if (uVar6 < 1000) {
      iVar4 = iVar4 + 2;
    }
    else if (uVar6 >> 4 < 0x271) {
      iVar4 = iVar4 + 3;
    }
    else {
      iVar4 = iVar4 + 4;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_3 != 0) {
    iVar1 = param_2;
    if (param_2 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar1 = *(int *)(param_3 + 0x10) + iVar1;
    lVar5 = System_String__FastAllocateString(iVar1,0);
    if (lVar5 == 0) {
      lVar12 = 0;
    }
    else {
      iVar4 = thunk_FUN_03f68190(0);
      lVar12 = lVar5 + iVar4;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = (ulong)(uint)-param_1;
    psVar10 = (short *)(lVar12 + (long)iVar1 * 2 + -2);
    iVar4 = param_2 + -2;
    do {
      do {
        uVar9 = uVar8 / 10;
        uVar7 = (uint)uVar8;
        psVar11 = psVar10 + -1;
        *psVar10 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar1 = iVar4 + -1;
        bVar2 = -1 < iVar4;
        uVar8 = uVar9;
        psVar10 = psVar11;
        iVar4 = iVar1;
      } while (bVar2);
    } while (9 < uVar7);
    iVar4 = *(int *)(param_3 + 0x10) + -1;
    if (-1 < iVar4) {
      do {
        sVar3 = System_String__get_Chars(param_3,iVar4,0);
        iVar4 = iVar4 + -1;
        *psVar11 = sVar3;
        psVar11 = psVar11 + -1;
      } while (iVar4 != -1);
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

