// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ReleaseQueueKey
// address: 0x44af7bc
// body: available
// range: 0x44af7bc-0x44afc97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44afc58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc74 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44afc84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ReleaseQueueKey
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,long param_6)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  
  if ((DAT_09518222 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919e388);
    FUN_03f5c2a4(&DAT_0919e390);
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_091c9420);
    FUN_03f5c2a4(&DAT_091c9c88);
    FUN_03f5c2a4(&DAT_091a2780);
    FUN_03f5c2a4(&DAT_091a2788);
    FUN_03f5c2a4(&DAT_091a2790);
    FUN_03f5c2a4(&DAT_091786a0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091abf80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e7108);
    FUN_03f5c2a4(&DAT_0918f138);
    FUN_03f5c2a4(&DAT_091e7118);
    FUN_03f5c2a4(&DAT_091e7120);
    FUN_03f5c2a4(&DAT_0918f140);
    DAT_09518222 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a4 = 0;
  if (*(long *)(param_4 + 200) != 0) {
    uVar2 = FUN_06f54e88(*(long *)(param_4 + 200),param_5,&local_88,DAT_0919e390);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_4 + 200) != 0) &&
       (FUN_06f54860(*(long *)(param_4 + 200),param_5,DAT_0919e388), local_88 != 0)) {
      FUN_057e185c(&local_c0,local_88,DAT_091abf80);
      local_90 = local_b0;
      uStack_98 = puStack_b8;
      local_a0 = local_c0;
      local_c0 = 0;
      puStack_b8 = &local_a0;
      do {
        while( true ) {
          do {
            uVar2 = FUN_071bd28c(&local_a0,DAT_091a2788);
            if ((uVar2 & 1) == 0) {
              FUN_071bd288(&local_a0,DAT_091a2780);
              return;
            }
            lVar3 = thunk_FUN_03f9944c(DAT_0918f138);
            CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass53_0___ctor
                      (lVar3,0);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(long *)(lVar3 + 0x18) = param_4;
            thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_4);
            *(undefined8 *)(lVar3 + 0x10) = local_90;
            thunk_FUN_03f5d7b8();
            lVar4 = thunk_FUN_03f9944c(DAT_0918f140);
            CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass53_1___ctor
                      (lVar4,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar6 = (long *)(lVar4 + 0x18);
            *plVar6 = lVar3;
            thunk_FUN_03f5d7b8(plVar6,lVar3);
            if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = *(undefined8 *)(*plVar6 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
          } while ((uVar2 & 1) == 0);
          if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = *(undefined8 *)(param_6 + 0x48);
          lVar3 = *plVar6;
          uVar8 = thunk_FUN_03f9944c(DAT_091786a0);
          FUN_05322d94(uVar8,lVar3,DAT_091e7108,0);
          lVar3 = FUN_04ae5fd0(uVar9,uVar8,DAT_091c9c88);
          if (lVar3 != 0) break;
          *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
LAB_044afc00:
          if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *(long *)(*plVar6 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookOrder_Cooking_Implement_CookingKeyVisual__Despawn(lVar3,0);
        }
        iVar5 = *(int *)(lVar3 + 0x10);
        *(int *)(lVar4 + 0x10) = iVar5;
        if (iVar5 < 0) goto LAB_044afc00;
        uVar9 = *(undefined8 *)(param_6 + 0x48);
        uVar8 = thunk_FUN_03f9944c(DAT_091786a0);
        FUN_05322d94(uVar8,lVar4,DAT_091e7118,0);
        bVar1 = FUN_04ab6f28(uVar9,uVar8,DAT_091c9420);
        *(byte *)(lVar4 + 0x14) = bVar1 & 1;
        if ((bVar1 & 1) != 0) {
          if (*(long *)(param_4 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053d8048(*(long *)(param_4 + 0xd0),*(undefined4 *)(lVar4 + 0x10),DAT_091a82b0);
          lVar3 = *(long *)(param_4 + 0xd8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = *(undefined4 *)(lVar4 + 0x10);
          uVar2 = FUN_06ee7aac(lVar3,uVar10,&local_a4,DAT_0919d990);
          iVar5 = 1;
          if ((uVar2 & 1) != 0) {
            iVar5 = local_a4 + 1;
          }
          FUN_06ee612c(lVar3,uVar10,iVar5,DAT_0919d9a8);
        }
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(param_4 + 0x1a0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar4 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(lVar4 + 0x10) * 8 + 0x20);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(*plVar6 + 0x10);
        uVar10 = UnityEngine_Transform__get_position(lVar3,0);
        if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x20);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = *(undefined4 *)(lVar3 + 0x58);
        uVar9 = *(undefined8 *)(lVar3 + 0x60);
        uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar8,lVar4,DAT_091e7120,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CookOrder_Cooking_Implement_CookingKeyVisual__FlyTo
                  (uVar10,param_2,param_3,uVar11,lVar7,uVar9,uVar8,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

