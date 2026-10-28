// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$SetUp
// address: 0x42c75bc
// body: available
// range: 0x42c75bc-0x42c7f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c7e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7f2c to 0x45302b0 Utilities.UI.UICardFlowLayoutControl$$SetUp (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c7f30 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c7f3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__SetUp
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  
  if ((DAT_09517356 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09174aa8);
    FUN_03f5c2a4(&DAT_09174e30);
    FUN_03f5c2a4(&DAT_09180c40);
    FUN_03f5c2a4(&DAT_091954e8);
    FUN_03f5c2a4(&DAT_09180c38);
    FUN_03f5c2a4(&DAT_091954e0);
    FUN_03f5c2a4(&DAT_091c56e0);
    FUN_03f5c2a4(&DAT_091a0098);
    FUN_03f5c2a4(&DAT_091b14d8);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091d4ce0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180408);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_091dcdf0);
    FUN_03f5c2a4(&DAT_091dcdf8);
    FUN_03f5c2a4(&DAT_091dce00);
    FUN_03f5c2a4(&DAT_09209580);
    DAT_09517356 = 1;
  }
  *(undefined8 *)(param_1 + 0x118) = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x118,param_2);
  plVar15 = (long *)(param_1 + 0xf0);
  *plVar15 = param_3;
  thunk_FUN_03f5d7b8(plVar15,param_3);
  *(undefined8 *)(param_1 + 0x120) = param_5;
  thunk_FUN_03f5d7b8(param_1 + 0x120,param_5);
  lVar2 = FUN_04a6a6d8(param_1,DAT_091c56e0);
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar2 + 200);
  }
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  thunk_FUN_03f5d7b8(param_1 + 0x128);
  if (((*(long *)(param_1 + 0x118) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x20), lVar2 != 0)) &&
     (lVar2 = UnityEngine_Component__get_transform(lVar2,0), lVar2 != 0)) {
    plVar3 = (long *)UnityEngine_Transform__Find(lVar2,DAT_09209580,0);
    lVar2 = DAT_09189c98;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    else {
      plVar11 = plVar3;
      if (*plVar3 != DAT_09189c98) {
        plVar11 = (long *)0x0;
      }
      *(long **)(param_1 + 0x130) = plVar11;
      if (*plVar3 != lVar2) {
        plVar3 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x130,plVar3);
    lVar2 = *(long *)(param_1 + 0xf0);
    uVar8 = thunk_FUN_03f9944c(DAT_09174e30);
    FUN_071cd244(uVar8,param_1,DAT_091dce00,0);
    if (lVar2 != 0) {
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__add_onHomeBuildingItemBought
                (lVar2,uVar8,0);
      puVar16 = (undefined8 *)(param_1 + 0x48);
      *puVar16 = param_4;
      thunk_FUN_03f5d7b8(puVar16,param_4);
      if (*(long *)(param_1 + 0x60) != 0) {
        CakeOrder_UI_UIMapBuildingProgress__ResetVisual(*(long *)(param_1 + 0x60),0);
        if (*(long *)(param_1 + 0x60) != 0) {
          CakeOrder_UI_UIMapBuildingProgress__SetUp
                    (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x118),param_4,*plVar15,
                     *(undefined8 *)(param_1 + 0x120),0);
          if (((*(long *)(param_1 + 0x120) != 0) &&
              (lVar2 = *(long *)(*(long *)(param_1 + 0x120) + 0x48), lVar2 != 0)) &&
             (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
            plVar3 = (long *)FUN_03f5c394(DAT_09180c40,*(undefined4 *)(lVar2 + 0x18));
            if (*plVar15 != 0) {
              lVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHomeBuildingItemsBought
                                (*plVar15,*puVar16,0);
              if (lVar2 == 0) {
                lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
                FUN_057e0400(lVar2,DAT_091b0558);
              }
              lVar9 = *(long *)(param_1 + 0x120);
              if (lVar9 != 0) {
                uVar22 = 0;
                bVar20 = true;
                while( true ) {
                  if ((*(long *)(lVar9 + 0x48) == 0) ||
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x48) + 0x20), lVar9 == 0))
                  goto LAB_042c7e6c;
                  if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar22) break;
                  if (*(uint *)(lVar9 + 0x18) <= uVar22) {
LAB_042c7f30:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar14 = (long)(int)uVar22;
                  lVar9 = *(long *)(lVar9 + lVar14 * 8 + 0x20);
                  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_042c7e6c;
                  lVar4 = 0x80;
                  if (*(int *)(*(long *)(lVar9 + 0x18) + 0x18) != 1) {
                    lVar4 = 0x78;
                  }
                  uVar8 = *(undefined8 *)(param_1 + lVar4);
                  lVar4 = thunk_FUN_03f9944c(DAT_091954e8);
                  Utilities_UI_UICardFlowLayoutControl_CardGroupEndWithBar___ctor(lVar4,0);
                  if ((*(long *)(lVar9 + 0x18) == 0) ||
                     (uVar5 = FUN_03f5c394(DAT_09180c38,
                                           *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x18)),
                     lVar4 == 0)) goto LAB_042c7e6c;
                  *(undefined8 *)(lVar4 + 0x10) = uVar5;
                  thunk_FUN_03f5d7b8();
                  if (plVar3 == (long *)0x0) goto LAB_042c7e6c;
                  lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                  if (lVar6 == 0) {
LAB_042c7f34:
                    uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar8,0);
                  }
                  if (*(uint *)(plVar3 + 3) <= uVar22) goto LAB_042c7f30;
                  plVar15 = plVar3 + lVar14 + 4;
                  *plVar15 = lVar4;
                  thunk_FUN_03f5d7b8(plVar3 + lVar14 + 4,lVar4);
                  lVar14 = *(long *)(lVar9 + 0x10);
                  if ((lVar14 == 0) || (lVar2 == 0)) goto LAB_042c7e6c;
                  uVar1 = FUN_057e1004(lVar2,*(undefined8 *)(lVar14 + 0x18),DAT_091b0590);
                  if ((uVar1 & 1) == 0) {
                    if (*(long *)(param_1 + 0x120) == 0) goto LAB_042c7e6c;
                    uVar5 = CakeOrder_DataSO_MapUpgradeConfig__GetItemConfigById
                                      (*(long *)(param_1 + 0x120),*(undefined8 *)(lVar14 + 0x18),0);
                    uVar18 = *(undefined8 *)(param_1 + 0x80);
                    uVar19 = *(undefined8 *)(param_1 + 0x70);
                    uVar13 = 2;
                    if (!bVar20) {
                      uVar13 = 0;
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar4 = FUN_04c35338(uVar18,uVar19,DAT_091d4ce0);
                    if (lVar4 == 0) goto LAB_042c7e6c;
                    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x88);
                    thunk_FUN_03f5d7b8();
                    CakeOrder_UI_UIItemUpgradeBuildingOptionCard__SetData(lVar4,lVar14,uVar5,uVar13)
                    ;
                    uVar5 = thunk_FUN_03f9944c(DAT_09174aa8);
                    FUN_070a8c30(uVar5,param_1,DAT_091dcdf8,0);
                    CakeOrder_UI_UIItemUpgradeBuildingOptionCard__add_onClickUpgrade(lVar4,uVar5);
                    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_042c7e6c;
                    FUN_06fd8454(*(long *)(param_1 + 0xf8),*(undefined8 *)(lVar14 + 0x18),lVar4,
                                 DAT_091a0098);
                    lVar14 = DAT_091b14d8;
                    lVar6 = *(long *)(param_1 + 0x100);
                    if (lVar6 == 0) goto LAB_042c7e6c;
                    lVar10 = *(long *)(lVar6 + 0x10);
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_042c7e6c;
                    uVar23 = *(uint *)(lVar6 + 0x18);
                    if (uVar23 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar23 + 1;
                      plVar11 = (long *)(lVar10 + (long)(int)uVar23 * 8 + 0x20);
                      *plVar11 = lVar4;
                      thunk_FUN_03f5d7b8(plVar11,lVar4);
                    }
                    else {
                      FUN_057e0c68(lVar6,lVar4,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    if (*(uint *)(plVar3 + 3) <= uVar22) goto LAB_042c7f30;
                    if (*plVar15 == 0) goto LAB_042c7e6c;
                    *(undefined8 *)(*plVar15 + 0x18) = *(undefined8 *)(lVar4 + 0x68);
                    thunk_FUN_03f5d7b8();
                  }
                  lVar14 = *(long *)(lVar9 + 0x18);
                  if (lVar14 == 0) goto LAB_042c7e6c;
                  uVar21 = 0;
                  while ((int)uVar21 < (int)*(uint *)(lVar14 + 0x18)) {
                    if ((*(uint *)(lVar14 + 0x18) <= uVar21) || (*(uint *)(plVar3 + 3) <= uVar22))
                    goto LAB_042c7f30;
                    if (*plVar15 == 0) goto LAB_042c7e6c;
                    plVar11 = *(long **)(*plVar15 + 0x10);
                    lVar4 = *(long *)(lVar14 + uVar21 * 8 + 0x20);
                    lVar14 = thunk_FUN_03f9944c(DAT_091954e0);
                    Utilities_UI_UICardFlowLayoutControl_CardGroup___ctor(lVar14,0);
                    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) ||
                       (uVar5 = FUN_03f5c394(DAT_09180408,
                                             *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18)),
                       lVar14 == 0)) goto LAB_042c7e6c;
                    *(undefined8 *)(lVar14 + 0x10) = uVar5;
                    thunk_FUN_03f5d7b8();
                    if (plVar11 == (long *)0x0) goto LAB_042c7e6c;
                    lVar6 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar6 == 0) goto LAB_042c7f34;
                    if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_042c7f30;
                    plVar11[uVar21 + 4] = lVar14;
                    thunk_FUN_03f5d7b8(plVar11 + uVar21 + 4,lVar14);
                    lVar14 = *(long *)(lVar4 + 0x10);
                    if (lVar14 == 0) goto LAB_042c7e6c;
                    uVar23 = 0;
                    uVar17 = uVar1;
                    while ((int)uVar23 < (int)*(uint *)(lVar14 + 0x18)) {
                      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_042c7f30;
                      lVar14 = *(long *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
                      if (lVar14 == 0) goto LAB_042c7e6c;
                      uVar7 = FUN_057e1004(lVar2,*(undefined8 *)(lVar14 + 0x18),DAT_091b0590);
                      if ((uVar7 & 1) == 0) {
                        if (*(long *)(param_1 + 0x120) == 0) goto LAB_042c7e6c;
                        uVar5 = CakeOrder_DataSO_MapUpgradeConfig__GetItemConfigById
                                          (*(long *)(param_1 + 0x120),*(undefined8 *)(lVar14 + 0x18)
                                           ,0);
                        uVar18 = *(undefined8 *)(param_1 + 0x70);
                        uVar13 = 2;
                        if ((uVar17 & 1) == 0) {
                          uVar13 = 0;
                        }
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar6 = FUN_04c35338(uVar8,uVar18,DAT_091d4ce0);
                        if (lVar6 == 0) goto LAB_042c7e6c;
                        *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + 0x88);
                        thunk_FUN_03f5d7b8();
                        CakeOrder_UI_UIItemUpgradeBuildingOptionCard__SetData
                                  (lVar6,lVar14,uVar5,uVar13);
                        uVar5 = thunk_FUN_03f9944c(DAT_09174aa8);
                        FUN_070a8c30(uVar5,param_1,DAT_091dcdf8,0);
                        CakeOrder_UI_UIItemUpgradeBuildingOptionCard__add_onClickUpgrade
                                  (lVar6,uVar5);
                        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_042c7e6c;
                        FUN_06fd8454(*(long *)(param_1 + 0xf8),*(undefined8 *)(lVar14 + 0x18),lVar6,
                                     DAT_091a0098);
                        lVar14 = DAT_091b14d8;
                        lVar10 = *(long *)(param_1 + 0x100);
                        if (lVar10 == 0) goto LAB_042c7e6c;
                        lVar12 = *(long *)(lVar10 + 0x10);
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_042c7e6c;
                        uVar17 = *(uint *)(lVar10 + 0x18);
                        if (uVar17 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar17 + 1;
                          plVar11 = (long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
                          *plVar11 = lVar6;
                          thunk_FUN_03f5d7b8(plVar11,lVar6);
                        }
                        else {
                          FUN_057e0c68(lVar10,lVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        if (*(uint *)(plVar3 + 3) <= uVar22) goto LAB_042c7f30;
                        if ((*plVar15 == 0) || (lVar14 = *(long *)(*plVar15 + 0x10), lVar14 == 0))
                        goto LAB_042c7e6c;
                        if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_042c7f30;
                        lVar14 = *(long *)(lVar14 + uVar21 * 8 + 0x20);
                        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0))
                        goto LAB_042c7e6c;
                        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_042c7f30;
                        *(undefined8 *)(lVar14 + (long)(int)uVar23 * 8 + 0x20) =
                             *(undefined8 *)(lVar6 + 0x68);
                        thunk_FUN_03f5d7b8();
                        uVar17 = 0;
                        bVar20 = false;
                      }
                      lVar14 = *(long *)(lVar4 + 0x10);
                      uVar23 = uVar23 + 1;
                      if (lVar14 == 0) goto LAB_042c7e6c;
                    }
                    uVar21 = uVar21 + 1;
                    lVar14 = *(long *)(lVar9 + 0x18);
                    if (lVar14 == 0) goto LAB_042c7e6c;
                  }
                  lVar9 = *(long *)(param_1 + 0x120);
                  uVar22 = uVar22 + 1;
                  if (lVar9 == 0) goto LAB_042c7e6c;
                }
                if (*(long *)(param_1 + 0x68) != 0) {
                  plVar15 = (long *)(*(long *)(param_1 + 0x68) + 0x28);
                  *plVar15 = (long)plVar3;
                  thunk_FUN_03f5d7b8(plVar15,plVar3);
                  lVar2 = *(long *)(param_1 + 0x68);
                  if (lVar2 != 0) {
                    *(undefined1 *)(lVar2 + 0x45) = 1;
                    uVar8 = thunk_FUN_03f9944c(DAT_09174948);
                    FUN_071c30b0(uVar8,param_1,DAT_091dcdf0,0);
                    Utilities_UI_UICardFlowLayoutControl__remove_onContentHeightChanged
                              (lVar2,uVar8,0);
                    lVar2 = *(long *)(param_1 + 0x68);
                    uVar8 = thunk_FUN_03f9944c(DAT_09174948);
                    FUN_071c30b0(uVar8,param_1,DAT_091dcdf0,0);
                    if (lVar2 != 0) {
                      Utilities_UI_UICardFlowLayoutControl__add_onContentHeightChanged
                                (lVar2,uVar8,0);
                      if (*(long *)(param_1 + 0x68) != 0) {
                        Utilities_UI_UICardFlowLayoutControl__SetUp(*(long *)(param_1 + 0x68),0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_042c7e6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

