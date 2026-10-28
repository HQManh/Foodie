// rea decompile_all
// name: CakeOrder.UI.UIBuildingRewardBubble$$Fill
// address: 0x42c45dc
// body: available
// range: 0x42c45dc-0x42c4b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c4b00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4b40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_UI_UIBuildingRewardBubble__Fill(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((DAT_0951733e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b50);
    FUN_03f5c2a4(&DAT_091c55e8);
    FUN_03f5c2a4(&DAT_091c5608);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091d4c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09209f68);
    DAT_0951733e = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar3 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar3 & 1) != 0) {
        lVar13 = *(long *)(param_2 + 0x10);
        if (lVar13 != 0) {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
            iVar10 = 0;
          }
          else {
            iVar10 = 0;
            uVar3 = 0;
            uVar8 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar14 = *(long *)(lVar13 + 0x20 + uVar3 * 8);
              if (((lVar14 != 0) && (0 < *(int *)(lVar14 + 0x18))) &&
                 (uVar8 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar14 + 0x10),0),
                 (uVar8 & 1) == 0)) {
                lVar4 = *(long *)(DAT_091b4b60 + 0x20);
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_03f95a6c();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_03f95a6c();
                }
                if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042c4b00;
                lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                                  (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar14 + 0x10),0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar8 = UnityEngine_Object__op_Equality(lVar4,0,0);
                if ((uVar8 & 1) == 0) {
                  lVar12 = *(long *)(param_1 + 0x50);
                  if (lVar12 == 0) goto LAB_042c4b00;
                  if (*(int *)(lVar12 + 0x18) <= iVar10) {
                    uVar11 = *(undefined8 *)(param_1 + 0x38);
                    uVar7 = *(undefined8 *)(param_1 + 0x40);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar11 = FUN_04c35338(uVar7,uVar11,DAT_091d4c40);
                    lVar5 = DAT_091af738;
                    lVar9 = *(long *)(lVar12 + 0x10);
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_042c4b00;
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                      thunk_FUN_03f5d7b8();
                    }
                    else {
                      FUN_057e0c68(lVar12,uVar11,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                  if (((*(long *)(param_1 + 0x50) == 0) ||
                      (lVar12 = FUN_057e0998(*(long *)(param_1 + 0x50),iVar10,DAT_091af778),
                      lVar12 == 0)) ||
                     (lVar5 = UnityEngine_Component__get_gameObject(lVar12,0), lVar5 == 0))
                  goto LAB_042c4b00;
                  UnityEngine_GameObject__SetActive(lVar5,1,0);
                  lVar5 = FUN_04a6a4f8(lVar12,1,DAT_091c55e8);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188ad0);
                  }
                  uVar8 = UnityEngine_Object__op_Implicit(lVar5,0);
                  if ((uVar8 & 1) != 0) {
                    uVar11 = CakeOrder_UI_UIBuildingRewardBubble__FindIconOverride
                                       (param_1,*(undefined8 *)(lVar14 + 0x10));
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188ad0);
                    }
                    uVar8 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                    uVar7 = uVar11;
                    if ((uVar8 & 1) == 0) {
                      if (lVar4 == 0) goto LAB_042c4b00;
                      uVar7 = *(undefined8 *)(lVar4 + 0x38);
                    }
                    if (lVar5 == 0) goto LAB_042c4b00;
                    UnityEngine_UI_Image__set_sprite(lVar5,uVar7,0);
                    plVar6 = (long *)UnityEngine_Component__GetComponent(lVar5,DAT_09209f68,0);
                    if (plVar6 == (long *)0x0) {
LAB_042c4978:
                      plVar6 = (long *)0x0;
                    }
                    else {
                      if (*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09181b50 + 0x130))
                      goto LAB_042c4978;
                      if (*(long *)(*(long *)(*plVar6 + 200) +
                                    (ulong)*(byte *)(DAT_09181b50 + 0x130) * 8 + -8) != DAT_09181b50
                         ) {
                        plVar6 = (long *)0x0;
                      }
                    }
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar8 = UnityEngine_Object__op_Implicit(plVar6,0);
                    if ((uVar8 & 1) != 0) {
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar2 = UnityEngine_Object__op_Equality(uVar11,0,0);
                      if (plVar6 == (long *)0x0) goto LAB_042c4b00;
                      UnityEngine_Behaviour__set_enabled(plVar6,uVar2 & 1,0);
                    }
                  }
                  plVar6 = (long *)FUN_04a6a4f8(lVar12,1,DAT_091c5608);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188ad0);
                  }
                  iVar10 = iVar10 + 1;
                  uVar8 = UnityEngine_Object__op_Implicit(plVar6,0);
                  if ((uVar8 & 1) != 0) {
                    if ((lVar4 == 0) ||
                       (uVar11 = CakeOrder_DataSO_CakeCurrencySO__GetRewardText
                                           (lVar4,*(undefined4 *)(lVar14 + 0x18),0),
                       plVar6 == (long *)0x0)) goto LAB_042c4b00;
                    (**(code **)(*plVar6 + 0x558))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x560));
                  }
                }
              }
              uVar8 = (ulong)*(uint *)(lVar13 + 0x18);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          lVar13 = *(long *)(param_1 + 0x50);
          iVar1 = iVar10;
          while (lVar13 != 0) {
            if (*(int *)(lVar13 + 0x18) <= iVar1) {
              if (0 < iVar10) {
                uVar11 = *(undefined8 *)(param_1 + 0x30);
                if (*(int *)(DAT_09187680 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar11,0);
              }
              return 0 < iVar10;
            }
            lVar13 = FUN_057e0998(lVar13,iVar1,DAT_091af778);
            if ((lVar13 == 0) ||
               (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) break;
            UnityEngine_GameObject__SetActive(lVar13,0,0);
            iVar1 = iVar1 + 1;
            lVar13 = *(long *)(param_1 + 0x50);
          }
        }
LAB_042c4b00:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return false;
}

