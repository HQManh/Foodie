// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$UpdateAndShowItems
// address: 0x42c87e4
// body: available
// range: 0x42c87e4-0x42c8c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c8c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c8c30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__UpdateAndShowItems(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_09517359 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a00a0);
    FUN_03f5c2a4(&DAT_091a00a8);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a1d50);
    FUN_03f5c2a4(&DAT_091a1d58);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a1d60);
    FUN_03f5c2a4(&DAT_091a9308);
    FUN_03f5c2a4(&DAT_091a9310);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091aa580);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0560);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    DAT_09517359 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  local_a8 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar9 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48);
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (lVar9 != 0) {
      if (**(long **)(lVar3 + 0xb8) != 0) {
        iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                          (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar9 + 0x18),0);
        uVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(uVar4,DAT_091b0558);
        *(undefined8 *)(param_1 + 0x108) = uVar4;
        thunk_FUN_03f5d7b8(param_1 + 0x108,uVar4);
        if ((*(long *)(param_1 + 0x120) != 0) &&
           (lVar3 = CakeOrder_DataSO_MapUpgradeConfig__GetUpgradableParts
                              (*(long *)(param_1 + 0x120),0), lVar3 != 0)) {
          FUN_05668c84(&local_c8,lVar3,DAT_091aa580);
          local_80 = local_c8;
          local_c8 = 0;
          puStack_78 = puStack_c0;
          local_68 = lStack_b0;
          local_70 = local_b8;
          puStack_c0 = &local_80;
LAB_042c8a44:
          uVar5 = FUN_07181930(&local_80,DAT_091a1d58);
          lVar9 = local_68;
          lVar3 = local_70;
          if ((uVar5 & 1) != 0) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = FUN_06fd9fbc(*(long *)(param_1 + 0xf8),*(undefined8 *)(local_70 + 0x18),
                                 &local_88,DAT_091a00a8);
            if ((uVar5 & 1) != 0) {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar10 = 1;
              if (*(int *)(lVar9 + 0x18) <= iVar2) {
                uVar10 = 2;
              }
              CakeOrder_UI_UIItemUpgradeBuildingOptionCard__UpdateState(local_88,uVar10);
              lVar9 = DAT_091b0570;
              lVar6 = *(long *)(param_1 + 0x108);
              if (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x10);
                uVar4 = *(undefined8 *)(lVar3 + 0x18);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar8 = uVar4;
                    thunk_FUN_03f5d7b8(puVar8);
                  }
                  else {
                    FUN_057e0c68(lVar6,uVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_042c8a44;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_042c8a44;
          }
          FUN_0718192c(&local_80,DAT_091a1d50);
          if (*(long *)(param_1 + 0xf0) != 0) {
            lVar3 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHomeBuildingItemsBought
                              (*(long *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x48),0);
            if (lVar3 != 0) {
              lVar9 = thunk_FUN_03f9944c(DAT_0917cce8);
              FUN_057e053c(lVar9,lVar3,DAT_091b0560);
              if (lVar9 == 0) goto LAB_042c8c30;
              FUN_057e185c(&local_c8,lVar9,DAT_091b05a8);
              local_90 = local_b8;
              puStack_98 = puStack_c0;
              local_a0 = local_c8;
              local_c8 = 0;
              puStack_c0 = &local_a0;
              while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a45a0), lVar3 = local_90,
                    (uVar5 & 1) != 0) {
                if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar5 = FUN_06fd9fbc(*(long *)(param_1 + 0xf8),local_90,&local_a8,DAT_091a00a8);
                if ((uVar5 & 1) != 0) {
                  if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  CakeOrder_BaseUI_UIElementAbstract__Hide(0,local_a8,0);
                  if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fd9970(*(long *)(param_1 + 0xf8),lVar3,DAT_091a00a0);
                }
              }
              FUN_071bd288(&local_a0,DAT_091a4598);
            }
            return;
          }
        }
      }
    }
  }
LAB_042c8c30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

