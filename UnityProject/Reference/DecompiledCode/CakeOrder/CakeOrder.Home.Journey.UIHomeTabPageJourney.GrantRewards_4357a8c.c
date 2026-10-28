// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$GrantRewards
// address: 0x4357a8c
// body: available
// range: 0x4357a8c-0x43580eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43580b4 to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43580e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43580e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__GrantRewards
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double local_98;
  
  if ((DAT_095177ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5558);
    FUN_03f5c2a4(&DAT_091ad640);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a290);
    FUN_03f5c2a4(&DAT_0921deb0);
    DAT_095177ea = 1;
  }
  if (param_2 == 0) goto LAB_043580e4;
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0918a290);
  CakeOrder_UI_RewardListData___ctor(lVar5,0);
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar12 == 0) goto LAB_043580e4;
  if ((int)*(ulong *)(lVar12 + 0x18) < 1) {
LAB_04358020:
    if (*(char *)(param_1 + 0x114) != '\0') {
      return;
    }
  }
  else {
    bVar4 = false;
    uVar13 = 0;
    uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar8 = *(long *)(lVar12 + 0x20 + uVar13 * 8);
      if (((lVar8 != 0) &&
          (uVar7 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar8 + 0x10),0), (uVar7 & 1) == 0))
         && (0 < *(int *)(lVar8 + 0x18))) {
        if (*(char *)(param_1 + 0x114) == '\0') {
          lVar11 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x48);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = UnityEngine_Object__op_Implicit(uVar9,0);
          lVar11 = 0;
          if ((uVar7 & 1) != 0) {
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_043580e4;
            lVar11 = CakeOrder_Home_HomeControllerCookOrder__GetCurrencyCounter
                               (*(long *)(param_1 + 0x48),*(undefined8 *)(lVar8 + 0x10),0);
          }
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar11,0);
        plVar10 = (long *)0x0;
        if ((uVar7 & 1) != 0) {
          if (lVar11 == 0) goto LAB_043580e4;
          plVar10 = (long *)FUN_04a6a14c(lVar11,DAT_091c5558);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(plVar10,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          if (((plVar10 == (long *)0x0) || (**(long **)(lVar6 + 0xb8) == 0)) ||
             (CakeOrder_AudioManagerCakeOrder__RegisterAudioSource
                        (**(long **)(lVar6 + 0xb8),plVar10[0x11],3,0), lVar11 == 0))
          goto LAB_043580e4;
          fVar16 = *(float *)(lVar11 + 0x40);
          if (DAT_09515cf4 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515cf4 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar15 = (double)fVar16;
          dVar14 = modf(dVar15,&local_98);
          if (0.0 <= fVar16) {
            if (dVar14 == 0.5) {
              dVar14 = local_98 + 1.0;
              goto LAB_04357d68;
            }
            dVar15 = (double)(long)(dVar15 + 0.5);
          }
          else if (dVar14 == -0.5) {
            dVar14 = local_98 + -1.0;
LAB_04357d68:
            dVar15 = local_98;
            if (((long)local_98 & 1U) != 0) {
              dVar15 = dVar14;
            }
          }
          else {
            dVar15 = (double)(long)(dVar15 + -0.5);
          }
          iVar1 = -0x80000000;
          if (dVar15 != INFINITY) {
            iVar1 = (int)dVar15;
          }
          (**(code **)(*plVar10 + 0x178))(plVar10,lVar11,iVar1,*(undefined8 *)(*plVar10 + 0x180));
        }
        lVar11 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_043580e4;
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar11 + 0xb8),*(undefined8 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x18),DAT_0921deb0,0,0);
        lVar11 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03f95a6c();
        }
        if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_043580e4;
        uVar9 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                          (**(long **)(lVar11 + 0xb8),*(undefined8 *)(lVar8 + 0x10),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar5 == 0) goto LAB_043580e4;
          CakeOrder_UI_RewardListData__AddReward(lVar5,uVar9,*(undefined4 *)(lVar8 + 0x18),0,0);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(plVar10,0);
        if ((uVar7 & 1) != 0) {
          iVar3 = *(int *)(lVar8 + 0x18);
          iVar1 = iVar3;
          if (*(int *)(param_1 + 0x110) <= iVar3) {
            iVar1 = *(int *)(param_1 + 0x110);
          }
          iVar2 = iVar1;
          if (iVar3 < 1) {
            iVar2 = 1;
          }
          if ((param_3 == 0) ||
             (uVar9 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__GetRewardFlyStartPoint
                                (iVar1,param_3,*(undefined8 *)(lVar8 + 0x10),0),
             plVar10 == (long *)0x0)) goto LAB_043580e4;
          Utilities_UIImageFlyToCounter__ShowCurrencyFly(0,plVar10,iVar3,iVar2,uVar9,0,0);
        }
        bVar4 = true;
      }
      uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
    if (!bVar4) goto LAB_04358020;
    lVar12 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_043580e4;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar12 + 0xb8),0);
    if (*(char *)(param_1 + 0x114) != '\0') {
      uVar9 = *(undefined8 *)(param_1 + 0x118);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar13 & 1) != 0) {
        lVar12 = *(long *)(DAT_091b48d0 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_043580e4;
        CakeOrder_AudioManagerCakeOrder__PlaySfx
                  (0x3f800000,**(long **)(lVar12 + 0xb8),*(undefined8 *)(param_1 + 0x118),3,0);
      }
      goto LAB_04358020;
    }
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    if (0 < *(int *)(*(long *)(lVar5 + 0x10) + 0x18)) {
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar9 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards
                            (*(long *)(param_1 + 0x48),lVar5,0,0,0);
          Utilities_AsyncExtension__RunWithLogException(uVar9,0);
          return;
        }
        goto LAB_043580e4;
      }
    }
    return;
  }
LAB_043580e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

