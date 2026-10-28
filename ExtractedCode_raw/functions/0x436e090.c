// rea decompile_all
// name: CakeOrder.Shop.UIPopupStarterPack$$BuildRewardRow
// address: 0x436e090
// body: available
// range: 0x436e090-0x436e547 inclusive
// range: 0x436e54c-0x436e54f inclusive
// range: 0x436e554-0x436e557 inclusive
// range: 0x436e55c-0x436e55f inclusive
// range: 0x436e564-0x436e567 inclusive
// range: 0x436e56c-0x436e577 inclusive
// range: 0x436e5e8-0x436e6bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436e544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e54c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e564 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e574 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e6a4 to 0x85f742c UnityEngine.Debug$$LogErrorFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436e6a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e6ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436e6b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper outp
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIPopupStarterPack__BuildRewardRow(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_095178b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a3620);
    FUN_03f5c2a4(&DAT_091a3628);
    FUN_03f5c2a4(&DAT_091a3630);
    FUN_03f5c2a4(&DAT_091adf78);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920a2b8);
    FUN_03f5c2a4(&DAT_0920c010);
    FUN_03f5c2a4(&DAT_0920c008);
    DAT_095178b6 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if ((*(long *)(param_1 + 0xd8) == 0) || (*(long *)(*(long *)(param_1 + 0xd8) + 0x10) == 0)) {
    return;
  }
  lVar1 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    lVar1 = CakeOrder_Shop_InAppShopDataAccess__GetPackValue
                      (**(long **)(lVar1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),0);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar2 != (long *)0x0) {
        lVar1 = *(long *)(param_1 + 0xc0);
        if ((lVar1 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar9 == 0)) {
LAB_0436e6b0:
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if ((int)plVar2[3] != 0) {
          plVar2[4] = lVar1;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar1);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogErrorFormat(param_1,DAT_0920a2b8,plVar2,0);
          return;
        }
        goto LAB_0436e6ac;
      }
    }
    else if ((*(long *)(param_1 + 0xd8) != 0) &&
            (lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar9 != 0)) {
      if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
        return;
      }
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      while (uVar10 < uVar6) {
        lVar11 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
        if (lVar11 != 0) {
          uVar8 = *(undefined8 *)(lVar11 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
          if ((uVar6 & 1) == 0) {
            if (*(long *)(lVar1 + 0x10) == 0) goto LAB_0436e6a8;
            FUN_057e185c(&local_98,*(long *)(lVar1 + 0x10),DAT_091adf78);
            local_70 = local_88;
            puStack_78 = puStack_90;
            local_80 = local_98;
            local_98 = 0;
            puStack_90 = &local_80;
            do {
              do {
                uVar6 = FUN_071bd28c(&local_80,DAT_091a3628);
                lVar3 = local_70;
                if ((uVar6 & 1) == 0) {
                  FUN_071bd288(&local_80,DAT_091a3620);
                  lVar3 = *(long *)(DAT_091b49d0 + 0x20);
                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_03f95a6c();
                  }
                  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_03f95a6c();
                  }
                  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0436e6a8;
                  uVar6 = CakeOrder_Shop_InAppShopDataAccess__TryGetUnlimitedHeartSlotText
                                    (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                                     *(undefined8 *)(lVar11 + 0x10),&local_68,0);
                  if ((uVar6 & 1) == 0) {
                    uVar7 = 0;
                    goto LAB_0436e510;
                  }
                  uVar8 = *(undefined8 *)(lVar11 + 0x20);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
                  if ((uVar6 & 1) == 0) goto LAB_0436e50c;
                  plVar2 = *(long **)(lVar11 + 0x20);
                  if (plVar2 == (long *)0x0) goto LAB_0436e6a8;
                  (**(code **)(*plVar2 + 0x558))(plVar2,local_68,*(undefined8 *)(*plVar2 + 0x560));
                  goto LAB_0436e50c;
                }
                if (local_70 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(local_70 + 0x10);
                }
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
              } while ((uVar6 & 1) != 0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = System_String__op_Inequality
                                (*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18),
                                 *(undefined8 *)(lVar11 + 0x10),0);
            } while ((uVar6 & 1) != 0);
            uVar8 = *(undefined8 *)(lVar11 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
            if ((uVar6 & 1) == 0) {
              plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar3 = *(long *)(lVar11 + 0x10);
              if ((lVar3 != 0) &&
                 (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar2[4] = lVar3;
              thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogErrorFormat(param_1,DAT_0920c010,plVar2,0);
            }
            else {
              plVar2 = *(long **)(lVar11 + 0x20);
              uVar8 = *(undefined8 *)(lVar11 + 0x28);
              uVar4 = CakeOrder_BaseUI_ShopPriceFormat__GroupedAmount
                                (*(undefined4 *)(lVar3 + 0x18),0);
              uVar8 = System_String__Format(uVar8,uVar4,0);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar8,uVar8);
              }
              (**(code **)(*plVar2 + 0x558))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x560));
            }
            FUN_071bd288(&local_80,DAT_091a3620);
LAB_0436e50c:
            uVar7 = 1;
LAB_0436e510:
            if ((*(long *)(lVar11 + 0x18) == 0) ||
               (lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x18),0),
               lVar11 == 0)) goto LAB_0436e6a8;
            UnityEngine_GameObject__SetActive(lVar11,uVar7,0);
          }
          else {
            plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
            if (plVar2 == (long *)0x0) goto LAB_0436e6a8;
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((lVar11 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
            goto LAB_0436e6b0;
            if ((int)plVar2[3] == 0) break;
            plVar2[4] = lVar11;
            thunk_FUN_03f5d7b8(plVar2 + 4,lVar11);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogErrorFormat(param_1,DAT_0920c008,plVar2,0);
          }
        }
        uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar10) {
          return;
        }
      }
LAB_0436e6ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0436e6a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

