// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewJuiceExtractor$$Play
// address: 0x41577f0
// body: available
// range: 0x41577f0-0x4157b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4157b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewJuiceExtractor__Play(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  if ((DAT_095164da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ce420);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    DAT_095164da = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar4 != 0) {
    UnityEngine_GameObject__SetActive(lVar4,1,0);
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar11,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0x20),0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(long *)(param_2 + 0x20) != 0) {
        lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_2 + 0x20),0);
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar6 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_2 + 0x20),0);
          if (lVar4 == 0) {
            return;
          }
          if (lVar6 == 0) {
            return;
          }
          uVar11 = AnhPD_FoodOrder_GroupViewJuiceExtractor__CookSkin
                             (param_2,*(undefined8 *)(lVar6 + 0x10));
          AnhPD_FoodOrder_GroupViewJuiceExtractor__ApplySkin(param_2,uVar11);
          if (*(long *)(lVar6 + 0x10) != 0) {
            lVar7 = Spine_SkeletonData__FindAnimation
                              (*(long *)(lVar6 + 0x10),*(undefined8 *)(param_2 + 0x38),0);
            if (*(long *)(lVar6 + 0x10) != 0) {
              lVar8 = Spine_SkeletonData__FindAnimation
                                (*(long *)(lVar6 + 0x10),*(undefined8 *)(param_2 + 0x40),0);
              if (*(long *)(lVar6 + 0x10) != 0) {
                lVar9 = Spine_SkeletonData__FindAnimation
                                  (*(long *)(lVar6 + 0x10),*(undefined8 *)(param_2 + 0x48),0);
                if (*(long *)(lVar6 + 0x10) != 0) {
                  lVar6 = Spine_SkeletonData__FindAnimation
                                    (*(long *)(lVar6 + 0x10),*(undefined8 *)(param_2 + 0x50),0);
                  Spine_AnimationState__ClearTracks(lVar4,0);
                  if (lVar7 == 0) {
                    return;
                  }
                  lVar10 = Spine_AnimationState__SetAnimation(lVar4,0,lVar7,0,0);
                  if (lVar10 != 0) {
                    fVar14 = *(float *)(lVar7 + 0x28);
                    *(undefined4 *)(lVar10 + 0xb0) = 0;
                    if (lVar8 != 0) {
                      lVar7 = Spine_AnimationState__SetAnimation(lVar4,1,lVar8,0,0);
                      if (lVar7 == 0) goto LAB_04157b3c;
                      fVar12 = *(float *)(lVar8 + 0x28);
                      *(undefined4 *)(lVar7 + 0xb0) = 0;
                      *(float *)(lVar7 + 0xa0) = fVar12;
                      if (fVar14 <= fVar12) {
                        fVar14 = fVar12;
                      }
                    }
                    fVar12 = fVar14;
                    if (lVar9 != 0) {
                      lVar7 = Spine_AnimationState__AddAnimation(fVar14,lVar4,0,lVar9,0,0);
                      if (lVar7 == 0) goto LAB_04157b3c;
                      *(undefined4 *)(lVar7 + 0xb0) = 0;
                      uVar11 = thunk_FUN_03f9944c(DAT_0918e418);
                      Spine_AnimationState_TrackEntryDelegate___ctor(uVar11,param_2,DAT_091ce420,0);
                      Spine_TrackEntry__add_Start(lVar7,uVar11,0);
                      fVar12 = fVar14 + *(float *)(lVar9 + 0x28);
                      fVar14 = *(float *)(lVar9 + 0x28);
                    }
                    if (lVar6 != 0) {
                      lVar4 = Spine_AnimationState__AddAnimation(fVar14,lVar4,0,lVar6,0,0);
                      if (lVar4 == 0) goto LAB_04157b3c;
                      fVar14 = *(float *)(lVar6 + 0x28);
                      *(undefined4 *)(lVar4 + 0xb0) = 0;
                      fVar12 = fVar12 + fVar14;
                    }
                    bVar1 = false;
                    bVar2 = true;
                    bVar3 = false;
                    if (0.0 < fVar12) {
                      bVar1 = false;
                      bVar2 = false;
                      bVar3 = true;
                      if (!NAN(param_1)) {
                        bVar1 = param_1 < 0.0;
                        bVar2 = param_1 == 0.0;
                        bVar3 = false;
                      }
                    }
                    fVar14 = fVar12 / param_1;
                    if (bVar2 || bVar1 != bVar3) {
                      fVar14 = 1.0;
                    }
                    *(float *)(param_2 + 0x98) = fVar14;
                    AnhPD_FoodOrder_GroupViewJuiceExtractor__StopSfx(param_2);
                    uVar11 = *(undefined8 *)(param_2 + 0x60);
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar5 = UnityEngine_Object__op_Implicit(uVar11,0);
                    if ((uVar5 & 1) != 0) {
                      uVar11 = AnhPD_FoodOrder_GroupViewJuiceExtractor__PlaySfxAfterDelay(param_2);
                      uVar11 = UnityEngine_MonoBehaviour__StartCoroutine(param_2,uVar11,0);
                      *(undefined8 *)(param_2 + 0x78) = uVar11;
                      thunk_FUN_03f5d7b8();
                    }
                    if (*(char *)(param_2 + 0x91) == '\0') {
                      lVar4 = *(long *)(param_2 + 0x20);
                      if (lVar4 != 0) {
                        uVar13 = *(undefined4 *)(param_2 + 0x98);
                        goto LAB_04157b1c;
                      }
                    }
                    else {
                      lVar4 = *(long *)(param_2 + 0x20);
                      *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x98);
                      if (lVar4 != 0) {
                        uVar13 = 0;
LAB_04157b1c:
                        *(undefined4 *)(lVar4 + 0x15c) = uVar13;
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
LAB_04157b3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

