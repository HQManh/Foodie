// rea decompile_all
// name: System.Number$$UInt64ToNumber
// address: 0x75bdc00
// body: available
// range: 0x75bdc00-0x75bddb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__UInt64ToNumber(ulong param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  short *psVar11;
  
  if ((DAT_09521d52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d52 = 1;
  }
  *param_2 = 0x14;
  System_Number_NumberBuffer__set_sign(param_2,0,0);
  lVar3 = System_Number_NumberBuffer__get_digits(param_2,0);
  lVar4 = DAT_09188a70;
  psVar11 = (short *)(lVar3 + 0x28);
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar8 = (int)param_1;
    if (param_1 >> 0x20 == 0) break;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_09188a70;
    param_1 = param_1 / 1000000000;
    psVar6 = psVar11 + -1;
    uVar10 = (ulong)(uint)(iVar8 + (int)param_1 * -1000000000);
    iVar8 = 7;
    do {
      do {
        psVar11 = psVar6;
        uVar7 = uVar10 / 10;
        uVar9 = (uint)uVar10;
        *psVar11 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar11 + -1;
        uVar10 = uVar7;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar8 != 0) {
    psVar6 = psVar11 + -1;
    iVar8 = -2;
    do {
      do {
        psVar11 = psVar6;
        uVar9 = (uint)param_1;
        uVar10 = (param_1 & 0xffffffff) / 10;
        *psVar11 = (short)param_1 + (short)((param_1 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        psVar6 = psVar11 + -1;
        param_1 = uVar10;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar9);
  }
  uVar10 = (lVar3 + 0x28) - (long)psVar11;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 1;
  }
  uVar10 = uVar10 >> 1;
  param_2[1] = (int)uVar10;
  psVar5 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
  psVar6 = psVar5;
  if (-1 < (int)uVar10 + -1) {
    do {
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar9;
      psVar5 = psVar6 + 1;
      *psVar6 = *psVar11;
      psVar6 = psVar5;
      psVar11 = psVar11 + 1;
    } while (uVar9 != 0);
  }
  *psVar5 = 0;
  return;
}

