// rea decompile_all
// name: FUN_03facf4c
// address: 0x3facf4c
// body: available
// range: 0x3facf4c-0x3fad0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fad0c0 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fad0cc to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03facf4c(undefined4 param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_48 [8];
  
  FUN_03f5d894(auStack_48,&DAT_09535278);
  lVar9 = (long)DAT_095352d0 - (long)DAT_095352c8;
  uVar8 = lVar9 >> 2;
  if (0xfffff < (int)uVar8) {
    uVar4 = FUN_03fa70f0("Out of thread static storage slots");
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar4,0);
  }
  if (DAT_095352d0 < DAT_095352d8) {
    puVar10 = DAT_095352d0 + 1;
    *DAT_095352d0 = param_1;
    puVar6 = DAT_095352c8;
  }
  else {
    uVar1 = uVar8 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(&DAT_095352c8);
    }
    uVar7 = (long)DAT_095352d8 - (long)DAT_095352c8 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)DAT_095352d8 - (long)DAT_095352c8)) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      auVar12 = FUN_03fb3f8c(&DAT_095352d8);
    }
    puVar6 = (undefined4 *)(auVar12._0_8_ + uVar8 * 4);
    DAT_095352d8 = (undefined4 *)(auVar12._0_8_ + auVar12._8_8_ * 4);
    puVar10 = puVar6 + 1;
    *puVar6 = param_1;
    while (DAT_095352d0 != DAT_095352c8) {
      DAT_095352d0 = DAT_095352d0 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *DAT_095352d0;
    }
    if (DAT_095352c8 != (undefined4 *)0x0) {
      puVar2 = DAT_095352c8;
      DAT_095352c8 = puVar6;
      DAT_095352d0 = puVar10;
      operator_delete(puVar2);
      puVar6 = DAT_095352c8;
    }
  }
  DAT_095352c8 = puVar6;
  plVar11 = (long *)*DAT_095352f8;
  DAT_095352d0 = puVar10;
  if (plVar11 != (long *)DAT_095352f8[1]) {
    plVar5 = DAT_095352f8;
    do {
      lVar3 = *(long *)(*(long *)(*plVar11 + 0x10) + 0x60);
      if (lVar3 != 0) {
        FUN_03faf62c(lVar3,lVar9 * 0x40000000 & 0xffff00000000U | uVar8 >> 0x10 & 0xffff,param_1);
        plVar5 = DAT_095352f8;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)plVar5[1]);
  }
  FUN_03f5d920(auStack_48);
  return uVar8 & 0xffffffff;
}

