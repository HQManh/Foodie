// rea decompile_all
// name: System.Decimal.DecCalc$$SearchScale
// address: 0x7618ea0
// body: available
// range: 0x7618ea0-0x761908f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7619040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7619088 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761908c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Decimal_DecCalc__SearchScale(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  if ((DAT_095220bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220bb = 1;
  }
  uVar1 = (uint)param_1[1];
  if (0x19999999 < uVar1) {
    uVar5 = 0;
    goto LAB_07618f48;
  }
  uVar10 = *param_1;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x18);
  if (param_2 < 0x14) {
    if (uVar1 < 4) {
      return 9;
    }
    if (uVar1 != 4) goto LAB_07618f94;
    if (uVar10 < 0x4b82fa09b5a52cba) {
      return 9;
    }
    uVar9 = 8;
  }
  else {
    if (lVar8 == 0) goto LAB_07619040;
    if (*(uint *)(lVar8 + 0x18) <= 0x1bU - param_2) goto LAB_0761908c;
    if (uVar1 < *(uint *)(lVar8 + (long)(int)(0x1bU - param_2) * 0x10 + 0x20)) {
      uVar5 = 0x1c - param_2;
      goto LAB_07618f48;
    }
LAB_07618f94:
    if (uVar1 < 0xa7c6) {
      if (uVar1 < 0x1ae) {
        bVar3 = 0x29 < uVar1;
        bVar4 = uVar1 == 0x2a;
        uVar9 = 7;
      }
      else {
        bVar3 = 0x10c5 < uVar1;
        bVar4 = uVar1 == 0x10c6;
        uVar9 = 5;
      }
    }
    else if (uVar1 < 0x418938) {
      bVar3 = 0x68db7 < uVar1;
      bVar4 = uVar1 == 0x68db8;
      uVar9 = 3;
    }
    else {
      bVar3 = 0x28f5c27 < uVar1;
      bVar4 = uVar1 == 0x28f5c28;
      uVar9 = 1;
    }
    if (!bVar3 || bVar4) {
      uVar9 = uVar9 + 1;
    }
  }
  if (lVar8 == 0) {
LAB_07619040:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = uVar9 - 1;
  if (*(uint *)(lVar8 + 0x18) <= uVar2) {
LAB_0761908c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar5 = uVar9;
  if ((uVar1 == *(uint *)(lVar8 + 0x20 + (ulong)uVar2 * 0x10)) &&
     (uVar5 = uVar2, uVar10 <= *(ulong *)(lVar8 + 0x20 + (ulong)uVar2 * 0x10 + 8))) {
    uVar5 = uVar9;
  }
LAB_07618f48:
  if ((int)(uVar5 + param_2) < 0) {
    thunk_FUN_03fc39d4(&DAT_09188d78);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09212d08);
    System_OverflowException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091e8c78);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  return uVar5;
}

