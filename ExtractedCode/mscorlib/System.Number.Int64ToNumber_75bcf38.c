// rea decompile_all
// name: System.Number$$Int64ToNumber
// address: 0x75bcf38
// body: available
// range: 0x75bcf38-0x75bd103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__Int64ToNumber(ulong param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  ulong uVar12;
  
  if ((DAT_09521d4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d4d = 1;
  }
  System_Number_NumberBuffer__set_sign(param_2,param_1 >> 0x3f,0);
  *param_2 = 0x13;
  uVar3 = System_Number_NumberBuffer__get_sign(param_2,0);
  uVar12 = -param_1;
  if ((uVar3 & 1) == 0) {
    uVar12 = param_1;
  }
  lVar4 = System_Number_NumberBuffer__get_digits(param_2,0);
  lVar5 = DAT_09188a70;
  psVar11 = (short *)(lVar4 + 0x26);
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar9 = (int)uVar12;
    if (uVar12 >> 0x20 == 0) break;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_09188a70;
    uVar12 = uVar12 / 1000000000;
    psVar7 = psVar11 + -1;
    uVar3 = (ulong)(uint)(iVar9 + (int)uVar12 * -1000000000);
    iVar9 = 7;
    do {
      do {
        psVar11 = psVar7;
        uVar8 = uVar3 / 10;
        uVar10 = (uint)uVar3;
        *psVar11 = (short)uVar3 + (short)(uVar3 / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar11 + -1;
        uVar3 = uVar8;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar9 != 0) {
    psVar7 = psVar11 + -1;
    iVar9 = -2;
    do {
      do {
        psVar11 = psVar7;
        uVar10 = (uint)uVar12;
        uVar3 = (uVar12 & 0xffffffff) / 10;
        *psVar11 = (short)uVar12 + (short)((uVar12 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        psVar7 = psVar11 + -1;
        uVar12 = uVar3;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
  }
  uVar12 = (lVar4 + 0x26) - (long)psVar11;
  if ((long)uVar12 < 0) {
    uVar12 = uVar12 + 1;
  }
  uVar12 = uVar12 >> 1;
  param_2[1] = (int)uVar12;
  psVar6 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  psVar7 = psVar6;
  if (-1 < (int)uVar12 + -1) {
    do {
      uVar10 = (int)uVar12 - 1;
      uVar12 = (ulong)uVar10;
      psVar6 = psVar7 + 1;
      *psVar7 = *psVar11;
      psVar7 = psVar6;
      psVar11 = psVar11 + 1;
    } while (uVar10 != 0);
  }
  *psVar6 = 0;
  return;
}

