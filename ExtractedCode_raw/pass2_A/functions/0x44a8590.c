// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PresentLevelEffect
// address: 0x44a8590
// body: available
// range: 0x44a8590-0x44a90b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a8900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a9084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a9088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a908c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a9090 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a9094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a909c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a90a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a90a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a90ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a90b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a90b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044a8f8c) */
/* WARNING: Removing unreachable block (ram,0x044a8984) */
/* WARNING: Removing unreachable block (ram,0x044a90a0) */
/* WARNING: Removing unreachable block (ram,0x044a9098) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentLevelEffect
               (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  undefined8 local_a8;
  long **pplStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long *local_78;
  
  if ((DAT_09518211 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c65a8);
    FUN_03f5c2a4(&DAT_09182e08);
    FUN_03f5c2a4(&DAT_0919de20);
    FUN_03f5c2a4(&DAT_0919de38);
    FUN_03f5c2a4(&DAT_091c9c88);
    FUN_03f5c2a4(&DAT_091786a0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5c8);
    FUN_03f5c2a4(&DAT_0917ac90);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb8);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091e6f28);
    FUN_03f5c2a4(&DAT_091e70a0);
    FUN_03f5c2a4(&DAT_0918f0f0);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_0920c728);
    FUN_03f5c2a4(&DAT_0920cfc0);
    FUN_03f5c2a4(&DAT_091fc4b0);
    DAT_09518211 = 1;
  }
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  local_88 = 0;
  if (param_2 == 0) goto LAB_044a9094;
  iVar7 = *(int *)(param_2 + 0x10);
  if (iVar7 == 1) {
    uVar2 = System_String__op_Equality(*(undefined8 *)(param_2 + 0x38),DAT_0920cfc0,0);
    if ((uVar2 & 1) != 0) {
      CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimateShift(param_1);
    }
    iVar7 = *(int *)(param_2 + 0x10);
  }
  if (iVar7 == 8) {
    plVar12 = *(long **)(param_2 + 0x40);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a5c8) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_044a8790;
          }
          uVar2 = uVar2 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a5c8,0);
LAB_044a8790:
      plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
      pplStack_a0 = &local_78;
      local_a8 = 0;
joined_r0x044a87a8:
      do {
        local_78 = plVar12;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar12;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_044a8814;
            }
            uVar2 = uVar2 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_044a8814:
        uVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        plVar12 = local_78;
        if ((uVar2 & 1) == 0) {
          if (local_78 == (long *)0x0) goto LAB_044a8978;
          lVar8 = *local_78;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 == 0) goto LAB_044a8950;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_044a8938;
        }
        if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *local_78;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917ac90) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_044a8878;
            }
            uVar2 = uVar2 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ac90,0);
LAB_044a8878:
        uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TakeEffectUnit
                          (param_1,uVar4,&local_80);
        lVar8 = DAT_091b1080;
        plVar12 = local_78;
      } while ((uVar2 & 1) == 0);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar3 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar3 = local_80;
            thunk_FUN_03f5d7b8(puVar3);
            plVar12 = local_78;
          }
          else {
            FUN_057e0c68(lVar5,local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            plVar12 = local_78;
          }
          goto joined_r0x044a87a8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_044a9094;
  }
  goto LAB_044a89f4;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar11 = piVar11 + 4;
    if (uVar2 == 0) break;
LAB_044a8f40:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_044a8f74;
    }
  }
LAB_044a8f58:
  puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_044a8f74:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
LAB_044a8f80:
  lVar8 = local_88;
  if (0 < iVar7) {
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    uVar13 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
    fVar14 = (float)((ulong)uVar13 >> 0x20) * 0.12;
    uVar13 = DG_Tweening_ShortcutExtensions__DOPunchScale
                       (CONCAT44(fVar14,(float)uVar13 * 0.12),fVar14,
                        *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.12,0x3e4ccccd,
                        0x3f000000,lVar8,6,0);
    DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar13,0);
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__HoldEffect(param_1,uVar4);
  goto LAB_044a902c;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar11 = piVar11 + 4;
    if (uVar2 == 0) break;
LAB_044a8938:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_044a896c;
    }
  }
LAB_044a8950:
  puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_044a896c:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
LAB_044a8978:
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_044a9094;
  if (0 < *(int *)(*(long *)(param_1 + 0x28) + 0x18)) {
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,param_1,DAT_091c65a8,0);
    uVar4 = DG_Tweening_DOVirtual__DelayedCall(0x3c23d70a,uVar4,1,0);
    FUN_04d9642c(uVar4,param_1,DAT_091dbfe0);
  }
LAB_044a89f4:
  iVar7 = *(int *)(param_2 + 0x10);
  if (iVar7 == 9) {
    if (*(int *)(param_2 + 0x30) != 0) goto LAB_044a902c;
    CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimateClean(param_1,1);
    iVar7 = *(int *)(param_2 + 0x10);
  }
  if (iVar7 != 10) {
LAB_044a902c:
    if ((*(int *)(param_2 + 0x10) == 1) &&
       (uVar2 = System_String__op_Equality(*(undefined8 *)(param_2 + 0x38),DAT_091fc4b0,0),
       (uVar2 & 1) != 0)) {
      CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginAutoComplete(param_1,param_2);
    }
    return;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  local_a8 = DAT_09182e08;
  pplStack_a0 = (long **)0xffffffffffffffff;
  local_98 = 2;
  uVar4 = System_Enum__ToString(&local_a8,0);
  uVar2 = System_String__op_Equality(uVar13,uVar4,0);
  if ((uVar2 & 1) == 0) {
    local_a8 = DAT_09182e08;
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    pplStack_a0 = (long **)0xffffffffffffffff;
    local_98 = 3;
    uVar4 = System_Enum__ToString(&local_a8,0);
    uVar2 = System_String__op_Equality(uVar13,uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_044a902c;
  }
  if (((*(long *)(param_1 + 0x2d8) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar8 != 0)) &&
     (lVar8 = CookingGraph_CookingLevelSimulation__ReadSnapshot(lVar8,0), lVar8 != 0)) {
    uVar4 = *(undefined8 *)(lVar8 + 0x48);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar8 = puVar3[4];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar13 = *puVar3;
      lVar8 = thunk_FUN_03f9944c(DAT_091786a0);
      FUN_05322d94(lVar8,uVar13,DAT_091e6f28,0);
      plVar12 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x20);
      *plVar12 = lVar8;
      thunk_FUN_03f5d7b8(plVar12,lVar8);
    }
    lVar8 = FUN_04ae5fd0(uVar4,lVar8,DAT_091c9c88);
    if (lVar8 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x348) != 0) {
      uVar2 = FUN_06ef1fe8(*(long *)(param_1 + 0x348),*(undefined4 *)(lVar8 + 0x10),&local_88,
                           DAT_0919de38);
      if ((uVar2 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x1a0);
        if (lVar5 == 0) goto LAB_044a9094;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar8 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_88 = CookOrder_Cooking_Implement_CookingGameplayPresentation__NewAnchor
                             (DAT_0920c728,
                              *(undefined8 *)(lVar5 + (long)(int)*(uint *)(lVar8 + 0x10) * 8 + 0x20)
                             );
        if (*(long *)(param_1 + 0x348) == 0) goto LAB_044a9094;
        FUN_06ef050c(*(long *)(param_1 + 0x348),*(undefined4 *)(lVar8 + 0x10),local_88,DAT_0919de20)
        ;
        CookOrder_Cooking_Implement_CookingGameplayPresentation__AttachBagArt(param_1,local_88);
        lVar8 = local_88;
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar8 == 0) goto LAB_044a9094;
        puVar10 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale(*puVar10,puVar10[1],puVar10[2],lVar8,0);
      }
      uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EffectSequence(param_1);
      if (*(long *)(param_1 + 0x2e8) != 0) {
        fVar14 = 0.0;
        lVar8 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x30);
        if ((uVar2 & 1) == 0) {
          if (lVar8 == 0) goto LAB_044a9094;
          fVar14 = *(float *)(lVar8 + 0x20);
        }
        if (((*(long *)(param_1 + 0x2d8) != 0) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar5 != 0)) &&
           ((lVar5 = *(long *)(lVar5 + 0x180), lVar5 != 0 &&
            (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)))) {
          dVar15 = *(double *)(lVar5 + 0x20);
          if ((uVar2 & 1) == 0) {
            if (lVar8 == 0) goto LAB_044a9094;
            uVar13 = DG_Tweening_ShortcutExtensions__DOScale
                               (0x3f800000,*(undefined4 *)(lVar8 + 0x20),local_88,0);
            uVar13 = FUN_04d95dc4(uVar13,*(undefined8 *)(lVar8 + 0x28),DAT_091dbea8);
            DG_Tweening_TweenSettingsExtensions__Insert(0,uVar4,uVar13,0);
          }
          plVar12 = *(long **)(param_2 + 0x40);
          if (plVar12 != (long *)0x0) {
            lVar5 = *plVar12;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917a5c8) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_044a8d1c;
                }
                uVar2 = uVar2 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a5c8,0);
LAB_044a8d1c:
            local_78 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
            pplStack_a0 = &local_78;
            local_a8 = 0;
            iVar7 = 0;
            do {
              plVar12 = local_78;
              if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *local_78;
              uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar2 != 0) {
                piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_044a8dac;
                  }
                  uVar2 = uVar2 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_044a8dac:
              uVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
              plVar12 = local_78;
              if ((uVar2 & 1) == 0) {
                if (local_78 == (long *)0x0) goto LAB_044a8f80;
                lVar8 = *local_78;
                uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar2 == 0) goto LAB_044a8f58;
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                goto LAB_044a8f40;
              }
              if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *local_78;
              uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar2 != 0) {
                piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_0917ac90) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_044a8e10;
                  }
                  uVar2 = uVar2 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ac90,0);
LAB_044a8e10:
              uVar13 = (*(code *)*puVar3)(plVar12,puVar3[1]);
              uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TakeEffectUnit
                                (param_1,uVar13,&local_90);
              if ((uVar2 & 1) != 0) {
                lVar5 = thunk_FUN_03f9944c(DAT_0918f0f0);
                CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass25_0___ctor
                          (lVar5,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                puVar3 = (undefined8 *)(lVar5 + 0x10);
                *puVar3 = local_90;
                thunk_FUN_03f5d7b8(puVar3);
                if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar13 = *puVar3;
                UnityEngine_Transform__get_position(local_88,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar13 = DG_Tweening_ShortcutExtensions__DOJump(uVar13,1,0,0);
                uVar13 = FUN_04d95dc4(uVar13,*(undefined8 *)(lVar8 + 0x18),DAT_091dbeb8);
                uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar6,lVar5,DAT_091e70a0,0);
                uVar13 = FUN_04d956bc(uVar13,uVar6,DAT_091dbd18);
                DG_Tweening_TweenSettingsExtensions__Insert
                          (fVar14 + (float)dVar15 * (float)iVar7,uVar4,uVar13,0);
                iVar7 = iVar7 + 1;
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_044a9094:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

