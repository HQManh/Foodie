// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$LayoutRewardGroups
// address: 0x42edd9c
// body: available
// range: 0x42edd9c-0x42ee16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ee168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__LayoutRewardGroups
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517493 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c53c8);
    FUN_03f5c2a4(&DAT_091af740);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af730);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_0917ca48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517493 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0478(lVar2,param_6,DAT_091af730);
  lVar6 = DAT_091af738;
  if (lVar2 != 0) {
    lVar7 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = (long)param_5;
        thunk_FUN_03f5d7b8(plVar3,param_5);
      }
      else {
        FUN_057e0c68(lVar2,param_5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      FUN_057e0e78(lVar2,*(undefined8 *)(param_4 + 0xc0),DAT_091af740);
      if (param_5 != (long *)0x0) {
        plVar3 = (long *)UnityEngine_Transform__GetParent(param_5,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != DAT_09189c98) {
          plVar3 = (long *)0x0;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(plVar3,0,0);
        if ((uVar4 & 1) == 0) {
          uVar1 = 1;
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_042ee168;
          uVar5 = FUN_04a6a14c(plVar3,DAT_091c53c8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          uVar1 = uVar1 ^ 1;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(plVar3,0,0);
        if (((uVar4 & 1) == 0) || (param_5 = plVar3, plVar3 != (long *)0x0)) {
          UnityEngine_RectTransform__get_rect(param_5,0);
          fVar12 = param_3;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((*(long *)(param_4 + 0x38) != 0) &&
             (lVar6 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_4 + 0x38),0),
             lVar6 != 0)) {
            UnityEngine_RectTransform__get_rect(lVar6,0);
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((*(long *)(param_4 + 0x38) != 0) &&
               (lVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x38),0),
               lVar6 != 0)) {
              fVar9 = (float)UnityEngine_Transform__get_localScale(lVar6,0);
              fVar11 = 1.0;
              if (1.0 <= fVar12 * ABS(fVar9)) {
                fVar11 = fVar12 * ABS(fVar9);
              }
              if ((uVar1 & 1) != 0) {
                param_3 = param_3 - *(float *)(param_4 + 0xa0) * (float)(param_6 + -1);
              }
              fVar12 = 1.0;
              if (param_6 + -1 != 0 && 0 < param_6) {
                fVar10 = (param_3 / (float)param_6) / fVar11;
                fVar9 = 1.0;
                if (fVar10 <= 1.0) {
                  fVar9 = fVar10;
                }
                fVar12 = 0.3;
                if (0.3 <= fVar10) {
                  fVar12 = fVar9;
                }
              }
              if (0 < *(int *)(lVar2 + 0x18)) {
                iVar8 = 0;
                fVar9 = fVar11 * fVar12 + *(float *)(param_4 + 0xa0);
                fVar11 = *(float *)(param_4 + 200);
                do {
                  lVar6 = FUN_057e0998(lVar2,iVar8,DAT_091af778);
                  if (lVar6 == 0) goto LAB_042ee168;
                  UnityEngine_Transform__set_localScale
                            (fVar12 * *(float *)(param_4 + 0xd0),fVar12 * *(float *)(param_4 + 0xd4)
                             ,fVar12 * *(float *)(param_4 + 0xd8),lVar6,0);
                  if ((uVar1 & 1) != 0) {
                    lVar6 = FUN_057e0998(lVar2,iVar8,DAT_091af778);
                    if (lVar6 == 0) goto LAB_042ee168;
                    UnityEngine_RectTransform__set_anchoredPosition
                              (fVar11 + fVar9 * (float)(param_6 + -1) * -0.5 + fVar9 * (float)iVar8,
                               *(undefined4 *)(param_4 + 0xcc),lVar6,0);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(lVar2 + 0x18));
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_042ee168:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

