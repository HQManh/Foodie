// rea decompile_all
// name: System.Number$$TryUInt32ToDecStr
// address: 0x75bc240
// body: available
// range: 0x75bc240-0x75bc417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Number__TryUInt32ToDecStr
               (uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((DAT_09521d4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d4c = 1;
  }
  uVar3 = param_1 >> 5;
  uVar9 = 6;
  if (uVar3 < 0xc35) {
    uVar9 = 1;
  }
  uVar2 = uVar3 / 0xc35;
  if (uVar3 < 0xc35) {
    uVar2 = param_1;
  }
  if (9 < uVar2) {
    if (uVar2 < 100) {
      uVar9 = uVar9 + 1;
    }
    else if (uVar2 < 1000) {
      uVar9 = uVar9 + 2;
    }
    else if (uVar2 >> 4 < 0x271) {
      uVar9 = uVar9 + 3;
    }
    else {
      uVar9 = uVar9 + 4;
    }
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = param_2;
  if ((int)param_2 <= (int)uVar9) {
    uVar3 = uVar9;
  }
  if ((int)param_4 < (int)uVar3) {
    *param_5 = 0;
  }
  else {
    *param_5 = uVar3;
    lVar5 = FUN_04c072b8(param_3,param_4,DAT_091d3038);
    if ((int)param_2 < 2) {
      psVar6 = (short *)(lVar5 + (ulong)uVar3 * 2);
      uVar10 = (ulong)param_1;
      do {
        psVar6 = psVar6 + -1;
        uVar9 = (uint)uVar10;
        *psVar6 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        uVar10 = uVar10 / 10;
      } while (9 < uVar9);
    }
    else {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      psVar6 = (short *)(lVar5 + (ulong)uVar3 * 2 + -2);
      uVar10 = (ulong)param_1;
      iVar8 = param_2 - 2;
      do {
        do {
          uVar11 = uVar10 / 10;
          uVar9 = (uint)uVar10;
          psVar7 = psVar6 + -1;
          *psVar6 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
          iVar4 = iVar8 + -1;
          bVar1 = -1 < iVar8;
          psVar6 = psVar7;
          uVar10 = uVar11;
          iVar8 = iVar4;
        } while (bVar1);
      } while (9 < uVar9);
    }
  }
  return (int)uVar3 <= (int)param_4;
}

