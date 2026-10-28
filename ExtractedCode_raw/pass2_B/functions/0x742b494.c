// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$DwordDivMod
// address: 0x742b494
// body: available
// range: 0x742b494-0x742b633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742b620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742b624 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742b630 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Mono_Math_BigInteger_Kernel__DwordDivMod(long param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  param_2 = param_2 & 0xffffffff;
  if ((DAT_09520fda & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc18);
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fda = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    auVar11 = thunk_FUN_03f9944c(DAT_09181b70);
    lVar5 = auVar11._0_8_;
    Mono_Math_BigInteger___ctor(lVar5,auVar11._8_8_,uVar1);
    if (*(uint *)(param_1 + 0x10) == 0) {
      if (lVar5 == 0) goto LAB_0742b620;
      uVar10 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) goto LAB_0742b620;
      uVar2 = *(uint *)(lVar7 + 0x18);
      uVar10 = 0;
      lVar8 = (ulong)*(uint *)(param_1 + 0x10) + 7;
      do {
        if ((ulong)uVar2 <= lVar8 - 8U) goto LAB_0742b624;
        if ((lVar5 == 0) || (lVar9 = *(long *)(lVar5 + 0x18), lVar9 == 0)) goto LAB_0742b620;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar8 - 8U) goto LAB_0742b624;
        uVar10 = (ulong)*(uint *)(lVar7 + lVar8 * 4) | uVar10 << 0x20;
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = uVar10 / param_2;
        }
        *(int *)(lVar9 + lVar8 * 4) = (int)uVar3;
        lVar8 = lVar8 + -1;
        uVar10 = uVar10 - uVar3 * param_2;
      } while (lVar8 != 7);
    }
    Mono_Math_BigInteger__Normalize(lVar5);
    if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = Mono_Math_BigInteger__op_Implicit(uVar10 & 0xffffffff);
    plVar4 = (long *)FUN_03f5c394(DAT_0917fc18,2);
    if (plVar4 != (long *)0x0) {
      lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar8 == 0) {
LAB_0742b628:
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0742b628;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = lVar7;
          thunk_FUN_03f5d7b8(plVar4 + 5,lVar7);
          return plVar4;
        }
      }
LAB_0742b624:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0742b620:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

