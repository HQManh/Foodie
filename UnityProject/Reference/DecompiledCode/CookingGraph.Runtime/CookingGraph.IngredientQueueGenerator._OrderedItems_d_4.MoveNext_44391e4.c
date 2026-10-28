// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator.<OrderedItems>d__4$$MoveNext
// address: 0x44391e4
// body: available
// range: 0x44391e4-0x4439513 inclusive
// range: 0x4439550-0x44395cb inclusive
// range: 0x44395e0-0x4439713 inclusive
// range: 0x4439740-0x44397cb inclusive
// range: 0x44397dc-0x44399cb inclusive
// range: 0x4439a08-0x4439a1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44394f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44394fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4439500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4439504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4439508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443950c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4439510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44395c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44395c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44396f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44396f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44396fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long *plStack_60;
  long local_58;
  
  local_58 = param_1;
  if ((DAT_09517fd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182da0);
    FUN_03f5c2a4(&DAT_091a2a40);
    FUN_03f5c2a4(&DAT_091a2860);
    FUN_03f5c2a4(&DAT_091a2868);
    FUN_03f5c2a4(&DAT_091a2a48);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac1f8);
    FUN_03f5c2a4(&DAT_091ac608);
    FUN_03f5c2a4(&DAT_091ac1e8);
    FUN_03f5c2a4(&DAT_091ac5f0);
    FUN_03f5c2a4(&DAT_091abc28);
    FUN_03f5c2a4(&DAT_0917bfc0);
    FUN_03f5c2a4(&DAT_0917c090);
    FUN_03f5c2a4(&DAT_091917b0);
    DAT_09517fd9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_60 = &local_58;
  local_68 = 0;
  if (iVar1 == 2) goto LAB_0443989c;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    uVar8 = *(int *)(param_1 + 0x90) + 1;
    *(uint *)(param_1 + 0x90) = uVar8;
    goto LAB_0443964c;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_03f9944c(DAT_091917b0);
    System_Object___ctor(uVar2,0);
    *(undefined8 *)(local_58 + 0x48) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x48),uVar2);
    if (*(long *)(local_58 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_58 + 0x48) + 0x10) = *(undefined8 *)(local_58 + 0x28);
    thunk_FUN_03f5d7b8();
    lVar4 = local_58;
    if (*(long *)(local_58 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(*(long *)(local_58 + 0x48) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(lVar10 + 0x88) + 0x18) < 1) {
      if (*(long *)(local_58 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(*(long *)(local_58 + 0x38) + 0x10);
      if (lVar10 == 0) {
        lVar10 = thunk_FUN_03f9944c(DAT_0917bfc0);
        auVar11 = FUN_057e0400(lVar10,DAT_091ac1e8);
        if (lVar10 == 0) {
LAB_044399b8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(auVar11._0_8_,auVar11._8_8_);
        }
      }
      FUN_057e185c(&local_98,lVar10,DAT_091ac1f8);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      *(undefined8 *)(lVar4 + 0x60) = uStack_90;
      *(undefined8 *)(lVar4 + 0x58) = local_98;
      *(undefined8 *)(lVar4 + 0x68) = local_88;
      thunk_FUN_03f5d7b8(lVar4 + 0x58,0);
      *(undefined4 *)(local_58 + 0x10) = 0xfffffffb;
      while( true ) {
        uVar5 = FUN_071bd28c(local_58 + 0x58,DAT_091a2860);
        lVar4 = local_58;
        if ((uVar5 & 1) == 0) break;
        if ((*(long *)(local_58 + 0x68) == 0) ||
           (lVar10 = *(long *)(*(long *)(local_58 + 0x68) + 0x20), lVar10 == 0)) {
          lVar10 = thunk_FUN_03f9944c(DAT_0917c090);
          auVar11 = FUN_057e0400(lVar10,DAT_091ac5f0);
          if (lVar10 == 0) goto LAB_044399b8;
        }
        FUN_057e185c(&local_98,lVar10,DAT_091ac608);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        *(undefined8 *)(lVar4 + 0x78) = uStack_90;
        *(undefined8 *)(lVar4 + 0x70) = local_98;
        *(undefined8 *)(lVar4 + 0x80) = local_88;
        thunk_FUN_03f5d7b8(lVar4 + 0x70,0);
        *(undefined4 *)(local_58 + 0x10) = 0xfffffffa;
        while( true ) {
          uVar5 = FUN_071bd28c(local_58 + 0x70,DAT_091a2a40);
          lVar4 = local_58;
          if ((uVar5 & 1) == 0) break;
          uVar5 = 0;
          if (*(long *)(local_58 + 0x80) != 0) {
            uVar5 = *(ulong *)(*(long *)(local_58 + 0x80) + 0x10);
          }
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar5;
          auVar11 = auVar11 << 0x40;
          if (*(long *)(local_58 + 0x48) == 0) goto LAB_044399b8;
          plVar6 = (long *)CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0__<OrderedItems>g__Walk_0
                                     ();
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917a598) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04439878;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a598,0);
LAB_04439878:
          uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar7 = (undefined8 *)(lVar4 + 0x98);
          *puVar7 = uVar2;
          thunk_FUN_03f5d7b8(puVar7);
          param_1 = local_58;
LAB_0443989c:
          plVar6 = *(long **)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0x10) = 0xfffffff9;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_044398f8;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_044398f8:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) != 0) {
            plVar6 = *(long **)(local_58 + 0x98);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_0443996c;
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_04439954;
          }
          CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally5();
          *(undefined8 *)(local_58 + 0x98) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x98),0);
        }
        CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally4(local_58);
        *(undefined8 *)(local_58 + 0x78) = 0;
        *(undefined8 *)(local_58 + 0x80) = 0;
        *(undefined8 *)(local_58 + 0x70) = 0;
      }
      CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally3(local_58);
    }
    else {
      uVar2 = CookingGraph_CookingRuntimeSettings__Resolve(lVar10,0,0,0,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09182da0);
      CookingGraph_CookingGraphIndex___ctor(uVar3,lVar10,uVar2,0);
      *(undefined8 *)(local_58 + 0x50) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x50),uVar3);
      if (*(long *)(local_58 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(local_58 + 0x38) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_98,lVar4,DAT_091ac1f8);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      *(undefined8 *)(local_58 + 0x60) = uStack_90;
      *(undefined8 *)(local_58 + 0x58) = local_98;
      *(undefined8 *)(local_58 + 0x68) = local_88;
      thunk_FUN_03f5d7b8(local_58 + 0x58,0);
      *(undefined4 *)(local_58 + 0x10) = 0xfffffffd;
      while( true ) {
        uVar5 = FUN_071bd28c(local_58 + 0x58,DAT_091a2860);
        if ((uVar5 & 1) == 0) break;
        if (*(long *)(local_58 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *(long *)(*(long *)(local_58 + 0x68) + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_98,lVar4,DAT_091ac608);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        *(undefined8 *)(local_58 + 0x78) = uStack_90;
        *(undefined8 *)(local_58 + 0x70) = local_98;
        *(undefined8 *)(local_58 + 0x80) = local_88;
        thunk_FUN_03f5d7b8(local_58 + 0x70,0);
        *(undefined4 *)(local_58 + 0x10) = 0xfffffffc;
        while( true ) {
          uVar5 = FUN_071bd28c(local_58 + 0x70,DAT_091a2a40);
          if ((uVar5 & 1) == 0) break;
          if (*(long *)(local_58 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = CookingGraph_CookingGraphIndex__Resolve
                            (*(long *)(local_58 + 0x50),*(undefined8 *)(local_58 + 0x80),0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(local_58 + 0x88) = *(undefined8 *)(lVar4 + 0x20);
          thunk_FUN_03f5d7b8();
          uVar8 = 0;
          *(undefined4 *)(local_58 + 0x90) = 0;
          param_1 = local_58;
LAB_0443964c:
          plVar6 = (long *)(param_1 + 0x88);
          lVar4 = *plVar6;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((int)uVar8 < (int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *(long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = *(uint *)(lVar4 + 0x10);
            if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
            uVar2 = 1;
            *(undefined4 *)(local_58 + 0x10) = 1;
            goto LAB_044395f0;
          }
          *plVar6 = 0;
          thunk_FUN_03f5d7b8(plVar6,0);
        }
        CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally2();
        *(undefined8 *)(local_58 + 0x78) = 0;
        *(undefined8 *)(local_58 + 0x80) = 0;
        *(undefined8 *)(local_58 + 0x70) = 0;
      }
      CookingGraph_IngredientQueueGenerator_<OrderedItems>d__4__<>m__Finally1();
    }
    uVar2 = 0;
    *(undefined8 *)(local_58 + 0x60) = 0;
    *(undefined8 *)(local_58 + 0x68) = 0;
    *(undefined8 *)(local_58 + 0x58) = 0;
  }
  else {
    uVar2 = 0;
  }
  goto LAB_044395f0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_04439954:
    if (*(long *)(piVar9 + -2) == DAT_0917ac48) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04439988;
    }
  }
LAB_0443996c:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac48,0);
LAB_04439988:
  uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  *(undefined8 *)(local_58 + 0x18) = uVar2;
  thunk_FUN_03f5d7b8();
  uVar2 = 1;
  *(undefined4 *)(local_58 + 0x10) = 2;
LAB_044395f0:
  lVar4 = local_68;
  if (local_68 == 0) {
    return uVar2;
  }
  FUN_039b8654(&plStack_60);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar4);
}

