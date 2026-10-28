// rea decompile_all
// name: System.Number$$TryNegativeInt32ToDecStr
// address: 0x75bc418
// body: available
// range: 0x75bc418-0x75bc5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bc5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Number__TryNegativeInt32ToDecStr
               (int param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
               int *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((DAT_09521d47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d47 = 1;
  }
  uVar8 = (uint)-param_1 >> 5;
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar6 = uVar8 / 0xc35;
  if (uVar8 < 0xc35) {
    uVar6 = -param_1;
  }
  iVar7 = 6;
  if (uVar8 < 0xc35) {
    iVar7 = 1;
  }
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar7 = iVar7 + 1;
    }
    else if (uVar6 < 1000) {
      iVar7 = iVar7 + 2;
    }
    else if (uVar6 >> 4 < 0x271) {
      iVar7 = iVar7 + 3;
    }
    else {
      iVar7 = iVar7 + 4;
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
  if (param_2 <= iVar7) {
    iVar1 = iVar7;
  }
  iVar1 = *(int *)(param_3 + 0x10) + iVar1;
  if ((int)param_5 < iVar1) {
    *param_6 = 0;
  }
  else {
    *param_6 = iVar1;
    lVar5 = FUN_04c072b8(param_4,param_5,DAT_091d3038);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a70);
    }
    psVar9 = (short *)(lVar5 + (long)iVar1 * 2 + -2);
    uVar11 = (ulong)(uint)-param_1;
    iVar7 = param_2 + -2;
    do {
      do {
        uVar12 = uVar11 / 10;
        uVar8 = (uint)uVar11;
        psVar10 = psVar9 + -1;
        *psVar9 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar3 = iVar7 + -1;
        bVar2 = -1 < iVar7;
        psVar9 = psVar10;
        uVar11 = uVar12;
        iVar7 = iVar3;
      } while (bVar2);
    } while (9 < uVar8);
    iVar7 = *(int *)(param_3 + 0x10) + -1;
    if (-1 < iVar7) {
      do {
        sVar4 = System_String__get_Chars(param_3,iVar7,0);
        iVar7 = iVar7 + -1;
        *psVar10 = sVar4;
        psVar10 = psVar10 + -1;
      } while (iVar7 != -1);
    }
  }
  return iVar1 <= (int)param_5;
}

