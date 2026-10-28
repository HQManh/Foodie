// rea decompile_all
// name: System.Number$$DecimalToNumber
// address: 0x75b8c04
// body: available
// range: 0x75b8c04-0x75b8e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b8e38 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__DecimalToNumber(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  short *psVar12;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((DAT_09521d35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d35 = 1;
  }
  local_68 = param_1;
  local_60 = param_2;
  lVar7 = System_Number_NumberBuffer__get_digits(param_3,0);
  lVar4 = DAT_091837d8;
  *param_3 = 0x1d;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Decimal__get_IsNegative(&local_68,0);
  System_Number_NumberBuffer__set_sign(param_3,uVar5 & 1,0);
  psVar12 = (short *)(lVar7 + 0x3a);
  while( true ) {
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (local_68._4_4_ == 0 && local_60._4_4_ == 0) break;
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Decimal__DecDivMod1E9(&local_68,0);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188a70);
    }
    psVar10 = psVar12 + -1;
    uVar8 = uVar8 & 0xffffffff;
    iVar6 = 7;
    do {
      do {
        psVar12 = psVar10;
        uVar11 = uVar8 / 10;
        uVar5 = (uint)uVar8;
        *psVar12 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar10 = psVar12 + -1;
        uVar8 = uVar11;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar5);
  }
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar6 = (int)local_60;
  uVar8 = local_60 & 0xffffffff;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar6 != 0) {
    psVar10 = psVar12 + -1;
    iVar6 = -2;
    do {
      do {
        psVar12 = psVar10;
        uVar11 = uVar8 / 10;
        uVar5 = (uint)uVar8;
        *psVar12 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar10 = psVar12 + -1;
        uVar8 = uVar11;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar5);
  }
  uVar8 = (lVar7 + 0x3a) - (long)psVar12;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  iVar6 = System_Decimal__get_Scale(&local_68,0);
  param_3[1] = (int)uVar8 - iVar6;
  psVar9 = (short *)System_Number_NumberBuffer__get_digits(param_3,0);
  psVar10 = psVar9;
  if (-1 < (int)uVar8 + -1) {
    do {
      uVar5 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar5;
      psVar9 = psVar10 + 1;
      *psVar10 = *psVar12;
      psVar10 = psVar9;
      psVar12 = psVar12 + 1;
    } while (uVar5 != 0);
  }
  *psVar9 = 0;
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

