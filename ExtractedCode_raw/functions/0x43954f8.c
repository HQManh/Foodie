// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ProcessEndGame
// address: 0x43954f8
// body: available
// range: 0x43954f8-0x4396363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4396350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4396354 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4396360 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ProcessEndGame(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_09517a59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182248);
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091c91b0);
    FUN_03f5c2a4(&DAT_0917ff80);
    FUN_03f5c2a4(&DAT_09187828);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4a48);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09225818);
    FUN_03f5c2a4(&DAT_0920a978);
    FUN_03f5c2a4(&DAT_09213318);
    FUN_03f5c2a4(&DAT_09213320);
    DAT_09517a59 = 1;
  }
  uVar7 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    lVar8 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(DAT_091b4b60 + 0x20);
    lVar8 = **(long **)(lVar8 + 0xb8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (((**(long **)(lVar12 + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x48), lVar12 == 0)) || (lVar8 == 0))
    goto LAB_04396350;
    uVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar8,*(undefined8 *)(lVar12 + 0x18),0);
    lVar8 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(DAT_091b4b60 + 0x20);
    lVar8 = **(long **)(lVar8 + 0xb8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (((**(long **)(lVar12 + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x40), lVar12 == 0)) || (lVar8 == 0))
    goto LAB_04396350;
    uVar3 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar8,*(undefined8 *)(lVar12 + 0x18),0);
    lVar8 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(DAT_091b4b60 + 0x20);
    lVar8 = **(long **)(lVar8 + 0xb8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (((**(long **)(lVar12 + 0xb8) == 0) ||
        (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x50), lVar12 == 0)) || (lVar8 == 0))
    goto LAB_04396350;
    uVar4 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar8,*(undefined8 *)(lVar12 + 0x18),0);
  }
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(*(long *)(param_1 + 0x38) + 0x28) == 0))
  goto LAB_04396350;
  CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__get_AmountEarn();
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(*(long *)(param_1 + 0x38) + 0x28) == 0))
  goto LAB_04396350;
  uVar7 = FUN_05a8eda4(DAT_091b4a60);
  if ((uVar7 & 1) == 0) {
    iVar5 = 0;
  }
  else {
    lVar8 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(param_1 + 0x30);
    if ((lVar12 == 0) || (**(long **)(lVar8 + 0xb8) == 0)) goto LAB_04396350;
    iVar5 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetLevelStars
                      (**(long **)(lVar8 + 0xb8),*(undefined8 *)(lVar12 + 0x10),
                       *(undefined4 *)(lVar12 + 0x1c),0);
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) goto LAB_04396350;
  iVar6 = *(int *)(lVar8 + 0x10);
  if (iVar6 == 0) {
    if (*(long *)(lVar8 + 0x38) == 0) goto LAB_04396350;
    iVar6 = 1;
    if (0 < *(int *)(*(long *)(lVar8 + 0x38) + 0x14)) {
      iVar6 = 2;
    }
  }
  iVar14 = *(int *)(lVar8 + 0x14);
  if (iVar14 == 0) {
    if (iVar6 == 2) {
      iVar14 = 1;
    }
    else if (iVar6 == 3) {
      iVar14 = 0xd;
    }
    else {
      if (*(long *)(lVar8 + 0x38) == 0) goto LAB_04396350;
      iVar14 = (uint)(*(int *)(*(long *)(lVar8 + 0x38) + 0x14) < 1) << 3;
    }
  }
  lVar8 = thunk_FUN_03f9944c(DAT_09182248);
  CakeOrder_InGame_CakeLevelEndResultData___ctor(lVar8,0);
  if (lVar8 == 0) goto LAB_04396350;
  lVar12 = *(long *)(param_1 + 0x38);
  *(int *)(lVar8 + 0x10) = iVar6;
  *(int *)(lVar8 + 0x14) = iVar14;
  if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) goto LAB_04396350;
  lVar13 = *(long *)(lVar12 + 0x38);
  *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x10);
  if (lVar13 == 0) goto LAB_04396350;
  lVar12 = *(long *)(lVar12 + 0x20);
  *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(lVar13 + 0x14);
  *(undefined4 *)(lVar8 + 0x20) = 3;
  *(undefined4 *)(lVar8 + 0x24) = uVar4;
  *(uint *)(lVar8 + 0x28) = 3U - iVar5 & ((int)(3U - iVar5) >> 0x1f ^ 0xffffffffU);
  if (lVar12 == 0) goto LAB_04396350;
  uVar9 = CakeOrder_InGame_CakeLevelRuntimeDataCustomer__Clone();
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x30),uVar9);
  lVar12 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(lVar8 + 0x38) = uVar2;
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x28), lVar12 == 0)) goto LAB_04396350;
  *(int *)(lVar8 + 0x3c) = *(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x1c);
  uVar2 = CakeOrder_InGame_CakeLevelRuntimeDataSoftCurrency__get_AmountEarnAddedByMultiplier();
  lVar12 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(lVar8 + 0x40) = uVar2;
  *(undefined4 *)(lVar8 + 0x44) = uVar3;
  *(undefined4 *)(lVar8 + 0x48) = 0;
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)) goto LAB_04396350;
  *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar12 + 0x10);
  thunk_FUN_03f5d7b8();
  uVar7 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_0920a978,0);
  }
  else {
    lVar12 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(param_1 + 0x30);
    if ((lVar13 == 0) || (**(long **)(lVar12 + 0xb8) == 0)) goto LAB_04396350;
    uVar9 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__RecordLevelEnd
                      (**(long **)(lVar12 + 0xb8),*(undefined8 *)(lVar13 + 0x10),
                       *(undefined4 *)(lVar13 + 0x1c),lVar8,0);
    CakeOrder_InGame_LevelPlayLoadAndSetupControl__UpdateAdsProgressCounters(uVar9,0);
    if ((*(uint *)(lVar8 + 0x10) & 0xfffffffe) == 2) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_04396350;
      if (*(char *)(*(long *)(param_1 + 0x30) + 0xd0) == '\0') {
        lVar12 = *(long *)(DAT_091b4a58 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar13 = *(long *)(param_1 + 0x30);
        if ((lVar13 == 0) || (**(long **)(lVar12 + 0xb8) == 0)) goto LAB_04396350;
        CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UnlockLevel
                  (**(long **)(lVar12 + 0xb8),*(undefined8 *)(lVar13 + 0x10),
                   *(int *)(lVar13 + 0x1c) + 1,0);
        plVar10 = (long *)FUN_03f5c394(DAT_09180318,3);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_04396350;
        local_64 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c);
        lVar12 = FUN_03f5c42c(DAT_09535420,&local_64);
        if (plVar10 == (long *)0x0) goto LAB_04396350;
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_04396358;
        if ((int)plVar10[3] == 0) goto LAB_04396354;
        plVar10[4] = lVar12;
        thunk_FUN_03f5d7b8(plVar10 + 4,lVar12);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_04396350;
        lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_04396358;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_04396354;
        plVar10[5] = lVar12;
        thunk_FUN_03f5d7b8(plVar10 + 5,lVar12);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_04396350;
        local_68 = *(int *)(*(long *)(param_1 + 0x30) + 0x1c) + 1;
        lVar12 = FUN_03f5c42c(DAT_09535420,&local_68);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_04396358;
        if (*(uint *)(plVar10 + 3) < 3) goto LAB_04396354;
        plVar10[6] = lVar12;
        thunk_FUN_03f5d7b8(plVar10 + 6,lVar12);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogFormat(DAT_09213320,plVar10,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_04396350;
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48));
        lVar12 = *(long *)(param_1 + 0x30);
        if (lVar12 == 0) goto LAB_04396350;
        lVar11 = *(long *)(lVar12 + 0x48);
        lVar13 = *(long *)(DAT_091b4b60 + 0x20);
        *(int *)(param_1 + 0x50) = *(int *)(lVar12 + 0x1c) + 1;
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if ((*(long *)(param_1 + 0x30) == 0) || (**(long **)(lVar12 + 0xb8) == 0))
        goto LAB_04396350;
        iVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                          (**(long **)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar7 = UnityEngine_Object__op_Inequality(lVar11,0,0);
        if ((uVar7 & 1) != 0) {
          if ((*(long *)(param_1 + 0x30) == 0) || (lVar11 == 0)) goto LAB_04396350;
          if ((*(int *)(*(long *)(param_1 + 0x30) + 0x1c) + 1 == *(int *)(lVar11 + 0x50)) &&
             (-1 < iVar5)) {
            lVar12 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03f95a6c();
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03f95a6c();
            }
            if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
            iVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar12 + 0xb8),0);
            if (iVar5 < iVar6 + -1) {
              lVar12 = FUN_039af8ec(DAT_091b4a58);
              lVar13 = FUN_039af8ec(DAT_091b4b60);
              if ((lVar13 == 0) ||
                 (uVar9 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar13,iVar5 + 1,0),
                 lVar12 == 0)) goto LAB_04396350;
              CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UnlockLevel(lVar12,uVar9,0,0);
            }
          }
        }
      }
      else {
        lVar12 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if ((*(long *)(param_1 + 0x30) == 0) || (**(long **)(lVar12 + 0xb8) == 0))
        goto LAB_04396350;
        iVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                          (**(long **)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),0);
        lVar12 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c(lVar12);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03f95a6c();
        }
        if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
        iVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar12 + 0xb8),0);
        if (iVar5 < iVar6 + -1) {
          lVar12 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03f95a6c();
          }
          if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
          lVar12 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                             (**(long **)(lVar12 + 0xb8),iVar5 + 1,0);
          lVar13 = *(long *)(DAT_091b4a58 + 0x20);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c(lVar13);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03f95a6c();
          }
          if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_04396350;
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UnlockLevel
                    (**(long **)(lVar13 + 0xb8),lVar12,0,0);
          plVar10 = (long *)FUN_03f5c394(DAT_09180318,2);
          if ((*(long *)(param_1 + 0x30) == 0) || (plVar10 == (long *)0x0)) goto LAB_04396350;
          lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
          if ((lVar13 != 0) &&
             (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_04396358:
            uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar9,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_04396354;
          plVar10[4] = lVar13;
          thunk_FUN_03f5d7b8(plVar10 + 4,lVar13);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
          goto LAB_04396358;
          if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_04396354;
          plVar10[5] = lVar12;
          thunk_FUN_03f5d7b8(plVar10 + 5,lVar12);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogFormat(DAT_09213318,plVar10,0);
          *(long *)(param_1 + 0x48) = lVar12;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),lVar12);
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
      lVar12 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if ((*(long *)(param_1 + 0x30) == 0) || (**(long **)(lVar12 + 0xb8) == 0)) goto LAB_04396350;
      CakeOrder_HeartSystem_HeartSystemController__RecoverHeart
                (**(long **)(lVar12 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0),
                 DAT_09225818,0,0);
      lVar12 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(**(long **)(lVar12 + 0xb8),0)
      ;
      lVar12 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar12 + 0xb8),0);
      lVar12 = *(long *)(DAT_091b4a48 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
      CakeOrder_SaveProfile_PetAssistantDataAccess__SaveData(**(long **)(lVar12 + 0xb8),0);
    }
    else {
      lVar12 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if ((*(long *)(param_1 + 0x30) == 0) || (**(long **)(lVar12 + 0xb8) == 0)) goto LAB_04396350;
      CakeOrder_HeartSystem_HeartSystemController__ReleaseHeartHolder
                (**(long **)(lVar12 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0),0);
      lVar12 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c();
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_04396350;
      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar12 + 0xb8),0);
    }
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_CakeOrderDataTracking__CompleteLevel(lVar8,0);
  uVar2 = *(undefined4 *)(lVar8 + 0x10);
  lVar12 = FUN_03f5c394(DAT_0917ff80,2);
  if (lVar12 == 0) goto LAB_04396350;
  if ((*(int *)(lVar12 + 0x18) == 0) ||
     (*(undefined4 *)(lVar12 + 0x20) = 2, *(int *)(lVar12 + 0x18) == 1)) {
LAB_04396354:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined4 *)(lVar12 + 0x24) = 3;
  bVar1 = FUN_04aafa18(uVar2,lVar12,DAT_091c91b0);
  *(byte *)(param_1 + 0xc9) = bVar1 & 1;
  uVar9 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar7 & 1) != 0) {
    lVar12 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
    if (lVar12 == 0) goto LAB_04396350;
    if (*(long *)(lVar12 + 0x38) != 0) {
      lVar12 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
      if (lVar12 == 0) goto LAB_04396350;
      lVar13 = *(long *)(lVar12 + 0x38);
      uVar2 = *(undefined4 *)(lVar8 + 0x10);
      lVar12 = FUN_03f5c394(DAT_0917ff80,2);
      if (lVar12 == 0) goto LAB_04396350;
      if ((*(int *)(lVar12 + 0x18) == 0) ||
         (*(undefined4 *)(lVar12 + 0x20) = 2, uVar9 = DAT_091c91b0, *(int *)(lVar12 + 0x18) == 1))
      goto LAB_04396354;
      *(undefined4 *)(lVar12 + 0x24) = 3;
      uVar7 = FUN_04aafa18(uVar2,lVar12,uVar9);
      if (lVar13 == 0) goto LAB_04396350;
      uVar2 = 2;
      if ((uVar7 & 1) == 0) {
        uVar2 = 3;
      }
      *(undefined4 *)(lVar13 + 0x20) = uVar2;
    }
  }
  lVar12 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
  if (lVar12 != 0) {
    CakeOrder_InGame_UIInLevelCakeOrder__ShowEndGame(lVar12,lVar8,0);
    lVar12 = *(long *)(*(long *)(DAT_09187828 + 0xb8) + 8);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),lVar8,*(undefined8 *)(lVar12 + 0x28));
    }
    return;
  }
LAB_04396350:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

