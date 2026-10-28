// rea decompile_all
// name: CakeOrder.Shop.UIGoldPackSpineByShopId$$Apply
// address: 0x4369bdc
// body: available
// range: 0x4369bdc-0x436a183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436a170 to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436a174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436a178 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436a180 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIGoldPackSpineByShopId__Apply
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_0951788d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0920d700);
    FUN_03f5c2a4(&DAT_0920d710);
    DAT_0951788d = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_4 + 0x38) != 0) {
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_4 + 0x30) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x38) != 0) {
      *(undefined8 *)(param_4 + 0x40) = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88);
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x40));
      lVar8 = *(long *)(param_4 + 0x30);
      if (lVar8 != 0) {
        iVar5 = (int)*(ulong *)(lVar8 + 0x18);
        bVar12 = 0 < iVar5;
        if (0 < iVar5) {
          uVar2 = 0;
          uVar6 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar10 = *(long *)(lVar8 + 0x20 + uVar2 * 8);
            if (lVar10 != 0) {
              if (*(long *)(param_4 + 0x38) == 0) goto LAB_0436a174;
              uVar6 = System_String__op_Inequality
                                (*(undefined8 *)(lVar10 + 0x10),
                                 *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88),0);
              if ((uVar6 & 1) == 0) {
                uVar7 = *(undefined8 *)(param_4 + 0x20);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                goto LAB_04369d58;
              }
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar6 = (ulong)uVar1;
            uVar2 = uVar2 + 1;
            bVar12 = (long)uVar2 < (long)(int)uVar1;
          } while ((long)uVar2 < (long)(int)uVar1);
        }
        lVar10 = 0;
        uVar1 = 0;
