// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSpineToolView$$Play
// address: 0x4082580
// body: available
// range: 0x4082580-0x40827d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40827c0 to 0x407c4ac CakeOrder.InGame.Pasta.PastaSpineSfxPlayer$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40827d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaSpineToolView__Play(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09515c72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c72 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Stop();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        lVar2 = CakeOrder_InGame_Pasta_PastaSpineToolView__AnimationOf
                          (param_1,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18));
        lVar3 = CakeOrder_InGame_Pasta_PastaSpineToolView__StateOf(param_1);
        if (lVar2 == 0) {
          return;
        }
        if (lVar3 == 0) {
          return;
        }
        CakeOrder_InGame_Pasta_PastaSpineToolView__SetProcessObjectsActive(param_1,1);
        lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
        if (lVar4 != 0) {
          UnityEngine_GameObject__SetActive(lVar4,1,0);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x20),0), lVar4 != 0
             )) {
            UnityEngine_GameObject__SetActive(lVar4,1,0);
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
            if ((uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_040827d4;
              UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
            }
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
            if ((uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_040827d4;
              UnityEngine_ParticleSystem__Play(*(long *)(param_1 + 0x48),0);
            }
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar4 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x20),0),
               lVar4 != 0)) {
              Spine_Skeleton__SetToSetupPose(lVar4,0);
              lVar3 = Spine_AnimationState__SetAnimation(lVar3,0,lVar2,0,0);
              if ((*(long *)(param_1 + 0x58) != 0) && (lVar3 != 0)) {
                fVar8 = *(float *)(*(long *)(param_1 + 0x58) + 0x20);
                lVar4 = *(long *)(param_1 + 0x20);
                fVar10 = *(float *)(lVar2 + 0x28);
                if (fVar8 <= *(float *)(lVar2 + 0x28)) {
                  fVar10 = fVar8;
                }
                fVar9 = 0.0;
                if (0.0 <= fVar8) {
                  fVar9 = fVar10;
                }
                *(float *)(lVar3 + 0x94) = fVar9;
                if (lVar4 != 0) {
                  uVar7 = 0x3f800000;
                  if (*(char *)(param_1 + 0x60) != '\0') {
                    uVar7 = 0;
                  }
                  *(undefined4 *)(lVar4 + 0x15c) = uVar7;
                  Spine_Unity_SkeletonAnimation__Update(0,lVar4,0);
                  if ((*(long *)(param_1 + 0x20) != 0) &&
                     (lVar2 = Spine_Unity_SkeletonRenderer__get_Skeleton
                                        (*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
                    Spine_Skeleton__UpdateWorldTransform(lVar2,1,0);
                    plVar5 = *(long **)(param_1 + 0x20);
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
                      lVar2 = CakeOrder_InGame_Pasta_PastaSpineToolView__get_SfxPlayer(param_1);
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 != 0) && (lVar2 != 0)) {
                        CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Play
                                  (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x30),
                                   0x3f800000,lVar2,*(undefined8 *)(lVar3 + 0x28));
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
LAB_040827d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

