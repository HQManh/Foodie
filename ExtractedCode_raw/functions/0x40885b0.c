// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$BuildNewToolDict
// address: 0x40885b0
// body: available
// range: 0x40885b0-0x4088c13 inclusive
// range: 0x4088c18-0x4088c1b inclusive
// range: 0x4088c20-0x4088c23 inclusive
// range: 0x4088c28-0x4088c2b inclusive
// range: 0x4088c6c-0x4088d07 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4088c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4088c18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4088c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4088c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4088cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4088d04 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04088b14) */

void TrungKien_UI_NewFearther_UIPopupNewFeather__BuildNewToolDict(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  long local_98;
  long *plStack_90;
  long local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_09515cb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f208);
    FUN_03f5c2a4(&DAT_0919f1f0);
    FUN_03f5c2a4(&DAT_0919f218);
    FUN_03f5c2a4(&DAT_091a24c8);
    FUN_03f5c2a4(&DAT_091a24d0);
    FUN_03f5c2a4(&DAT_091a24d8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ab810);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_091b4c50);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515cb8 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  uVar7 = FUN_05a8f088(DAT_091b4b68);
  if (((uVar7 & 1) != 0) && (uVar7 = FUN_05a8f088(DAT_091b4c50), (uVar7 & 1) != 0)) {
    uVar16 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar16,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(DAT_091b4c48 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar18 = **(long **)(lVar8 + 0xb8);
      lVar8 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918c470);
      }
      TrungKien_UI_NewFearther_UIPopupNewFeather__BuildNewObstacleDict(lVar8);
      if (lVar8 == 0) {
LAB_04088cfc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar8,0);
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          lVar9 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar8,iVar4,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Equality(lVar9,0,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((lVar9 == 0) ||
               (lVar10 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 0x18), lVar10 == 0))
            goto LAB_04088cfc;
            uVar7 = FUN_053ebc3c(lVar10,*(undefined8 *)(lVar9 + 0x18),DAT_091a86c8);
            if ((uVar7 & 1) == 0) {
              if (lVar18 == 0) goto LAB_04088cfc;
              if ((*(long *)(lVar18 + 0x30) != 0) &&
                 (uVar7 = System_String__op_Inequality
                                    (*(undefined8 *)(*(long *)(lVar18 + 0x30) + 0x10),
                                     *(undefined8 *)(lVar9 + 0x18),0), (uVar7 & 1) == 0)) {
                lVar10 = thunk_FUN_03f9944c(DAT_09179ee0);
                FUN_053eb530(lVar10,DAT_091a8698);
                lVar11 = thunk_FUN_03f9944c(DAT_0917c520);
                FUN_05796918(lVar11,DAT_091adc70);
                if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar17 = *(int *)(lVar9 + 0x4c);
                iVar1 = *(int *)(lVar9 + 0x50);
                iVar6 = iVar1;
                if (iVar17 <= iVar1) {
                  iVar6 = iVar17;
                }
                if (iVar1 < 1) {
                  iVar6 = iVar17;
                }
                if (0 < iVar6) {
                  iVar17 = 0;
                  do {
                    uVar16 = *(undefined8 *)(lVar9 + 0x18);
                    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar16 = TrungKien_UI_NewFearther_UIPopupNewFeather__NewToolKey(uVar16,iVar17);
                    lVar13 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 8);
                    if (lVar13 == 0) goto LAB_04088cfc;
                    uVar5 = FUN_06fd8648(lVar13,uVar16,DAT_0919f208);
                    lVar13 = TrungKien_UI_NewFearther_NewToolLevelPreview__BuildLevelInitData
                                       (lVar18,*(undefined8 *)(lVar9 + 0x18),iVar17);
                    if (lVar13 != 0) {
                      lVar13 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetCookingToolsOfLevel
                                         (**(undefined8 **)(DAT_091881a0 + 0xb8),lVar13);
                      if (lVar13 == 0) goto LAB_04088cfc;
                      FUN_057e185c(&local_98,lVar13,DAT_091ab810);
                      lVar13 = 0;
                      local_70 = local_88;
                      plStack_78 = plStack_90;
                      local_80 = local_98;
                      local_98 = 0;
                      plStack_90 = &local_80;
                      while (uVar7 = FUN_071bd28c(&local_80,DAT_091a24d0), lVar3 = local_70,
                            lVar15 = local_98, (uVar7 & 1) != 0) {
                        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar7 = FUN_053ec72c(lVar10,*(undefined8 *)(local_70 + 0x18),DAT_091a86b8);
                        if ((uVar7 & 1) != 0) {
                          if (lVar13 == 0) {
                            lVar13 = thunk_FUN_03f9944c(DAT_0917cce8);
                            FUN_057e0400(lVar13,DAT_091b0558);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                          }
                          lVar15 = DAT_091b0570;
                          lVar14 = *(long *)(lVar13 + 0x10);
                          uVar12 = *(undefined8 *)(lVar3 + 0x18);
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          uVar2 = *(uint *)(lVar13 + 0x18);
                          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                            thunk_FUN_03f5d7b8();
                          }
                          else {
                            FUN_057e0c68(lVar13,uVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      FUN_071bd288(plStack_90,DAT_091a24c8);
                      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c548(lVar15);
                      }
                      if (lVar13 != 0) {
                        if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        if (**(long **)(DAT_0918c470 + 0xb8) == 0) goto LAB_04088cfc;
                        FUN_06fd8440(**(long **)(DAT_0918c470 + 0xb8),uVar16,lVar13,DAT_0919f218);
                      }
                    }
                    if ((uVar5 & 1) == 0) {
                      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      if (**(long **)(DAT_0918c470 + 0xb8) == 0) goto LAB_04088cfc;
                      uVar7 = FUN_06fd8648(**(long **)(DAT_0918c470 + 0xb8),uVar16,DAT_0919f208);
                      if ((uVar7 & 1) != 0) goto LAB_04088b9c;
                    }
                    else {
LAB_04088b9c:
                      lVar13 = DAT_091adc88;
                      if (lVar11 == 0) goto LAB_04088cfc;
                      lVar15 = *(long *)(lVar11 + 0x10);
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_04088cfc;
                      uVar5 = *(uint *)(lVar11 + 0x18);
                      if (uVar5 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar5 + 1;
                        *(int *)(lVar15 + (long)(int)uVar5 * 4 + 0x20) = iVar17;
                      }
                      else {
                        FUN_057971a8(lVar11,iVar17,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 != iVar6);
                }
                if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar10 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 0x20);
                if (lVar10 == 0) goto LAB_04088cfc;
                FUN_06fd8440(lVar10,*(undefined8 *)(lVar9 + 0x18),lVar11,DAT_0919f1f0);
                lVar10 = *(long *)(*(long *)(DAT_0918c470 + 0xb8) + 0x18);
                if (lVar10 == 0) goto LAB_04088cfc;
                FUN_053ec72c(lVar10,*(undefined8 *)(lVar9 + 0x18),DAT_091a86b8);
              }
            }
          }
          iVar4 = iVar4 + 1;
          iVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar8,0);
        } while (iVar4 < iVar6);
      }
    }
  }
  return;
}

