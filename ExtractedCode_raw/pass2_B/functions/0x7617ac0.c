// rea decompile_all
// name: System.Decimal.DecCalc$$Unscale
// address: 0x7617ac0
// body: available
// range: 0x7617ac0-0x7617d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__Unscale(uint *param_1,ulong *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  if ((DAT_095220b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220b4 = 1;
  }
  uVar1 = (ulong)*param_1;
  if ((*param_1 & 0xff) == 0) {
    iVar4 = *param_3;
    do {
      if (iVar4 < 8) break;
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar1 = (ulong)*param_1;
      }
      uVar2 = *param_2 / 100000000;
      uVar3 = (uint)((uVar1 | (ulong)(uint)((int)*param_2 + (int)uVar2 * -100000000) << 0x20) /
                    100000000);
      if ((int)uVar1 != uVar3 * 100000000) break;
      *param_1 = uVar3;
      iVar4 = *param_3;
      *param_2 = uVar2;
      iVar4 = iVar4 + -8;
      *param_3 = iVar4;
      uVar1 = (ulong)*param_1;
    } while ((*param_1 & 0xff) == 0);
  }
  if (((uVar1 & 0xf) == 0) && (3 < *param_3)) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar1 = (ulong)*param_1;
    }
    uVar2 = *param_2 / 10000;
    uVar3 = (uint)((uVar1 | (ulong)(uint)((int)*param_2 + (int)uVar2 * -10000) << 0x20) / 10000);
    if ((int)uVar1 == uVar3 * 10000) {
      *param_1 = uVar3;
      iVar4 = *param_3;
      *param_2 = uVar2;
      *param_3 = iVar4 + -4;
      uVar1 = (ulong)*param_1;
    }
  }
  if (((uVar1 & 3) == 0) && (1 < *param_3)) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar1 = (ulong)*param_1;
    }
    uVar2 = *param_2 / 100;
    uVar3 = (uint)((uVar1 | (ulong)(uint)((int)*param_2 + (int)uVar2 * -100) << 0x20) / 100);
    if ((int)uVar1 == uVar3 * 100) {
      *param_1 = uVar3;
      iVar4 = *param_3;
      *param_2 = uVar2;
      *param_3 = iVar4 + -2;
      uVar1 = (ulong)*param_1;
    }
  }
  if (((uVar1 & 1) == 0) && (0 < *param_3)) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar1 = (ulong)*param_1;
    }
    uVar2 = *param_2 / 10;
    uVar3 = (uint)((uVar1 | (ulong)(uint)((int)*param_2 + (int)uVar2 * -10) << 0x20) / 10);
    if ((int)uVar1 == uVar3 * 10) {
      *param_1 = uVar3;
      iVar4 = *param_3;
      *param_2 = uVar2;
      *param_3 = iVar4 + -1;
    }
  }
  return;
}

