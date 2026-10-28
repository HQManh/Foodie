// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$SetUpOnCreate
// address: 0x42e8e84
// body: available
// range: 0x42e8e84-0x42e963b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e909c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e94d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e962c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e9638 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__SetUpOnCreate(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_0951746e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a98);
    FUN_03f5c2a4(&DAT_09174d00);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_091d2688);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4a18);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcf50);
    FUN_03f5c2a4(&DAT_091dcf58);
    FUN_03f5c2a4(&DAT_091dcf60);
    FUN_03f5c2a4(&DAT_091dcf68);
    FUN_03f5c2a4(&DAT_09213c80);
    FUN_03f5c2a4(&DAT_09206f00);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_0951746e = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  lVar3 = *(long *)(DAT_091b4a18 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = FUN_04bfb090(**(long **)(lVar3 + 0xb8),DAT_091d2688);
    plVar13 = (long *)(param_1 + 0xc0);
    *plVar13 = lVar3;
    thunk_FUN_03f5d7b8(plVar13,lVar3);
    lVar3 = *plVar13;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0xc0);
      uVar5 = thunk_FUN_03f9944c(DAT_09174d00);
      FUN_071cba50(uVar5,param_1,DAT_091dcf50,0);
      if (lVar3 != 0) {
        CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__add_onReceiveReward(lVar3,uVar5);
        lVar3 = *(long *)(param_1 + 0xc0);
        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar5,param_1,DAT_091dcf68,0);
        if (lVar3 != 0) {
          LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__add_onMilestoneStatusChanged(lVar3,uVar5,0);
          plVar6 = (long *)*plVar13;
          if (plVar6 != (long *)0x0) {
            uVar14 = 0;
            lVar3 = 0;
            while (iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                  (int)uVar14 < iVar2) {
              lVar9 = *(long *)(param_1 + 200);
              if (lVar9 == 0) goto LAB_042e94d8;
              if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar14) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_042e962c;
              if (((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x40), lVar11 == 0)) ||
                 (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) goto LAB_042e94d8;
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_042e962c;
              lVar11 = *(long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_042e94d8;
              uVar5 = *(undefined8 *)(lVar11 + 0x10);
              lVar15 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
              lVar9 = *(long *)(DAT_091b4970 + 0x20);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              if ((**(long **)(lVar9 + 0xb8) == 0) ||
                 (*(long *)(**(long **)(lVar9 + 0xb8) + 0x40) == 0)) goto LAB_042e94d8;
              if ((DAT_095174d4 & 1) == 0) {
                FUN_03f5c2a4(&DAT_09224f28);
                DAT_095174d4 = 1;
              }
              uVar4 = System_String__op_Equality(uVar5,DAT_09224f28,0);
              if ((uVar4 & 1) == 0) {
                lVar9 = *(long *)(DAT_091b4b60 + 0x20);
                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_03f95a6c();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_03f95a6c();
                }
                if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_042e94d8;
                plVar6 = (long *)CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                                           (**(long **)(lVar9 + 0xb8),*(undefined8 *)(lVar11 + 0x10)
                                            ,0);
              }
              else {
                lVar9 = *(long *)(DAT_091b4970 + 0x20);
                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_03f95a6c();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_03f95a6c();
                }
                if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_042e94d8;
                plVar6 = *(long **)(**(long **)(lVar9 + 0xb8) + 0x40);
              }
              lVar9 = lVar15;
              if (plVar6 == (long *)0x0) {
                uVar8 = 0;
                uVar5 = DAT_091f95f0;
              }
              else {
                lVar10 = *plVar6;
                uVar1 = *(undefined4 *)(lVar11 + 0x18);
                uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar4 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == DAT_09186500) {
                      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                      goto LAB_042e9350;
                    }
                    uVar4 = uVar4 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar4 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186500,7);
LAB_042e9350:
                uVar5 = (*(code *)*puVar7)(plVar6,uVar1,puVar7[1]);
                if (plVar6 == (long *)0x0) {
                  uVar8 = 0;
                  lVar9 = lVar3;
                  lVar3 = lVar15;
                }
                else {
                  lVar3 = *plVar6;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == DAT_09186500) {
                        puVar7 = (undefined8 *)(lVar3 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                        goto LAB_042e93c8;
                      }
                      uVar4 = uVar4 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186500,5);
LAB_042e93c8:
                  uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                  lVar3 = lVar15;
                }
              }
              if (lVar9 == 0) goto LAB_042e94d8;
              CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetUp(lVar9,uVar14,uVar5,uVar8);
              uVar5 = thunk_FUN_03f9944c(DAT_09174a98);
              FUN_070a8c30(uVar5,param_1,DAT_091dcf58,0);
              CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__add_onClickClaimed(lVar9,uVar5);
              uVar5 = thunk_FUN_03f9944c(DAT_09174a98);
              FUN_070a8c30(uVar5,param_1,DAT_091dcf60,0);
              CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__add_onClickLocked(lVar9,uVar5);
              CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetStateImmediate(lVar9,0);
              plVar6 = *(long **)(param_1 + 0xc0);
              uVar14 = uVar14 + 1;
              if (plVar6 == (long *)0x0) goto LAB_042e94d8;
            }
            plVar6 = (long *)*plVar13;
            if (plVar6 != (long *)0x0) {
              uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
              lVar3 = *(long *)(param_1 + 200);
              if (lVar3 != 0) {
                uVar4 = uVar4 & 0xffffffff;
                lVar9 = (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3) + 0x20;
                goto LAB_042e9498;
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09206f00,0);
      lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,0,0);
        return;
      }
    }
  }
LAB_042e94d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_042e9498:
  uVar14 = (uint)uVar4;
  if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar14) {
    plVar6 = (long *)*plVar13;
    if (plVar6 == (long *)0x0) goto LAB_042e94d8;
    iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    if (*(long *)(param_1 + 200) == 0) goto LAB_042e94d8;
    if (iVar2 == *(int *)(*(long *)(param_1 + 200) + 0x18)) {
      return;
    }
    plVar6 = (long *)FUN_03f5c394(DAT_09180318,2);
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_042e94d8;
    local_64 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
    lVar3 = FUN_03f5c42c(DAT_09535420,&local_64);
    if (plVar6 == (long *)0x0) goto LAB_042e94d8;
    if ((lVar3 == 0) ||
       (lVar9 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar9 != 0)) {
      if ((int)plVar6[3] == 0) goto LAB_042e962c;
      plVar6[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar3);
      if (*(long *)(param_1 + 200) == 0) goto LAB_042e94d8;
      local_68 = (undefined4)*(undefined8 *)(*(long *)(param_1 + 200) + 0x18);
      lVar3 = FUN_03f5c42c(DAT_09535420,&local_68);
      if ((lVar3 == 0) ||
         (lVar9 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar9 != 0)) {
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar3;
          thunk_FUN_03f5d7b8(plVar6 + 5,lVar3);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(DAT_09213c80,plVar6,0);
          return;
        }
LAB_042e962c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar14) goto LAB_042e962c;
  if ((*(long *)(lVar3 + lVar9) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + lVar9),0), lVar3 == 0))
  goto LAB_042e94d8;
  UnityEngine_GameObject__SetActive(lVar3,0,0);
  lVar3 = *(long *)(param_1 + 200);
  uVar4 = (ulong)(uVar14 + 1);
  lVar9 = lVar9 + 8;
  if (lVar3 == 0) goto LAB_042e94d8;
  goto LAB_042e9498;
}

