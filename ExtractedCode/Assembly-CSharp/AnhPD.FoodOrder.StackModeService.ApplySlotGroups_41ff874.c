// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$ApplySlotGroups
// address: 0x41ff874
// body: available
// range: 0x41ff874-0x41ffacf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ffabc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ffac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ffacc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StackModeService__ApplySlotGroups(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  if ((DAT_09516be3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917faf8);
    FUN_03f5c2a4(&DAT_0917fd60);
    DAT_09516be3 = 1;
  }
  if (param_1 == 0) {
LAB_041ffac0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)FUN_03f5c394(DAT_0917faf8,*(undefined4 *)(param_1 + 0x18));
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar10 = 0;
    do {
      if (uVar5 <= uVar10) goto LAB_041ffabc;
      plVar11 = (long *)(param_1 + uVar10 * 8 + 0x20);
      lVar6 = *plVar11;
      if ((lVar6 == 0) ||
         (lVar6 = FUN_03f5c394(DAT_0917fd60,*(undefined4 *)(lVar6 + 0x18)), plVar1 == (long *)0x0))
      goto LAB_041ffac0;
      if ((lVar6 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_041ffac4:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if (*(uint *)(plVar1 + 3) <= uVar10) goto LAB_041ffabc;
      plVar1[uVar10 + 4] = lVar6;
      thunk_FUN_03f5d7b8(plVar1 + uVar10 + 4,lVar6);
      uVar7 = *(ulong *)(param_1 + 0x18);
      if ((uVar7 & 0xffffffff) <= uVar10) goto LAB_041ffabc;
      lVar2 = 0x20;
      lVar6 = 4;
      while( true ) {
        lVar8 = *plVar11;
        if (lVar8 == 0) goto LAB_041ffac0;
        uVar5 = lVar6 - 4;
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar5) break;
        if ((*(uint *)(plVar1 + 3) <= uVar10) || (*(uint *)(lVar8 + 0x18) <= uVar5))
        goto LAB_041ffabc;
        plVar9 = (long *)plVar1[uVar10 + 4];
        if (plVar9 == (long *)0x0) goto LAB_041ffac0;
        lVar8 = *(long *)(lVar8 + lVar6 * 8);
        if ((lVar8 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0))
        goto LAB_041ffac4;
        if (*(uint *)(plVar9 + 3) <= uVar5) goto LAB_041ffabc;
        plVar9[lVar6] = lVar8;
        thunk_FUN_03f5d7b8((long)plVar9 + lVar2,lVar8);
        uVar7 = *(ulong *)(param_1 + 0x18);
        lVar6 = lVar6 + 1;
        lVar2 = lVar2 + 8;
        if ((uVar7 & 0xffffffff) <= uVar10) goto LAB_041ffabc;
      }
      uVar10 = uVar10 + 1;
      uVar5 = uVar7 & 0xffffffff;
    } while ((int)uVar10 < (int)uVar7);
  }
  if ((param_2 != 0) && (0 < (int)*(ulong *)(param_2 + 0x18))) {
    uVar5 = 0;
    uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar5) goto LAB_041ffabc;
      AnhPD_FoodOrder_StackModeService__MergeBlock
                (param_1,plVar1,*(undefined8 *)(param_2 + 0x20 + uVar5 * 8));
      uVar10 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if ((param_3 != 0) && (0 < (int)*(ulong *)(param_3 + 0x18))) {
    uVar5 = 0;
    uVar10 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar5) {
LAB_041ffabc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      AnhPD_FoodOrder_StackModeService__LinkChain
                (plVar1,*(undefined8 *)(param_3 + 0x20 + lVar6),uVar5 & 0xffffffff);
      uVar10 = (ulong)*(uint *)(param_3 + 0x18);
    } while ((long)uVar5 < (long)(int)*(uint *)(param_3 + 0x18));
  }
  return;
}

