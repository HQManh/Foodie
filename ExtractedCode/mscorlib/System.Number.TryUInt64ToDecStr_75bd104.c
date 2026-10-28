// rea decompile_all
// name: System.Number$$TryUInt64ToDecStr
// address: 0x75bd104
// body: available
// range: 0x75bd104-0x75bd3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Number__TryUInt64ToDecStr
               (ulong param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  
  if ((DAT_09521d54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d54 = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_1 < 10000000) {
    iVar11 = 1;
    uVar10 = param_1;
  }
  else if (param_1 < 100000000000000) {
    iVar11 = 8;
    uVar10 = param_1 / 10000000;
  }
  else {
    iVar11 = 0xf;
    uVar10 = param_1 / 100000000000000;
  }
  uVar8 = (uint)uVar10;
  if (9 < uVar8) {
    if (uVar8 < 100) {
      iVar11 = iVar11 + 1;
    }
    else if (uVar8 < 1000) {
      iVar11 = iVar11 + 2;
    }
    else if (uVar8 >> 4 < 0x271) {
      iVar11 = iVar11 + 3;
    }
    else if (uVar8 >> 5 < 0xc35) {
      iVar11 = iVar11 + 4;
    }
    else if (uVar8 < 1000000) {
      iVar11 = iVar11 + 5;
    }
    else {
      iVar11 = iVar11 + 6;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = param_2;
  if (param_2 <= iVar11) {
    iVar2 = iVar11;
  }
  if ((int)param_4 < iVar2) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar2;
    lVar4 = FUN_04c072b8(param_3,param_4,DAT_091d3038);
    iVar11 = param_2 + -2;
    psVar6 = (short *)(lVar4 + (ulong)(uint)(iVar2 << 1));
    lVar4 = DAT_09188a70;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar9 = (int)param_1;
      if (param_1 >> 0x20 == 0) break;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = DAT_09188a70;
      param_1 = param_1 / 1000000000;
      uVar10 = (ulong)(uint)(iVar9 + (int)param_1 * -1000000000);
      iVar9 = 7;
      do {
        do {
          uVar5 = uVar10 / 10;
          uVar8 = (uint)uVar10;
          psVar6 = psVar6 + -1;
          *psVar6 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
          iVar3 = iVar9 + -1;
          bVar1 = -1 < iVar9;
          uVar10 = uVar5;
          iVar9 = iVar3;
        } while (bVar1);
      } while (9 < uVar8);
      param_2 = param_2 + -9;
      iVar11 = iVar11 + -9;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((iVar9 != 0) || (-1 < param_2 + -1)) {
      psVar6 = psVar6 + -1;
      do {
        do {
          uVar8 = (uint)param_1;
          iVar9 = iVar11 + -1;
          uVar10 = (param_1 & 0xffffffff) / 10;
          psVar7 = psVar6 + -1;
          *psVar6 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar11;
          psVar6 = psVar7;
          param_1 = uVar10;
          iVar11 = iVar9;
        } while (bVar1);
      } while (9 < uVar8);
    }
  }
  return iVar2 <= (int)param_4;
}

