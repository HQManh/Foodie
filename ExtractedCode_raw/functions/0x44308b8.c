// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$BuildWeights
// address: 0x44308b8
// body: available
// range: 0x44308b8-0x4430f43 inclusive
// range: 0x4430f48-0x4430f4b inclusive
// range: 0x4430f50-0x4430f53 inclusive
// range: 0x4430fac-0x4431033 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4430d24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4430f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4430f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4430f50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431010 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443101c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4431020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04430da8) */
/* WARNING: Removing unreachable block (ram,0x04431024) */
/* WARNING: Removing unreachable block (ram,0x0443102c) */
/* WARNING: Removing unreachable block (ram,0x04430f38) */
/* WARNING: Removing unreachable block (ram,0x04430f3c) */
/* WARNING: Removing unreachable block (ram,0x0443100c) */
/* WARNING: Removing unreachable block (ram,0x04430fd4) */

long CookingGraph_CustomerOrderGenerator__BuildWeights(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long *local_c8;
  long **pplStack_c0;
  long local_b8;
  long *local_b0;
  long **pplStack_a8;
  long local_a0;
  long *local_90;
  long **pplStack_88;
  long local_80;
  long *local_68;
  
  if ((DAT_09517f9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d088);
    FUN_03f5c2a4(&DAT_0919d078);
    FUN_03f5c2a4(&DAT_0919d0b0);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091c98d8);
    FUN_03f5c2a4(&DAT_091c99b0);
    FUN_03f5c2a4(&DAT_091ca310);
    FUN_03f5c2a4(&DAT_091a2660);
    FUN_03f5c2a4(&DAT_091a2618);
    FUN_03f5c2a4(&DAT_091a2620);
    FUN_03f5c2a4(&DAT_091a2668);
    FUN_03f5c2a4(&DAT_091a2670);
    FUN_03f5c2a4(&DAT_091a2628);
    FUN_03f5c2a4(&DAT_091785a8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a590);
    FUN_03f5c2a4(&DAT_0917ac40);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abc58);
    FUN_03f5c2a4(&DAT_091abc20);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e83a0);
    FUN_03f5c2a4(&DAT_0918f950);
    DAT_09517f9e = 1;
  }
  local_68 = (long *)0x0;
  local_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f950);
  System_Object___ctor(lVar2,0);
  lVar3 = thunk_FUN_03f9944c(DAT_091762d0);
  FUN_06fe1d68(lVar3,DAT_0919d078);
  if (lVar2 != 0) {
    plVar10 = (long *)(lVar2 + 0x10);
    *plVar10 = lVar3;
    thunk_FUN_03f5d7b8(plVar10,lVar3);
    lVar3 = DAT_091c99b0;
    if (param_2 == (long *)0x0) {
      lVar7 = *(long *)(DAT_091c99b0 + 0x38);
      if (lVar7 == 0) {
        FUN_03f95ac8(DAT_091c99b0);
        lVar7 = *(long *)(lVar3 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      param_2 = (long *)**(undefined8 **)(lVar3 + 0xb8);
      if (param_2 == (long *)0x0) goto LAB_04431020;
    }
    lVar3 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a590) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04430b54;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a590,0);
LAB_04430b54:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    pplStack_c0 = &local_68;
    local_c8 = (long *)0x0;
    do {
      local_68 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04430be8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_04430be8:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar5 = local_68;
      if ((uVar8 & 1) == 0) {
        if (local_68 == (long *)0x0) goto LAB_04430d9c;
        lVar3 = *local_68;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 == 0) goto LAB_04430d74;
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04430d5c;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *local_68;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917ac40) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04430c4c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ac40,0);
LAB_04430c4c:
      lVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar5 = local_68;
      if (lVar3 != 0) {
        uVar11 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar11,0,0);
        if (((uVar8 & 1) != 0) && (iVar1 = *(int *)(lVar3 + 0x18), -1 < iVar1)) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *(long *)(param_1 + 0x38);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (iVar1 < *(int *)(lVar7 + 0x18)) {
            uVar11 = FUN_057e0998(lVar7,iVar1,DAT_091ada40);
          }
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        plVar5 = local_68;
        if ((uVar8 & 1) != 0) {
          lVar7 = *plVar10;
          uVar12 = *(undefined4 *)(lVar3 + 0x1c);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Math__Max(0,uVar12,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fe2ae8(lVar7,uVar11,DAT_0919d0b0);
          plVar5 = local_68;
        }
      }
    } while( true );
  }
  goto LAB_04431020;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04430d5c:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04430d90;
    }
  }
LAB_04430d74:
  puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_04430d90:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_04430d9c:
  if ((param_1 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_057e185c(&local_c8,*(long *)(param_1 + 0x88),DAT_091abc20);
    local_80 = local_b8;
    pplStack_88 = pplStack_c0;
    local_90 = local_c8;
    do {
      uVar8 = FUN_071bd28c(&local_90,DAT_091a2620);
      if ((uVar8 & 1) == 0) {
        FUN_071bd288(&local_90,DAT_091a2618);
        return *plVar10;
      }
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_80 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_c8,*(long *)(local_80 + 0x50),DAT_091abc58);
      local_a0 = local_b8;
      pplStack_a8 = pplStack_c0;
      local_b0 = local_c8;
      local_c8 = (long *)0x0;
      pplStack_c0 = &local_b0;
      while (uVar8 = FUN_071bd28c(&local_b0,DAT_091a2668), lVar3 = local_a0, (uVar8 & 1) != 0) {
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = FUN_06fe2cf4(*plVar10,*(undefined8 *)(local_a0 + 0x10),DAT_0919d088);
        if ((uVar8 & 1) == 0) {
          uVar11 = *(undefined8 *)(lVar3 + 0x10);
          uVar6 = *(undefined8 *)(lVar3 + 0x18);
          lVar3 = *(long *)(lVar2 + 0x18);
          lVar7 = *plVar10;
          if (lVar3 == 0) {
            lVar3 = thunk_FUN_03f9944c(DAT_091785a8);
            FUN_05324834(lVar3,lVar2,DAT_091e83a0,0);
            *(long *)(lVar2 + 0x18) = lVar3;
            thunk_FUN_03f5d7b8(lVar2 + 0x18,lVar3);
          }
          uVar6 = FUN_04af86fc(uVar6,lVar3,DAT_091ca310);
          uVar6 = FUN_04adcda4(0,uVar6,DAT_091c98d8);
          System_Linq_Enumerable__Min(uVar6,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fe2ae8(lVar7,uVar11,DAT_0919d0b0);
        }
      }
      FUN_071bd288(&local_b0,DAT_091a2660);
    } while( true );
  }
LAB_04431020:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

