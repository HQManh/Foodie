// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyMilestoneRemoteConfig$$ImportData
// address: 0x43539a0
// body: available
// range: 0x43539a0-0x4353f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4353ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ed4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ee4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353eec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ef0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_Journey_JourneyMilestoneRemoteConfig__ImportData(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_68;
  
  if ((DAT_095177c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09175be0);
    FUN_03f5c2a4(&DAT_091b3160);
    FUN_03f5c2a4(&DAT_091b3198);
    FUN_03f5c2a4(&DAT_091b3178);
    FUN_03f5c2a4(&DAT_091b31a0);
    FUN_03f5c2a4(&DAT_091b3180);
    FUN_03f5c2a4(&DAT_091b3190);
    FUN_03f5c2a4(&DAT_091b3158);
    FUN_03f5c2a4(&DAT_091b3188);
    FUN_03f5c2a4(&DAT_0917d528);
    FUN_03f5c2a4(&DAT_0917d530);
    FUN_03f5c2a4(&DAT_09191f40);
    FUN_03f5c2a4(&DAT_09191f48);
    FUN_03f5c2a4(&DAT_091ebf28);
    FUN_03f5c2a4(&DAT_09191f38);
    DAT_095177c8 = 1;
  }
  local_68 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0917d528);
  FUN_057e0400(lVar1,DAT_091b3158);
  lVar2 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar2 + 0x20) = 0x7c;
    if (param_2 != 0) {
      lVar2 = System_String__Split(param_2,lVar2,1,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar9) {
        uVar14 = 0;
        do {
          if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar2 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = System_String__Split(lVar3,0x3b,0,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (1 < *(int *)(lVar3 + 0x18)) {
            if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = System_String__Trim(*(long *)(lVar3 + 0x20),0);
            uVar5 = System_Int32__TryParse(uVar4,(long)&local_68 + 4,0);
            if ((uVar5 & 1) != 0) {
              lVar6 = thunk_FUN_03f9944c(DAT_0917d530);
              FUN_057e0400(lVar6,DAT_091b3190);
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar12 = *(long *)(lVar3 + 0x28);
              lVar3 = FUN_03f5c394(DAT_0917fcc8,1);
              if (lVar3 == 0) {
LAB_04353ef8:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(undefined2 *)(lVar3 + 0x20) = 0x2c;
              if (lVar12 == 0) goto LAB_04353ef8;
              lVar3 = System_String__Split(lVar12,lVar3,1,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar9 = *(uint *)(lVar3 + 0x18);
              if (0 < (int)uVar9) {
                uVar13 = 0;
                do {
                  if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar12 = *(long *)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar12 = System_String__Split(lVar12,0x3a,0,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (1 < *(int *)(lVar12 + 0x18)) {
                    if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar4 = System_String__Trim(*(long *)(lVar12 + 0x28),0);
                    uVar5 = System_Int32__TryParse(uVar4,&local_68,0);
                    if ((uVar5 & 1) != 0) {
                      lVar7 = thunk_FUN_03f9944c(DAT_09191f48);
                      *(undefined4 *)(lVar7 + 0x18) = 1;
                      System_Object___ctor(lVar7,0);
                      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar4 = System_String__Trim(*(long *)(lVar12 + 0x20),0);
                      *(undefined8 *)(lVar7 + 0x10) = uVar4;
                      thunk_FUN_03f5d7b8();
                      *(undefined4 *)(lVar7 + 0x18) = (undefined4)local_68;
                      lVar12 = DAT_091b3198;
                      if (lVar6 == 0) {
LAB_04353edc:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar10 = *(long *)(lVar6 + 0x10);
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar10 == 0) goto LAB_04353edc;
                      uVar9 = *(uint *)(lVar6 + 0x18);
                      if (uVar9 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar9 + 1;
                        plVar8 = (long *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
                        *plVar8 = lVar7;
                        thunk_FUN_03f5d7b8(plVar8,lVar7);
                      }
                      else {
                        FUN_057e0c68(lVar6,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  uVar9 = *(uint *)(lVar3 + 0x18);
                  uVar13 = uVar13 + 1;
                } while ((int)uVar13 < (int)uVar9);
              }
              lVar3 = thunk_FUN_03f9944c(DAT_09191f40);
              *(undefined4 *)(lVar3 + 0x10) = 10;
              System_Object___ctor(lVar3,0);
              *(undefined4 *)(lVar3 + 0x10) = local_68._4_4_;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar4 = FUN_057e28a4(lVar6,DAT_091b31a0);
              *(undefined8 *)(lVar3 + 0x18) = uVar4;
              thunk_FUN_03f5d7b8();
              lVar6 = DAT_091b3160;
              if (lVar1 == 0) {
LAB_04353efc:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *(long *)(lVar1 + 0x10);
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_04353efc;
              uVar9 = *(uint *)(lVar1 + 0x18);
              if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar1 + 0x18) = uVar9 + 1;
                plVar8 = (long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
                *plVar8 = lVar3;
                thunk_FUN_03f5d7b8(plVar8,lVar3);
              }
              else {
                FUN_057e0c68(lVar1,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar9 = *(uint *)(lVar2 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar9);
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) {
          uVar4 = 0;
        }
        else {
          if (*(int *)(DAT_09191f38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar11 = *(undefined8 **)(DAT_09191f38 + 0xb8);
          lVar2 = puVar11[1];
          if (lVar2 == 0) {
            if (*(int *)(DAT_09191f38 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar11 = *(undefined8 **)(DAT_09191f38 + 0xb8);
            }
            uVar4 = *puVar11;
            lVar2 = thunk_FUN_03f9944c(DAT_09175be0);
            FUN_06d4541c(lVar2,uVar4,DAT_091ebf28,0);
            plVar8 = (long *)(*(long *)(DAT_09191f38 + 0xb8) + 8);
            *plVar8 = lVar2;
            thunk_FUN_03f5d7b8(plVar8,lVar2);
          }
          FUN_057e280c(lVar1,lVar2,DAT_091b3178);
          uVar4 = FUN_057e28a4(lVar1,DAT_091b3180);
        }
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

