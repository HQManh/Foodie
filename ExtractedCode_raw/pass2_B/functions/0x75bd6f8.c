// rea decompile_all
// name: System.Number$$TryInt64ToHexStr
// address: 0x75bd6f8
// body: available
// range: 0x75bd6f8-0x75bd947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Number__TryInt64ToHexStr
               (ulong param_1,short param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               uint *param_6)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  
  if ((DAT_09521d51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d51 = 1;
  }
  uVar14 = param_1 >> 0x20;
  uVar5 = uVar14;
  if (uVar14 == 0) {
    uVar5 = param_1;
  }
  uVar12 = 9;
  if (uVar14 == 0) {
    uVar12 = 1;
  }
  uVar9 = uVar5 >> 0x10;
  uVar4 = uVar9;
  if (uVar9 == 0) {
    uVar4 = uVar5;
  }
  uVar3 = uVar12 | 4;
  if (uVar9 == 0) {
    uVar3 = uVar12;
  }
  uVar5 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  uVar12 = uVar3 | 2;
  if (uVar4 < 0x100) {
    uVar12 = uVar3;
  }
  if (0xf < uVar5) {
    uVar12 = uVar12 + 1;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = param_3;
  if ((int)param_3 <= (int)uVar12) {
    uVar3 = uVar12;
  }
  if ((int)param_5 < (int)uVar3) {
    *param_6 = 0;
  }
  else {
    *param_6 = uVar3;
    lVar8 = FUN_04c072b8(param_4,param_5,DAT_091d3038);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a70);
    }
    if ((int)(param_1 >> 0x20) == 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((int)param_3 < 2) {
        param_3 = 1;
      }
      psVar11 = (short *)(lVar8 + (ulong)uVar3 * 2 + -2);
      iVar13 = param_3 - 2;
      do {
        uVar12 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar12 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = param_2;
        }
        psVar10 = psVar11 + -1;
        *psVar11 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar13 + -1;
        bVar1 = -1 < iVar13;
        psVar11 = psVar10;
        iVar13 = iVar6;
      } while ((bVar1) || (0xf < uVar12));
    }
    else {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      psVar11 = (short *)(lVar8 + (ulong)uVar3 * 2 + -2);
      iVar13 = 6;
      do {
        uVar12 = (uint)param_1;
        uVar7 = (ushort)param_1;
        param_1 = (ulong)(uVar12 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = param_2;
        }
        psVar10 = psVar11 + -1;
        *psVar11 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar13 + -1;
        bVar1 = -1 < iVar13;
        psVar11 = psVar10;
        iVar13 = iVar6;
      } while ((bVar1) || (0xf < uVar12));
      iVar13 = param_3 - 10;
      do {
        uVar12 = (uint)uVar14;
        uVar7 = (ushort)uVar14;
        uVar14 = (ulong)(uVar12 >> 4);
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = param_2;
        }
        psVar11 = psVar10 + -1;
        *psVar10 = sVar2 + (uVar7 & 0xf);
        iVar6 = iVar13 + -1;
        bVar1 = -1 < iVar13;
        psVar10 = psVar11;
        iVar13 = iVar6;
      } while ((bVar1) || (0xf < uVar12));
    }
  }
  return (int)uVar3 <= (int)param_5;
}

