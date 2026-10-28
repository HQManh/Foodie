// rea decompile_all
// name: CakeOrder.Shop.UIShopItemPack$$SetShopId
// address: 0x4368acc
// body: available
// range: 0x4368acc-0x4368f7b inclusive
// range: 0x4368f80-0x4368f83 inclusive
// range: 0x4368f88-0x4368f8b inclusive
// range: 0x4368ffc-0x43690bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4368f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4368f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43690b4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43690b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43690bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIShopItemPack__SetShopId(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_095178bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a3620);
    FUN_03f5c2a4(&DAT_091a3628);
    FUN_03f5c2a4(&DAT_091a3630);
    FUN_03f5c2a4(&DAT_091adf78);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f75e0);
    FUN_03f5c2a4(&DAT_091f6860);
    FUN_03f5c2a4(&DAT_091f7608);
    FUN_03f5c2a4(&DAT_091fa020);
    FUN_03f5c2a4(&DAT_0920cfd0);
    DAT_095178bb = 1;
  }
  local_70 = 0;
  local_68 = 0;
  plVar6 = param_1 + 9;
  *plVar6 = param_2;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  thunk_FUN_03f5d7b8(plVar6,param_2);
  lVar1 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    lVar1 = CakeOrder_Shop_InAppShopDataAccess__GetPackValue(**(long **)(lVar1 + 0xb8),param_2,0);
    plVar7 = param_1 + 10;
    *plVar7 = lVar1;
    thunk_FUN_03f5d7b8(plVar7,lVar1);
    if (*plVar7 == 0) {
      uVar9 = System_String__Concat(DAT_0920cfd0,param_2,DAT_091f6860,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar9,0);
      lVar1 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar1 != 0) {
        UnityEngine_GameObject__SetActive(lVar1,0,0);
        return;
      }
    }
    else if (param_1[0xc] != 0) {
      CakeOrder_BaseUI_ButtonBuyWithSale__SetUp(param_1[0xc],param_2,0);
      if ((param_1[0xe] != 0) && (lVar1 = *(long *)(param_1[0xe] + 0x10), lVar1 != 0)) {
        if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
          uVar10 = 0;
          uVar5 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar11 = *(long *)(lVar1 + uVar10 * 8 + 0x20);
            if (lVar11 != 0) {
              uVar9 = *(undefined8 *)(lVar11 + 0x18);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
              if ((uVar5 & 1) == 0) {
                if ((*plVar7 == 0) || (lVar2 = *(long *)(*plVar7 + 0x10), lVar2 == 0))
                goto LAB_043690b8;
                FUN_057e185c(&local_98,lVar2,DAT_091adf78);
                local_70 = local_88;
                puStack_78 = puStack_90;
                local_80 = local_98;
                local_98 = 0;
                puStack_90 = &local_80;
                do {
                  do {
                    uVar5 = FUN_071bd28c(&local_80,DAT_091a3628);
                    lVar2 = local_70;
                    if ((uVar5 & 1) == 0) {
                      FUN_071bd288(&local_80,DAT_091a3620);
                      lVar2 = *(long *)(DAT_091b49d0 + 0x20);
                      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                        lVar2 = FUN_03f95a6c();
                      }
                      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                        lVar2 = FUN_03f95a6c();
                      }
                      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_043690b8;
                      uVar5 = CakeOrder_Shop_InAppShopDataAccess__TryGetUnlimitedHeartSlotText
                                        (**(long **)(lVar2 + 0xb8),*plVar6,
                                         *(undefined8 *)(lVar11 + 0x10),&local_68,0);
                      if ((uVar5 & 1) == 0) {
                        uVar8 = 0;
                        goto LAB_04368f44;
                      }
                      uVar9 = *(undefined8 *)(lVar11 + 0x20);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                      if ((uVar5 & 1) == 0) goto LAB_04368f40;
                      plVar4 = *(long **)(lVar11 + 0x20);
                      if (plVar4 == (long *)0x0) goto LAB_043690b8;
                      (**(code **)(*plVar4 + 0x558))
                                (plVar4,local_68,*(undefined8 *)(*plVar4 + 0x560));
                      goto LAB_04368f40;
                    }
                    if (local_70 == 0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = *(undefined8 *)(local_70 + 0x10);
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
                  } while ((uVar5 & 1) != 0);
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar5 = System_String__op_Inequality
                                    (*(undefined8 *)(lVar11 + 0x10),
                                     *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x18),0);
                } while ((uVar5 & 1) != 0);
                uVar9 = *(undefined8 *)(lVar11 + 0x20);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                if ((uVar5 & 1) == 0) {
                  uVar9 = UnityEngine_Object__GetName(param_1,0);
                  uVar9 = System_String__Concat
                                    (uVar9,DAT_091fa020,*(undefined8 *)(lVar11 + 0x10),DAT_091f7608,
                                     0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  UnityEngine_Debug__LogError(uVar9,param_1,0);
                }
                else {
                  plVar4 = *(long **)(lVar11 + 0x20);
                  uVar9 = *(undefined8 *)(lVar11 + 0x28);
                  uVar3 = CakeOrder_BaseUI_ShopPriceFormat__GroupedAmount
                                    (*(undefined4 *)(lVar2 + 0x18),0);
                  uVar9 = System_String__Format(uVar9,uVar3,0);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550(uVar9,uVar9);
                  }
                  (**(code **)(*plVar4 + 0x558))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x560));
                }
                FUN_071bd288(&local_80,DAT_091a3620);
LAB_04368f40:
                uVar8 = 1;
LAB_04368f44:
                if ((*(long *)(lVar11 + 0x18) == 0) ||
                   (lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x18),0),
                   lVar11 == 0)) goto LAB_043690b8;
                UnityEngine_GameObject__SetActive(lVar11,uVar8,0);
              }
              else {
                uVar9 = UnityEngine_Object__GetName(param_1,0);
                uVar9 = System_String__Concat
                                  (uVar9,DAT_091fa020,*(undefined8 *)(lVar11 + 0x10),DAT_091f75e0,0)
                ;
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835d0);
                }
                UnityEngine_Debug__LogError(uVar9,param_1,0);
              }
            }
            uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar1 + 0x18));
        }
        (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
        return;
      }
    }
  }
LAB_043690b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