LAB_04369d58:
        uVar7 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_4 + 0x28) == 0) goto LAB_0436a174;
          UnityEngine_GameObject__SetActive(*(long *)(param_4 + 0x28),(uVar1 ^ 0xffffffff) & 1,0);
        }
        uVar7 = *(undefined8 *)(param_4 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_4 + 0x20) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x20),0), lVar8 == 0
             )) goto LAB_0436a174;
          UnityEngine_GameObject__SetActive(lVar8,uVar1 & 1,0);
        }
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (*(long *)(param_4 + 0x20) != 0) {
          uVar2 = Spine_Unity_SkeletonGraphic__get_IsValid(*(long *)(param_4 + 0x20),0);
          if ((uVar2 & 1) == 0) {
            if (*(long *)(param_4 + 0x20) == 0) goto LAB_0436a174;
            Spine_Unity_SkeletonGraphic__Initialize(*(long *)(param_4 + 0x20),0,0);
          }
          if (*(long *)(param_4 + 0x20) != 0) {
            lVar8 = Spine_Unity_SkeletonGraphic__get_SkeletonData(*(long *)(param_4 + 0x20),0);
            if (lVar8 == 0) {
              return;
            }
            if (bVar12) {
              uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar10 + 0x18),0);
              if ((uVar2 & 1) == 0) {
                lVar3 = Spine_SkeletonData__FindSkin(lVar8,*(undefined8 *)(lVar10 + 0x18),0);
                if (lVar3 == 0) {
                  lVar3 = FUN_03f5c394(DAT_09180318,3);
                  if (lVar3 == 0) goto LAB_0436a174;
                  uVar7 = *(undefined8 *)(lVar10 + 0x18);
                  FUN_039b0da0(lVar3,uVar7);
                  FUN_039af17c(lVar3,0,uVar7);
                  if (*(long *)(param_4 + 0x20) == 0) goto LAB_0436a174;
                  uVar7 = UnityEngine_Object__GetName(*(long *)(param_4 + 0x20),0);
                  FUN_039b0da0(lVar3,uVar7);
                  FUN_039af17c(lVar3,1,uVar7);
                  if (*(long *)(param_4 + 0x38) == 0) goto LAB_0436a174;
                  uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88);
                  FUN_039b0da0(lVar3,uVar7);
                  FUN_039af17c(lVar3,2,uVar7);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  UnityEngine_Debug__LogWarningFormat(param_4,DAT_0920d710,lVar3,0);
                }
                else {
                  if ((*(long *)(param_4 + 0x20) == 0) ||
                     (lVar3 = Spine_Unity_SkeletonGraphic__get_Skeleton(*(long *)(param_4 + 0x20),0)
                     , lVar3 == 0)) goto LAB_0436a174;
                  Spine_Skeleton__SetSkin(lVar3,*(undefined8 *)(lVar10 + 0x18),0);
                  if ((*(long *)(param_4 + 0x20) == 0) ||
                     (lVar3 = Spine_Unity_SkeletonGraphic__get_Skeleton(*(long *)(param_4 + 0x20),0)
                     , lVar3 == 0)) goto LAB_0436a174;
                  Spine_Skeleton__SetSlotsToSetupPose(lVar3,0);
                }
              }
              uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar10 + 0x20),0);
              if ((uVar2 & 1) == 0) {
                lVar8 = Spine_SkeletonData__FindAnimation(lVar8,*(undefined8 *)(lVar10 + 0x20),0);
                if (lVar8 == 0) {
                  lVar8 = FUN_03f5c394(DAT_09180318,3);
                  if (lVar8 == 0) goto LAB_0436a174;
                  uVar7 = *(undefined8 *)(lVar10 + 0x20);
                  FUN_039b0da0(lVar8,uVar7);
                  FUN_039af17c(lVar8,0,uVar7);
                  if (*(long *)(param_4 + 0x20) == 0) goto LAB_0436a174;
                  uVar7 = UnityEngine_Object__GetName(*(long *)(param_4 + 0x20),0);
                  FUN_039b0da0(lVar8,uVar7);
                  FUN_039af17c(lVar8,1,uVar7);
                  if (*(long *)(param_4 + 0x38) == 0) goto LAB_0436a174;
                  uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88);
                  FUN_039b0da0(lVar8,uVar7);
                  FUN_039af17c(lVar8,2,uVar7);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  UnityEngine_Debug__LogWarningFormat(param_4,DAT_0920d700,lVar8,0);
                }
                else {
                  if ((*(long *)(param_4 + 0x20) == 0) ||
                     (lVar8 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                        (*(long *)(param_4 + 0x20),0), lVar8 == 0))
                  goto LAB_0436a174;
                  Spine_AnimationState__SetAnimation(lVar8,0,*(undefined8 *)(lVar10 + 0x20),1,0);
                }
              }
              CakeOrder_Shop_UIGoldPackSpineByShopId__CacheBasePosition(param_4);
              if (*(long *)(param_4 + 0x20) != 0) {
                lVar8 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0);
                fVar13 = (float)FUN_0436ebb8(0);
                if (lVar8 != 0) {
                  fVar14 = 0.01;
                  if (0.01 <= *(float *)(lVar10 + 0x28)) {
                    fVar14 = *(float *)(lVar10 + 0x28);
                  }
                  param_2 = param_2 * fVar14;
                  UnityEngine_Transform__set_localScale
                            (fVar13 * fVar14,param_2,param_3 * fVar14,lVar8,0);
                  if (*(long *)(param_4 + 0x20) != 0) {
                    plVar4 = (long *)UnityEngine_Component__get_transform
                                               (*(long *)(param_4 + 0x20),0);
                    pfVar11 = (float *)(lVar10 + 0x30);
                    fVar14 = *pfVar11;
                    pfVar9 = (float *)(lVar10 + 0x2c);
                    fVar15 = *pfVar9;
                    fVar13 = (float)FUN_0436ebfc(0);
                    if (9.9999994e-11 <=
                        (fVar15 - fVar13) * (fVar15 - fVar13) +
                        (fVar14 - param_2) * (fVar14 - param_2)) {
                      if (plVar4 != (long *)0x0) {
                        if (*plVar4 != DAT_09189c98) goto LAB_0436a17c;
                        goto LAB_0436a14c;
                      }
                    }
                    else if (plVar4 != (long *)0x0) {
                      if (*plVar4 != DAT_09189c98) {
LAB_0436a17c:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c8d0(plVar4);
                      }
                      pfVar9 = (float *)(param_4 + 0x48);
                      pfVar11 = (float *)(param_4 + 0x4c);
LAB_0436a14c:
                      UnityEngine_RectTransform__set_anchoredPosition(*pfVar9,*pfVar11,plVar4,0);
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
LAB_0436a174:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

