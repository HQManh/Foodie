// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$BuildRewardViews
// address: 0x42ecd48
// body: available
// range: 0x42ecd48-0x42ed3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ed3ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ed3f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__BuildRewardViews
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517490 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5398);
    FUN_03f5c2a4(&DAT_091c5508);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a3fe0);
    FUN_03f5c2a4(&DAT_091a3fe8);
    FUN_03f5c2a4(&DAT_091a3ff0);
    FUN_03f5c2a4(&DAT_0917b420);
    FUN_03f5c2a4(&DAT_0917b5b8);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af748);
    FUN_03f5c2a4(&DAT_091ad888);
    FUN_03f5c2a4(&DAT_091b0ad8);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091af750);
    FUN_03f5c2a4(&DAT_091d4c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213e98);
    DAT_09517490 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_4 + 0xc0) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_4 + 0xc0),DAT_091af750);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar5 = FUN_071bd28c(&local_80,DAT_091a3fe8), lVar12 = local_70, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = UnityEngine_Component__get_gameObject(lVar12,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(uVar6,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a3fe0);
    lVar12 = *(long *)(param_4 + 0xc0);
    if (lVar12 != 0) {
      iVar2 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (0 < iVar2) {
        System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
      }
      lVar12 = *(long *)(param_4 + 0xa8);
      if (lVar12 != 0) {
        iVar2 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar2) {
          System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
        }
        lVar12 = *(long *)(param_4 + 0xb0);
        if (lVar12 != 0) {
          iVar2 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar2) {
            System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
          }
          lVar12 = *(long *)(param_4 + 0xb8);
          if (lVar12 != 0) {
            iVar2 = *(int *)(lVar12 + 0x18);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (0 < iVar2) {
              System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
            }
            if (param_5 != (long *)0x0) {
              lVar12 = *param_5;
              uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917b420) {
                    puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_042ed020;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b420,0);
LAB_042ed020:
              iVar2 = (*(code *)*puVar7)(param_5,puVar7[1]);
              if (iVar2 != 0) {
                lVar12 = *param_5;
                uVar6 = *(undefined8 *)(param_4 + 0x38);
                uVar8 = *(undefined8 *)(param_4 + 0x40);
                uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar5 != 0) {
                  piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == DAT_0917b5b8) {
                      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_042ed08c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar5 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b5b8,0);
LAB_042ed08c:
                (*(code *)*puVar7)(&local_98,param_5,0,puVar7[1]);
                puStack_a8 = puStack_90;
                local_b0 = local_98;
                local_a0 = local_88;
                CakeOrder_LiveOpsImplement_UIItemLoginDayReward__AddRewardView
                          (param_4,uVar6,uVar8,&local_b0);
                lVar12 = CakeOrder_LiveOpsImplement_UIItemLoginDayReward__get_RewardGroup(param_4);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar5 = UnityEngine_Object__op_Equality(lVar12,0,0);
                if ((uVar5 & 1) == 0) {
                  if (*(char *)(param_4 + 0xdc) == '\0') {
                    if (lVar12 == 0) goto LAB_042ed3ec;
                    uVar17 = UnityEngine_RectTransform__get_anchoredPosition(lVar12,0);
                    *(undefined4 *)(param_4 + 200) = uVar17;
                    *(undefined4 *)(param_4 + 0xcc) = param_2;
                    uVar17 = UnityEngine_Transform__get_localScale(lVar12,0);
                    *(undefined4 *)(param_4 + 0xd0) = uVar17;
                    *(undefined4 *)(param_4 + 0xd4) = param_2;
                    *(undefined4 *)(param_4 + 0xd8) = param_3;
                    *(undefined1 *)(param_4 + 0xdc) = 1;
                  }
                  if ((*(long *)(param_4 + 0x38) != 0) &&
                     (lVar9 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x38),0),
                     lVar9 != 0)) {
                    uVar17 = UnityEngine_Transform__GetSiblingIndex(lVar9,0);
                    if (*(long *)(param_4 + 0x40) != 0) {
                      lVar9 = TMPro_TMP_Text__get_transform(*(long *)(param_4 + 0x40),0);
                      if (lVar9 != 0) {
                        uVar3 = UnityEngine_Transform__GetSiblingIndex(lVar9,0);
                        if (1 < iVar2) {
                          if (lVar12 == 0) goto LAB_042ed3ec;
                          iVar16 = 1;
                          do {
                            uVar6 = UnityEngine_Transform__GetParent(lVar12,0);
                            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_09188ad0);
                            }
                            lVar9 = FUN_04c35338(lVar12,uVar6,DAT_091d4c40);
                            iVar4 = UnityEngine_Transform__GetSiblingIndex(lVar12,0);
                            if (lVar9 == 0) goto LAB_042ed3ec;
                            UnityEngine_Transform__SetSiblingIndex(lVar9,iVar4 + iVar16,0);
                            lVar11 = DAT_091af738;
                            lVar10 = *(long *)(param_4 + 0xc0);
                            if (lVar10 == 0) goto LAB_042ed3ec;
                            lVar13 = *(long *)(lVar10 + 0x10);
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar13 == 0) goto LAB_042ed3ec;
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar14 = lVar9;
                              thunk_FUN_03f5d7b8(plVar14,lVar9);
                            }
                            else {
                              FUN_057e0c68(lVar10,lVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar11 = UnityEngine_Transform__GetChild(lVar9,uVar17,0);
                            if (lVar11 == 0) goto LAB_042ed3ec;
                            uVar6 = FUN_04a6a14c(lVar11,DAT_091c5398);
                            lVar9 = UnityEngine_Transform__GetChild(lVar9,uVar3,0);
                            if (lVar9 == 0) goto LAB_042ed3ec;
                            uVar8 = FUN_04a6a14c(lVar9,DAT_091c5508);
                            lVar9 = *param_5;
                            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar5 != 0) {
                              piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar15 + -2) == DAT_0917b5b8) {
                                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                                  goto LAB_042ed378;
                                }
                                uVar5 = uVar5 - 1;
                                piVar15 = piVar15 + 4;
                              } while (uVar5 != 0);
                            }
                            puVar7 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b5b8,0);
LAB_042ed378:
                            (*(code *)*puVar7)(&local_98,param_5,iVar16,puVar7[1]);
                            puStack_c8 = puStack_90;
                            local_d0 = local_98;
                            local_c0 = local_88;
                            CakeOrder_LiveOpsImplement_UIItemLoginDayReward__AddRewardView
                                      (param_4,uVar6,uVar8,&local_d0);
                            iVar16 = iVar16 + 1;
                          } while (iVar16 != iVar2);
                        }
                        CakeOrder_LiveOpsImplement_UIItemLoginDayReward__LayoutRewardGroups
                                  (param_4,lVar12,iVar2);
                        return;
                      }
                    }
                  }
                  goto LAB_042ed3ec;
                }
                if (1 < iVar2) {
                  uVar6 = UnityEngine_Object__GetName(param_4,0);
                  local_98 = CONCAT44(local_98._4_4_,iVar2);
                  uVar8 = FUN_03f5c42c(DAT_09535420,&local_98);
                  uVar6 = System_String__Format(DAT_09213e98,uVar6,uVar8,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__LogWarning(uVar6,param_4,0);
                }
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_042ed3ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

